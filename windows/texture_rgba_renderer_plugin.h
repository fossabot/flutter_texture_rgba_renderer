#ifndef FLUTTER_PLUGIN_TEXTURE_RGBA_RENDERER_PLUGIN_H_
#define FLUTTER_PLUGIN_TEXTURE_RGBA_RENDERER_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace texture_rgba_renderer {

class TextureRgbaRendererPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  TextureRgbaRendererPlugin();

  virtual ~TextureRgbaRendererPlugin();

  // Disallow copy and assign.
  TextureRgbaRendererPlugin(const TextureRgbaRendererPlugin&) = delete;
  TextureRgbaRendererPlugin& operator=(const TextureRgbaRendererPlugin&) = delete;

 private:
  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace texture_rgba_renderer

#endif  // FLUTTER_PLUGIN_TEXTURE_RGBA_RENDERER_PLUGIN_H_
