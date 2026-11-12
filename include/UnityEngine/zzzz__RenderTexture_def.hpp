#pragma once
// IWYU pragma private; include "UnityEngine/RenderTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTexture)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct ShadowSamplingMode;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
struct VRTextureUsage;
}
// Forward declare root types
namespace UnityEngine {
class RenderTexture;
}
// Write type traits
MARK_REF_T(::UnityEngine::RenderTexture*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RenderTexture*, "UnityEngine", "RenderTexture");
// [NativeHeader("Runtime/Graphics/RenderBufferManager.h")]
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// [NativeHeader("Runtime/Camera/Camera.h")]
// [NativeHeader("Runtime/Graphics/RenderTexture.h")]
// [UsedByNativeCode]
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RenderTexture
class CORDL_TYPE RenderTexture : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_antiAliasing, put = set_antiAliasing)) int32_t antiAliasing;

  __declspec(property(put = set_autoGenerateMips)) bool autoGenerateMips;

  __declspec(property(get = get_bindTextureMS)) bool bindTextureMS;

  __declspec(property(get = get_colorBuffer)) ::UnityEngine::RenderBuffer colorBuffer;

  __declspec(property(put = set_depth)) int32_t depth;

  __declspec(property(get = get_depthBuffer)) ::UnityEngine::RenderBuffer depthBuffer;

  __declspec(property(get = get_depthStencilFormat, put = set_depthStencilFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat;

  __declspec(property(get = get_descriptor)) ::UnityEngine::RenderTextureDescriptor descriptor;

  __declspec(property(get = get_dimension, put = set_dimension)) ::UnityEngine::Rendering::TextureDimension dimension;

  __declspec(property(put = set_enableRandomWrite)) bool enableRandomWrite;

  __declspec(property(get = get_enableShadingRate)) bool enableShadingRate;

  __declspec(property(get = get_format, put = set_format)) ::UnityEngine::RenderTextureFormat format;

  __declspec(property(get = get_graphicsFormat, put = set_graphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat graphicsFormat;

  __declspec(property(get = get_height, put = set_height)) int32_t height;

  /// @brief [NativeProperty("SRGBReadWrite")]
  __declspec(property(get = get_sRGB)) bool sRGB;

  __declspec(property(get = get_useDynamicScale, put = set_useDynamicScale)) bool useDynamicScale;

  __declspec(property(get = get_useDynamicScaleExplicit)) bool useDynamicScaleExplicit;

  /// @brief [NativeProperty("MipMap")]
  __declspec(property(get = get_useMipMap, put = set_useMipMap)) bool useMipMap;

  __declspec(property(get = get_volumeDepth, put = set_volumeDepth)) int32_t volumeDepth;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  /// @brief Method ApplyDynamicScale, addr 0x6f5b684, size 0x80, virtual false, abstract: false, final false
  inline void ApplyDynamicScale();

  /// @brief Method ApplyDynamicScale_Injected, addr 0x6f5b704, size 0x3c, virtual false, abstract: false, final false
  static inline void ApplyDynamicScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method Create, addr 0x6f5bd04, size 0x80, virtual false, abstract: false, final false
  inline bool Create();

  /// @brief Method Create_Injected, addr 0x6f5bd84, size 0x3c, virtual false, abstract: false, final false
  static inline bool Create_Injected(::System::IntPtr _unity_self);

  /// @brief Method DiscardContents, addr 0x6f5bc18, size 0x98, virtual false, abstract: false, final false
  inline void DiscardContents(bool discardColor, bool discardDepth);

  /// @brief Method DiscardContents_Injected, addr 0x6f5bcb0, size 0x54, virtual false, abstract: false, final false
  static inline void DiscardContents_Injected(::System::IntPtr _unity_self, bool discardColor, bool discardDepth);

  /// [FreeFunction("RenderTexture::GetActiveAsRenderTexture")]
  /// @brief Method GetActive, addr 0x6f5b740, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetActive();

  /// @brief Method GetActive_Injected, addr 0x6f5b854, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetActive_Injected();

  /// [FreeFunction(Name = "RenderTextureScripting::GetColorBuffer", HasExplicitThis = true)]
  /// @brief Method GetColorBuffer, addr 0x6f5b940, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer GetColorBuffer();

  /// @brief Method GetColorBuffer_Injected, addr 0x6f5b9d8, size 0x44, virtual false, abstract: false, final false
  static inline void GetColorBuffer_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer> ret);

  /// [NativeName("GetColorFormat")]
  /// @brief Method GetColorFormat, addr 0x6f5a498, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetColorFormat(bool suppressWarnings);

  /// @brief Method GetColorFormat_Injected, addr 0x6f5a528, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetColorFormat_Injected(::System::IntPtr _unity_self, bool suppressWarnings);

  /// @brief Method GetCompatibleFormat, addr 0x6f5d578, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::RenderTextureFormat renderTextureFormat, ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method GetDefaultColorFormat, addr 0x6f5cc90, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultColorFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetDefaultDepthStencilFormat, addr 0x6f5cce0, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultDepthStencilFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t depth);

  /// [FreeFunction(Name = "RenderTextureScripting::GetDepthBuffer", HasExplicitThis = true)]
  /// @brief Method GetDepthBuffer, addr 0x6f5ba1c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer GetDepthBuffer();

  /// @brief Method GetDepthBuffer_Injected, addr 0x6f5bab4, size 0x44, virtual false, abstract: false, final false
  static inline void GetDepthBuffer_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer> ret);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6f5d154, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6f5d8ac, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6f5d714, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::RenderTextureFormat format, bool disableFallback);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6f5d760, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, bool requestedShadowMap);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6f5d8b8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode);

  /// [NativeName("GetRenderTextureDesc")]
  /// @brief Method GetDescriptor, addr 0x6f5a968, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor GetDescriptor();

  /// @brief Method GetDescriptor_Injected, addr 0x6f5c11c, size 0x44, virtual false, abstract: false, final false
  static inline void GetDescriptor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderTextureDescriptor> ret);

  /// @brief Method GetShadowSamplingModeForFormat, addr 0x6f5cef4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShadowSamplingMode GetShadowSamplingModeForFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetShadowSamplingModeForFormat, addr 0x6f5d750, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShadowSamplingMode GetShadowSamplingModeForFormat(::UnityEngine::RenderTextureFormat format);

  /// @brief Method GetTemporary, addr 0x6f5d968, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(::UnityEngine::RenderTextureDescriptor desc);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5dce4, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5dcb4, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5dc88, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5dc60, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5dc3c, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5dc1c, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5dc00, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode,
                                                                    ::UnityEngine::VRTextureUsage vrUsage);

  /// @brief Method GetTemporary, addr 0x6f5db5c, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture>
  GetTemporary(int32_t width, int32_t height, /* [DefaultValue("0")] */ int32_t depthBuffer, /* [DefaultValue("RenderTextureFormat.Default")] */ ::UnityEngine::RenderTextureFormat format,
               /* [DefaultValue("RenderTextureReadWrite.Default")] */ ::UnityEngine::RenderTextureReadWrite readWrite, /* [DefaultValue("1")] */ int32_t antiAliasing,
               /* [DefaultValue("RenderTextureMemoryless.None")] */ ::UnityEngine::RenderTextureMemoryless memorylessMode,
               /* [DefaultValue("VRTextureUsage.None")] */ ::UnityEngine::VRTextureUsage vrUsage, /* [DefaultValue("false")] */ bool useDynamicScale);

  /// @brief Method GetTemporaryImpl, addr 0x6f5d9cc, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporaryImpl(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                                                                        ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t antiAliasing,
                                                                        ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage, bool useDynamicScale,
                                                                        ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode);

  /// [FreeFunction("GetRenderBufferManager().GetTextures().GetTempBuffer")]
  /// @brief Method GetTemporary_Internal, addr 0x6f5c160, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method GetTemporary_Internal_Injected, addr 0x6f5c280, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTemporary_Internal_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor const> desc);

  /// @brief Method Initialize, addr 0x6f5d2a0, size 0x194, virtual false, abstract: false, final false
  inline void Initialize(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, int32_t mipCount);

  /// [FreeFunction("RenderTextureScripting::Create")]
  /// @brief Method Internal_Create, addr 0x6f5c00c, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(/* [Writable] */ ::UnityEngine::RenderTexture* rt);

  /// @brief Method IsCreated, addr 0x6f5be7c, size 0x80, virtual false, abstract: false, final false
  inline bool IsCreated();

  /// @brief Method IsCreated_Injected, addr 0x6f5befc, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsCreated_Injected(::System::IntPtr _unity_self);

  /// @brief [RequiredByNativeCode]
  static inline ::UnityEngine::RenderTexture* New_ctor();

  static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTextureDescriptor desc);

  static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTexture* textureToCopy);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                                       ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                                       ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t mipCount);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format);

  /// @brief [ExcludeFromDocs]
  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, int32_t mipCount);

  static inline ::UnityEngine::RenderTexture* New_ctor(int32_t width, int32_t height, int32_t depth, /* [DefaultValue("RenderTextureFormat.Default")] */ ::UnityEngine::RenderTextureFormat format,
                                                       /* [DefaultValue("RenderTextureReadWrite.Default")] */ ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method Release, addr 0x6f5bdc0, size 0x80, virtual false, abstract: false, final false
  inline void Release();

  /// [FreeFunction("GetRenderBufferManager().GetTextures().ReleaseTempBuffer")]
  /// @brief Method ReleaseTemporary, addr 0x6f5c2bc, size 0x80, virtual false, abstract: false, final false
  static inline void ReleaseTemporary(::UnityEngine::RenderTexture* temp);

  /// @brief Method ReleaseTemporary_Injected, addr 0x6f5c33c, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseTemporary_Injected(::System::IntPtr temp);

  /// @brief Method Release_Injected, addr 0x6f5be40, size 0x3c, virtual false, abstract: false, final false
  static inline void Release_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("RenderTextureScripting::SetActive")]
  /// @brief Method SetActive, addr 0x6f5b87c, size 0x80, virtual false, abstract: false, final false
  static inline void SetActive(::UnityEngine::RenderTexture* rt);

  /// @brief Method SetActive_Injected, addr 0x6f5b8fc, size 0x3c, virtual false, abstract: false, final false
  static inline void SetActive_Injected(::System::IntPtr rt);

  /// [NativeName("SetColorFormat")]
  /// @brief Method SetColorFormat, addr 0x6f5a56c, size 0x90, virtual false, abstract: false, final false
  inline void SetColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method SetColorFormat_Injected, addr 0x6f5a5fc, size 0x44, virtual false, abstract: false, final false
  static inline void SetColorFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method SetMipMapCount, addr 0x6f5baf8, size 0x90, virtual false, abstract: false, final false
  inline void SetMipMapCount(int32_t count);

  /// @brief Method SetMipMapCount_Injected, addr 0x6f5bb88, size 0x44, virtual false, abstract: false, final false
  static inline void SetMipMapCount_Injected(::System::IntPtr _unity_self, int32_t count);

  /// [NativeName("SetRenderTextureDescFromScript")]
  /// @brief Method SetRenderTextureDescriptor, addr 0x6f5c048, size 0x90, virtual false, abstract: false, final false
  inline void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method SetRenderTextureDescriptor_Injected, addr 0x6f5c0d8, size 0x44, virtual false, abstract: false, final false
  static inline void SetRenderTextureDescriptor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderTextureDescriptor const> desc);

  /// @brief Method SetSRGBReadWrite, addr 0x6f5bf38, size 0x90, virtual false, abstract: false, final false
  inline void SetSRGBReadWrite(bool srgb);

  /// @brief Method SetSRGBReadWrite_Injected, addr 0x6f5bfc8, size 0x44, virtual false, abstract: false, final false
  static inline void SetSRGBReadWrite_Injected(::System::IntPtr _unity_self, bool srgb);

  /// @brief Method SetShadowSamplingMode, addr 0x6f5ace8, size 0x90, virtual false, abstract: false, final false
  inline void SetShadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode samplingMode);

  /// @brief Method SetShadowSamplingMode_Injected, addr 0x6f5bbcc, size 0x44, virtual false, abstract: false, final false
  static inline void SetShadowSamplingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ShadowSamplingMode samplingMode);

  /// @brief Method ValidateRenderTextureDesc, addr 0x6f5c570, size 0x428, virtual false, abstract: false, final false
  static inline void ValidateRenderTextureDesc(::by_ref<::UnityEngine::RenderTextureDescriptor> desc);

  /// @brief Method WarnAboutFallbackTo16BitsDepth, addr 0x6f5ab74, size 0xe4, virtual false, abstract: false, final false
  static inline void WarnAboutFallbackTo16BitsDepth(::UnityEngine::RenderTextureFormat format);

  /// [RequiredByNativeCode]
  /// @brief Method .ctor, addr 0x6f5c44c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6f5c4a8, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method .ctor, addr 0x6f5c998, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RenderTexture* textureToCopy);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5d15c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5cd44, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                    int32_t mipCount);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5d570, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5cb44, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5cf04, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5cf98, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5d434, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5d4c8, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, int32_t mipCount);

  /// @brief Method .ctor, addr 0x6f5d1f0, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, /* [DefaultValue("RenderTextureFormat.Default")] */ ::UnityEngine::RenderTextureFormat format,
                    /* [DefaultValue("RenderTextureReadWrite.Default")] */ ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method get_active, addr 0x6f5b938, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> get_active();

  /// @brief Method get_antiAliasing, addr 0x6f5b05c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_antiAliasing();

  /// @brief Method get_antiAliasing_Injected, addr 0x6f5b0dc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_antiAliasing_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bindTextureMS, addr 0x6f5b1ec, size 0x80, virtual false, abstract: false, final false
  inline bool get_bindTextureMS();

  /// @brief Method get_bindTextureMS_Injected, addr 0x6f5b26c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bindTextureMS_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_colorBuffer, addr 0x6f5bc10, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer get_colorBuffer();

  /// @brief Method get_depthBuffer, addr 0x6f5bc14, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer get_depthBuffer();

  /// @brief Method get_depthStencilFormat, addr 0x6f5aaf4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat();

  /// @brief Method get_depthStencilFormat_Injected, addr 0x6f5ad78, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_descriptor, addr 0x6f5cb08, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor get_descriptor();

  /// @brief Method get_dimension, addr 0x6f5a308, size 0x80, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension get_dimension();

  /// @brief Method get_dimension_Injected, addr 0x6f5a388, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension get_dimension_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enableShadingRate, addr 0x6f5b5c8, size 0x80, virtual false, abstract: false, final false
  inline bool get_enableShadingRate();

  /// @brief Method get_enableShadingRate_Injected, addr 0x6f5b648, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableShadingRate_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_format, addr 0x6f5a898, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureFormat get_format();

  /// @brief Method get_graphicsFormat, addr 0x6f5a640, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();

  /// @brief Method get_height, addr 0x6f5a178, size 0x80, virtual true, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method get_height_Injected, addr 0x6f5a1f8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_height_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sRGB, addr 0x6f5a7dc, size 0x80, virtual false, abstract: false, final false
  inline bool get_sRGB();

  /// @brief Method get_sRGB_Injected, addr 0x6f5a85c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_sRGB_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useDynamicScale, addr 0x6f5b37c, size 0x80, virtual false, abstract: false, final false
  inline bool get_useDynamicScale();

  /// @brief Method get_useDynamicScaleExplicit, addr 0x6f5b50c, size 0x80, virtual false, abstract: false, final false
  inline bool get_useDynamicScaleExplicit();

  /// @brief Method get_useDynamicScaleExplicit_Injected, addr 0x6f5b58c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useDynamicScaleExplicit_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useDynamicScale_Injected, addr 0x6f5b3fc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useDynamicScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useMipMap, addr 0x6f5a64c, size 0x80, virtual false, abstract: false, final false
  inline bool get_useMipMap();

  /// @brief Method get_useMipMap_Injected, addr 0x6f5a6cc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useMipMap_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volumeDepth, addr 0x6f5aecc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_volumeDepth();

  /// @brief Method get_volumeDepth_Injected, addr 0x6f5af4c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_volumeDepth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_width, addr 0x6f59fe8, size 0x80, virtual true, abstract: false, final false
  inline int32_t get_width();

  /// @brief Method get_width_Injected, addr 0x6f5a068, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_width_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_active, addr 0x6f5b93c, size 0x4, virtual false, abstract: false, final false
  static inline void set_active(::UnityEngine::RenderTexture* value);

  /// @brief Method set_antiAliasing, addr 0x6f5b118, size 0x90, virtual false, abstract: false, final false
  inline void set_antiAliasing(int32_t value);

  /// @brief Method set_antiAliasing_Injected, addr 0x6f5b1a8, size 0x44, virtual false, abstract: false, final false
  static inline void set_antiAliasing_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_autoGenerateMips, addr 0x6f5adf8, size 0x90, virtual false, abstract: false, final false
  inline void set_autoGenerateMips(bool value);

  /// @brief Method set_autoGenerateMips_Injected, addr 0x6f5ae88, size 0x44, virtual false, abstract: false, final false
  static inline void set_autoGenerateMips_Injected(::System::IntPtr _unity_self, bool value);

  /// [FreeFunction("RenderTextureScripting::SetDepth", HasExplicitThis = true)]
  /// @brief Method set_depth, addr 0x6f5c378, size 0x90, virtual false, abstract: false, final false
  inline void set_depth(int32_t value);

  /// @brief Method set_depthStencilFormat, addr 0x6f5ac58, size 0x90, virtual false, abstract: false, final false
  inline void set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_depthStencilFormat_Injected, addr 0x6f5adb4, size 0x44, virtual false, abstract: false, final false
  static inline void set_depthStencilFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_depth_Injected, addr 0x6f5c408, size 0x44, virtual false, abstract: false, final false
  static inline void set_depth_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_dimension, addr 0x6f5a3c4, size 0x90, virtual true, abstract: false, final false
  inline void set_dimension(::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method set_dimension_Injected, addr 0x6f5a454, size 0x44, virtual false, abstract: false, final false
  static inline void set_dimension_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method set_enableRandomWrite, addr 0x6f5b2a8, size 0x90, virtual false, abstract: false, final false
  inline void set_enableRandomWrite(bool value);

  /// @brief Method set_enableRandomWrite_Injected, addr 0x6f5b338, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableRandomWrite_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_format, addr 0x6f5aa2c, size 0xc8, virtual false, abstract: false, final false
  inline void set_format(::UnityEngine::RenderTextureFormat value);

  /// @brief Method set_graphicsFormat, addr 0x6f5a648, size 0x4, virtual false, abstract: false, final false
  inline void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_height, addr 0x6f5a234, size 0x90, virtual true, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method set_height_Injected, addr 0x6f5a2c4, size 0x44, virtual false, abstract: false, final false
  static inline void set_height_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_useDynamicScale, addr 0x6f5b438, size 0x90, virtual false, abstract: false, final false
  inline void set_useDynamicScale(bool value);

  /// @brief Method set_useDynamicScale_Injected, addr 0x6f5b4c8, size 0x44, virtual false, abstract: false, final false
  static inline void set_useDynamicScale_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_useMipMap, addr 0x6f5a708, size 0x90, virtual false, abstract: false, final false
  inline void set_useMipMap(bool value);

  /// @brief Method set_useMipMap_Injected, addr 0x6f5a798, size 0x44, virtual false, abstract: false, final false
  static inline void set_useMipMap_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_volumeDepth, addr 0x6f5af88, size 0x90, virtual false, abstract: false, final false
  inline void set_volumeDepth(int32_t value);

  /// @brief Method set_volumeDepth_Injected, addr 0x6f5b018, size 0x44, virtual false, abstract: false, final false
  static inline void set_volumeDepth_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_width, addr 0x6f5a0a4, size 0x90, virtual true, abstract: false, final false
  inline void set_width(int32_t value);

  /// @brief Method set_width_Injected, addr 0x6f5a134, size 0x44, virtual false, abstract: false, final false
  static inline void set_width_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTexture(RenderTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTexture(RenderTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9822 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RenderTexture) == 0x18, "Size mismatch!");

} // namespace UnityEngine
