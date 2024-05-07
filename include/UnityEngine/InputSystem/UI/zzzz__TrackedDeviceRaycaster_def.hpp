#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/TrackedDeviceRaycaster.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedDeviceRaycaster)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
namespace UnityEngine::InputSystem::UI {
struct __TrackedDeviceRaycaster__RaycastHitData;
}
namespace UnityEngine::InputSystem::UI {
class __TrackedDeviceRaycaster____c;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class TrackedDeviceRaycaster;
}
namespace UnityEngine::InputSystem::UI {
class __TrackedDeviceRaycaster____c;
}
namespace UnityEngine::InputSystem::UI {
struct __TrackedDeviceRaycaster__RaycastHitData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster);
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c);
MARK_VAL_T(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData);
// Type: ::RaycastHitData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: ::TrackedDeviceRaycaster::RaycastHitData
struct CORDL_TYPE __TrackedDeviceRaycaster__RaycastHitData {
public:
  // Declarations
  __declspec(property(get = get_distance)) float_t distance;

  __declspec(property(get = get_graphic))::UnityW<::UnityEngine::UI::Graphic> graphic;

  __declspec(property(get = get_screenPosition))::UnityEngine::Vector2 screenPosition;

  __declspec(property(get = get_worldHitPosition))::UnityEngine::Vector3 worldHitPosition;

  /// @brief Method .ctor, addr 0x3146a5c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::Vector3 worldHitPosition, ::UnityEngine::Vector2 screenPosition, float_t distance);

  /// @brief Method get_distance, addr 0x3146b9c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// @brief Method get_graphic, addr 0x3146b80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_graphic();

  /// @brief Method get_screenPosition, addr 0x3146b94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_screenPosition();

  /// @brief Method get_worldHitPosition, addr 0x3146b88, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldHitPosition();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedDeviceRaycaster__RaycastHitData();

  // Ctor Parameters [CppParam { name: "_graphic_k__BackingField", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: None }, CppParam { name: "_worldHitPosition_k__BackingField",
  // ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_screenPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam {
  // name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __TrackedDeviceRaycaster__RaycastHitData(::UnityW<::UnityEngine::UI::Graphic> _graphic_k__BackingField, ::UnityEngine::Vector3 _worldHitPosition_k__BackingField,
                                                     ::UnityEngine::Vector2 _screenPosition_k__BackingField, float_t _distance_k__BackingField) noexcept;

  /// @brief Field <graphic>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> _graphic_k__BackingField;

  /// @brief Field <worldHitPosition>k__BackingField, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 _worldHitPosition_k__BackingField;

  /// @brief Field <screenPosition>k__BackingField, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 _screenPosition_k__BackingField;

  /// @brief Field <distance>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t _distance_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData, _graphic_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData, _worldHitPosition_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData, _screenPosition_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData, _distance_k__BackingField) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::UI
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: ::TrackedDeviceRaycaster::<>c*
class CORDL_TYPE __TrackedDeviceRaycaster____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0))::System::Comparison_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* __9__25_0;

  static inline ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c* New_ctor();

  /// @brief Method <SortedRaycastGraphics>b__25_0, addr 0x3146c10, size 0x54, virtual false, abstract: false, final false
  inline int32_t _SortedRaycastGraphics_b__25_0(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData g1,
                                                ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData g2);

  /// @brief Method .ctor, addr 0x3146c08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* getStaticF___9__25_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c* value);

  static inline void setStaticF___9__25_0(::System::Comparison_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedDeviceRaycaster____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TrackedDeviceRaycaster____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TrackedDeviceRaycaster____c(__TrackedDeviceRaycaster____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TrackedDeviceRaycaster____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TrackedDeviceRaycaster____c(__TrackedDeviceRaycaster____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
// Type: UnityEngine.InputSystem.UI::TrackedDeviceRaycaster
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.UI::TrackedDeviceRaycaster*
class CORDL_TYPE TrackedDeviceRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using RaycastHitData = ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData;

  using __c = ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c;

  __declspec(property(get = get_blockingMask, put = set_blockingMask))::UnityEngine::LayerMask blockingMask;

  __declspec(property(get = get_canvas))::UnityW<::UnityEngine::Canvas> canvas;

  __declspec(property(get = get_checkFor2DOcclusion, put = set_checkFor2DOcclusion)) bool checkFor2DOcclusion;

  __declspec(property(get = get_checkFor3DOcclusion, put = set_checkFor3DOcclusion)) bool checkFor3DOcclusion;

  __declspec(property(get = get_eventCamera))::UnityW<::UnityEngine::Camera> eventCamera;

  __declspec(property(get = get_ignoreReversedGraphics, put = set_ignoreReversedGraphics)) bool ignoreReversedGraphics;

  /// @brief Field m_BlockingMask, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlockingMask, put = __cordl_internal_set_m_BlockingMask))::UnityEngine::LayerMask m_BlockingMask;

  /// @brief Field m_Canvas, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Canvas, put = __cordl_internal_set_m_Canvas))::UnityW<::UnityEngine::Canvas> m_Canvas;

  /// @brief Field m_CheckFor2DOcclusion, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CheckFor2DOcclusion, put = __cordl_internal_set_m_CheckFor2DOcclusion)) bool m_CheckFor2DOcclusion;

  /// @brief Field m_CheckFor3DOcclusion, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CheckFor3DOcclusion, put = __cordl_internal_set_m_CheckFor3DOcclusion)) bool m_CheckFor3DOcclusion;

  /// @brief Field m_IgnoreReversedGraphics, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IgnoreReversedGraphics, put = __cordl_internal_set_m_IgnoreReversedGraphics)) bool m_IgnoreReversedGraphics;

  /// @brief Field m_MaxDistance, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxDistance, put = __cordl_internal_set_m_MaxDistance)) float_t m_MaxDistance;

  /// @brief Field m_RaycastResultsCache, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_RaycastResultsCache,
      put = __cordl_internal_set_m_RaycastResultsCache))::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* m_RaycastResultsCache;

  __declspec(property(get = get_maxDistance, put = set_maxDistance)) float_t maxDistance;

  /// @brief Field s_Instances, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF_s_Instances,
                             put = setStaticF_s_Instances))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityW<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>> s_Instances;

  /// @brief Field s_SortedGraphics, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SortedGraphics,
                             put = setStaticF_s_SortedGraphics))::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* s_SortedGraphics;

  static inline ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster* New_ctor();

  /// @brief Method OnDisable, addr 0x3146184, size 0xf4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3146100, size 0x84, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PerformRaycast, addr 0x313ff58, size 0x5e0, virtual false, abstract: false, final false
  inline void PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method RayIntersectsRectTransform, addr 0x3146804, size 0x258, virtual false, abstract: false, final false
  static inline bool RayIntersectsRectTransform(::UnityEngine::RectTransform* transform, ::UnityEngine::Ray ray, ByRef<::UnityEngine::Vector3> worldPosition, ByRef<float_t> distance);

  /// @brief Method Raycast, addr 0x3146278, size 0xb0, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method SortedRaycastGraphics, addr 0x3146328, size 0x4dc, virtual false, abstract: false, final false
  inline void SortedRaycastGraphics(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray,
                                    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* results);

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_BlockingMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_BlockingMask();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas();

  constexpr bool const& __cordl_internal_get_m_CheckFor2DOcclusion() const;

  constexpr bool& __cordl_internal_get_m_CheckFor2DOcclusion();

  constexpr bool const& __cordl_internal_get_m_CheckFor3DOcclusion() const;

  constexpr bool& __cordl_internal_get_m_CheckFor3DOcclusion();

  constexpr bool const& __cordl_internal_get_m_IgnoreReversedGraphics() const;

  constexpr bool& __cordl_internal_get_m_IgnoreReversedGraphics();

  constexpr float_t const& __cordl_internal_get_m_MaxDistance() const;

  constexpr float_t& __cordl_internal_get_m_MaxDistance();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*& __cordl_internal_get_m_RaycastResultsCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*> const&
  __cordl_internal_get_m_RaycastResultsCache() const;

  constexpr void __cordl_internal_set_m_BlockingMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_m_CheckFor2DOcclusion(bool value);

  constexpr void __cordl_internal_set_m_CheckFor3DOcclusion(bool value);

  constexpr void __cordl_internal_set_m_IgnoreReversedGraphics(bool value);

  constexpr void __cordl_internal_set_m_MaxDistance(float_t value);

  constexpr void __cordl_internal_set_m_RaycastResultsCache(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* value);

  /// @brief Method .ctor, addr 0x3146a70, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityW<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>> getStaticF_s_Instances();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* getStaticF_s_SortedGraphics();

  /// @brief Method get_blockingMask, addr 0x31460a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_blockingMask();

  /// @brief Method get_canvas, addr 0x3146010, size 0x94, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Canvas> get_canvas();

  /// @brief Method get_checkFor2DOcclusion, addr 0x31460c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_checkFor2DOcclusion();

  /// @brief Method get_checkFor3DOcclusion, addr 0x31460b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_checkFor3DOcclusion();

  /// @brief Method get_eventCamera, addr 0x3145f7c, size 0x94, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  /// @brief Method get_ignoreReversedGraphics, addr 0x31460dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_ignoreReversedGraphics();

  /// @brief Method get_maxDistance, addr 0x31460f0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxDistance();

  static inline void setStaticF_s_Instances(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityW<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>> value);

  static inline void setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* value);

  /// @brief Method set_blockingMask, addr 0x31460ac, size 0x8, virtual false, abstract: false, final false
  inline void set_blockingMask(::UnityEngine::LayerMask value);

  /// @brief Method set_checkFor2DOcclusion, addr 0x31460d0, size 0xc, virtual false, abstract: false, final false
  inline void set_checkFor2DOcclusion(bool value);

  /// @brief Method set_checkFor3DOcclusion, addr 0x31460bc, size 0xc, virtual false, abstract: false, final false
  inline void set_checkFor3DOcclusion(bool value);

  /// @brief Method set_ignoreReversedGraphics, addr 0x31460e4, size 0xc, virtual false, abstract: false, final false
  inline void set_ignoreReversedGraphics(bool value);

  /// @brief Method set_maxDistance, addr 0x31460f8, size 0x8, virtual false, abstract: false, final false
  inline void set_maxDistance(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedDeviceRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackedDeviceRaycaster(TrackedDeviceRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackedDeviceRaycaster(TrackedDeviceRaycaster const&) = delete;

  /// @brief Field m_RaycastResultsCache, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* ___m_RaycastResultsCache;

  /// @brief Field m_IgnoreReversedGraphics, offset: 0x28, size: 0x1, def value: None
  bool ___m_IgnoreReversedGraphics;

  /// @brief Field m_CheckFor2DOcclusion, offset: 0x29, size: 0x1, def value: None
  bool ___m_CheckFor2DOcclusion;

  /// @brief Field m_CheckFor3DOcclusion, offset: 0x2a, size: 0x1, def value: None
  bool ___m_CheckFor3DOcclusion;

  /// @brief Field m_MaxDistance, offset: 0x2c, size: 0x4, def value: None
  float_t ___m_MaxDistance;

  /// @brief Field m_BlockingMask, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_BlockingMask;

  /// @brief Field m_Canvas, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___m_Canvas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster, ___m_RaycastResultsCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster, ___m_IgnoreReversedGraphics) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster, ___m_CheckFor2DOcclusion) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster, ___m_CheckFor3DOcclusion) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster, ___m_MaxDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster, ___m_BlockingMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster, ___m_Canvas) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::UI
NEED_NO_BOX(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*, "UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster");
NEED_NO_BOX(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c*, "UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData, "UnityEngine.InputSystem.UI", "TrackedDeviceRaycaster/RaycastHitData");
