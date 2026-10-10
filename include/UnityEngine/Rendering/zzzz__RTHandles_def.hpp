#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RTHandles)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct DepthBits;
}
namespace UnityEngine::Rendering {
struct MSAASamples;
}
namespace UnityEngine::Rendering {
struct RTHandleAllocInfo;
}
namespace UnityEngine::Rendering {
struct RTHandleProperties;
}
namespace UnityEngine::Rendering {
class RTHandleSystem;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
class ScaleFunc;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct VRTextureUsage;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RTHandles;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RTHandles*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RTHandles*, "UnityEngine.Rendering", "RTHandles");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RTHandles
class CORDL_TYPE RTHandles : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_DefaultInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultInstance, put = setStaticF_s_DefaultInstance)) ::UnityEngine::Rendering::RTHandleSystem* s_DefaultInstance;

  /// @brief Method Alloc, addr 0x6bcbb3c, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(/* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor const> descriptor, ::UnityEngine::FilterMode filterMode,
                                                          ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcc0bc, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2 scaleFactor, /* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor const> descriptor,
                                                          ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                          ::StringW name);

  /// @brief Method Alloc, addr 0x6bcbf68, size 0x154, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2 scaleFactor, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t slices,
                                                          ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension,
                                                          bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                          ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                                          ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcc25c, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2 scaleFactor, ::UnityEngine::Rendering::RTHandleAllocInfo info);

  /// @brief Method Alloc, addr 0x6bcbe08, size 0x160, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2 scaleFactor, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                          ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
                                                          bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                          bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                          ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcc59c, size 0x198, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, /* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor const> descriptor,
                                                          ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                          ::StringW name);

  /// @brief Method Alloc, addr 0x6bcc454, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t slices,
                                                          ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension,
                                                          bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                          ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                                          ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcc734, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ::UnityEngine::Rendering::RTHandleAllocInfo info);

  /// @brief Method Alloc, addr 0x6bcc300, size 0x154, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                          ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
                                                          bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                          bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                          ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcc83c, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::RenderTexture* tex, bool transferOwnership);

  /// @brief Method Alloc, addr 0x6bcc950, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RTHandle* tex);

  /// @brief Method Alloc, addr 0x6bc7688, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier tex);

  /// @brief Method Alloc, addr 0x6bcc8b8, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier tex, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcc7d0, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Texture* tex);

  /// @brief Method Alloc, addr 0x6bcb7d0, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t slices,
                                                          ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension,
                                                          bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                          ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                                          ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcba98, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, ::UnityEngine::Rendering::RTHandleAllocInfo info);

  /// @brief Method Alloc, addr 0x6bcb674, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                          ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
                                                          bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                          bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                          ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcb92c, size 0x16c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, ::UnityEngine::TextureWrapMode wrapModeU, ::UnityEngine::TextureWrapMode wrapModeV,
                                                          ::UnityEngine::TextureWrapMode wrapModeW, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                          ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                                                          int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                          bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method CalculateDimensions, addr 0x6bcb588, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int CalculateDimensions(::UnityEngine::Vector2 scaleFactor);

  /// @brief Method CalculateDimensions, addr 0x6bcb608, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int CalculateDimensions(::UnityEngine::Rendering::ScaleFunc* scaleFunc);

  /// @brief Method CalculateRatioAgainstMaxSize, addr 0x6bcccc4, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalculateRatioAgainstMaxSize(int32_t width, int32_t height);

  /// @brief Method GetFormat, addr 0x6bcbcd8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                                                                                 ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  /// @brief Method GetRTHandleAllocInfo, addr 0x6bcbce4, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandleAllocInfo GetRTHandleAllocInfo(/* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor const> desc, ::UnityEngine::FilterMode filterMode,
                                                                                 ::UnityEngine::TextureWrapMode wrapMode, int32_t anisoLevel, float_t mipMapBias, ::StringW name);

  /// @brief Method Initialize, addr 0x6bcc9c8, size 0x7c, virtual false, abstract: false, final false
  static inline void Initialize(int32_t width, int32_t height);

  /// [Obsolete("useLegacyDynamicResControl is deprecated. Please use SetHardwareDynamicResolutionState() instead. #from(2023.3)")]
  /// @brief Method Initialize, addr 0x6bcca44, size 0x94, virtual false, abstract: false, final false
  static inline void Initialize(int32_t width, int32_t height, bool useLegacyDynamicResControl);

  /// @brief Method Release, addr 0x6bccad8, size 0x7c, virtual false, abstract: false, final false
  static inline void Release(::UnityEngine::Rendering::RTHandle* rth);

  /// @brief Method ResetReferenceSize, addr 0x6bccc40, size 0x84, virtual false, abstract: false, final false
  static inline void ResetReferenceSize(int32_t width, int32_t height);

  /// @brief Method SetHardwareDynamicResolutionState, addr 0x6bccb54, size 0x6c, virtual false, abstract: false, final false
  static inline void SetHardwareDynamicResolutionState(bool hwDynamicResRequested);

  /// @brief Method SetReferenceSize, addr 0x6bccbc0, size 0x80, virtual false, abstract: false, final false
  static inline void SetReferenceSize(int32_t width, int32_t height);

  static inline ::UnityEngine::Rendering::RTHandleSystem* getStaticF_s_DefaultInstance();

  /// @brief Method get_maxHeight, addr 0x6bcb4a8, size 0x68, virtual false, abstract: false, final false
  static inline int32_t get_maxHeight();

  /// @brief Method get_maxWidth, addr 0x6bcb440, size 0x68, virtual false, abstract: false, final false
  static inline int32_t get_maxWidth();

  /// @brief Method get_rtHandleProperties, addr 0x6bcb510, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties();

  static inline void setStaticF_s_DefaultInstance(::UnityEngine::Rendering::RTHandleSystem* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandles();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RTHandles", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RTHandles(RTHandles&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RTHandles", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RTHandles(RTHandles const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9125 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RTHandles) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
