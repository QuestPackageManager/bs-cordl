#pragma once
// IWYU pragma private; include "UnityEngine/RenderTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::RenderTexture);
// Dependencies UnityEngine.Texture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RenderTexture
class CORDL_TYPE RenderTexture : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_antiAliasing, put=set_antiAliasing)) int32_t  antiAliasing;

 __declspec(property(put=set_autoGenerateMips)) bool  autoGenerateMips;

 __declspec(property(get=get_bindTextureMS)) bool  bindTextureMS;

 __declspec(property(get=get_colorBuffer)) ::UnityEngine::RenderBuffer  colorBuffer;

 __declspec(property(put=set_depth)) int32_t  depth;

 __declspec(property(get=get_depthBuffer)) ::UnityEngine::RenderBuffer  depthBuffer;

 __declspec(property(get=get_depthStencilFormat, put=set_depthStencilFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat;

 __declspec(property(get=get_descriptor)) ::UnityEngine::RenderTextureDescriptor  descriptor;

 __declspec(property(get=get_dimension, put=set_dimension)) ::UnityEngine::Rendering::TextureDimension  dimension;

 __declspec(property(put=set_enableRandomWrite)) bool  enableRandomWrite;

 __declspec(property(get=get_format, put=set_format)) ::UnityEngine::RenderTextureFormat  format;

 __declspec(property(get=get_graphicsFormat, put=set_graphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  graphicsFormat;

 __declspec(property(get=get_height, put=set_height)) int32_t  height;

 __declspec(property(get=get_sRGB)) bool  sRGB;

 __declspec(property(get=get_useDynamicScale, put=set_useDynamicScale)) bool  useDynamicScale;

 __declspec(property(get=get_useDynamicScaleExplicit)) bool  useDynamicScaleExplicit;

 __declspec(property(get=get_useMipMap, put=set_useMipMap)) bool  useMipMap;

 __declspec(property(get=get_volumeDepth, put=set_volumeDepth)) int32_t  volumeDepth;

 __declspec(property(get=get_vrUsage)) ::UnityEngine::VRTextureUsage  vrUsage;

 __declspec(property(get=get_width, put=set_width)) int32_t  width;

/// @brief Method ApplyDynamicScale, addr 0x68fa00c, size 0x80, virtual false, abstract: false, final false
inline void ApplyDynamicScale() ;

/// @brief Method ApplyDynamicScale_Injected, addr 0x68fa08c, size 0x3c, virtual false, abstract: false, final false
static inline void ApplyDynamicScale_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Create, addr 0x68fa698, size 0x80, virtual false, abstract: false, final false
inline bool Create() ;

/// @brief Method Create_Injected, addr 0x68fa718, size 0x3c, virtual false, abstract: false, final false
static inline bool Create_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method DiscardContents, addr 0x68fa68c, size 0xc, virtual false, abstract: false, final false
inline void DiscardContents() ;

/// @brief Method DiscardContents, addr 0x68fa5a0, size 0x98, virtual false, abstract: false, final false
inline void DiscardContents(bool  discardColor, bool  discardDepth) ;

/// @brief Method DiscardContents_Injected, addr 0x68fa638, size 0x54, virtual false, abstract: false, final false
static inline void DiscardContents_Injected(::System::IntPtr  _unity_self, bool  discardColor, bool  discardDepth) ;

/// @brief Method GetActive, addr 0x68fa0c8, size 0x114, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetActive() ;

/// @brief Method GetActive_Injected, addr 0x68fa1dc, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr GetActive_Injected() ;

/// @brief Method GetColorBuffer, addr 0x68fa2c8, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer GetColorBuffer() ;

/// @brief Method GetColorBuffer_Injected, addr 0x68fa360, size 0x44, virtual false, abstract: false, final false
static inline void GetColorBuffer_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::RenderBuffer>  ret) ;

/// @brief Method GetColorFormat, addr 0x68f8e20, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetColorFormat(bool  suppressWarnings) ;

/// @brief Method GetColorFormat_Injected, addr 0x68f8eb0, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetColorFormat_Injected(::System::IntPtr  _unity_self, bool  suppressWarnings) ;

/// @brief Method GetCompatibleFormat, addr 0x68fbec8, size 0x19c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::RenderTextureFormat  renderTextureFormat, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method GetDefaultColorFormat, addr 0x68fb60c, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultColorFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetDefaultDepthStencilFormat, addr 0x68fb65c, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultDepthStencilFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  depth) ;

/// @brief Method GetDepthBuffer, addr 0x68fa3a4, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer GetDepthBuffer() ;

/// @brief Method GetDepthBuffer_Injected, addr 0x68fa43c, size 0x44, virtual false, abstract: false, final false
static inline void GetDepthBuffer_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::RenderBuffer>  ret) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0x68fbab8, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0x68fc1fc, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, ::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0x68fc064, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, ::UnityEngine::RenderTextureFormat  format, bool  disableFallback) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0x68fc0b0, size 0x14c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, bool  requestedShadowMap) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0x68fc208, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, ::UnityEngine::Rendering::ShadowSamplingMode  shadowSamplingMode) ;

/// @brief Method GetDescriptor, addr 0x68f93ac, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor GetDescriptor() ;

/// @brief Method GetDescriptor_Injected, addr 0x68faab0, size 0x44, virtual false, abstract: false, final false
static inline void GetDescriptor_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::RenderTextureDescriptor>  ret) ;

/// @brief Method GetShadowSamplingModeForFormat, addr 0x68fb864, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShadowSamplingMode GetShadowSamplingModeForFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetShadowSamplingModeForFormat, addr 0x68fc0a0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::ShadowSamplingMode GetShadowSamplingModeForFormat(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method GetTemporary, addr 0x68fc214, size 0x44, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method GetTemporary, addr 0x68fc494, size 0x64c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height) ;

/// @brief Method GetTemporary, addr 0x68fc464, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer) ;

/// @brief Method GetTemporary, addr 0x68fc438, size 0x2c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method GetTemporary, addr 0x68fc410, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method GetTemporary, addr 0x68fc3ec, size 0x24, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing) ;

/// @brief Method GetTemporary, addr 0x68fc3cc, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing, ::UnityEngine::RenderTextureMemoryless  memorylessMode) ;

/// @brief Method GetTemporary, addr 0x68fc3b0, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing, ::UnityEngine::RenderTextureMemoryless  memorylessMode, ::UnityEngine::VRTextureUsage  vrUsage) ;

/// @brief Method GetTemporary, addr 0x68fc30c, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing, ::UnityEngine::RenderTextureMemoryless  memorylessMode, ::UnityEngine::VRTextureUsage  vrUsage, bool  useDynamicScale) ;

/// @brief Method GetTemporaryImpl, addr 0x68fc258, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporaryImpl(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, int32_t  antiAliasing, ::UnityEngine::RenderTextureMemoryless  memorylessMode, ::UnityEngine::VRTextureUsage  vrUsage, bool  useDynamicScale, ::UnityEngine::Rendering::ShadowSamplingMode  shadowSamplingMode) ;

/// @brief Method GetTemporary_Internal, addr 0x68faaf4, size 0x120, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method GetTemporary_Internal_Injected, addr 0x68fac14, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetTemporary_Internal_Injected(::ByRef<::UnityEngine::RenderTextureDescriptor>  desc) ;

/// @brief Method Initialize, addr 0x68fbbfc, size 0x190, virtual false, abstract: false, final false
inline void Initialize(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  mipCount) ;

/// @brief Method Internal_Create, addr 0x68fa9a0, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::RenderTexture*  rt) ;

/// @brief Method IsCreated, addr 0x68fa810, size 0x80, virtual false, abstract: false, final false
inline bool IsCreated() ;

/// @brief Method IsCreated_Injected, addr 0x68fa890, size 0x3c, virtual false, abstract: false, final false
static inline bool IsCreated_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::RenderTexture* New_ctor() ;

static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTextureDescriptor  desc) ;

static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTexture*  textureToCopy) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat, int32_t  mipCount) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, int32_t  mipCount) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method Release, addr 0x68fa754, size 0x80, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method ReleaseTemporary, addr 0x68fac50, size 0x80, virtual false, abstract: false, final false
static inline void ReleaseTemporary(::UnityEngine::RenderTexture*  temp) ;

/// @brief Method ReleaseTemporary_Injected, addr 0x68facd0, size 0x3c, virtual false, abstract: false, final false
static inline void ReleaseTemporary_Injected(::System::IntPtr  temp) ;

/// @brief Method Release_Injected, addr 0x68fa7d4, size 0x3c, virtual false, abstract: false, final false
static inline void Release_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method SetActive, addr 0x68fa204, size 0x80, virtual false, abstract: false, final false
static inline void SetActive(::UnityEngine::RenderTexture*  rt) ;

/// @brief Method SetActive_Injected, addr 0x68fa284, size 0x3c, virtual false, abstract: false, final false
static inline void SetActive_Injected(::System::IntPtr  rt) ;

/// @brief Method SetColorFormat, addr 0x68f8ef4, size 0x90, virtual false, abstract: false, final false
inline void SetColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method SetColorFormat_Injected, addr 0x68f8f84, size 0x44, virtual false, abstract: false, final false
static inline void SetColorFormat_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method SetMipMapCount, addr 0x68fa480, size 0x90, virtual false, abstract: false, final false
inline void SetMipMapCount(int32_t  count) ;

/// @brief Method SetMipMapCount_Injected, addr 0x68fa510, size 0x44, virtual false, abstract: false, final false
static inline void SetMipMapCount_Injected(::System::IntPtr  _unity_self, int32_t  count) ;

/// @brief Method SetRenderTextureDescriptor, addr 0x68fa9dc, size 0x90, virtual false, abstract: false, final false
inline void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method SetRenderTextureDescriptor_Injected, addr 0x68faa6c, size 0x44, virtual false, abstract: false, final false
static inline void SetRenderTextureDescriptor_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::RenderTextureDescriptor>  desc) ;

/// @brief Method SetSRGBReadWrite, addr 0x68fa8cc, size 0x90, virtual false, abstract: false, final false
inline void SetSRGBReadWrite(bool  srgb) ;

/// @brief Method SetSRGBReadWrite_Injected, addr 0x68fa95c, size 0x44, virtual false, abstract: false, final false
static inline void SetSRGBReadWrite_Injected(::System::IntPtr  _unity_self, bool  srgb) ;

/// @brief Method SetShadowSamplingMode, addr 0x68f972c, size 0x90, virtual false, abstract: false, final false
inline void SetShadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode  samplingMode) ;

/// @brief Method SetShadowSamplingMode_Injected, addr 0x68fa554, size 0x44, virtual false, abstract: false, final false
static inline void SetShadowSamplingMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ShadowSamplingMode  samplingMode) ;

/// @brief Method ValidateRenderTextureDesc, addr 0x68faef0, size 0x42c, virtual false, abstract: false, final false
static inline void ValidateRenderTextureDesc(::ByRef<::UnityEngine::RenderTextureDescriptor>  desc) ;

/// @brief Method WarnAboutFallbackTo16BitsDepth, addr 0x68f95b8, size 0xe4, virtual false, abstract: false, final false
static inline void WarnAboutFallbackTo16BitsDepth(::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method .ctor, addr 0x68fade0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x68fae30, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method .ctor, addr 0x68fb31c, size 0x168, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RenderTexture*  textureToCopy) ;

/// @brief Method .ctor, addr 0x68fbac0, size 0x94, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat) ;

/// @brief Method .ctor, addr 0x68fb6c0, size 0x1a4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x68fbec0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth) ;

/// @brief Method .ctor, addr 0x68fb4c0, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method .ctor, addr 0x68fb874, size 0x94, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method .ctor, addr 0x68fb908, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x68fbd8c, size 0x94, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method .ctor, addr 0x68fbe20, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x68fbb54, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method get_active, addr 0x68fa2c0, size 0x4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> get_active() ;

/// @brief Method get_antiAliasing, addr 0x68f9aa0, size 0x80, virtual false, abstract: false, final false
inline int32_t get_antiAliasing() ;

/// @brief Method get_antiAliasing_Injected, addr 0x68f9b20, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_antiAliasing_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bindTextureMS, addr 0x68f9c30, size 0x80, virtual false, abstract: false, final false
inline bool get_bindTextureMS() ;

/// @brief Method get_bindTextureMS_Injected, addr 0x68f9cb0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_bindTextureMS_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_colorBuffer, addr 0x68fa598, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer get_colorBuffer() ;

/// @brief Method get_depthBuffer, addr 0x68fa59c, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer get_depthBuffer() ;

/// @brief Method get_depthStencilFormat, addr 0x68f9538, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat() ;

/// @brief Method get_depthStencilFormat_Injected, addr 0x68f97bc, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_descriptor, addr 0x68fb484, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_descriptor() ;

/// @brief Method get_dimension, addr 0x68f8c90, size 0x80, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::TextureDimension get_dimension() ;

/// @brief Method get_dimension_Injected, addr 0x68f8d10, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::TextureDimension get_dimension_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_format, addr 0x68f92dc, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureFormat get_format() ;

/// @brief Method get_graphicsFormat, addr 0x68f8fc8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat() ;

/// @brief Method get_height, addr 0x68f8b00, size 0x80, virtual true, abstract: false, final false
inline int32_t get_height() ;

/// @brief Method get_height_Injected, addr 0x68f8b80, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_height_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sRGB, addr 0x68f9164, size 0x80, virtual false, abstract: false, final false
inline bool get_sRGB() ;

/// @brief Method get_sRGB_Injected, addr 0x68f91e4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_sRGB_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useDynamicScale, addr 0x68f9dc0, size 0x80, virtual false, abstract: false, final false
inline bool get_useDynamicScale() ;

/// @brief Method get_useDynamicScaleExplicit, addr 0x68f9f50, size 0x80, virtual false, abstract: false, final false
inline bool get_useDynamicScaleExplicit() ;

/// @brief Method get_useDynamicScaleExplicit_Injected, addr 0x68f9fd0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useDynamicScaleExplicit_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useDynamicScale_Injected, addr 0x68f9e40, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useDynamicScale_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useMipMap, addr 0x68f8fd4, size 0x80, virtual false, abstract: false, final false
inline bool get_useMipMap() ;

/// @brief Method get_useMipMap_Injected, addr 0x68f9054, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useMipMap_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_volumeDepth, addr 0x68f9910, size 0x80, virtual false, abstract: false, final false
inline int32_t get_volumeDepth() ;

/// @brief Method get_volumeDepth_Injected, addr 0x68f9990, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_volumeDepth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vrUsage, addr 0x68f9220, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::VRTextureUsage get_vrUsage() ;

/// @brief Method get_vrUsage_Injected, addr 0x68f92a0, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::VRTextureUsage get_vrUsage_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_width, addr 0x68f8970, size 0x80, virtual true, abstract: false, final false
inline int32_t get_width() ;

/// @brief Method get_width_Injected, addr 0x68f89f0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_width_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_active, addr 0x68fa2c4, size 0x4, virtual false, abstract: false, final false
static inline void set_active(::UnityEngine::RenderTexture*  value) ;

/// @brief Method set_antiAliasing, addr 0x68f9b5c, size 0x90, virtual false, abstract: false, final false
inline void set_antiAliasing(int32_t  value) ;

/// @brief Method set_antiAliasing_Injected, addr 0x68f9bec, size 0x44, virtual false, abstract: false, final false
static inline void set_antiAliasing_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_autoGenerateMips, addr 0x68f983c, size 0x90, virtual false, abstract: false, final false
inline void set_autoGenerateMips(bool  value) ;

/// @brief Method set_autoGenerateMips_Injected, addr 0x68f98cc, size 0x44, virtual false, abstract: false, final false
static inline void set_autoGenerateMips_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_depth, addr 0x68fad0c, size 0x90, virtual false, abstract: false, final false
inline void set_depth(int32_t  value) ;

/// @brief Method set_depthStencilFormat, addr 0x68f969c, size 0x90, virtual false, abstract: false, final false
inline void set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_depthStencilFormat_Injected, addr 0x68f97f8, size 0x44, virtual false, abstract: false, final false
static inline void set_depthStencilFormat_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_depth_Injected, addr 0x68fad9c, size 0x44, virtual false, abstract: false, final false
static inline void set_depth_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_dimension, addr 0x68f8d4c, size 0x90, virtual true, abstract: false, final false
inline void set_dimension(::UnityEngine::Rendering::TextureDimension  value) ;

/// @brief Method set_dimension_Injected, addr 0x68f8ddc, size 0x44, virtual false, abstract: false, final false
static inline void set_dimension_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::TextureDimension  value) ;

/// @brief Method set_enableRandomWrite, addr 0x68f9cec, size 0x90, virtual false, abstract: false, final false
inline void set_enableRandomWrite(bool  value) ;

/// @brief Method set_enableRandomWrite_Injected, addr 0x68f9d7c, size 0x44, virtual false, abstract: false, final false
static inline void set_enableRandomWrite_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_format, addr 0x68f9470, size 0xc8, virtual false, abstract: false, final false
inline void set_format(::UnityEngine::RenderTextureFormat  value) ;

/// @brief Method set_graphicsFormat, addr 0x68f8fd0, size 0x4, virtual false, abstract: false, final false
inline void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_height, addr 0x68f8bbc, size 0x90, virtual true, abstract: false, final false
inline void set_height(int32_t  value) ;

/// @brief Method set_height_Injected, addr 0x68f8c4c, size 0x44, virtual false, abstract: false, final false
static inline void set_height_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_useDynamicScale, addr 0x68f9e7c, size 0x90, virtual false, abstract: false, final false
inline void set_useDynamicScale(bool  value) ;

/// @brief Method set_useDynamicScale_Injected, addr 0x68f9f0c, size 0x44, virtual false, abstract: false, final false
static inline void set_useDynamicScale_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_useMipMap, addr 0x68f9090, size 0x90, virtual false, abstract: false, final false
inline void set_useMipMap(bool  value) ;

/// @brief Method set_useMipMap_Injected, addr 0x68f9120, size 0x44, virtual false, abstract: false, final false
static inline void set_useMipMap_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_volumeDepth, addr 0x68f99cc, size 0x90, virtual false, abstract: false, final false
inline void set_volumeDepth(int32_t  value) ;

/// @brief Method set_volumeDepth_Injected, addr 0x68f9a5c, size 0x44, virtual false, abstract: false, final false
static inline void set_volumeDepth_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_width, addr 0x68f8a2c, size 0x90, virtual true, abstract: false, final false
inline void set_width(int32_t  value) ;

/// @brief Method set_width_Injected, addr 0x68f8abc, size 0x44, virtual false, abstract: false, final false
static inline void set_width_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderTexture(RenderTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderTexture(RenderTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10213};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderTexture, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::RenderTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTexture*, "UnityEngine", "RenderTexture");
