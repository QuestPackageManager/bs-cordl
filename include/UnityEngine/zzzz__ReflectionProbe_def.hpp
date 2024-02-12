#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbe)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeClearFlags;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeMode;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeRefreshMode;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeTimeSlicingMode;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeType;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct __ReflectionProbe__ReflectionProbeEvent;
}
// Forward declare root types
namespace UnityEngine {
struct __ReflectionProbe__ReflectionProbeEvent;
}
namespace UnityEngine {
class ReflectionProbe;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__ReflectionProbe__ReflectionProbeEvent);
MARK_REF_PTR_T(::UnityEngine::ReflectionProbe);
// Type: ::ReflectionProbeEvent
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8889))
// CS Name: ::ReflectionProbe::ReflectionProbeEvent
struct CORDL_TYPE __ReflectionProbe__ReflectionProbeEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ReflectionProbe__ReflectionProbeEvent_Unwrapped
  enum struct ____ReflectionProbe__ReflectionProbeEvent_Unwrapped : int32_t {
    __E_ReflectionProbeAdded = static_cast<int32_t>(0x0),
    __E_ReflectionProbeRemoved = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ReflectionProbe__ReflectionProbeEvent_Unwrapped() const noexcept {
    return static_cast<____ReflectionProbe__ReflectionProbeEvent_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ReflectionProbe__ReflectionProbeEvent(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionProbe__ReflectionProbeEvent();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ReflectionProbeAdded value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent const ReflectionProbeAdded;

  /// @brief Field ReflectionProbeRemoved value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent const ReflectionProbeRemoved;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ReflectionProbe__ReflectionProbeEvent, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ReflectionProbe__ReflectionProbeEvent, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::ReflectionProbe
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8931))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8890))
// CS Name: ::UnityEngine::ReflectionProbe*
class CORDL_TYPE ReflectionProbe : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using ReflectionProbeEvent = ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent;

  /// @brief Field reflectionProbeChanged, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_reflectionProbeChanged,
               put = setStaticF_reflectionProbeChanged))::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* reflectionProbeChanged;

  /// @brief Field defaultReflectionSet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultReflectionSet, put = setStaticF_defaultReflectionSet))::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* defaultReflectionSet;

  /// @brief Field defaultReflectionTexture, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultReflectionTexture, put = setStaticF_defaultReflectionTexture))::System::Action_1<::UnityW<::UnityEngine::Texture>>* defaultReflectionTexture;

  __declspec(property(get = get_type, put = set_type))::UnityEngine::Rendering::ReflectionProbeType type;

  __declspec(property(get = get_size, put = set_size))::UnityEngine::Vector3 size;

  __declspec(property(get = get_center, put = set_center))::UnityEngine::Vector3 center;

  __declspec(property(get = get_nearClipPlane, put = set_nearClipPlane)) float_t nearClipPlane;

  __declspec(property(get = get_farClipPlane, put = set_farClipPlane)) float_t farClipPlane;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  __declspec(property(get = get_bounds))::UnityEngine::Bounds bounds;

  __declspec(property(get = get_hdr, put = set_hdr)) bool hdr;

  __declspec(property(get = get_renderDynamicObjects, put = set_renderDynamicObjects)) bool renderDynamicObjects;

  __declspec(property(get = get_shadowDistance, put = set_shadowDistance)) float_t shadowDistance;

  __declspec(property(get = get_resolution, put = set_resolution)) int32_t resolution;

  __declspec(property(get = get_cullingMask, put = set_cullingMask)) int32_t cullingMask;

  __declspec(property(get = get_clearFlags, put = set_clearFlags))::UnityEngine::Rendering::ReflectionProbeClearFlags clearFlags;

  __declspec(property(get = get_backgroundColor, put = set_backgroundColor))::UnityEngine::Color backgroundColor;

  __declspec(property(get = get_blendDistance, put = set_blendDistance)) float_t blendDistance;

  __declspec(property(get = get_boxProjection, put = set_boxProjection)) bool boxProjection;

  __declspec(property(get = get_mode, put = set_mode))::UnityEngine::Rendering::ReflectionProbeMode mode;

  __declspec(property(get = get_importance, put = set_importance)) int32_t importance;

  __declspec(property(get = get_refreshMode, put = set_refreshMode))::UnityEngine::Rendering::ReflectionProbeRefreshMode refreshMode;

  __declspec(property(get = get_timeSlicingMode, put = set_timeSlicingMode))::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode;

  __declspec(property(get = get_bakedTexture, put = set_bakedTexture))::UnityW<::UnityEngine::Texture> bakedTexture;

  __declspec(property(get = get_customBakedTexture, put = set_customBakedTexture))::UnityW<::UnityEngine::Texture> customBakedTexture;

  __declspec(property(get = get_realtimeTexture, put = set_realtimeTexture))::UnityW<::UnityEngine::RenderTexture> realtimeTexture;

  __declspec(property(get = get_texture))::UnityW<::UnityEngine::Texture> texture;

  __declspec(property(get = get_textureHDRDecodeValues))::UnityEngine::Vector4 textureHDRDecodeValues;

  static inline void setStaticF_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* value);

  static inline ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* getStaticF_reflectionProbeChanged();

  static inline void setStaticF_defaultReflectionSet(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value);

  static inline ::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* getStaticF_defaultReflectionSet();

  static inline void setStaticF_defaultReflectionTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value);

  static inline ::System::Action_1<::UnityW<::UnityEngine::Texture>>* getStaticF_defaultReflectionTexture();

  /// @brief Method get_type, addr 0x2cc942c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeType get_type();

  /// @brief Method set_type, addr 0x2cc9468, size 0x44, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::Rendering::ReflectionProbeType value);

  /// @brief Method get_size, addr 0x2cc94ac, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method set_size, addr 0x2cc954c, size 0x54, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  /// @brief Method get_center, addr 0x2cc95e4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method set_center, addr 0x2cc9684, size 0x54, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method get_nearClipPlane, addr 0x2cc971c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_nearClipPlane();

  /// @brief Method set_nearClipPlane, addr 0x2cc9758, size 0x4c, virtual false, abstract: false, final false
  inline void set_nearClipPlane(float_t value);

  /// @brief Method get_farClipPlane, addr 0x2cc97a4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_farClipPlane();

  /// @brief Method set_farClipPlane, addr 0x2cc97e0, size 0x4c, virtual false, abstract: false, final false
  inline void set_farClipPlane(float_t value);

  /// @brief Method get_intensity, addr 0x2cc982c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method set_intensity, addr 0x2cc9868, size 0x4c, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

  /// @brief Method get_bounds, addr 0x2cc98b4, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_hdr, addr 0x2cc9960, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hdr();

  /// @brief Method set_hdr, addr 0x2cc999c, size 0x44, virtual false, abstract: false, final false
  inline void set_hdr(bool value);

  /// @brief Method get_renderDynamicObjects, addr 0x2cc99e0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_renderDynamicObjects();

  /// @brief Method set_renderDynamicObjects, addr 0x2cc9a1c, size 0x44, virtual false, abstract: false, final false
  inline void set_renderDynamicObjects(bool value);

  /// @brief Method get_shadowDistance, addr 0x2cc9a60, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_shadowDistance();

  /// @brief Method set_shadowDistance, addr 0x2cc9a9c, size 0x4c, virtual false, abstract: false, final false
  inline void set_shadowDistance(float_t value);

  /// @brief Method get_resolution, addr 0x2cc9ae8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_resolution();

  /// @brief Method set_resolution, addr 0x2cc9b24, size 0x44, virtual false, abstract: false, final false
  inline void set_resolution(int32_t value);

  /// @brief Method get_cullingMask, addr 0x2cc9b68, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_cullingMask();

  /// @brief Method set_cullingMask, addr 0x2cc9ba4, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingMask(int32_t value);

  /// @brief Method get_clearFlags, addr 0x2cc9be8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeClearFlags get_clearFlags();

  /// @brief Method set_clearFlags, addr 0x2cc9c24, size 0x44, virtual false, abstract: false, final false
  inline void set_clearFlags(::UnityEngine::Rendering::ReflectionProbeClearFlags value);

  /// @brief Method get_backgroundColor, addr 0x2cc9c68, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method set_backgroundColor, addr 0x2cc9d04, size 0x54, virtual false, abstract: false, final false
  inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method get_blendDistance, addr 0x2cc9d9c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_blendDistance();

  /// @brief Method set_blendDistance, addr 0x2cc9dd8, size 0x4c, virtual false, abstract: false, final false
  inline void set_blendDistance(float_t value);

  /// @brief Method get_boxProjection, addr 0x2cc9e24, size 0x3c, virtual false, abstract: false, final false
  inline bool get_boxProjection();

  /// @brief Method set_boxProjection, addr 0x2cc9e60, size 0x44, virtual false, abstract: false, final false
  inline void set_boxProjection(bool value);

  /// @brief Method get_mode, addr 0x2cc9ea4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeMode get_mode();

  /// @brief Method set_mode, addr 0x2cc9ee0, size 0x44, virtual false, abstract: false, final false
  inline void set_mode(::UnityEngine::Rendering::ReflectionProbeMode value);

  /// @brief Method get_importance, addr 0x2cc9f24, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_importance();

  /// @brief Method set_importance, addr 0x2cc9f60, size 0x44, virtual false, abstract: false, final false
  inline void set_importance(int32_t value);

  /// @brief Method get_refreshMode, addr 0x2cc9fa4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode();

  /// @brief Method set_refreshMode, addr 0x2cc9fe0, size 0x44, virtual false, abstract: false, final false
  inline void set_refreshMode(::UnityEngine::Rendering::ReflectionProbeRefreshMode value);

  /// @brief Method get_timeSlicingMode, addr 0x2cca024, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode get_timeSlicingMode();

  /// @brief Method set_timeSlicingMode, addr 0x2cca060, size 0x44, virtual false, abstract: false, final false
  inline void set_timeSlicingMode(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode value);

  /// @brief Method get_bakedTexture, addr 0x2cca0a4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_bakedTexture();

  /// @brief Method set_bakedTexture, addr 0x2cca0e0, size 0x44, virtual false, abstract: false, final false
  inline void set_bakedTexture(::UnityEngine::Texture* value);

  /// @brief Method get_customBakedTexture, addr 0x2cca124, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_customBakedTexture();

  /// @brief Method set_customBakedTexture, addr 0x2cca160, size 0x44, virtual false, abstract: false, final false
  inline void set_customBakedTexture(::UnityEngine::Texture* value);

  /// @brief Method get_realtimeTexture, addr 0x2cca1a4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_realtimeTexture();

  /// @brief Method set_realtimeTexture, addr 0x2cca1e0, size 0x44, virtual false, abstract: false, final false
  inline void set_realtimeTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method get_texture, addr 0x2cca224, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_texture();

  /// @brief Method get_textureHDRDecodeValues, addr 0x2cca260, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_textureHDRDecodeValues();

  /// @brief Method Reset, addr 0x2cca2fc, size 0x3c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method RenderProbe, addr 0x2cca338, size 0x8, virtual false, abstract: false, final false
  inline int32_t RenderProbe();

  /// @brief Method RenderProbe, addr 0x2cca340, size 0x7c, virtual false, abstract: false, final false
  inline int32_t RenderProbe(::UnityEngine::RenderTexture* targetTexture);

  /// @brief Method IsFinishedRendering, addr 0x2cca410, size 0x44, virtual false, abstract: false, final false
  inline bool IsFinishedRendering(int32_t renderId);

  /// @brief Method ScheduleRender, addr 0x2cca3bc, size 0x54, virtual false, abstract: false, final false
  inline int32_t ScheduleRender(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode, ::UnityEngine::RenderTexture* targetTexture);

  /// @brief Method BlendCubemap, addr 0x2cca454, size 0x64, virtual false, abstract: false, final false
  static inline bool BlendCubemap(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst, float_t blend, ::UnityEngine::RenderTexture* target);

  /// @brief Method UpdateCachedState, addr 0x2cca4b8, size 0x28, virtual false, abstract: false, final false
  static inline void UpdateCachedState();

  /// @brief Method get_minBakedCubemapResolution, addr 0x2cca4e0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_minBakedCubemapResolution();

  /// @brief Method get_maxBakedCubemapResolution, addr 0x2cca508, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxBakedCubemapResolution();

  /// @brief Method get_defaultTextureHDRDecodeValues, addr 0x2cca530, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 get_defaultTextureHDRDecodeValues();

  /// @brief Method get_defaultTexture, addr 0x2cca5b4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> get_defaultTexture();

  /// @brief Method add_reflectionProbeChanged, addr 0x2cca5dc, size 0xcc, virtual false, abstract: false, final false
  static inline void add_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* value);

  /// @brief Method remove_reflectionProbeChanged, addr 0x2cca6a8, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* value);

  /// @brief Method add_defaultReflectionSet, addr 0x2cca774, size 0xd0, virtual false, abstract: false, final false
  static inline void add_defaultReflectionSet(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value);

  /// @brief Method remove_defaultReflectionSet, addr 0x2cca844, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_defaultReflectionSet(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value);

  /// @brief Method add_defaultReflectionTexture, addr 0x2cca914, size 0xd0, virtual false, abstract: false, final false
  static inline void add_defaultReflectionTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value);

  /// @brief Method remove_defaultReflectionTexture, addr 0x2cca9e4, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_defaultReflectionTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value);

  /// @brief Method CallReflectionProbeEvent, addr 0x2ccaab4, size 0x80, virtual false, abstract: false, final false
  static inline void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe* probe, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent probeEvent);

  /// @brief Method CallSetDefaultReflection, addr 0x2ccab34, size 0x6c, virtual false, abstract: false, final false
  static inline void CallSetDefaultReflection(::UnityEngine::Texture* defaultReflectionCubemap);

  static inline ::UnityEngine::ReflectionProbe* New_ctor();

  /// @brief Method .ctor, addr 0x2ccaba0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_size_Injected, addr 0x2cc9508, size 0x44, virtual false, abstract: false, final false
  inline void get_size_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_size_Injected, addr 0x2cc95a0, size 0x44, virtual false, abstract: false, final false
  inline void set_size_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_center_Injected, addr 0x2cc9640, size 0x44, virtual false, abstract: false, final false
  inline void get_center_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_center_Injected, addr 0x2cc96d8, size 0x44, virtual false, abstract: false, final false
  inline void set_center_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_bounds_Injected, addr 0x2cc991c, size 0x44, virtual false, abstract: false, final false
  inline void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_backgroundColor_Injected, addr 0x2cc9cc0, size 0x44, virtual false, abstract: false, final false
  inline void get_backgroundColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method set_backgroundColor_Injected, addr 0x2cc9d58, size 0x44, virtual false, abstract: false, final false
  inline void set_backgroundColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method get_textureHDRDecodeValues_Injected, addr 0x2cca2b8, size 0x44, virtual false, abstract: false, final false
  inline void get_textureHDRDecodeValues_Injected(ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method get_defaultTextureHDRDecodeValues_Injected, addr 0x2cca578, size 0x3c, virtual false, abstract: false, final false
  static inline void get_defaultTextureHDRDecodeValues_Injected(ByRef<::UnityEngine::Vector4> ret);

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbe(ReflectionProbe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbe(ReflectionProbe const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbe();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ReflectionProbe, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ReflectionProbe__ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
NEED_NO_BOX(::UnityEngine::ReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe*, "UnityEngine", "ReflectionProbe");
