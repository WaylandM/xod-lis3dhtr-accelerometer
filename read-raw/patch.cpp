
struct State {
};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    // The node responds only if there is an input pulse
    if (!isInputDirty<input_UPD>(ctx))
        return;

    // Get a pointer to the `Adafruit_LIS3DH` class instance
    auto sensor = getValue<input_DEV>(ctx);
    sensor->read();
    emitValue<output_X>(ctx, sensor->x);
    emitValue<output_Y>(ctx, sensor->y);
    emitValue<output_Z>(ctx, sensor->z);
    emitValue<output_DONE>(ctx, 1);
}
