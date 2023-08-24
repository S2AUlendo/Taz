#include "../gcode.h"
#include "../../module/ft_motion.h"

#ifdef FXDTICTRL

    void GcodeSuite::M952() {

        if ( fxdTiCtrl.cfg_generateTrajMode ) {
            SERIAL_ECHOLN("M952 echo: rejected! wait for the previous command to complete.");
            return;
        }

        if (parser.seen('L')) {
            if (parser.seen('X')) { SERIAL_ECHO("M952 echo: len="); SERIAL_ECHOLN(X_MAX_LENGTH); } // TODO: Test if float.
            if (parser.seen('Y')) { SERIAL_ECHO("M952 echo: len="); SERIAL_ECHOLN(Y_MAX_LENGTH); }
            return;
        }

        uint8_t mode_val_seen = 0U;
        bool axis_x_seen = false;
        bool axis_y_seen = false;
        bool good_S_val_seen = false;
        bool good_E_val_seen = false;
        bool good_D_val_seen = false;
        bool good_A_val_seen = false;
        bool good_R_val_seen = false;

        // Parse mode parameter.
        if (parser.seenval('F')) {
            const uint8_t val = parser.value_byte();
            switch (val) {
                case 0U:
                    mode_val_seen = 0U;
                    break;
                case 1U:
                    mode_val_seen = 1U;
                    break;
                case 2U:
                    mode_val_seen = 2U;
                    break;
                default:
                    mode_val_seen = 0U;
            }
        }

        // Parse start frequency parameter.
        if (parser.seenval('S')) {
            const float val = parser.value_float();
            if (val >= 0.0f){
                fxdTiCtrl.cfg_generateTrajStartFreq = val;
                good_S_val_seen = true;
            } else { SERIAL_ECHOLN("M952 echo: Start frequency out of range."); }
        }

        // Parse end frequency parameter.
        if (parser.seenval('E')) {
            const float val = parser.value_float();
            if (val > 0.0f){
                fxdTiCtrl.cfg_generateTrajEndFreq = val;
                good_E_val_seen = true;
            } else { SERIAL_ECHOLN("M952 echo: End frequency out of range."); }
        }

        // Parse step frequency parameter.
        // For continuous sweep: [Hz/sec] increasing rate.
        // For sweep: Change in [Hz] between successive drives.
        if (parser.seenval('D')) {
            const float val = parser.value_float();
            if (val > 0.0f){
                fxdTiCtrl.cfg_generateTrajStepFreq = val;
                good_D_val_seen = true;
            } else { SERIAL_ECHOLN("M952 echo: Step / delta frequency out of range."); }
        }

        // Parse amplitude parameter.
        if (parser.seenval('A')) {
            const float val = parser.value_float();
            if (val > 0.0f){
                fxdTiCtrl.cfg_generateTrajAmplitude = val;
                good_A_val_seen = true;
            } else { SERIAL_ECHOLN("M952 echo: Amplitude out of range."); }
        }

        // Parse repetitions parameter.
        if (parser.seenval('R')) {
            const uint8_t val = parser.value_byte();
            if (val > 0U){
                fxdTiCtrl.cfg_generateTrajRepetitions = val;
                good_R_val_seen = true;
            } else { SERIAL_ECHOLN("M952 echo: Repetitions out of range."); }
        }

        // Parse axis parameters.
        if (parser.seen('X')) { axis_x_seen = true; }
        if (parser.seen('Y')) { axis_y_seen = true; }

        // Validate and set.
        if ( mode_val_seen == 0U ){
            SERIAL_ECHOLN("M952 echo: Disabled.");
        }
        bool one_axis_seen = axis_x_seen xor axis_y_seen; //(axis_x_seen || axis_y_seen) && !(axis_x_seen && axis_y_seen); // xor
        if ( (mode_val_seen == 1U) && one_axis_seen && good_E_val_seen && good_D_val_seen && good_A_val_seen ){
            if (axis_x_seen) { fxdTiCtrl.cfg_generateTrajMode = generateTrajMode_t_CONTNSSWEEP_X; }
            if (axis_y_seen) { fxdTiCtrl.cfg_generateTrajMode = generateTrajMode_t_CONTNSSWEEP_Y; }
            SERIAL_ECHOLN("M952 echo: Continuous sweep starting.");
        }
        if ( (mode_val_seen == 2U) && one_axis_seen && good_S_val_seen && good_E_val_seen && good_D_val_seen && good_A_val_seen && good_R_val_seen ){
            if (axis_x_seen) { fxdTiCtrl.cfg_generateTrajMode = generateTrajMode_t_SWEEP_X; }
            if (axis_y_seen) { fxdTiCtrl.cfg_generateTrajMode = generateTrajMode_t_SWEEP_Y; }
            SERIAL_ECHOLN("M952 echo: Sweep starting.");
        }
        return;
    }

#endif