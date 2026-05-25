#include "include/flutter_midi_command_linux/flutter_midi_command_linux_plugin.h"

#include <flutter_linux/flutter_linux.h>

struct _FlutterMidiCommandLinuxPlugin {
  GObject parent_instance;
};

G_DEFINE_TYPE(FlutterMidiCommandLinuxPlugin,
              flutter_midi_command_linux_plugin,
              g_object_get_type())

static void flutter_midi_command_linux_plugin_class_init(
    FlutterMidiCommandLinuxPluginClass* klass) {}

static void flutter_midi_command_linux_plugin_init(
    FlutterMidiCommandLinuxPlugin* self) {}

void flutter_midi_command_linux_plugin_register_with_registrar(
    FlPluginRegistrar* registrar) {
  // All MIDI logic is handled by the Dart implementation (FlutterMidiCommandLinux).
}
