#pragma once
// IWYU pragma private; include "UnityEngine/ReflectionProbe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbe)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
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
namespace UnityEngine {
class __ReflectionProbe____c__DisplayClass95_0;
}
namespace UnityEngine {
class __ReflectionProbe____c__DisplayClass98_0;
}
// Forward declare root types
namespace UnityEngine {
struct __ReflectionProbe__ReflectionProbeEvent;
}
namespace UnityEngine {
class ReflectionProbe;
}
namespace UnityEngine {
class __ReflectionProbe____c__DisplayClass95_0;
}
namespace UnityEngine {
class __ReflectionProbe____c__DisplayClass98_0;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__ReflectionProbe__ReflectionProbeEvent);
MARK_REF_PTR_T(::UnityEngine::ReflectionProbe);
MARK_REF_PTR_T(::UnityEngine::__ReflectionProbe____c__DisplayClass95_0);
MARK_REF_PTR_T(::UnityEngine::__ReflectionProbe____c__DisplayClass98_0);
// Type: ::ReflectionProbeEvent
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionProbe__ReflectionProbeEvent();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ReflectionProbe__ReflectionProbeEvent(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ReflectionProbeAdded value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent const ReflectionProbeAdded;

  /// @brief Field ReflectionProbeRemoved value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent const ReflectionProbeRemoved;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10642 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ReflectionProbe__ReflectionProbeEvent, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ReflectionProbe__ReflectionProbeEvent, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::<>c__DisplayClass95_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::ReflectionProbe::<>c__DisplayClass95_0*
class CORDL_TYPE __ReflectionProbe____c__DisplayClass95_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value;

  static inline ::UnityEngine::__ReflectionProbe____c__DisplayClass95_0* New_ctor();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Cubemap>>*& __cordl_internal_get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Cubemap>>*> const& __cordl_internal_get_value() const;

  constexpr void __cordl_internal_set_value(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value);

  /// @brief Method <add_defaultReflectionSet>b__0, addr 0x47f3db0, size 0x80, virtual false, abstract: false, final false
  inline void _add_defaultReflectionSet_b__0(::UnityEngine::Texture* b);

  /// @brief Method <add_defaultReflectionSet>b__1, addr 0x47f3d68, size 0x48, virtual false, abstract: false, final false
  inline bool _add_defaultReflectionSet_b__1(::System::Action_1<::UnityW<::UnityEngine::Texture>>* h);

  /// @brief Method .ctor, addr 0x47f3740, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionProbe____c__DisplayClass95_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionProbe____c__DisplayClass95_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionProbe____c__DisplayClass95_0(__ReflectionProbe____c__DisplayClass95_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionProbe____c__DisplayClass95_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionProbe____c__DisplayClass95_0(__ReflectionProbe____c__DisplayClass95_0 const&) = delete;

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* ___value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10643 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ReflectionProbe____c__DisplayClass95_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ReflectionProbe____c__DisplayClass95_0, ___value) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::<>c__DisplayClass98_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::ReflectionProbe::<>c__DisplayClass98_0*
class CORDL_TYPE __ReflectionProbe____c__DisplayClass98_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Action_1<::UnityW<::UnityEngine::Texture>>* value;

  static inline ::UnityEngine::__ReflectionProbe____c__DisplayClass98_0* New_ctor();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Texture>>*& __cordl_internal_get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Texture>>*> const& __cordl_internal_get_value() const;

  constexpr void __cordl_internal_set_value(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value);

  /// @brief Method <add_defaultReflectionTexture>b__0, addr 0x47f3e30, size 0x48, virtual false, abstract: false, final false
  inline bool _add_defaultReflectionTexture_b__0(::System::Action_1<::UnityW<::UnityEngine::Texture>>* h);

  /// @brief Method .ctor, addr 0x47f3af8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionProbe____c__DisplayClass98_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionProbe____c__DisplayClass98_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionProbe____c__DisplayClass98_0(__ReflectionProbe____c__DisplayClass98_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionProbe____c__DisplayClass98_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionProbe____c__DisplayClass98_0(__ReflectionProbe____c__DisplayClass98_0 const&) = delete;

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Texture>>* ___value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10644 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ReflectionProbe____c__DisplayClass98_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__ReflectionProbe____c__DisplayClass98_0, ___value) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::ReflectionProbe
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ReflectionProbe*
class CORDL_TYPE ReflectionProbe : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using ReflectionProbeEvent = ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent;

  using __c__DisplayClass95_0 = ::UnityEngine::__ReflectionProbe____c__DisplayClass95_0;

  using __c__DisplayClass98_0 = ::UnityEngine::__ReflectionProbe____c__DisplayClass98_0;

  __declspec(property(get = get_backgroundColor, put = set_backgroundColor)) ::UnityEngine::Color backgroundColor;

  __declspec(property(get = get_bakedTexture, put = set_bakedTexture)) ::UnityW<::UnityEngine::Texture> bakedTexture;

  __declspec(property(get = get_blendDistance, put = set_blendDistance)) float_t blendDistance;

  __declspec(property(get = get_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_boxProjection, put = set_boxProjection)) bool boxProjection;

  __declspec(property(get = get_center, put = set_center)) ::UnityEngine::Vector3 center;

  __declspec(property(get = get_clearFlags, put = set_clearFlags)) ::UnityEngine::Rendering::ReflectionProbeClearFlags clearFlags;

  __declspec(property(get = get_cullingMask, put = set_cullingMask)) int32_t cullingMask;

  __declspec(property(get = get_customBakedTexture, put = set_customBakedTexture)) ::UnityW<::UnityEngine::Texture> customBakedTexture;

  __declspec(property(get = get_farClipPlane, put = set_farClipPlane)) float_t farClipPlane;

  __declspec(property(get = get_hdr, put = set_hdr)) bool hdr;

  __declspec(property(get = get_importance, put = set_importance)) int32_t importance;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  __declspec(property(get = get_mode, put = set_mode)) ::UnityEngine::Rendering::ReflectionProbeMode mode;

  __declspec(property(get = get_nearClipPlane, put = set_nearClipPlane)) float_t nearClipPlane;

  __declspec(property(get = get_realtimeTexture, put = set_realtimeTexture)) ::UnityW<::UnityEngine::RenderTexture> realtimeTexture;

  /// @brief Field reflectionProbeChanged, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_reflectionProbeChanged,
      put = setStaticF_reflectionProbeChanged)) ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* reflectionProbeChanged;

  __declspec(property(get = get_refreshMode, put = set_refreshMode)) ::UnityEngine::Rendering::ReflectionProbeRefreshMode refreshMode;

  /// @brief Field registeredDefaultReflectionSetActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_registeredDefaultReflectionSetActions,
                             put = setStaticF_registeredDefaultReflectionSetActions)) ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*
      registeredDefaultReflectionSetActions;

  /// @brief Field registeredDefaultReflectionTextureActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_registeredDefaultReflectionTextureActions,
                             put = setStaticF_registeredDefaultReflectionTextureActions)) ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*
      registeredDefaultReflectionTextureActions;

  __declspec(property(get = get_renderDynamicObjects, put = set_renderDynamicObjects)) bool renderDynamicObjects;

  __declspec(property(get = get_resolution, put = set_resolution)) int32_t resolution;

  __declspec(property(get = get_shadowDistance, put = set_shadowDistance)) float_t shadowDistance;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector3 size;

  __declspec(property(get = get_texture)) ::UnityW<::UnityEngine::Texture> texture;

  __declspec(property(get = get_textureHDRDecodeValues)) ::UnityEngine::Vector4 textureHDRDecodeValues;

  __declspec(property(get = get_timeSlicingMode, put = set_timeSlicingMode)) ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode;

  __declspec(property(get = get_type, put = set_type)) ::UnityEngine::Rendering::ReflectionProbeType type;

  /// @brief Method BlendCubemap, addr 0x47f3138, size 0x64, virtual false, abstract: false, final false
  static inline bool BlendCubemap(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst, float_t blend, ::UnityEngine::RenderTexture* target);

  /// @brief Method CallReflectionProbeEvent, addr 0x47f34e0, size 0x90, virtual false, abstract: false, final false
  static inline void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe* probe, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent probeEvent);

  /// @brief Method CallSetDefaultReflection, addr 0x47f3b00, size 0x184, virtual false, abstract: false, final false
  static inline void CallSetDefaultReflection(::UnityEngine::Texture* defaultReflectionCubemap);

  /// @brief Method IsFinishedRendering, addr 0x47f30f4, size 0x44, virtual false, abstract: false, final false
  inline bool IsFinishedRendering(int32_t renderId);

  static inline ::UnityEngine::ReflectionProbe* New_ctor();

  /// @brief Method RenderProbe, addr 0x47f301c, size 0x8, virtual false, abstract: false, final false
  inline int32_t RenderProbe();

  /// @brief Method RenderProbe, addr 0x47f3024, size 0x7c, virtual false, abstract: false, final false
  inline int32_t RenderProbe(::UnityEngine::RenderTexture* targetTexture);

  /// @brief Method Reset, addr 0x47f2fe0, size 0x3c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ScheduleRender, addr 0x47f30a0, size 0x54, virtual false, abstract: false, final false
  inline int32_t ScheduleRender(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode, ::UnityEngine::RenderTexture* targetTexture);

  /// @brief Method UpdateCachedState, addr 0x47f319c, size 0x28, virtual false, abstract: false, final false
  static inline void UpdateCachedState();

  /// @brief Method .ctor, addr 0x47f3c84, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_defaultReflectionSet, addr 0x47f3570, size 0x1d0, virtual false, abstract: false, final false
  static inline void add_defaultReflectionSet(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value);

  /// @brief Method add_defaultReflectionTexture, addr 0x47f3748, size 0x208, virtual false, abstract: false, final false
  static inline void add_defaultReflectionTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value);

  /// @brief Method add_reflectionProbeChanged, addr 0x47f3300, size 0xf0, virtual false, abstract: false, final false
  static inline void add_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* value);

  static inline ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* getStaticF_reflectionProbeChanged();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionSetActions();

  static inline ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionTextureActions();

  /// @brief Method get_backgroundColor, addr 0x47f294c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundColor_Injected, addr 0x47f29a4, size 0x44, virtual false, abstract: false, final false
  inline void get_backgroundColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_bakedTexture, addr 0x47f2d88, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_bakedTexture();

  /// @brief Method get_blendDistance, addr 0x47f2a80, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_blendDistance();

  /// @brief Method get_bounds, addr 0x47f2598, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x47f2600, size 0x44, virtual false, abstract: false, final false
  inline void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_boxProjection, addr 0x47f2b08, size 0x3c, virtual false, abstract: false, final false
  inline bool get_boxProjection();

  /// @brief Method get_center, addr 0x47f22c8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_center_Injected, addr 0x47f2324, size 0x44, virtual false, abstract: false, final false
  inline void get_center_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_clearFlags, addr 0x47f28cc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeClearFlags get_clearFlags();

  /// @brief Method get_cullingMask, addr 0x47f284c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_cullingMask();

  /// @brief Method get_customBakedTexture, addr 0x47f2e08, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_customBakedTexture();

  /// @brief Method get_defaultTexture, addr 0x47f32d8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> get_defaultTexture();

  /// @brief Method get_defaultTextureHDRDecodeValues, addr 0x47f3214, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 get_defaultTextureHDRDecodeValues();

  /// @brief Method get_defaultTextureHDRDecodeValues_Injected, addr 0x47f329c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_defaultTextureHDRDecodeValues_Injected(ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method get_farClipPlane, addr 0x47f2488, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_farClipPlane();

  /// @brief Method get_hdr, addr 0x47f2644, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hdr();

  /// @brief Method get_importance, addr 0x47f2c08, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_importance();

  /// @brief Method get_intensity, addr 0x47f2510, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_maxBakedCubemapResolution, addr 0x47f31ec, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxBakedCubemapResolution();

  /// @brief Method get_minBakedCubemapResolution, addr 0x47f31c4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_minBakedCubemapResolution();

  /// @brief Method get_mode, addr 0x47f2b88, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeMode get_mode();

  /// @brief Method get_nearClipPlane, addr 0x47f2400, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_nearClipPlane();

  /// @brief Method get_realtimeTexture, addr 0x47f2e88, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_realtimeTexture();

  /// @brief Method get_refreshMode, addr 0x47f2c88, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode();

  /// @brief Method get_renderDynamicObjects, addr 0x47f26c4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_renderDynamicObjects();

  /// @brief Method get_resolution, addr 0x47f27cc, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_resolution();

  /// @brief Method get_shadowDistance, addr 0x47f2744, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_shadowDistance();

  /// @brief Method get_size, addr 0x47f2190, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method get_size_Injected, addr 0x47f21ec, size 0x44, virtual false, abstract: false, final false
  inline void get_size_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_texture, addr 0x47f2f08, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_texture();

  /// @brief Method get_textureHDRDecodeValues, addr 0x47f2f44, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_textureHDRDecodeValues();

  /// @brief Method get_textureHDRDecodeValues_Injected, addr 0x47f2f9c, size 0x44, virtual false, abstract: false, final false
  inline void get_textureHDRDecodeValues_Injected(ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method get_timeSlicingMode, addr 0x47f2d08, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode get_timeSlicingMode();

  /// @brief Method get_type, addr 0x47f2110, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeType get_type();

  /// @brief Method remove_defaultReflectionSet, addr 0x47f3950, size 0x128, virtual false, abstract: false, final false
  static inline void remove_defaultReflectionSet(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value);

  /// @brief Method remove_defaultReflectionTexture, addr 0x47f3a78, size 0x80, virtual false, abstract: false, final false
  static inline void remove_defaultReflectionTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value);

  /// @brief Method remove_reflectionProbeChanged, addr 0x47f33f0, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* value);

  static inline void setStaticF_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* value);

  static inline void setStaticF_registeredDefaultReflectionSetActions(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* value);

  static inline void setStaticF_registeredDefaultReflectionTextureActions(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* value);

  /// @brief Method set_backgroundColor, addr 0x47f29e8, size 0x54, virtual false, abstract: false, final false
  inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method set_backgroundColor_Injected, addr 0x47f2a3c, size 0x44, virtual false, abstract: false, final false
  inline void set_backgroundColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_bakedTexture, addr 0x47f2dc4, size 0x44, virtual false, abstract: false, final false
  inline void set_bakedTexture(::UnityEngine::Texture* value);

  /// @brief Method set_blendDistance, addr 0x47f2abc, size 0x4c, virtual false, abstract: false, final false
  inline void set_blendDistance(float_t value);

  /// @brief Method set_boxProjection, addr 0x47f2b44, size 0x44, virtual false, abstract: false, final false
  inline void set_boxProjection(bool value);

  /// @brief Method set_center, addr 0x47f2368, size 0x54, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_center_Injected, addr 0x47f23bc, size 0x44, virtual false, abstract: false, final false
  inline void set_center_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_clearFlags, addr 0x47f2908, size 0x44, virtual false, abstract: false, final false
  inline void set_clearFlags(::UnityEngine::Rendering::ReflectionProbeClearFlags value);

  /// @brief Method set_cullingMask, addr 0x47f2888, size 0x44, virtual false, abstract: false, final false
  inline void set_cullingMask(int32_t value);

  /// @brief Method set_customBakedTexture, addr 0x47f2e44, size 0x44, virtual false, abstract: false, final false
  inline void set_customBakedTexture(::UnityEngine::Texture* value);

  /// @brief Method set_farClipPlane, addr 0x47f24c4, size 0x4c, virtual false, abstract: false, final false
  inline void set_farClipPlane(float_t value);

  /// @brief Method set_hdr, addr 0x47f2680, size 0x44, virtual false, abstract: false, final false
  inline void set_hdr(bool value);

  /// @brief Method set_importance, addr 0x47f2c44, size 0x44, virtual false, abstract: false, final false
  inline void set_importance(int32_t value);

  /// @brief Method set_intensity, addr 0x47f254c, size 0x4c, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

  /// @brief Method set_mode, addr 0x47f2bc4, size 0x44, virtual false, abstract: false, final false
  inline void set_mode(::UnityEngine::Rendering::ReflectionProbeMode value);

  /// @brief Method set_nearClipPlane, addr 0x47f243c, size 0x4c, virtual false, abstract: false, final false
  inline void set_nearClipPlane(float_t value);

  /// @brief Method set_realtimeTexture, addr 0x47f2ec4, size 0x44, virtual false, abstract: false, final false
  inline void set_realtimeTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_refreshMode, addr 0x47f2cc4, size 0x44, virtual false, abstract: false, final false
  inline void set_refreshMode(::UnityEngine::Rendering::ReflectionProbeRefreshMode value);

  /// @brief Method set_renderDynamicObjects, addr 0x47f2700, size 0x44, virtual false, abstract: false, final false
  inline void set_renderDynamicObjects(bool value);

  /// @brief Method set_resolution, addr 0x47f2808, size 0x44, virtual false, abstract: false, final false
  inline void set_resolution(int32_t value);

  /// @brief Method set_shadowDistance, addr 0x47f2780, size 0x4c, virtual false, abstract: false, final false
  inline void set_shadowDistance(float_t value);

  /// @brief Method set_size, addr 0x47f2230, size 0x54, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  /// @brief Method set_size_Injected, addr 0x47f2284, size 0x44, virtual false, abstract: false, final false
  inline void set_size_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_timeSlicingMode, addr 0x47f2d44, size 0x44, virtual false, abstract: false, final false
  inline void set_timeSlicingMode(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode value);

  /// @brief Method set_type, addr 0x47f214c, size 0x44, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::Rendering::ReflectionProbeType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbe();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbe(ReflectionProbe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbe(ReflectionProbe const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10645 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ReflectionProbe, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ReflectionProbe__ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
NEED_NO_BOX(::UnityEngine::ReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe*, "UnityEngine", "ReflectionProbe");
NEED_NO_BOX(::UnityEngine::__ReflectionProbe____c__DisplayClass95_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ReflectionProbe____c__DisplayClass95_0*, "UnityEngine", "ReflectionProbe/<>c__DisplayClass95_0");
NEED_NO_BOX(::UnityEngine::__ReflectionProbe____c__DisplayClass98_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ReflectionProbe____c__DisplayClass98_0*, "UnityEngine", "ReflectionProbe/<>c__DisplayClass98_0");
