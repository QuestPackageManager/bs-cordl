#pragma once
// IWYU pragma private; include "UnityEngine/ReflectionProbe.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
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
namespace System {
struct IntPtr;
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
struct ReflectionProbe_ReflectionProbeEvent;
}
namespace UnityEngine {
class ReflectionProbe___c__DisplayClass95_0;
}
namespace UnityEngine {
class ReflectionProbe___c__DisplayClass98_0;
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
// Forward declare root types
namespace UnityEngine {
struct ReflectionProbe_ReflectionProbeEvent;
}
namespace UnityEngine {
class ReflectionProbe;
}
namespace UnityEngine {
class ReflectionProbe___c__DisplayClass95_0;
}
namespace UnityEngine {
class ReflectionProbe___c__DisplayClass98_0;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ReflectionProbe_ReflectionProbeEvent);
MARK_REF_PTR_T(::UnityEngine::ReflectionProbe);
MARK_REF_PTR_T(::UnityEngine::ReflectionProbe___c__DisplayClass95_0);
MARK_REF_PTR_T(::UnityEngine::ReflectionProbe___c__DisplayClass98_0);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ReflectionProbe/ReflectionProbeEvent
struct CORDL_TYPE ReflectionProbe_ReflectionProbeEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ReflectionProbe_ReflectionProbeEvent_Unwrapped
  enum struct __ReflectionProbe_ReflectionProbeEvent_Unwrapped : int32_t {
    __E_ReflectionProbeAdded = static_cast<int32_t>(0x0),
    __E_ReflectionProbeRemoved = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ReflectionProbe_ReflectionProbeEvent_Unwrapped() const noexcept {
    return static_cast<__ReflectionProbe_ReflectionProbeEvent_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbe_ReflectionProbeEvent();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReflectionProbe_ReflectionProbeEvent(int32_t value__) noexcept;

  /// @brief Field ReflectionProbeAdded value: I32(0)
  static ::UnityEngine::ReflectionProbe_ReflectionProbeEvent const ReflectionProbeAdded;

  /// @brief Field ReflectionProbeRemoved value: I32(1)
  static ::UnityEngine::ReflectionProbe_ReflectionProbeEvent const ReflectionProbeRemoved;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10072 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ReflectionProbe_ReflectionProbeEvent, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ReflectionProbe_ReflectionProbeEvent, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ReflectionProbe/<>c__DisplayClass95_0
class CORDL_TYPE ReflectionProbe___c__DisplayClass95_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value;

  static inline ::UnityEngine::ReflectionProbe___c__DisplayClass95_0* New_ctor();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* const& __cordl_internal_get_value() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Cubemap>>*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value);

  /// @brief Method <add_defaultReflectionSet>b__0, addr 0x6845c58, size 0x90, virtual false, abstract: false, final false
  inline void _add_defaultReflectionSet_b__0(::UnityEngine::Texture* b);

  /// @brief Method <add_defaultReflectionSet>b__1, addr 0x6845be0, size 0x78, virtual false, abstract: false, final false
  inline bool _add_defaultReflectionSet_b__1(::System::Action_1<::UnityW<::UnityEngine::Texture>>* h);

  /// @brief Method .ctor, addr 0x684559c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbe___c__DisplayClass95_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe___c__DisplayClass95_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbe___c__DisplayClass95_0(ReflectionProbe___c__DisplayClass95_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe___c__DisplayClass95_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbe___c__DisplayClass95_0(ReflectionProbe___c__DisplayClass95_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10073 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ReflectionProbe___c__DisplayClass95_0, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ReflectionProbe___c__DisplayClass95_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ReflectionProbe/<>c__DisplayClass98_0
class CORDL_TYPE ReflectionProbe___c__DisplayClass98_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Action_1<::UnityW<::UnityEngine::Texture>>* value;

  static inline ::UnityEngine::ReflectionProbe___c__DisplayClass98_0* New_ctor();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Texture>>* const& __cordl_internal_get_value() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Texture>>*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value);

  /// @brief Method <add_defaultReflectionTexture>b__0, addr 0x6845ce8, size 0x78, virtual false, abstract: false, final false
  inline bool _add_defaultReflectionTexture_b__0(::System::Action_1<::UnityW<::UnityEngine::Texture>>* h);

  /// @brief Method .ctor, addr 0x6845990, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbe___c__DisplayClass98_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe___c__DisplayClass98_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbe___c__DisplayClass98_0(ReflectionProbe___c__DisplayClass98_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe___c__DisplayClass98_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbe___c__DisplayClass98_0(ReflectionProbe___c__DisplayClass98_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10074 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Texture>>* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ReflectionProbe___c__DisplayClass98_0, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ReflectionProbe___c__DisplayClass98_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ReflectionProbe
class CORDL_TYPE ReflectionProbe : public ::UnityEngine::Behaviour {
public:
  // Declarations
  using ReflectionProbeEvent = ::UnityEngine::ReflectionProbe_ReflectionProbeEvent;

  using __c__DisplayClass95_0 = ::UnityEngine::ReflectionProbe___c__DisplayClass95_0;

  using __c__DisplayClass98_0 = ::UnityEngine::ReflectionProbe___c__DisplayClass98_0;

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
  __declspec(property(get = getStaticF_reflectionProbeChanged,
                      put =
                          setStaticF_reflectionProbeChanged)) ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* reflectionProbeChanged;

  __declspec(property(get = get_refreshMode, put = set_refreshMode)) ::UnityEngine::Rendering::ReflectionProbeRefreshMode refreshMode;

  /// @brief Field registeredDefaultReflectionSetActions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_registeredDefaultReflectionSetActions,
                      put = setStaticF_registeredDefaultReflectionSetActions)) ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*
      registeredDefaultReflectionSetActions;

  /// @brief Field registeredDefaultReflectionTextureActions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_registeredDefaultReflectionTextureActions,
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

  /// @brief Method BlendCubemap, addr 0x6844cf0, size 0x118, virtual false, abstract: false, final false
  static inline bool BlendCubemap(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst, float_t blend, ::UnityEngine::RenderTexture* target);

  /// @brief Method BlendCubemap_Injected, addr 0x6844e08, size 0x64, virtual false, abstract: false, final false
  static inline bool BlendCubemap_Injected(::System::IntPtr src, ::System::IntPtr dst, float_t blend, ::System::IntPtr target);

  /// @brief Method CallReflectionProbeEvent, addr 0x6845318, size 0x94, virtual false, abstract: false, final false
  static inline void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe* probe, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent probeEvent);

  /// @brief Method CallSetDefaultReflection, addr 0x6845994, size 0x144, virtual false, abstract: false, final false
  static inline void CallSetDefaultReflection(::UnityEngine::Texture* defaultReflectionCubemap);

  /// @brief Method IsFinishedRendering, addr 0x6844ba0, size 0xb8, virtual false, abstract: false, final false
  inline bool IsFinishedRendering(int32_t renderId);

  /// @brief Method IsFinishedRendering_Injected, addr 0x6844c58, size 0x44, virtual false, abstract: false, final false
  static inline bool IsFinishedRendering_Injected(::System::IntPtr _unity_self, int32_t renderId);

  static inline ::UnityEngine::ReflectionProbe* New_ctor();

  /// @brief Method RenderProbe, addr 0x6844a64, size 0x20, virtual false, abstract: false, final false
  inline int32_t RenderProbe();

  /// @brief Method RenderProbe, addr 0x6844a84, size 0x2c, virtual false, abstract: false, final false
  inline int32_t RenderProbe(::UnityEngine::RenderTexture* targetTexture);

  /// @brief Method Reset, addr 0x6844980, size 0xa8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset_Injected, addr 0x6844a28, size 0x3c, virtual false, abstract: false, final false
  static inline void Reset_Injected(::System::IntPtr _unity_self);

  /// @brief Method ScheduleRender, addr 0x6844ab0, size 0xf0, virtual false, abstract: false, final false
  inline int32_t ScheduleRender(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode, ::UnityEngine::RenderTexture* targetTexture);

  /// @brief Method ScheduleRender_Injected, addr 0x6844c9c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ScheduleRender_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode, ::System::IntPtr targetTexture);

  /// @brief Method UpdateCachedState, addr 0x6844e6c, size 0x28, virtual false, abstract: false, final false
  static inline void UpdateCachedState();

  /// @brief Method .ctor, addr 0x6845ad8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_defaultReflectionSet, addr 0x68453ac, size 0x1f0, virtual false, abstract: false, final false
  static inline void add_defaultReflectionSet(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value);

  /// @brief Method add_defaultReflectionTexture, addr 0x68455a0, size 0x220, virtual false, abstract: false, final false
  static inline void add_defaultReflectionTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value);

  /// @brief Method add_reflectionProbeChanged, addr 0x6845110, size 0x104, virtual false, abstract: false, final false
  static inline void add_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* value);

  static inline ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* getStaticF_reflectionProbeChanged();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionSetActions();

  static inline ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionTextureActions();

  /// @brief Method get_backgroundColor, addr 0x68430d0, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundColor_Injected, addr 0x6843194, size 0x44, virtual false, abstract: false, final false
  static inline void get_backgroundColor_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_bakedTexture, addr 0x6843e24, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_bakedTexture();

  /// @brief Method get_bakedTexture_Injected, addr 0x6843f9c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_bakedTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_blendDistance, addr 0x68432dc, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_blendDistance();

  /// @brief Method get_blendDistance_Injected, addr 0x6843384, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_blendDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bounds, addr 0x684246c, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x6842544, size 0x44, virtual false, abstract: false, final false
  static inline void get_bounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bounds> ret);

  /// @brief Method get_boxProjection, addr 0x68434c4, size 0xa8, virtual false, abstract: false, final false
  inline bool get_boxProjection();

  /// @brief Method get_boxProjection_Injected, addr 0x684356c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_boxProjection_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_center, addr 0x6841ca4, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_center_Injected, addr 0x6841d6c, size 0x44, virtual false, abstract: false, final false
  static inline void get_center_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_clearFlags, addr 0x6842ef0, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeClearFlags get_clearFlags();

  /// @brief Method get_clearFlags_Injected, addr 0x6842f98, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReflectionProbeClearFlags get_clearFlags_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cullingMask, addr 0x6842d10, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_cullingMask();

  /// @brief Method get_cullingMask_Injected, addr 0x6842db8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_cullingMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_customBakedTexture, addr 0x6844104, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_customBakedTexture();

  /// @brief Method get_customBakedTexture_Injected, addr 0x684427c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_customBakedTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_defaultTexture, addr 0x6844fac, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> get_defaultTexture();

  /// @brief Method get_defaultTextureHDRDecodeValues, addr 0x6844ee4, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 get_defaultTextureHDRDecodeValues();

  /// @brief Method get_defaultTextureHDRDecodeValues_Injected, addr 0x6844f70, size 0x3c, virtual false, abstract: false, final false
  static inline void get_defaultTextureHDRDecodeValues_Injected(::ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method get_defaultTexture_Injected, addr 0x68450e8, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_defaultTexture_Injected();

  /// @brief Method get_farClipPlane, addr 0x684209c, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_farClipPlane();

  /// @brief Method get_farClipPlane_Injected, addr 0x6842144, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_farClipPlane_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hdr, addr 0x6842588, size 0xa8, virtual false, abstract: false, final false
  inline bool get_hdr();

  /// @brief Method get_hdr_Injected, addr 0x6842630, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hdr_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_importance, addr 0x6843884, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_importance();

  /// @brief Method get_importance_Injected, addr 0x684392c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_importance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_intensity, addr 0x6842284, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_intensity_Injected, addr 0x684232c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_intensity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxBakedCubemapResolution, addr 0x6844ebc, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxBakedCubemapResolution();

  /// @brief Method get_minBakedCubemapResolution, addr 0x6844e94, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_minBakedCubemapResolution();

  /// @brief Method get_mode, addr 0x68436a4, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeMode get_mode();

  /// @brief Method get_mode_Injected, addr 0x684374c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReflectionProbeMode get_mode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_nearClipPlane, addr 0x6841eb4, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_nearClipPlane();

  /// @brief Method get_nearClipPlane_Injected, addr 0x6841f5c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_nearClipPlane_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_realtimeTexture, addr 0x68443e4, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_realtimeTexture();

  /// @brief Method get_realtimeTexture_Injected, addr 0x684455c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_realtimeTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_refreshMode, addr 0x6843a64, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode();

  /// @brief Method get_refreshMode_Injected, addr 0x6843b0c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_renderDynamicObjects, addr 0x6842768, size 0xa8, virtual false, abstract: false, final false
  inline bool get_renderDynamicObjects();

  /// @brief Method get_renderDynamicObjects_Injected, addr 0x6842810, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_renderDynamicObjects_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_resolution, addr 0x6842b30, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_resolution();

  /// @brief Method get_resolution_Injected, addr 0x6842bd8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_resolution_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadowDistance, addr 0x6842948, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_shadowDistance();

  /// @brief Method get_shadowDistance_Injected, addr 0x68429f0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shadowDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_size, addr 0x6841a94, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method get_size_Injected, addr 0x6841b5c, size 0x44, virtual false, abstract: false, final false
  static inline void get_size_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_texture, addr 0x68446c4, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_texture();

  /// @brief Method get_textureHDRDecodeValues, addr 0x6844878, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_textureHDRDecodeValues();

  /// @brief Method get_textureHDRDecodeValues_Injected, addr 0x684493c, size 0x44, virtual false, abstract: false, final false
  static inline void get_textureHDRDecodeValues_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector4> ret);

  /// @brief Method get_texture_Injected, addr 0x684483c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_texture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_timeSlicingMode, addr 0x6843c44, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode get_timeSlicingMode();

  /// @brief Method get_timeSlicingMode_Injected, addr 0x6843cec, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode get_timeSlicingMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_type, addr 0x68418b4, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeType get_type();

  /// @brief Method get_type_Injected, addr 0x684195c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReflectionProbeType get_type_Injected(::System::IntPtr _unity_self);

  /// @brief Method remove_defaultReflectionSet, addr 0x68457c0, size 0x148, virtual false, abstract: false, final false
  static inline void remove_defaultReflectionSet(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value);

  /// @brief Method remove_defaultReflectionTexture, addr 0x6845908, size 0x88, virtual false, abstract: false, final false
  static inline void remove_defaultReflectionTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value);

  /// @brief Method remove_reflectionProbeChanged, addr 0x6845214, size 0x104, virtual false, abstract: false, final false
  static inline void remove_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* value);

  static inline void setStaticF_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* value);

  static inline void setStaticF_registeredDefaultReflectionSetActions(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* value);

  static inline void setStaticF_registeredDefaultReflectionTextureActions(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* value);

  /// @brief Method set_backgroundColor, addr 0x68431d8, size 0xc0, virtual false, abstract: false, final false
  inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method set_backgroundColor_Injected, addr 0x6843298, size 0x44, virtual false, abstract: false, final false
  static inline void set_backgroundColor_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_bakedTexture, addr 0x6843fd8, size 0xe8, virtual false, abstract: false, final false
  inline void set_bakedTexture(::UnityEngine::Texture* value);

  /// @brief Method set_bakedTexture_Injected, addr 0x68440c0, size 0x44, virtual false, abstract: false, final false
  static inline void set_bakedTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_blendDistance, addr 0x68433c0, size 0xb8, virtual false, abstract: false, final false
  inline void set_blendDistance(float_t value);

  /// @brief Method set_blendDistance_Injected, addr 0x6843478, size 0x4c, virtual false, abstract: false, final false
  static inline void set_blendDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_boxProjection, addr 0x68435a8, size 0xb8, virtual false, abstract: false, final false
  inline void set_boxProjection(bool value);

  /// @brief Method set_boxProjection_Injected, addr 0x6843660, size 0x44, virtual false, abstract: false, final false
  static inline void set_boxProjection_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_center, addr 0x6841db0, size 0xc0, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_center_Injected, addr 0x6841e70, size 0x44, virtual false, abstract: false, final false
  static inline void set_center_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_clearFlags, addr 0x6842fd4, size 0xb8, virtual false, abstract: false, final false
  inline void set_clearFlags(::UnityEngine::Rendering::ReflectionProbeClearFlags value);

  /// @brief Method set_clearFlags_Injected, addr 0x684308c, size 0x44, virtual false, abstract: false, final false
  static inline void set_clearFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeClearFlags value);

  /// @brief Method set_cullingMask, addr 0x6842df4, size 0xb8, virtual false, abstract: false, final false
  inline void set_cullingMask(int32_t value);

  /// @brief Method set_cullingMask_Injected, addr 0x6842eac, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingMask_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_customBakedTexture, addr 0x68442b8, size 0xe8, virtual false, abstract: false, final false
  inline void set_customBakedTexture(::UnityEngine::Texture* value);

  /// @brief Method set_customBakedTexture_Injected, addr 0x68443a0, size 0x44, virtual false, abstract: false, final false
  static inline void set_customBakedTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_farClipPlane, addr 0x6842180, size 0xb8, virtual false, abstract: false, final false
  inline void set_farClipPlane(float_t value);

  /// @brief Method set_farClipPlane_Injected, addr 0x6842238, size 0x4c, virtual false, abstract: false, final false
  static inline void set_farClipPlane_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_hdr, addr 0x684266c, size 0xb8, virtual false, abstract: false, final false
  inline void set_hdr(bool value);

  /// @brief Method set_hdr_Injected, addr 0x6842724, size 0x44, virtual false, abstract: false, final false
  static inline void set_hdr_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_importance, addr 0x6843968, size 0xb8, virtual false, abstract: false, final false
  inline void set_importance(int32_t value);

  /// @brief Method set_importance_Injected, addr 0x6843a20, size 0x44, virtual false, abstract: false, final false
  static inline void set_importance_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_intensity, addr 0x6842368, size 0xb8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

  /// @brief Method set_intensity_Injected, addr 0x6842420, size 0x4c, virtual false, abstract: false, final false
  static inline void set_intensity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_mode, addr 0x6843788, size 0xb8, virtual false, abstract: false, final false
  inline void set_mode(::UnityEngine::Rendering::ReflectionProbeMode value);

  /// @brief Method set_mode_Injected, addr 0x6843840, size 0x44, virtual false, abstract: false, final false
  static inline void set_mode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeMode value);

  /// @brief Method set_nearClipPlane, addr 0x6841f98, size 0xb8, virtual false, abstract: false, final false
  inline void set_nearClipPlane(float_t value);

  /// @brief Method set_nearClipPlane_Injected, addr 0x6842050, size 0x4c, virtual false, abstract: false, final false
  static inline void set_nearClipPlane_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_realtimeTexture, addr 0x6844598, size 0xe8, virtual false, abstract: false, final false
  inline void set_realtimeTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_realtimeTexture_Injected, addr 0x6844680, size 0x44, virtual false, abstract: false, final false
  static inline void set_realtimeTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_refreshMode, addr 0x6843b48, size 0xb8, virtual false, abstract: false, final false
  inline void set_refreshMode(::UnityEngine::Rendering::ReflectionProbeRefreshMode value);

  /// @brief Method set_refreshMode_Injected, addr 0x6843c00, size 0x44, virtual false, abstract: false, final false
  static inline void set_refreshMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeRefreshMode value);

  /// @brief Method set_renderDynamicObjects, addr 0x684284c, size 0xb8, virtual false, abstract: false, final false
  inline void set_renderDynamicObjects(bool value);

  /// @brief Method set_renderDynamicObjects_Injected, addr 0x6842904, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderDynamicObjects_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_resolution, addr 0x6842c14, size 0xb8, virtual false, abstract: false, final false
  inline void set_resolution(int32_t value);

  /// @brief Method set_resolution_Injected, addr 0x6842ccc, size 0x44, virtual false, abstract: false, final false
  static inline void set_resolution_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_shadowDistance, addr 0x6842a2c, size 0xb8, virtual false, abstract: false, final false
  inline void set_shadowDistance(float_t value);

  /// @brief Method set_shadowDistance_Injected, addr 0x6842ae4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_shadowDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_size, addr 0x6841ba0, size 0xc0, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  /// @brief Method set_size_Injected, addr 0x6841c60, size 0x44, virtual false, abstract: false, final false
  static inline void set_size_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_timeSlicingMode, addr 0x6843d28, size 0xb8, virtual false, abstract: false, final false
  inline void set_timeSlicingMode(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode value);

  /// @brief Method set_timeSlicingMode_Injected, addr 0x6843de0, size 0x44, virtual false, abstract: false, final false
  static inline void set_timeSlicingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode value);

  /// @brief Method set_type, addr 0x6841998, size 0xb8, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::Rendering::ReflectionProbeType value);

  /// @brief Method set_type_Injected, addr 0x6841a50, size 0x44, virtual false, abstract: false, final false
  static inline void set_type_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeType value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10075 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ReflectionProbe, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe_ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
NEED_NO_BOX(::UnityEngine::ReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe*, "UnityEngine", "ReflectionProbe");
NEED_NO_BOX(::UnityEngine::ReflectionProbe___c__DisplayClass95_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe___c__DisplayClass95_0*, "UnityEngine", "ReflectionProbe/<>c__DisplayClass95_0");
NEED_NO_BOX(::UnityEngine::ReflectionProbe___c__DisplayClass98_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe___c__DisplayClass98_0*, "UnityEngine", "ReflectionProbe/<>c__DisplayClass98_0");
