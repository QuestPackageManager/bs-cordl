#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RTHandleSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleProperties_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RTHandleSystem)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
class IDisposable;
}
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
struct RTHandleSystem_ResizeMode;
}
namespace UnityEngine::Rendering {
class RTHandleSystem___c;
}
namespace UnityEngine::Rendering {
class RTHandleSystem___c__DisplayClass37_0;
}
namespace UnityEngine::Rendering {
class RTHandleSystem___c__DisplayClass41_0;
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
struct RTHandleSystem_ResizeMode;
}
namespace UnityEngine::Rendering {
class RTHandleSystem;
}
namespace UnityEngine::Rendering {
class RTHandleSystem___c;
}
namespace UnityEngine::Rendering {
class RTHandleSystem___c__DisplayClass37_0;
}
namespace UnityEngine::Rendering {
class RTHandleSystem___c__DisplayClass41_0;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RTHandleSystem_ResizeMode);
MARK_REF_T(::UnityEngine::Rendering::RTHandleSystem*);
MARK_REF_T(::UnityEngine::Rendering::RTHandleSystem___c*);
MARK_REF_T(::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0*);
MARK_REF_T(::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RTHandleSystem_ResizeMode, "UnityEngine.Rendering", "RTHandleSystem/ResizeMode");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RTHandleSystem*, "UnityEngine.Rendering", "RTHandleSystem");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RTHandleSystem___c*, "UnityEngine.Rendering", "RTHandleSystem/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0*, "UnityEngine.Rendering", "RTHandleSystem/<>c__DisplayClass37_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0*, "UnityEngine.Rendering", "RTHandleSystem/<>c__DisplayClass41_0");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RTHandleSystem/ResizeMode
struct CORDL_TYPE RTHandleSystem_ResizeMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RTHandleSystem_ResizeMode_Unwrapped
  enum struct __RTHandleSystem_ResizeMode_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_OnDemand = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RTHandleSystem_ResizeMode_Unwrapped() const noexcept {
    return static_cast<__RTHandleSystem_ResizeMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandleSystem_ResizeMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RTHandleSystem_ResizeMode(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(0)
  static ::UnityEngine::Rendering::RTHandleSystem_ResizeMode const Auto;

  /// @brief Field OnDemand value: I32(1)
  static ::UnityEngine::Rendering::RTHandleSystem_ResizeMode const OnDemand;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9120 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem_ResizeMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RTHandleSystem_ResizeMode) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RTHandleSystem/<>c
class CORDL_TYPE RTHandleSystem___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::RTHandleSystem___c* __9;

  /// @brief Field <>9__32_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__32_0, put = setStaticF___9__32_0)) ::UnityEngine::Rendering::ScaleFunc* __9__32_0;

  static inline ::UnityEngine::Rendering::RTHandleSystem___c* New_ctor();

  /// @brief Method <Alloc>b__32_0, addr 0x6bcb3ec, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int _Alloc_b__32_0(::UnityEngine::Vector2Int refSize);

  /// @brief Method .ctor, addr 0x6bcb3e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RTHandleSystem___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::ScaleFunc* getStaticF___9__32_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::RTHandleSystem___c* value);

  static inline void setStaticF___9__32_0(::UnityEngine::Rendering::ScaleFunc* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandleSystem___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RTHandleSystem___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RTHandleSystem___c(RTHandleSystem___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RTHandleSystem___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RTHandleSystem___c(RTHandleSystem___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9121 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RTHandleSystem___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector2
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RTHandleSystem/<>c__DisplayClass37_0
class CORDL_TYPE RTHandleSystem___c__DisplayClass37_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field scaleFactor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleFactor, put = __cordl_internal_set_scaleFactor)) ::UnityEngine::Vector2 scaleFactor;

  static inline ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0* New_ctor();

  /// @brief Method <Alloc>b__0, addr 0x6bcb3f8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int _Alloc_b__0(::UnityEngine::Vector2Int refSize);

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scaleFactor() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_scaleFactor();

  constexpr void __cordl_internal_set_scaleFactor(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x6bca764, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandleSystem___c__DisplayClass37_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RTHandleSystem___c__DisplayClass37_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RTHandleSystem___c__DisplayClass37_0(RTHandleSystem___c__DisplayClass37_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RTHandleSystem___c__DisplayClass37_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RTHandleSystem___c__DisplayClass37_0(RTHandleSystem___c__DisplayClass37_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9122 };

  /// @brief Field scaleFactor, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___scaleFactor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0, ___scaleFactor) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RTHandleSystem/<>c__DisplayClass41_0
class CORDL_TYPE RTHandleSystem___c__DisplayClass41_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field scaleFunc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleFunc, put = __cordl_internal_set_scaleFunc)) ::UnityEngine::Rendering::ScaleFunc* scaleFunc;

  static inline ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0* New_ctor();

  /// @brief Method <Alloc>b__0, addr 0x6bcb414, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int _Alloc_b__0(::UnityEngine::Vector2Int refSize);

  constexpr ::UnityEngine::Rendering::ScaleFunc* const& __cordl_internal_get_scaleFunc() const;

  constexpr ::UnityEngine::Rendering::ScaleFunc*& __cordl_internal_get_scaleFunc();

  constexpr void __cordl_internal_set_scaleFunc(::UnityEngine::Rendering::ScaleFunc* value);

  /// @brief Method .ctor, addr 0x6bcad48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandleSystem___c__DisplayClass41_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RTHandleSystem___c__DisplayClass41_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RTHandleSystem___c__DisplayClass41_0(RTHandleSystem___c__DisplayClass41_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RTHandleSystem___c__DisplayClass41_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RTHandleSystem___c__DisplayClass41_0(RTHandleSystem___c__DisplayClass41_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9123 };

  /// @brief Field scaleFunc, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScaleFunc* ___scaleFunc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0, ___scaleFunc) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.RTHandle, UnityEngine.Rendering.RTHandleProperties
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RTHandleSystem
class CORDL_TYPE RTHandleSystem : public ::System::Object {
public:
  // Declarations
  using ResizeMode = ::UnityEngine::Rendering::RTHandleSystem_ResizeMode;

  using __c = ::UnityEngine::Rendering::RTHandleSystem___c;

  using __c__DisplayClass37_0 = ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass37_0;

  using __c__DisplayClass41_0 = ::UnityEngine::Rendering::RTHandleSystem___c__DisplayClass41_0;

  /// @brief Field m_AutoSizedRTs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AutoSizedRTs,
                      put = __cordl_internal_set_m_AutoSizedRTs)) ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* m_AutoSizedRTs;

  /// @brief Field m_AutoSizedRTsArray, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AutoSizedRTsArray, put = __cordl_internal_set_m_AutoSizedRTsArray)) ::ArrayW<::UnityEngine::Rendering::RTHandle*> m_AutoSizedRTsArray;

  /// @brief Field m_HardwareDynamicResRequested, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HardwareDynamicResRequested, put = __cordl_internal_set_m_HardwareDynamicResRequested)) bool m_HardwareDynamicResRequested;

  /// @brief Field m_MaxHeights, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxHeights, put = __cordl_internal_set_m_MaxHeights)) int32_t m_MaxHeights;

  /// @brief Field m_MaxWidths, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxWidths, put = __cordl_internal_set_m_MaxWidths)) int32_t m_MaxWidths;

  /// @brief Field m_RTHandleProperties, offset 0x30, size 0x30
  __declspec(property(get = __cordl_internal_get_m_RTHandleProperties, put = __cordl_internal_set_m_RTHandleProperties)) ::UnityEngine::Rendering::RTHandleProperties m_RTHandleProperties;

  /// @brief Field m_ResizeOnDemandRTs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResizeOnDemandRTs,
                      put = __cordl_internal_set_m_ResizeOnDemandRTs)) ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* m_ResizeOnDemandRTs;

  __declspec(property(get = get_rtHandleProperties)) ::UnityEngine::Rendering::RTHandleProperties rtHandleProperties;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Alloc, addr 0x6bc9fc0, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2 scaleFactor, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t slices,
                                                   ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension,
                                                   bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                   ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                                   ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bca46c, size 0x2f8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2 scaleFactor, ::UnityEngine::Rendering::RTHandleAllocInfo info);

  /// @brief Method Alloc, addr 0x6bca308, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Vector2 scaleFactor, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                   ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                                                   int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                   bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcaad4, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t slices,
                                                   ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension,
                                                   bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                   ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                                   ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcabd4, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, ::UnityEngine::Rendering::RTHandleAllocInfo info);

  /// @brief Method Alloc, addr 0x6bca98c, size 0x148, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::ScaleFunc* scaleFunc, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                   ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                                                   int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                   bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcb000, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RTHandle* tex);

  /// @brief Method Alloc, addr 0x6bcad4c, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::RenderTexture* texture, bool transferOwnership);

  /// @brief Method Alloc, addr 0x6bcaee8, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier texture);

  /// @brief Method Alloc, addr 0x6bcaf60, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Rendering::RenderTargetIdentifier texture, ::StringW name);

  /// @brief Method Alloc, addr 0x6bcae1c, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(::UnityEngine::Texture* texture);

  /// @brief Method Alloc, addr 0x6bc957c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t slices, ::UnityEngine::FilterMode filterMode,
                                                   ::UnityEngine::TextureWrapMode wrapMode, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap,
                                                   bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                   bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                   ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bc9350, size 0x22c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::TextureWrapMode wrapModeU,
                                                   ::UnityEngine::TextureWrapMode wrapModeV, ::UnityEngine::TextureWrapMode wrapModeW, int32_t slices, ::UnityEngine::FilterMode filterMode,
                                                   ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                                                   int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                   bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bc3eac, size 0x238, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, ::UnityEngine::Rendering::RTHandleAllocInfo info);

  /// @brief Method Alloc, addr 0x6bc91e0, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                   ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                                                   int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                   bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method Alloc, addr 0x6bc9618, size 0x17c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, ::UnityEngine::TextureWrapMode wrapModeU, ::UnityEngine::TextureWrapMode wrapModeV,
                                                   ::UnityEngine::TextureWrapMode wrapModeW, int32_t slices, ::UnityEngine::Rendering::DepthBits depthBufferBits,
                                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::FilterMode filterMode,
                                                   ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap,
                                                   int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale,
                                                   bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, ::StringW name);

  /// @brief Method AllocAutoSizedRenderTexture, addr 0x6bca768, size 0x1e0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* AllocAutoSizedRenderTexture(int32_t width, int32_t height, ::UnityEngine::Rendering::RTHandleAllocInfo info);

  /// @brief Method AllocAutoSizedRenderTexture, addr 0x6bca0cc, size 0x23c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* AllocAutoSizedRenderTexture(int32_t width, int32_t height, int32_t slices, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                         ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                                                         ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips,
                                                                         bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                                         bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit, ::UnityEngine::RenderTextureMemoryless memoryless,
                                                                         ::UnityEngine::VRTextureUsage vrUsage, bool enableShadingRate, ::StringW name);

  /// @brief Method CalculateDimensions, addr 0x6bc9df0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int CalculateDimensions(::UnityEngine::Vector2 scaleFactor);

  /// @brief Method CalculateDimensions, addr 0x6bc9df8, size 0x1c8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int CalculateDimensions(::UnityEngine::Vector2 scaleFactor, ::UnityEngine::Vector2Int size);

  /// @brief Method CalculateDimensions, addr 0x6bca948, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int CalculateDimensions(::UnityEngine::Rendering::ScaleFunc* scaleFunc);

  /// @brief Method CalculateRatioAgainstMaxSize, addr 0x6bc46e0, size 0x248, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 CalculateRatioAgainstMaxSize(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2Int> viewportSize);

  /// @brief Method CreateRenderTexture, addr 0x6bc9794, size 0x59c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> CreateRenderTexture(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t slices,
                                                                    ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapModeU, ::UnityEngine::TextureWrapMode wrapModeV,
                                                                    ::UnityEngine::TextureWrapMode wrapModeW, ::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite,
                                                                    bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias,
                                                                    ::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, bool useDynamicScaleExplicit,
                                                                    ::UnityEngine::RenderTextureMemoryless memoryless, ::UnityEngine::VRTextureUsage vrUsage, bool enableShadingRate, ::StringW name);

  /// @brief Method DemandResize, addr 0x6bc8f40, size 0x290, virtual false, abstract: false, final false
  inline void DemandResize(::UnityEngine::Rendering::RTHandle* rth);

  /// @brief Method Dispose, addr 0x6bc4ba8, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6bc83ec, size 0x1dc, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DumpRTInfo, addr 0x6bcb078, size 0x31c, virtual false, abstract: false, final false
  inline ::StringW DumpRTInfo();

  /// @brief Method GetMaxHeight, addr 0x6bc91d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetMaxHeight();

  /// @brief Method GetMaxWidth, addr 0x6bc91d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetMaxWidth();

  /// @brief Method GetStencilFormat, addr 0x6bc9d30, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  /// @brief Method Initialize, addr 0x6bc85c8, size 0x2dc, virtual false, abstract: false, final false
  inline void Initialize(int32_t width, int32_t height);

  /// [Obsolete("useLegacyDynamicResControl is deprecated. Please use SetHardwareDynamicResolutionState() instead. #from(2023.3)")]
  /// @brief Method Initialize, addr 0x6bc88a4, size 0x2c, virtual false, abstract: false, final false
  inline void Initialize(int32_t width, int32_t height, bool useLegacyDynamicResControl);

  static inline ::UnityEngine::Rendering::RTHandleSystem* New_ctor();

  /// @brief Method Release, addr 0x6bc41d8, size 0x10, virtual false, abstract: false, final false
  inline void Release(::UnityEngine::Rendering::RTHandle* rth);

  /// @brief Method Remove, addr 0x6bc7b24, size 0x64, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Rendering::RTHandle* rth);

  /// @brief Method ResetReferenceSize, addr 0x6bc45f8, size 0xc, virtual false, abstract: false, final false
  inline void ResetReferenceSize(int32_t width, int32_t height);

  /// @brief Method Resize, addr 0x6bc8a7c, size 0x328, virtual false, abstract: false, final false
  inline void Resize(int32_t width, int32_t height, bool sizeChanged);

  /// @brief Method SetHardwareDynamicResolutionState, addr 0x6bc8da4, size 0x19c, virtual false, abstract: false, final false
  inline void SetHardwareDynamicResolutionState(bool enableHWDynamicRes);

  /// @brief Method SetReferenceSize, addr 0x6bc45d4, size 0x8, virtual false, abstract: false, final false
  inline void SetReferenceSize(int32_t width, int32_t height);

  /// @brief Method SetReferenceSize, addr 0x6bc88d0, size 0x1ac, virtual false, abstract: false, final false
  inline void SetReferenceSize(int32_t width, int32_t height, bool reset);

  /// @brief Method SwitchResizeMode, addr 0x6bc3a10, size 0x128, virtual false, abstract: false, final false
  inline void SwitchResizeMode(::UnityEngine::Rendering::RTHandle* rth, ::UnityEngine::Rendering::RTHandleSystem_ResizeMode mode);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* const& __cordl_internal_get_m_AutoSizedRTs() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>*& __cordl_internal_get_m_AutoSizedRTs();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& __cordl_internal_get_m_AutoSizedRTsArray() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& __cordl_internal_get_m_AutoSizedRTsArray();

  constexpr bool const& __cordl_internal_get_m_HardwareDynamicResRequested() const;

  constexpr bool& __cordl_internal_get_m_HardwareDynamicResRequested();

  constexpr int32_t const& __cordl_internal_get_m_MaxHeights() const;

  constexpr int32_t& __cordl_internal_get_m_MaxHeights();

  constexpr int32_t const& __cordl_internal_get_m_MaxWidths() const;

  constexpr int32_t& __cordl_internal_get_m_MaxWidths();

  constexpr ::UnityEngine::Rendering::RTHandleProperties const& __cordl_internal_get_m_RTHandleProperties() const;

  constexpr ::UnityEngine::Rendering::RTHandleProperties& __cordl_internal_get_m_RTHandleProperties();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* const& __cordl_internal_get_m_ResizeOnDemandRTs() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>*& __cordl_internal_get_m_ResizeOnDemandRTs();

  constexpr void __cordl_internal_set_m_AutoSizedRTs(::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* value);

  constexpr void __cordl_internal_set_m_AutoSizedRTsArray(::ArrayW<::UnityEngine::Rendering::RTHandle*> value);

  constexpr void __cordl_internal_set_m_HardwareDynamicResRequested(bool value);

  constexpr void __cordl_internal_set_m_MaxHeights(int32_t value);

  constexpr void __cordl_internal_set_m_MaxWidths(int32_t value);

  constexpr void __cordl_internal_set_m_RTHandleProperties(::UnityEngine::Rendering::RTHandleProperties value);

  constexpr void __cordl_internal_set_m_ResizeOnDemandRTs(::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* value);

  /// @brief Method .ctor, addr 0x6bc4c7c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_rtHandleProperties, addr 0x6bc83d8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RTHandleSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RTHandleSystem", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RTHandleSystem(RTHandleSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RTHandleSystem", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RTHandleSystem(RTHandleSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9124 };

  /// @brief Field m_HardwareDynamicResRequested, offset: 0x10, size: 0x1, def value: None
  bool ___m_HardwareDynamicResRequested;

  /// @brief Field m_AutoSizedRTs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* ___m_AutoSizedRTs;

  /// @brief Field m_AutoSizedRTsArray, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*> ___m_AutoSizedRTsArray;

  /// @brief Field m_ResizeOnDemandRTs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::RTHandle*>* ___m_ResizeOnDemandRTs;

  /// @brief Field m_RTHandleProperties, offset: 0x30, size: 0x30, def value: None
  ::UnityEngine::Rendering::RTHandleProperties ___m_RTHandleProperties;

  /// @brief Field m_MaxWidths, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_MaxWidths;

  /// @brief Field m_MaxHeights, offset: 0x64, size: 0x4, def value: None
  int32_t ___m_MaxHeights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_HardwareDynamicResRequested) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_AutoSizedRTs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_AutoSizedRTsArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_ResizeOnDemandRTs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_RTHandleProperties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_MaxWidths) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RTHandleSystem, ___m_MaxHeights) == 0x64, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RTHandleSystem) == 0x68, "Size mismatch!");

} // namespace UnityEngine::Rendering
