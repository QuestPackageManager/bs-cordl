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

  /// @brief Method ApplyDynamicScale, addr 0x6f5a5a4, size 0x80, virtual false, abstract: false, final false
  inline void ApplyDynamicScale();

  /// @brief Method ApplyDynamicScale_Injected, addr 0x6f5a624, size 0x3c, virtual false, abstract: false, final false
  static inline void ApplyDynamicScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method Create, addr 0x6f5ac24, size 0x80, virtual false, abstract: false, final false
  inline bool Create();

  /// @brief Method Create_Injected, addr 0x6f5aca4, size 0x3c, virtual false, abstract: false, final false
  static inline bool Create_Injected(::System::IntPtr _unity_self);

  /// @brief Method DiscardContents, addr 0x6f5ab38, size 0x98, virtual false, abstract: false, final false
  inline void DiscardContents(bool discardColor, bool discardDepth);

  /// @brief Method DiscardContents_Injected, addr 0x6f5abd0, size 0x54, virtual false, abstract: false, final false
  static inline void DiscardContents_Injected(::System::IntPtr _unity_self, bool discardColor, bool discardDepth);

  /// [FreeFunction("RenderTexture::GetActiveAsRenderTexture")]
  /// @brief Method GetActive, addr 0x6f5a660, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetActive();

  /// @brief Method GetActive_Injected, addr 0x6f5a774, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetActive_Injected();

  /// [FreeFunction(Name = "RenderTextureScripting::GetColorBuffer", HasExplicitThis = true)]
  /// @brief Method GetColorBuffer, addr 0x6f5a860, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer GetColorBuffer();

  /// @brief Method GetColorBuffer_Injected, addr 0x6f5a8f8, size 0x44, virtual false, abstract: false, final false
  static inline void GetColorBuffer_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer> ret);

  /// [NativeName("GetColorFormat")]
  /// @brief Method GetColorFormat, addr 0x6f593b8, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetColorFormat(bool suppressWarnings);

  /// @brief Method GetColorFormat_Injected, addr 0x6f59448, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetColorFormat_Injected(::System::IntPtr _unity_self, bool suppressWarnings);

  /// @brief Method GetCompatibleFormat, addr 0x6f5c498, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::RenderTextureFormat renderTextureFormat, ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method GetDefaultColorFormat, addr 0x6f5bbb0, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultColorFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetDefaultDepthStencilFormat, addr 0x6f5bc00, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultDepthStencilFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format, int32_t depth);

  /// [FreeFunction(Name = "RenderTextureScripting::GetDepthBuffer", HasExplicitThis = true)]
  /// @brief Method GetDepthBuffer, addr 0x6f5a93c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer GetDepthBuffer();

  /// @brief Method GetDepthBuffer_Injected, addr 0x6f5a9d4, size 0x44, virtual false, abstract: false, final false
  static inline void GetDepthBuffer_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderBuffer> ret);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6f5c074, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6f5c7cc, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6f5c634, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::RenderTextureFormat format, bool disableFallback);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6f5c680, size 0x14c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, bool requestedShadowMap);

  /// @brief Method GetDepthStencilFormatLegacy, addr 0x6f5c7d8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode);

  /// [NativeName("GetRenderTextureDesc")]
  /// @brief Method GetDescriptor, addr 0x6f59888, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor GetDescriptor();

  /// @brief Method GetDescriptor_Injected, addr 0x6f5b03c, size 0x44, virtual false, abstract: false, final false
  static inline void GetDescriptor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderTextureDescriptor> ret);

  /// @brief Method GetShadowSamplingModeForFormat, addr 0x6f5be14, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShadowSamplingMode GetShadowSamplingModeForFormat(::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// @brief Method GetShadowSamplingModeForFormat, addr 0x6f5c670, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ShadowSamplingMode GetShadowSamplingModeForFormat(::UnityEngine::RenderTextureFormat format);

  /// @brief Method GetTemporary, addr 0x6f5c888, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(::UnityEngine::RenderTextureDescriptor desc);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5cc04, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5cbd4, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5cba8, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5cb80, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5cb5c, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5cb3c, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode);

  /// [ExcludeFromDocs]
  /// @brief Method GetTemporary, addr 0x6f5cb20, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::RenderTextureFormat format,
                                                                    ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, ::UnityEngine::RenderTextureMemoryless memorylessMode,
                                                                    ::UnityEngine::VRTextureUsage vrUsage);

  /// @brief Method GetTemporary, addr 0x6f5ca7c, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture>
  GetTemporary(int32_t width, int32_t height, /* [DefaultValue("0")] */ int32_t depthBuffer, /* [DefaultValue("RenderTextureFormat.Default")] */ ::UnityEngine::RenderTextureFormat format,
               /* [DefaultValue("RenderTextureReadWrite.Default")] */ ::UnityEngine::RenderTextureReadWrite readWrite, /* [DefaultValue("1")] */ int32_t antiAliasing,
               /* [DefaultValue("RenderTextureMemoryless.None")] */ ::UnityEngine::RenderTextureMemoryless memorylessMode,
               /* [DefaultValue("VRTextureUsage.None")] */ ::UnityEngine::VRTextureUsage vrUsage, /* [DefaultValue("false")] */ bool useDynamicScale);

  /// @brief Method GetTemporaryImpl, addr 0x6f5c8ec, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporaryImpl(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                                                                        ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t antiAliasing,
                                                                        ::UnityEngine::RenderTextureMemoryless memorylessMode, ::UnityEngine::VRTextureUsage vrUsage, bool useDynamicScale,
                                                                        ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode);

  /// [FreeFunction("GetRenderBufferManager().GetTextures().GetTempBuffer")]
  /// @brief Method GetTemporary_Internal, addr 0x6f5b080, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method GetTemporary_Internal_Injected, addr 0x6f5b1a0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTemporary_Internal_Injected(::by_ref<::UnityEngine::RenderTextureDescriptor const> desc);

  /// @brief Method Initialize, addr 0x6f5c1c0, size 0x194, virtual false, abstract: false, final false
  inline void Initialize(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite, int32_t mipCount);

  /// [FreeFunction("RenderTextureScripting::Create")]
  /// @brief Method Internal_Create, addr 0x6f5af2c, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Create(/* [Writable] */ ::UnityEngine::RenderTexture* rt);

  /// @brief Method IsCreated, addr 0x6f5ad9c, size 0x80, virtual false, abstract: false, final false
  inline bool IsCreated();

  /// @brief Method IsCreated_Injected, addr 0x6f5ae1c, size 0x3c, virtual false, abstract: false, final false
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

  /// @brief Method Release, addr 0x6f5ace0, size 0x80, virtual false, abstract: false, final false
  inline void Release();

  /// [FreeFunction("GetRenderBufferManager().GetTextures().ReleaseTempBuffer")]
  /// @brief Method ReleaseTemporary, addr 0x6f5b1dc, size 0x80, virtual false, abstract: false, final false
  static inline void ReleaseTemporary(::UnityEngine::RenderTexture* temp);

  /// @brief Method ReleaseTemporary_Injected, addr 0x6f5b25c, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseTemporary_Injected(::System::IntPtr temp);

  /// @brief Method Release_Injected, addr 0x6f5ad60, size 0x3c, virtual false, abstract: false, final false
  static inline void Release_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("RenderTextureScripting::SetActive")]
  /// @brief Method SetActive, addr 0x6f5a79c, size 0x80, virtual false, abstract: false, final false
  static inline void SetActive(::UnityEngine::RenderTexture* rt);

  /// @brief Method SetActive_Injected, addr 0x6f5a81c, size 0x3c, virtual false, abstract: false, final false
  static inline void SetActive_Injected(::System::IntPtr rt);

  /// [NativeName("SetColorFormat")]
  /// @brief Method SetColorFormat, addr 0x6f5948c, size 0x90, virtual false, abstract: false, final false
  inline void SetColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method SetColorFormat_Injected, addr 0x6f5951c, size 0x44, virtual false, abstract: false, final false
  static inline void SetColorFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method SetMipMapCount, addr 0x6f5aa18, size 0x90, virtual false, abstract: false, final false
  inline void SetMipMapCount(int32_t count);

  /// @brief Method SetMipMapCount_Injected, addr 0x6f5aaa8, size 0x44, virtual false, abstract: false, final false
  static inline void SetMipMapCount_Injected(::System::IntPtr _unity_self, int32_t count);

  /// [NativeName("SetRenderTextureDescFromScript")]
  /// @brief Method SetRenderTextureDescriptor, addr 0x6f5af68, size 0x90, virtual false, abstract: false, final false
  inline void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method SetRenderTextureDescriptor_Injected, addr 0x6f5aff8, size 0x44, virtual false, abstract: false, final false
  static inline void SetRenderTextureDescriptor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RenderTextureDescriptor const> desc);

  /// @brief Method SetSRGBReadWrite, addr 0x6f5ae58, size 0x90, virtual false, abstract: false, final false
  inline void SetSRGBReadWrite(bool srgb);

  /// @brief Method SetSRGBReadWrite_Injected, addr 0x6f5aee8, size 0x44, virtual false, abstract: false, final false
  static inline void SetSRGBReadWrite_Injected(::System::IntPtr _unity_self, bool srgb);

  /// @brief Method SetShadowSamplingMode, addr 0x6f59c08, size 0x90, virtual false, abstract: false, final false
  inline void SetShadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode samplingMode);

  /// @brief Method SetShadowSamplingMode_Injected, addr 0x6f5aaec, size 0x44, virtual false, abstract: false, final false
  static inline void SetShadowSamplingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ShadowSamplingMode samplingMode);

  /// @brief Method ValidateRenderTextureDesc, addr 0x6f5b490, size 0x428, virtual false, abstract: false, final false
  static inline void ValidateRenderTextureDesc(::by_ref<::UnityEngine::RenderTextureDescriptor> desc);

  /// @brief Method WarnAboutFallbackTo16BitsDepth, addr 0x6f59a94, size 0xe4, virtual false, abstract: false, final false
  static inline void WarnAboutFallbackTo16BitsDepth(::UnityEngine::RenderTextureFormat format);

  /// [RequiredByNativeCode]
  /// @brief Method .ctor, addr 0x6f5b36c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6f5b3c8, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method .ctor, addr 0x6f5b8b8, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RenderTexture* textureToCopy);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5c07c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5bc64, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                    int32_t mipCount);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5c490, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5ba64, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5be24, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5beb8, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5c354, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format);

  /// [ExcludeFromDocs]
  /// @brief Method .ctor, addr 0x6f5c3e8, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, int32_t mipCount);

  /// @brief Method .ctor, addr 0x6f5c110, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t depth, /* [DefaultValue("RenderTextureFormat.Default")] */ ::UnityEngine::RenderTextureFormat format,
                    /* [DefaultValue("RenderTextureReadWrite.Default")] */ ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method get_active, addr 0x6f5a858, size 0x4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> get_active();

  /// @brief Method get_antiAliasing, addr 0x6f59f7c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_antiAliasing();

  /// @brief Method get_antiAliasing_Injected, addr 0x6f59ffc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_antiAliasing_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bindTextureMS, addr 0x6f5a10c, size 0x80, virtual false, abstract: false, final false
  inline bool get_bindTextureMS();

  /// @brief Method get_bindTextureMS_Injected, addr 0x6f5a18c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_bindTextureMS_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_colorBuffer, addr 0x6f5ab30, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer get_colorBuffer();

  /// @brief Method get_depthBuffer, addr 0x6f5ab34, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderBuffer get_depthBuffer();

  /// @brief Method get_depthStencilFormat, addr 0x6f59a14, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat();

  /// @brief Method get_depthStencilFormat_Injected, addr 0x6f59c98, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_descriptor, addr 0x6f5ba28, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor get_descriptor();

  /// @brief Method get_dimension, addr 0x6f59228, size 0x80, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::TextureDimension get_dimension();

  /// @brief Method get_dimension_Injected, addr 0x6f592a8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::TextureDimension get_dimension_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enableShadingRate, addr 0x6f5a4e8, size 0x80, virtual false, abstract: false, final false
  inline bool get_enableShadingRate();

  /// @brief Method get_enableShadingRate_Injected, addr 0x6f5a568, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableShadingRate_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_format, addr 0x6f597b8, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureFormat get_format();

  /// @brief Method get_graphicsFormat, addr 0x6f59560, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();

  /// @brief Method get_height, addr 0x6f59098, size 0x80, virtual true, abstract: false, final false
  inline int32_t get_height();

  /// @brief Method get_height_Injected, addr 0x6f59118, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_height_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sRGB, addr 0x6f596fc, size 0x80, virtual false, abstract: false, final false
  inline bool get_sRGB();

  /// @brief Method get_sRGB_Injected, addr 0x6f5977c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_sRGB_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useDynamicScale, addr 0x6f5a29c, size 0x80, virtual false, abstract: false, final false
  inline bool get_useDynamicScale();

  /// @brief Method get_useDynamicScaleExplicit, addr 0x6f5a42c, size 0x80, virtual false, abstract: false, final false
  inline bool get_useDynamicScaleExplicit();

  /// @brief Method get_useDynamicScaleExplicit_Injected, addr 0x6f5a4ac, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useDynamicScaleExplicit_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useDynamicScale_Injected, addr 0x6f5a31c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useDynamicScale_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useMipMap, addr 0x6f5956c, size 0x80, virtual false, abstract: false, final false
  inline bool get_useMipMap();

  /// @brief Method get_useMipMap_Injected, addr 0x6f595ec, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useMipMap_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_volumeDepth, addr 0x6f59dec, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_volumeDepth();

  /// @brief Method get_volumeDepth_Injected, addr 0x6f59e6c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_volumeDepth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_width, addr 0x6f58f08, size 0x80, virtual true, abstract: false, final false
  inline int32_t get_width();

  /// @brief Method get_width_Injected, addr 0x6f58f88, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_width_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_active, addr 0x6f5a85c, size 0x4, virtual false, abstract: false, final false
  static inline void set_active(::UnityEngine::RenderTexture* value);

  /// @brief Method set_antiAliasing, addr 0x6f5a038, size 0x90, virtual false, abstract: false, final false
  inline void set_antiAliasing(int32_t value);

  /// @brief Method set_antiAliasing_Injected, addr 0x6f5a0c8, size 0x44, virtual false, abstract: false, final false
  static inline void set_antiAliasing_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_autoGenerateMips, addr 0x6f59d18, size 0x90, virtual false, abstract: false, final false
  inline void set_autoGenerateMips(bool value);

  /// @brief Method set_autoGenerateMips_Injected, addr 0x6f59da8, size 0x44, virtual false, abstract: false, final false
  static inline void set_autoGenerateMips_Injected(::System::IntPtr _unity_self, bool value);

  /// [FreeFunction("RenderTextureScripting::SetDepth", HasExplicitThis = true)]
  /// @brief Method set_depth, addr 0x6f5b298, size 0x90, virtual false, abstract: false, final false
  inline void set_depth(int32_t value);

  /// @brief Method set_depthStencilFormat, addr 0x6f59b78, size 0x90, virtual false, abstract: false, final false
  inline void set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_depthStencilFormat_Injected, addr 0x6f59cd4, size 0x44, virtual false, abstract: false, final false
  static inline void set_depthStencilFormat_Injected(::System::IntPtr _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_depth_Injected, addr 0x6f5b328, size 0x44, virtual false, abstract: false, final false
  static inline void set_depth_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_dimension, addr 0x6f592e4, size 0x90, virtual true, abstract: false, final false
  inline void set_dimension(::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method set_dimension_Injected, addr 0x6f59374, size 0x44, virtual false, abstract: false, final false
  static inline void set_dimension_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method set_enableRandomWrite, addr 0x6f5a1c8, size 0x90, virtual false, abstract: false, final false
  inline void set_enableRandomWrite(bool value);

  /// @brief Method set_enableRandomWrite_Injected, addr 0x6f5a258, size 0x44, virtual false, abstract: false, final false
  static inline void set_enableRandomWrite_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_format, addr 0x6f5994c, size 0xc8, virtual false, abstract: false, final false
  inline void set_format(::UnityEngine::RenderTextureFormat value);

  /// @brief Method set_graphicsFormat, addr 0x6f59568, size 0x4, virtual false, abstract: false, final false
  inline void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  /// @brief Method set_height, addr 0x6f59154, size 0x90, virtual true, abstract: false, final false
  inline void set_height(int32_t value);

  /// @brief Method set_height_Injected, addr 0x6f591e4, size 0x44, virtual false, abstract: false, final false
  static inline void set_height_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_useDynamicScale, addr 0x6f5a358, size 0x90, virtual false, abstract: false, final false
  inline void set_useDynamicScale(bool value);

  /// @brief Method set_useDynamicScale_Injected, addr 0x6f5a3e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_useDynamicScale_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_useMipMap, addr 0x6f59628, size 0x90, virtual false, abstract: false, final false
  inline void set_useMipMap(bool value);

  /// @brief Method set_useMipMap_Injected, addr 0x6f596b8, size 0x44, virtual false, abstract: false, final false
  static inline void set_useMipMap_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_volumeDepth, addr 0x6f59ea8, size 0x90, virtual false, abstract: false, final false
  inline void set_volumeDepth(int32_t value);

  /// @brief Method set_volumeDepth_Injected, addr 0x6f59f38, size 0x44, virtual false, abstract: false, final false
  static inline void set_volumeDepth_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_width, addr 0x6f58fc4, size 0x90, virtual true, abstract: false, final false
  inline void set_width(int32_t value);

  /// @brief Method set_width_Injected, addr 0x6f59054, size 0x44, virtual false, abstract: false, final false
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
