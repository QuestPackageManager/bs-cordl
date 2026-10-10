#pragma once
// IWYU pragma private; include "UnityEngine/ReflectionProbe.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::UnityEngine::ReflectionProbe*);
MARK_REF_T(::UnityEngine::ReflectionProbe___c__DisplayClass95_0*);
MARK_REF_T(::UnityEngine::ReflectionProbe___c__DisplayClass98_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ReflectionProbe_ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::ReflectionProbe*, "UnityEngine", "ReflectionProbe");
DEFINE_IL2CPP_CLASS(::UnityEngine::ReflectionProbe___c__DisplayClass95_0*, "UnityEngine", "ReflectionProbe/<>c__DisplayClass95_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::ReflectionProbe___c__DisplayClass98_0*, "UnityEngine", "ReflectionProbe/<>c__DisplayClass98_0");
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ReflectionProbe_ReflectionProbeEvent(int32_t value__) noexcept;

  /// @brief Field ReflectionProbeAdded value: I32(0)
  static ::UnityEngine::ReflectionProbe_ReflectionProbeEvent const ReflectionProbeAdded;

  /// @brief Field ReflectionProbeRemoved value: I32(1)
  static ::UnityEngine::ReflectionProbe_ReflectionProbeEvent const ReflectionProbeRemoved;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9669 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ReflectionProbe_ReflectionProbeEvent, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ReflectionProbe_ReflectionProbeEvent) == 0x4, "Size mismatch!");

} // namespace UnityEngine
// [CompilerGenerated]
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

  /// @brief Method <add_defaultReflectionSet>b__0, addr 0x6ecc93c, size 0x90, virtual false, abstract: false, final false
  inline void _add_defaultReflectionSet_b__0(::UnityEngine::Texture* b);

  /// @brief Method <add_defaultReflectionSet>b__1, addr 0x6ecc8c4, size 0x78, virtual false, abstract: false, final false
  inline bool _add_defaultReflectionSet_b__1(::System::Action_1<::UnityW<::UnityEngine::Texture>>* h);

  /// @brief Method .ctor, addr 0x6ecc280, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbe___c__DisplayClass95_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe___c__DisplayClass95_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbe___c__DisplayClass95_0(ReflectionProbe___c__DisplayClass95_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe___c__DisplayClass95_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbe___c__DisplayClass95_0(ReflectionProbe___c__DisplayClass95_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9670 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ReflectionProbe___c__DisplayClass95_0, ___value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ReflectionProbe___c__DisplayClass95_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine
// [CompilerGenerated]
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

  /// @brief Method <add_defaultReflectionTexture>b__0, addr 0x6ecc9cc, size 0x78, virtual false, abstract: false, final false
  inline bool _add_defaultReflectionTexture_b__0(::System::Action_1<::UnityW<::UnityEngine::Texture>>* h);

  /// @brief Method .ctor, addr 0x6ecc674, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbe___c__DisplayClass98_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe___c__DisplayClass98_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbe___c__DisplayClass98_0(ReflectionProbe___c__DisplayClass98_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe___c__DisplayClass98_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbe___c__DisplayClass98_0(ReflectionProbe___c__DisplayClass98_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9671 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Texture>>* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ReflectionProbe___c__DisplayClass98_0, ___value) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ReflectionProbe___c__DisplayClass98_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine
// [NativeHeader("Runtime/Camera/ReflectionProbes.h")]
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

  /// @brief [NativeName("GlobalAABB")]
  __declspec(property(get = get_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_boxProjection, put = set_boxProjection)) bool boxProjection;

  /// @brief [NativeName("BoxOffset")]
  __declspec(property(get = get_center, put = set_center)) ::UnityEngine::Vector3 center;

  __declspec(property(get = get_clearFlags, put = set_clearFlags)) ::UnityEngine::Rendering::ReflectionProbeClearFlags clearFlags;

  __declspec(property(get = get_cullingMask, put = set_cullingMask)) int32_t cullingMask;

  __declspec(property(get = get_customBakedTexture, put = set_customBakedTexture)) ::UnityW<::UnityEngine::Texture> customBakedTexture;

  /// @brief [NativeName("Far")]
  __declspec(property(get = get_farClipPlane, put = set_farClipPlane)) float_t farClipPlane;

  /// @brief [NativeName("HDR")]
  __declspec(property(get = get_hdr, put = set_hdr)) bool hdr;

  __declspec(property(get = get_importance, put = set_importance)) int32_t importance;

  /// @brief [NativeName("IntensityMultiplier")]
  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  __declspec(property(get = get_mode, put = set_mode)) ::UnityEngine::Rendering::ReflectionProbeMode mode;

  /// @brief [NativeName("Near")]
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

  /// @brief [NativeName("RenderDynamicObjects")]
  __declspec(property(get = get_renderDynamicObjects, put = set_renderDynamicObjects)) bool renderDynamicObjects;

  __declspec(property(get = get_resolution, put = set_resolution)) int32_t resolution;

  __declspec(property(get = get_shadowDistance, put = set_shadowDistance)) float_t shadowDistance;

  /// @brief [NativeName("BoxSize")]
  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector3 size;

  __declspec(property(get = get_texture)) ::UnityW<::UnityEngine::Texture> texture;

  __declspec(property(get = get_textureHDRDecodeValues)) ::UnityEngine::Vector4 textureHDRDecodeValues;

  __declspec(property(get = get_timeSlicingMode, put = set_timeSlicingMode)) ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode;

  /// [Obsolete("type property has been deprecated. Starting with Unity 5.4, the only supported reflection probe type is Cube.", true)]
  /// [NativeName("ProbeType")]
  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_type, put = set_type)) ::UnityEngine::Rendering::ReflectionProbeType type;

  /// [FreeFunction("CubemapGPUBlend")]
  /// [NativeHeader("Runtime/Camera/CubemapGPUUtility.h")]
  /// @brief Method BlendCubemap, addr 0x6ecb9d4, size 0x118, virtual false, abstract: false, final false
  static inline bool BlendCubemap(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst, float_t blend, ::UnityEngine::RenderTexture* target);

  /// @brief Method BlendCubemap_Injected, addr 0x6ecbaec, size 0x64, virtual false, abstract: false, final false
  static inline bool BlendCubemap_Injected(::System::IntPtr src, ::System::IntPtr dst, float_t blend, ::System::IntPtr target);

  /// [RequiredByNativeCode]
  /// @brief Method CallReflectionProbeEvent, addr 0x6ecbffc, size 0x94, virtual false, abstract: false, final false
  static inline void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe* probe, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent probeEvent);

  /// [RequiredByNativeCode]
  /// @brief Method CallSetDefaultReflection, addr 0x6ecc678, size 0x144, virtual false, abstract: false, final false
  static inline void CallSetDefaultReflection(::UnityEngine::Texture* defaultReflectionCubemap);

  /// @brief Method IsFinishedRendering, addr 0x6ecb884, size 0xb8, virtual false, abstract: false, final false
  inline bool IsFinishedRendering(int32_t renderId);

  /// @brief Method IsFinishedRendering_Injected, addr 0x6ecb93c, size 0x44, virtual false, abstract: false, final false
  static inline bool IsFinishedRendering_Injected(::System::IntPtr _unity_self, int32_t renderId);

  static inline ::UnityEngine::ReflectionProbe* New_ctor();

  /// @brief Method RenderProbe, addr 0x6ecb748, size 0x20, virtual false, abstract: false, final false
  inline int32_t RenderProbe();

  /// @brief Method RenderProbe, addr 0x6ecb768, size 0x2c, virtual false, abstract: false, final false
  inline int32_t RenderProbe(/* [DefaultValue("null")] */ ::UnityEngine::RenderTexture* targetTexture);

  /// @brief Method Reset, addr 0x6ecb664, size 0xa8, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset_Injected, addr 0x6ecb70c, size 0x3c, virtual false, abstract: false, final false
  static inline void Reset_Injected(::System::IntPtr _unity_self);

  /// @brief Method ScheduleRender, addr 0x6ecb794, size 0xf0, virtual false, abstract: false, final false
  inline int32_t ScheduleRender(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode, ::UnityEngine::RenderTexture* targetTexture);

  /// @brief Method ScheduleRender_Injected, addr 0x6ecb980, size 0x54, virtual false, abstract: false, final false
  static inline int32_t ScheduleRender_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode timeSlicingMode, ::System::IntPtr targetTexture);

  /// [StaticAccessor("GetReflectionProbes()")]
  /// [NativeMethod("UpdateSampleData")]
  /// @brief Method UpdateCachedState, addr 0x6ecbb50, size 0x28, virtual false, abstract: false, final false
  static inline void UpdateCachedState();

  /// @brief Method .ctor, addr 0x6ecc7bc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_defaultReflectionSet, addr 0x6ecc090, size 0x1f0, virtual false, abstract: false, final false
  static inline void add_defaultReflectionSet(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value);

  /// @brief Method add_defaultReflectionTexture, addr 0x6ecc284, size 0x220, virtual false, abstract: false, final false
  static inline void add_defaultReflectionTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value);

  /// [CompilerGenerated]
  /// @brief Method add_reflectionProbeChanged, addr 0x6ecbdf4, size 0x104, virtual false, abstract: false, final false
  static inline void add_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* value);

  static inline ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* getStaticF_reflectionProbeChanged();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionSetActions();

  static inline ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* getStaticF_registeredDefaultReflectionTextureActions();

  /// @brief Method get_backgroundColor, addr 0x6ec9db4, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_backgroundColor();

  /// @brief Method get_backgroundColor_Injected, addr 0x6ec9e78, size 0x44, virtual false, abstract: false, final false
  static inline void get_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_bakedTexture, addr 0x6ecab08, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_bakedTexture();

  /// @brief Method get_bakedTexture_Injected, addr 0x6ecac80, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_bakedTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_blendDistance, addr 0x6ec9fc0, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_blendDistance();

  /// @brief Method get_blendDistance_Injected, addr 0x6eca068, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_blendDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_bounds, addr 0x6ec9150, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_bounds_Injected, addr 0x6ec9228, size 0x44, virtual false, abstract: false, final false
  static inline void get_bounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bounds> ret);

  /// @brief Method get_boxProjection, addr 0x6eca1a8, size 0xa8, virtual false, abstract: false, final false
  inline bool get_boxProjection();

  /// @brief Method get_boxProjection_Injected, addr 0x6eca250, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_boxProjection_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_center, addr 0x6ec8988, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_center_Injected, addr 0x6ec8a50, size 0x44, virtual false, abstract: false, final false
  static inline void get_center_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_clearFlags, addr 0x6ec9bd4, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeClearFlags get_clearFlags();

  /// @brief Method get_clearFlags_Injected, addr 0x6ec9c7c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReflectionProbeClearFlags get_clearFlags_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cullingMask, addr 0x6ec99f4, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_cullingMask();

  /// @brief Method get_cullingMask_Injected, addr 0x6ec9a9c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_cullingMask_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_customBakedTexture, addr 0x6ecade8, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_customBakedTexture();

  /// @brief Method get_customBakedTexture_Injected, addr 0x6ecaf60, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_customBakedTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_defaultTexture, addr 0x6ecbc90, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> get_defaultTexture();

  /// @brief Method get_defaultTextureHDRDecodeValues, addr 0x6ecbbc8, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 get_defaultTextureHDRDecodeValues();

  /// @brief Method get_defaultTextureHDRDecodeValues_Injected, addr 0x6ecbc54, size 0x3c, virtual false, abstract: false, final false
  static inline void get_defaultTextureHDRDecodeValues_Injected(::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method get_defaultTexture_Injected, addr 0x6ecbdcc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_defaultTexture_Injected();

  /// @brief Method get_farClipPlane, addr 0x6ec8d80, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_farClipPlane();

  /// @brief Method get_farClipPlane_Injected, addr 0x6ec8e28, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_farClipPlane_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_hdr, addr 0x6ec926c, size 0xa8, virtual false, abstract: false, final false
  inline bool get_hdr();

  /// @brief Method get_hdr_Injected, addr 0x6ec9314, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_hdr_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_importance, addr 0x6eca568, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_importance();

  /// @brief Method get_importance_Injected, addr 0x6eca610, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_importance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_intensity, addr 0x6ec8f68, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_intensity_Injected, addr 0x6ec9010, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_intensity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxBakedCubemapResolution, addr 0x6ecbba0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_maxBakedCubemapResolution();

  /// @brief Method get_minBakedCubemapResolution, addr 0x6ecbb78, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_minBakedCubemapResolution();

  /// @brief Method get_mode, addr 0x6eca388, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeMode get_mode();

  /// @brief Method get_mode_Injected, addr 0x6eca430, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReflectionProbeMode get_mode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_nearClipPlane, addr 0x6ec8b98, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_nearClipPlane();

  /// @brief Method get_nearClipPlane_Injected, addr 0x6ec8c40, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_nearClipPlane_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_realtimeTexture, addr 0x6ecb0c8, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_realtimeTexture();

  /// @brief Method get_realtimeTexture_Injected, addr 0x6ecb240, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_realtimeTexture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_refreshMode, addr 0x6eca748, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode();

  /// @brief Method get_refreshMode_Injected, addr 0x6eca7f0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReflectionProbeRefreshMode get_refreshMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_renderDynamicObjects, addr 0x6ec944c, size 0xa8, virtual false, abstract: false, final false
  inline bool get_renderDynamicObjects();

  /// @brief Method get_renderDynamicObjects_Injected, addr 0x6ec94f4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_renderDynamicObjects_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_resolution, addr 0x6ec9814, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_resolution();

  /// @brief Method get_resolution_Injected, addr 0x6ec98bc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_resolution_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadowDistance, addr 0x6ec962c, size 0xa8, virtual false, abstract: false, final false
  inline float_t get_shadowDistance();

  /// @brief Method get_shadowDistance_Injected, addr 0x6ec96d4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shadowDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_size, addr 0x6ec8778, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method get_size_Injected, addr 0x6ec8840, size 0x44, virtual false, abstract: false, final false
  static inline void get_size_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_texture, addr 0x6ecb3a8, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_texture();

  /// [NativeName("CalculateHDRDecodeValues")]
  /// @brief Method get_textureHDRDecodeValues, addr 0x6ecb55c, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_textureHDRDecodeValues();

  /// @brief Method get_textureHDRDecodeValues_Injected, addr 0x6ecb620, size 0x44, virtual false, abstract: false, final false
  static inline void get_textureHDRDecodeValues_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector4> ret);

  /// @brief Method get_texture_Injected, addr 0x6ecb520, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_texture_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_timeSlicingMode, addr 0x6eca928, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode get_timeSlicingMode();

  /// @brief Method get_timeSlicingMode_Injected, addr 0x6eca9d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode get_timeSlicingMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_type, addr 0x6ec8598, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ReflectionProbeType get_type();

  /// @brief Method get_type_Injected, addr 0x6ec8640, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ReflectionProbeType get_type_Injected(::System::IntPtr _unity_self);

  /// @brief Method remove_defaultReflectionSet, addr 0x6ecc4a4, size 0x148, virtual false, abstract: false, final false
  static inline void remove_defaultReflectionSet(::System::Action_1<::UnityW<::UnityEngine::Cubemap>>* value);

  /// @brief Method remove_defaultReflectionTexture, addr 0x6ecc5ec, size 0x88, virtual false, abstract: false, final false
  static inline void remove_defaultReflectionTexture(::System::Action_1<::UnityW<::UnityEngine::Texture>>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_reflectionProbeChanged, addr 0x6ecbef8, size 0x104, virtual false, abstract: false, final false
  static inline void remove_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* value);

  static inline void setStaticF_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* value);

  static inline void setStaticF_registeredDefaultReflectionSetActions(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* value);

  static inline void setStaticF_registeredDefaultReflectionTextureActions(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* value);

  /// @brief Method set_backgroundColor, addr 0x6ec9ebc, size 0xc0, virtual false, abstract: false, final false
  inline void set_backgroundColor(::UnityEngine::Color value);

  /// @brief Method set_backgroundColor_Injected, addr 0x6ec9f7c, size 0x44, virtual false, abstract: false, final false
  static inline void set_backgroundColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color const> value);

  /// @brief Method set_bakedTexture, addr 0x6ecacbc, size 0xe8, virtual false, abstract: false, final false
  inline void set_bakedTexture(::UnityEngine::Texture* value);

  /// @brief Method set_bakedTexture_Injected, addr 0x6ecada4, size 0x44, virtual false, abstract: false, final false
  static inline void set_bakedTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_blendDistance, addr 0x6eca0a4, size 0xb8, virtual false, abstract: false, final false
  inline void set_blendDistance(float_t value);

  /// @brief Method set_blendDistance_Injected, addr 0x6eca15c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_blendDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_boxProjection, addr 0x6eca28c, size 0xb8, virtual false, abstract: false, final false
  inline void set_boxProjection(bool value);

  /// @brief Method set_boxProjection_Injected, addr 0x6eca344, size 0x44, virtual false, abstract: false, final false
  static inline void set_boxProjection_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_center, addr 0x6ec8a94, size 0xc0, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_center_Injected, addr 0x6ec8b54, size 0x44, virtual false, abstract: false, final false
  static inline void set_center_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_clearFlags, addr 0x6ec9cb8, size 0xb8, virtual false, abstract: false, final false
  inline void set_clearFlags(::UnityEngine::Rendering::ReflectionProbeClearFlags value);

  /// @brief Method set_clearFlags_Injected, addr 0x6ec9d70, size 0x44, virtual false, abstract: false, final false
  static inline void set_clearFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeClearFlags value);

  /// @brief Method set_cullingMask, addr 0x6ec9ad8, size 0xb8, virtual false, abstract: false, final false
  inline void set_cullingMask(int32_t value);

  /// @brief Method set_cullingMask_Injected, addr 0x6ec9b90, size 0x44, virtual false, abstract: false, final false
  static inline void set_cullingMask_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_customBakedTexture, addr 0x6ecaf9c, size 0xe8, virtual false, abstract: false, final false
  inline void set_customBakedTexture(::UnityEngine::Texture* value);

  /// @brief Method set_customBakedTexture_Injected, addr 0x6ecb084, size 0x44, virtual false, abstract: false, final false
  static inline void set_customBakedTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_farClipPlane, addr 0x6ec8e64, size 0xb8, virtual false, abstract: false, final false
  inline void set_farClipPlane(float_t value);

  /// @brief Method set_farClipPlane_Injected, addr 0x6ec8f1c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_farClipPlane_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_hdr, addr 0x6ec9350, size 0xb8, virtual false, abstract: false, final false
  inline void set_hdr(bool value);

  /// @brief Method set_hdr_Injected, addr 0x6ec9408, size 0x44, virtual false, abstract: false, final false
  static inline void set_hdr_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_importance, addr 0x6eca64c, size 0xb8, virtual false, abstract: false, final false
  inline void set_importance(int32_t value);

  /// @brief Method set_importance_Injected, addr 0x6eca704, size 0x44, virtual false, abstract: false, final false
  static inline void set_importance_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_intensity, addr 0x6ec904c, size 0xb8, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

  /// @brief Method set_intensity_Injected, addr 0x6ec9104, size 0x4c, virtual false, abstract: false, final false
  static inline void set_intensity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_mode, addr 0x6eca46c, size 0xb8, virtual false, abstract: false, final false
  inline void set_mode(::UnityEngine::Rendering::ReflectionProbeMode value);

  /// @brief Method set_mode_Injected, addr 0x6eca524, size 0x44, virtual false, abstract: false, final false
  static inline void set_mode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeMode value);

  /// @brief Method set_nearClipPlane, addr 0x6ec8c7c, size 0xb8, virtual false, abstract: false, final false
  inline void set_nearClipPlane(float_t value);

  /// @brief Method set_nearClipPlane_Injected, addr 0x6ec8d34, size 0x4c, virtual false, abstract: false, final false
  static inline void set_nearClipPlane_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_realtimeTexture, addr 0x6ecb27c, size 0xe8, virtual false, abstract: false, final false
  inline void set_realtimeTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_realtimeTexture_Injected, addr 0x6ecb364, size 0x44, virtual false, abstract: false, final false
  static inline void set_realtimeTexture_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_refreshMode, addr 0x6eca82c, size 0xb8, virtual false, abstract: false, final false
  inline void set_refreshMode(::UnityEngine::Rendering::ReflectionProbeRefreshMode value);

  /// @brief Method set_refreshMode_Injected, addr 0x6eca8e4, size 0x44, virtual false, abstract: false, final false
  static inline void set_refreshMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeRefreshMode value);

  /// @brief Method set_renderDynamicObjects, addr 0x6ec9530, size 0xb8, virtual false, abstract: false, final false
  inline void set_renderDynamicObjects(bool value);

  /// @brief Method set_renderDynamicObjects_Injected, addr 0x6ec95e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderDynamicObjects_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_resolution, addr 0x6ec98f8, size 0xb8, virtual false, abstract: false, final false
  inline void set_resolution(int32_t value);

  /// @brief Method set_resolution_Injected, addr 0x6ec99b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_resolution_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_shadowDistance, addr 0x6ec9710, size 0xb8, virtual false, abstract: false, final false
  inline void set_shadowDistance(float_t value);

  /// @brief Method set_shadowDistance_Injected, addr 0x6ec97c8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_shadowDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_size, addr 0x6ec8884, size 0xc0, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  /// @brief Method set_size_Injected, addr 0x6ec8944, size 0x44, virtual false, abstract: false, final false
  static inline void set_size_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_timeSlicingMode, addr 0x6ecaa0c, size 0xb8, virtual false, abstract: false, final false
  inline void set_timeSlicingMode(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode value);

  /// @brief Method set_timeSlicingMode_Injected, addr 0x6ecaac4, size 0x44, virtual false, abstract: false, final false
  static inline void set_timeSlicingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode value);

  /// @brief Method set_type, addr 0x6ec867c, size 0xb8, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::Rendering::ReflectionProbeType value);

  /// @brief Method set_type_Injected, addr 0x6ec8734, size 0x44, virtual false, abstract: false, final false
  static inline void set_type_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ReflectionProbeType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbe();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionProbe(ReflectionProbe&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionProbe(ReflectionProbe const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9672 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ReflectionProbe) == 0x18, "Size mismatch!");

} // namespace UnityEngine
