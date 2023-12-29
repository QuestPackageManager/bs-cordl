#pragma once
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
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::InputSystem::UI {
struct __TrackedDeviceRaycaster__RaycastHitData;
}
namespace UnityEngine::InputSystem::UI {
class __TrackedDeviceRaycaster____c;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
namespace UnityEngine {
class Camera;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Vector2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6467))
// CS Name: ::TrackedDeviceRaycaster::RaycastHitData
struct CORDL_TYPE __TrackedDeviceRaycaster__RaycastHitData {
public:
  // Declarations
  __declspec(property(get = get_graphic))::UnityEngine::UI::Graphic* graphic;

  __declspec(property(get = get_worldHitPosition))::UnityEngine::Vector3 worldHitPosition;

  __declspec(property(get = get_screenPosition))::UnityEngine::Vector2 screenPosition;

  __declspec(property(get = get_distance)) float_t distance;

  /// @brief Method .ctor addr 0x2957664 size 0x14 virtual false final false
  inline void _ctor(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::Vector3 worldHitPosition, ::UnityEngine::Vector2 screenPosition, float_t distance);

  /// @brief Method get_graphic addr 0x2957788 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Graphic* get_graphic();

  /// @brief Method get_worldHitPosition addr 0x2957790 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_worldHitPosition();

  /// @brief Method get_screenPosition addr 0x295779c size 0x8 virtual false final false
  inline ::UnityEngine::Vector2 get_screenPosition();

  /// @brief Method get_distance addr 0x29577a4 size 0x8 virtual false final false
  inline float_t get_distance();

  // Ctor Parameters [CppParam { name: "_graphic_k__BackingField", ty: "::UnityEngine::UI::Graphic*", modifiers: "", def_value: None }, CppParam { name: "_worldHitPosition_k__BackingField", ty:
  // "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_screenPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name:
  // "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __TrackedDeviceRaycaster__RaycastHitData(::UnityEngine::UI::Graphic* _graphic_k__BackingField, ::UnityEngine::Vector3 _worldHitPosition_k__BackingField,
                                                     ::UnityEngine::Vector2 _screenPosition_k__BackingField, float_t _distance_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedDeviceRaycaster__RaycastHitData();

  /// @brief Field <graphic>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UI::Graphic* _graphic_k__BackingField;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6468))
// CS Name: ::TrackedDeviceRaycaster::<>c*
class CORDL_TYPE __TrackedDeviceRaycaster____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c* __9;

  /// @brief Field <>9__25_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__25_0, put = setStaticF___9__25_0))::System::Comparison_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* __9__25_0;

  static inline void setStaticF___9(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c* value);

  static inline ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c* getStaticF___9();

  static inline void setStaticF___9__25_0(::System::Comparison_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* value);

  static inline ::System::Comparison_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* getStaticF___9__25_0();

  static inline ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c* New_ctor();

  /// @brief Method .ctor addr 0x2957810 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SortedRaycastGraphics>b__25_0 addr 0x2957818 size 0x54 virtual false final false
  inline int32_t _SortedRaycastGraphics_b__25_0(::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData g1,
                                                ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData g2);

  // Ctor Parameters [CppParam { name: "", ty: "__TrackedDeviceRaycaster____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TrackedDeviceRaycaster____c(__TrackedDeviceRaycaster____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TrackedDeviceRaycaster____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TrackedDeviceRaycaster____c(__TrackedDeviceRaycaster____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TrackedDeviceRaycaster____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
// Type: UnityEngine.InputSystem.UI::TrackedDeviceRaycaster
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6755)), TypeDefinitionIndex(TypeDefinitionIndex(13214)), TypeDefinitionIndex(TypeDefinitionIndex(10132)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6755), inst: 3776 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6469)) CS Name:
// ::UnityEngine.InputSystem.UI::TrackedDeviceRaycaster*
class CORDL_TYPE TrackedDeviceRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster____c;

  using RaycastHitData = ::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData;

  /// @brief Field m_RaycastResultsCache, offset 0x20, size 0x8
  __declspec(property(get = __get_m_RaycastResultsCache,
                      put = __set_m_RaycastResultsCache))::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* m_RaycastResultsCache;

  /// @brief Field m_IgnoreReversedGraphics, offset 0x28, size 0x1
  __declspec(property(get = __get_m_IgnoreReversedGraphics, put = __set_m_IgnoreReversedGraphics)) bool m_IgnoreReversedGraphics;

  /// @brief Field m_CheckFor2DOcclusion, offset 0x29, size 0x1
  __declspec(property(get = __get_m_CheckFor2DOcclusion, put = __set_m_CheckFor2DOcclusion)) bool m_CheckFor2DOcclusion;

  /// @brief Field m_CheckFor3DOcclusion, offset 0x2a, size 0x1
  __declspec(property(get = __get_m_CheckFor3DOcclusion, put = __set_m_CheckFor3DOcclusion)) bool m_CheckFor3DOcclusion;

  /// @brief Field m_MaxDistance, offset 0x2c, size 0x4
  __declspec(property(get = __get_m_MaxDistance, put = __set_m_MaxDistance)) float_t m_MaxDistance;

  /// @brief Field m_BlockingMask, offset 0x30, size 0x4
  __declspec(property(get = __get_m_BlockingMask, put = __set_m_BlockingMask))::UnityEngine::LayerMask m_BlockingMask;

  /// @brief Field m_Canvas, offset 0x38, size 0x8
  __declspec(property(get = __get_m_Canvas, put = __set_m_Canvas))::UnityEngine::Canvas* m_Canvas;

  /// @brief Field s_Instances, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF_s_Instances,
                             put = setStaticF_s_Instances))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*> s_Instances;

  /// @brief Field s_SortedGraphics, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SortedGraphics,
                             put = setStaticF_s_SortedGraphics))::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* s_SortedGraphics;

  __declspec(property(get = get_eventCamera))::UnityEngine::Camera* eventCamera;

  __declspec(property(get = get_blockingMask, put = set_blockingMask))::UnityEngine::LayerMask blockingMask;

  __declspec(property(get = get_checkFor3DOcclusion, put = set_checkFor3DOcclusion)) bool checkFor3DOcclusion;

  __declspec(property(get = get_checkFor2DOcclusion, put = set_checkFor2DOcclusion)) bool checkFor2DOcclusion;

  __declspec(property(get = get_ignoreReversedGraphics, put = set_ignoreReversedGraphics)) bool ignoreReversedGraphics;

  __declspec(property(get = get_maxDistance, put = set_maxDistance)) float_t maxDistance;

  __declspec(property(get = get_canvas))::UnityEngine::Canvas* canvas;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*& __get_m_RaycastResultsCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>*> const&
  __get_m_RaycastResultsCache() const;

  constexpr void __set_m_RaycastResultsCache(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* value);

  constexpr bool& __get_m_IgnoreReversedGraphics();

  constexpr bool const& __get_m_IgnoreReversedGraphics() const;

  constexpr void __set_m_IgnoreReversedGraphics(bool value);

  constexpr bool& __get_m_CheckFor2DOcclusion();

  constexpr bool const& __get_m_CheckFor2DOcclusion() const;

  constexpr void __set_m_CheckFor2DOcclusion(bool value);

  constexpr bool& __get_m_CheckFor3DOcclusion();

  constexpr bool const& __get_m_CheckFor3DOcclusion() const;

  constexpr void __set_m_CheckFor3DOcclusion(bool value);

  constexpr float_t& __get_m_MaxDistance();

  constexpr float_t const& __get_m_MaxDistance() const;

  constexpr void __set_m_MaxDistance(float_t value);

  constexpr ::UnityEngine::LayerMask& __get_m_BlockingMask();

  constexpr ::UnityEngine::LayerMask const& __get_m_BlockingMask() const;

  constexpr void __set_m_BlockingMask(::UnityEngine::LayerMask value);

  constexpr ::UnityEngine::Canvas*& __get_m_Canvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& __get_m_Canvas() const;

  constexpr void __set_m_Canvas(::UnityEngine::Canvas* value);

  static inline void setStaticF_s_Instances(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*> value);

  static inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*> getStaticF_s_Instances();

  static inline void setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* getStaticF_s_SortedGraphics();

  /// @brief Method get_eventCamera addr 0x2956b84 size 0x94 virtual true final false
  inline ::UnityEngine::Camera* get_eventCamera();

  /// @brief Method get_blockingMask addr 0x2956cac size 0x8 virtual false final false
  inline ::UnityEngine::LayerMask get_blockingMask();

  /// @brief Method set_blockingMask addr 0x2956cb4 size 0x8 virtual false final false
  inline void set_blockingMask(::UnityEngine::LayerMask value);

  /// @brief Method get_checkFor3DOcclusion addr 0x2956cbc size 0x8 virtual false final false
  inline bool get_checkFor3DOcclusion();

  /// @brief Method set_checkFor3DOcclusion addr 0x2956cc4 size 0xc virtual false final false
  inline void set_checkFor3DOcclusion(bool value);

  /// @brief Method get_checkFor2DOcclusion addr 0x2956cd0 size 0x8 virtual false final false
  inline bool get_checkFor2DOcclusion();

  /// @brief Method set_checkFor2DOcclusion addr 0x2956cd8 size 0xc virtual false final false
  inline void set_checkFor2DOcclusion(bool value);

  /// @brief Method get_ignoreReversedGraphics addr 0x2956ce4 size 0x8 virtual false final false
  inline bool get_ignoreReversedGraphics();

  /// @brief Method set_ignoreReversedGraphics addr 0x2956cec size 0xc virtual false final false
  inline void set_ignoreReversedGraphics(bool value);

  /// @brief Method get_maxDistance addr 0x2956cf8 size 0x8 virtual false final false
  inline float_t get_maxDistance();

  /// @brief Method set_maxDistance addr 0x2956d00 size 0x8 virtual false final false
  inline void set_maxDistance(float_t value);

  /// @brief Method OnEnable addr 0x2956d08 size 0x84 virtual true final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2956d8c size 0xf4 virtual true final false
  inline void OnDisable();

  /// @brief Method Raycast addr 0x2956e80 size 0xb0 virtual true final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method PerformRaycast addr 0x2950b60 size 0x5e0 virtual false final false
  inline void PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method SortedRaycastGraphics addr 0x2956f30 size 0x4dc virtual false final false
  inline void SortedRaycastGraphics(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray,
                                    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::__TrackedDeviceRaycaster__RaycastHitData>* results);

  /// @brief Method RayIntersectsRectTransform addr 0x295740c size 0x258 virtual false final false
  static inline bool RayIntersectsRectTransform(::UnityEngine::RectTransform* transform, ::UnityEngine::Ray ray, ByRef<::UnityEngine::Vector3> worldPosition, ByRef<float_t> distance);

  /// @brief Method get_canvas addr 0x2956c18 size 0x94 virtual false final false
  inline ::UnityEngine::Canvas* get_canvas();

  static inline ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster* New_ctor();

  /// @brief Method .ctor addr 0x2957678 size 0x84 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackedDeviceRaycaster(TrackedDeviceRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackedDeviceRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackedDeviceRaycaster(TrackedDeviceRaycaster const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackedDeviceRaycaster();

public:
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
  ::UnityEngine::Canvas* ___m_Canvas;

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
