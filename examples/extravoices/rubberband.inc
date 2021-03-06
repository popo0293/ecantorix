# for rubberband-only pitch processing, also add this:
# $ESPEAK_PITCH_MIN = $ESPEAK_PITCH_START;
# $ESPEAK_PITCH_MAX = $ESPEAK_PITCH_START;
$SOX_PROCESS_TEMPO_PITCHBEND_S16LE_TO_OUT = 'sox -t raw -r "$RATE" -e signed -b 16 -c 1 - -t wav "$TEMP"/rubberband-raw.wav && rubberband 2>/dev/null -q -F -T"$TEMPO" -f"$PITCH" "$TEMP"/rubberband-raw.wav "$TEMP"/rubberband-out.wav && sox "$TEMP"/rubberband-out.wav "$OUT" $PITCHBEND $AFTEREFFECTS';
$SOX_PROCESS_TEMPO_PITCHBEND_S16LE_TO_OUT_USES_PITCH = 1;
