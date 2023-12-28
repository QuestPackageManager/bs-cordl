#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTexture)
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct VRTextureUsage;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
// Forward declare root types
namespace UnityEngine {
class RenderTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RenderTexture);
// Type: UnityEngine::RenderTexture
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10071))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10078))
// CS Name: ::UnityEngine::RenderTexture*
class CORDL_TYPE RenderTexture : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_width, put = set_width)) int32_t width;

  __declspec(property(get = get_height, put = set_height)) int32_t height;

  __declspec(property(put = set_dimension))::UnityEngine::Rendering::TextureDimension dimension;

  __declspec(property(get = get_graphicsFormat, put = set_graphicsFormat))::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;

  __declspec(property(put = set_useMipMap)) bool useMipMap;

  __declspec(property(get = get_sRGB)) bool sRGB;

  __declspec(property(get = get_vrUsage))::UnityEngine::VRTextureUsage vrUsage;

  __declspec(property(get = get_format))::UnityEngine::RenderTextureFormat format;

  __declspec(property(put = set_depthStencilFormat))::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat;

  __declspec(property(get = get_antiAliasing, put = set_antiAliasing)) int32_t antiAliasing;

  __declspec(property(get = get_colorBuffer))::UnityEngine::RenderBuffer colorBuffer;

  __declspec(property(get = get_depthBuffer))::UnityEngine::RenderBuffer depthBuffer;

  __declspec(property(get = get_descriptor))::UnityEngine::RenderTextureDescriptor descriptor;

  /// @brief Method get_width addr 0x2cb2aa0 size 0x3c virtual true final false
  inline int32_t get_width();

  /// @brief Method set_width addr 0x2cb2adc size 0x44 virtual true final false
  inline void set_width(int32_t value);

  /// @brief Method get_height addr 0x2cb2b20 size 0x3c virtual true final false
  inline int32_t get_height();

  /// @brief Method set_height addr 0x2cb2b5c size 0x44 virtual true final false
  inline void set_height(int32_t value);

  /// @brief Method set_dimension addr 0x2cb2ba0 size 0x44 virtual true final false
  inline void set_dimension(::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method get_graphicsFormat addr 0x2cb2be4 size 0x3c virtual false final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();

  /// @brief Method set_graphicsFormat addr 0x2cb2c20 size 0x44 virtual false final false
  inline void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_useMipMap addr 0x2cb2c64 size 0x44 virtual false final false
  inline void set_useMipMap(bool value);

  /// @brief Method get_sRGB addr 0x2cb2ca8 size 0x3c virtual false final false
  inline bool get_sRGB();

  /// @brief Method get_vrUsage addr 0x2cb2ce4 size 0x3c virtual false final false
  inline ::UnityEngine::VRTextureUsage get_vrUsage();

  /// @brief Method get_format addr 0x2cb2d20 size 0x114 virtual false final false
  inline ::UnityEngine::RenderTextureFormat get_format();

  /// @brief Method set_depthStencilFormat addr 0x2cb2eac size 0x44 virtual false final false
  inline void set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method get_antiAliasing addr 0x2cb2ef0 size 0x3c virtual false final false
  inline int32_t get_antiAliasing();

  /// @brief Method set_antiAliasing addr 0x2cb2f2c size 0x44 virtual false final false
  inline void set_antiAliasing(int32_t value);

  /// @brief Method GetActive addr 0x2cb2f70 size 0x28 virtual false final false
  static inline ::UnityEngine::RenderTexture* GetActive();

  /// @brief Method SetActive addr 0x2cb2f98 size 0x3c virtual false final false
  static inline void SetActive(::UnityEngine::RenderTexture* rt);

  /// @brief Method get_active addr 0x2cb2fd4 size 0x28 virtual false final false
  static inline ::UnityEngine::RenderTexture* get_active();

  /// @brief Method set_active addr 0x2cb2ffc size 0x3c virtual false final false
  static inline void set_active(::UnityEngine::RenderTexture* value);

  /// @brief Method GetColorBuffer addr 0x2cb3038 size 0x54 virtual false final false
  inline ::UnityEngine::RenderBuffer GetColorBuffer();

  /// @brief Method GetDepthBuffer addr 0x2cb30d0 size 0x54 virtual false final false
  inline ::UnityEngine::RenderBuffer GetDepthBuffer();

  /// @brief Method SetMipMapCount addr 0x2cb3168 size 0x44 virtual false final false
  inline void SetMipMapCount(int32_t count);

  /// @brief Method get_colorBuffer addr 0x2cb31ac size 0x4 virtual false final false
  inline ::UnityEngine::RenderBuffer get_colorBuffer();

  /// @brief Method get_depthBuffer addr 0x2cb31b0 size 0x4 virtual false final false
  inline ::UnityEngine::RenderBuffer get_depthBuffer();

  /// @brief Method DiscardContents addr 0x2cb31b4 size 0x54 virtual false final false
  inline void DiscardContents(bool discardColor, bool discardDepth);

  /// @brief Method DiscardContents addr 0x2cb3208 size 0x44 virtual false final false
  inline void DiscardContents();

  /// @brief Method Create addr 0x2cb324c size 0x3c virtual false final false
  inline bool Create();

  /// @brief Method Release addr 0x2cb3288 size 0x3c virtual false final false
  inline void Release();

  /// @brief Method IsCreated addr 0x2cb32c4 size 0x3c virtual false final false
  inline bool IsCreated();

  /// @brief Method SetSRGBReadWrite addr 0x2cb3300 size 0x44 virtual false final false
  inline void SetSRGBReadWrite(bool srgb);

  /// @brief Method Internal_Create addr 0x2cb3344 size 0x3c virtual false final false
  static inline void Internal_Create(::UnityEngine::RenderTexture* rt);

  /// @brief Method SetRenderTextureDescriptor addr 0x2cb3380 size 0x44 virtual false final false
  inline void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method GetDescriptor addr 0x2cb2e34 size 0x78 virtual false final false
  inline ::UnityEngine::RenderTextureDescriptor GetDescriptor();

  /// @brief Method GetTemporary_Internal addr 0x2cb344c size 0x3c virtual false final false
  static inline ::UnityEngine::RenderTexture* GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method ReleaseTemporary addr 0x2cb34c4 size 0x3c virtual false final false
  static inline void ReleaseTemporary(::UnityEngine::RenderTexture* temp);

  static inline ::UnityEngine::RenderTexture* New_ctor();

  /// @brief Method .ctor addr 0x2cb3500 size 0x54 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method .ctor addr 0x2cb3554 size 0xf8 virtual false final false
  inline void _ctor(::UnityEngine::RenderTextureDescriptor desc);

  static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTexture* textureToCopy);

  /// @brief Method .ctor addr 0x2cb3a9c size 0x16c virtual false final false
  inline void _ctor(::UnityEngine::RenderTexture* textureToCopy);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method .ctor addr 0x2cb3c98 size 0x4c virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method .ctor addr 0x2cb3ce4 size 0x90 virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount);

  /// @brief Method .ctor addr 0x2cb3d74 size 0x200 virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                                       ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t mipCount);

  /// @brief Method .ctor addr 0x2cb3ff8 size 0x204 virtual false final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                    int32_t mipCount);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                                       ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  /// @brief Method .ctor addr 0x2cb41fc size 0x90 virtual false final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method .ctor addr 0x2cb428c size 0xa8 virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format);

  /// @brief Method .ctor addr 0x2cb4510 size 0x90 virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth);

  /// @brief Method .ctor addr 0x2cb4640 size 0x8 virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, int32_t mipCount);

  /// @brief Method .ctor addr 0x2cb45a0 size 0xa0 virtual false final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, int32_t mipCount);

  /// @brief Method Initialize addr 0x2cb4334 size 0x1dc virtual false final false
  inline void Initialize(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, int32_t mipCount);

  /// @brief Method GetDepthStencilFormatLegacy addr 0x2cb3f74 size 0x84 virtual false final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat);

  /// @brief Method get_descriptor addr 0x2cb3c08 size 0x90 virtual false final false
  inline ::UnityEngine::RenderTextureDescriptor get_descriptor();

  /// @brief Method ValidateRenderTextureDesc addr 0x2cb364c size 0x450 virtual false final false
  static inline void ValidateRenderTextureDesc(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method GetCompatibleFormat addr 0x2cb4648 size 0x160 virtual false final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::RenderTextureFormat renderTextureFormat, ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method GetTemporary addr 0x2cb47b0 size 0x80 virtual false final false
  static inline ::UnityEngine::RenderTexture* GetTemporary(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method GetTemporaryImpl addr 0x2cb484c size 0xb8 virtual false final false
  static inline ::UnityEngine::RenderTexture* GetTemporaryImpl(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                                               int32_t antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage,
                                                               bool useDynamicScale);

  /// @brief Method GetTemporary addr 0x2cb49dc size 0x64 virtual false final false
  static inline ::UnityEngine::RenderTexture* GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                           ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing);

  /// @brief Method GetTemporary addr 0x2cb4a40 size 0x58 virtual false final false
  static inline ::UnityEngine::RenderTexture* GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                           ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method GetTemporary addr 0x2cb4a98 size 0x58 virtual false final false
  static inline ::UnityEngine::RenderTexture* GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format);

  /// @brief Method GetTemporary addr 0x2cb4af0 size 0x54 virtual false final false
  static inline ::UnityEngine::RenderTexture* GetTemporary(int32_t width, int32_t height);

  /// @brief Method GetColorBuffer_Injected addr 0x2cb308c size 0x44 virtual false final false
  inline void GetColorBuffer_Injected(ByRef<::UnityEngine::RenderBuffer> ret);

  /// @brief Method GetDepthBuffer_Injected addr 0x2cb3124 size 0x44 virtual false final false
  inline void GetDepthBuffer_Injected(ByRef<::UnityEngine::RenderBuffer> ret);

  /// @brief Method SetRenderTextureDescriptor_Injected addr 0x2cb33c4 size 0x44 virtual false final false
  inline void SetRenderTextureDescriptor_Injected(ByRef<::UnityEngine::RenderTextureDescriptor> desc);

  /// @brief Method GetDescriptor_Injected addr 0x2cb3408 size 0x44 virtual false final false
  inline void GetDescriptor_Injected(ByRef<::UnityEngine::RenderTextureDescriptor> ret);

  /// @brief Method GetTemporary_Internal_Injected addr 0x2cb3488 size 0x3c virtual false final false
  static inline ::UnityEngine::RenderTexture* GetTemporary_Internal_Injected(ByRef<::UnityEngine::RenderTextureDescriptor> desc);

  // Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTexture(RenderTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTexture(RenderTexture const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTexture();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderTexture, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RenderTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTexture*, "UnityEngine", "RenderTexture");
