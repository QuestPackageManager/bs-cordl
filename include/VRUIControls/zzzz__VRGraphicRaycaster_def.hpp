#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRGraphicRaycaster)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace VRUIControls {
class PhysicsRaycasterWithCache;
}
namespace UnityEngine {
class Camera;
}
namespace VRUIControls {
struct __VRGraphicRaycaster__VRGraphicRaycastResult;
}
namespace UnityEngine {
class Canvas;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
namespace VRUIControls {
class __VRGraphicRaycaster____c;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
struct Ray;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace VRUIControls {
class VRGraphicRaycaster;
}
namespace VRUIControls {
class __VRGraphicRaycaster____c;
}
namespace VRUIControls {
struct __VRGraphicRaycaster__VRGraphicRaycastResult;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::VRGraphicRaycaster);
MARK_REF_PTR_T(::VRUIControls::__VRGraphicRaycaster____c);
MARK_VAL_T(::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult);
// Type: ::VRGraphicRaycastResult
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace VRUIControls {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15673))
// CS Name: ::VRGraphicRaycaster::VRGraphicRaycastResult
struct CORDL_TYPE __VRGraphicRaycaster__VRGraphicRaycastResult {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2eb5df0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UI::Graphic* graphic, float_t distance, ::UnityEngine::Vector3 position, ::UnityEngine::Vector2 insideRootCanvasPosition);

  // Ctor Parameters [CppParam { name: "graphic", ty: "::UnityEngine::UI::Graphic*", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "insideRootCanvasPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
  // None }]
  constexpr __VRGraphicRaycaster__VRGraphicRaycastResult(::UnityEngine::UI::Graphic* graphic, float_t distance, ::UnityEngine::Vector3 position,
                                                         ::UnityEngine::Vector2 insideRootCanvasPosition) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRGraphicRaycaster__VRGraphicRaycastResult();

  /// @brief Field graphic, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UI::Graphic* graphic;

  /// @brief Field distance, offset: 0x8, size: 0x4, def value: None
  float_t distance;

  /// @brief Field position, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field insideRootCanvasPosition, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 insideRootCanvasPosition;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult, 0x20>, "Size mismatch!");

static_assert(offsetof(::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult, graphic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult, distance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult, position) == 0xc, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult, insideRootCanvasPosition) == 0x18, "Offset mismatch!");

} // namespace VRUIControls
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15674))
// CS Name: ::VRGraphicRaycaster::<>c*
class CORDL_TYPE __VRGraphicRaycaster____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::VRUIControls::__VRGraphicRaycaster____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Comparison_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* __9__12_0;

  static inline void setStaticF___9(::VRUIControls::__VRGraphicRaycaster____c* value);

  static inline ::VRUIControls::__VRGraphicRaycaster____c* getStaticF___9();

  static inline void setStaticF___9__12_0(::System::Comparison_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* value);

  static inline ::System::Comparison_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* getStaticF___9__12_0();

  static inline ::VRUIControls::__VRGraphicRaycaster____c* New_ctor();

  /// @brief Method .ctor, addr 0x2eb5f8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <RaycastCanvas>b__12_0, addr 0x2eb5f94, size 0x54, virtual false, abstract: false, final false
  inline int32_t _RaycastCanvas_b__12_0(::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult g1, ::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult g2);

  // Ctor Parameters [CppParam { name: "", ty: "__VRGraphicRaycaster____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VRGraphicRaycaster____c(__VRGraphicRaycaster____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VRGraphicRaycaster____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VRGraphicRaycaster____c(__VRGraphicRaycaster____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VRGraphicRaycaster____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::__VRGraphicRaycaster____c, 0x10>, "Size mismatch!");

} // namespace VRUIControls
// Type: VRUIControls::VRGraphicRaycaster
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10204)), TypeDefinitionIndex(TypeDefinitionIndex(13209))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15675))
// CS Name: ::VRUIControls::VRGraphicRaycaster*
class CORDL_TYPE VRGraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using __c = ::VRUIControls::__VRGraphicRaycaster____c;

  using VRGraphicRaycastResult = ::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult;

  /// @brief Field _blockingMask, offset 0x20, size 0x4
  __declspec(property(get = __get__blockingMask, put = __set__blockingMask))::UnityEngine::LayerMask _blockingMask;

  /// @brief Field _physicsRaycaster, offset 0x28, size 0x8
  __declspec(property(get = __get__physicsRaycaster, put = __set__physicsRaycaster))::VRUIControls::PhysicsRaycasterWithCache* _physicsRaycaster;

  /// @brief Field _canvas, offset 0x30, size 0x8
  __declspec(property(get = __get__canvas, put = __set__canvas))::UnityEngine::Canvas* _canvas;

  /// @brief Field _raycastResults, offset 0x38, size 0x8
  __declspec(property(get = __get__raycastResults, put = __set__raycastResults))::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* _raycastResults;

  /// @brief Field _curvedCanvasSettingsHelper, offset 0x40, size 0x8
  __declspec(property(get = __get__curvedCanvasSettingsHelper, put = __set__curvedCanvasSettingsHelper))::HMUI::CurvedCanvasSettingsHelper* _curvedCanvasSettingsHelper;

  /// @brief Field _ray2DCircleIntersectionDistances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__ray2DCircleIntersectionDistances,
                             put = setStaticF__ray2DCircleIntersectionDistances))::ArrayW<float_t, ::Array<float_t>*> _ray2DCircleIntersectionDistances;

  __declspec(property(get = get_eventCamera))::UnityEngine::Camera* eventCamera;

  constexpr ::UnityEngine::LayerMask& __get__blockingMask();

  constexpr ::UnityEngine::LayerMask const& __get__blockingMask() const;

  constexpr void __set__blockingMask(::UnityEngine::LayerMask value);

  constexpr ::VRUIControls::PhysicsRaycasterWithCache*& __get__physicsRaycaster();

  constexpr ::cordl_internals::to_const_pointer<::VRUIControls::PhysicsRaycasterWithCache*> const& __get__physicsRaycaster() const;

  constexpr void __set__physicsRaycaster(::VRUIControls::PhysicsRaycasterWithCache* value);

  constexpr ::UnityEngine::Canvas*& __get__canvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& __get__canvas() const;

  constexpr void __set__canvas(::UnityEngine::Canvas* value);

  constexpr ::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*& __get__raycastResults();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>*> const& __get__raycastResults() const;

  constexpr void __set__raycastResults(::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* value);

  constexpr ::HMUI::CurvedCanvasSettingsHelper*& __get__curvedCanvasSettingsHelper();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedCanvasSettingsHelper*> const& __get__curvedCanvasSettingsHelper() const;

  constexpr void __set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper* value);

  static inline void setStaticF__ray2DCircleIntersectionDistances(::ArrayW<float_t, ::Array<float_t>*> value);

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF__ray2DCircleIntersectionDistances();

  /// @brief Method get_eventCamera, addr 0x2eb4ba0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Camera* get_eventCamera();

  /// @brief Method OnEnable, addr 0x2eb4ba8, size 0x70, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Raycast, addr 0x2eb4c18, size 0x690, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method RaycastCanvas, addr 0x2eb52a8, size 0xb48, virtual false, abstract: false, final false
  static inline void RaycastCanvas(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, float_t hitDistance, float_t curvedUIRadius,
                                   ::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* results);

  static inline ::VRUIControls::VRGraphicRaycaster* New_ctor();

  /// @brief Method .ctor, addr 0x2eb5e04, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRGraphicRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRGraphicRaycaster(VRGraphicRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRGraphicRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRGraphicRaycaster(VRGraphicRaycaster const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRGraphicRaycaster();

public:
  /// @brief Field _blockingMask, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____blockingMask;

  /// @brief Field _physicsRaycaster, offset: 0x28, size: 0x8, def value: None
  ::VRUIControls::PhysicsRaycasterWithCache* ____physicsRaycaster;

  /// @brief Field _canvas, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Canvas* ____canvas;

  /// @brief Field _raycastResults, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult>* ____raycastResults;

  /// @brief Field _curvedCanvasSettingsHelper, offset: 0x40, size: 0x8, def value: None
  ::HMUI::CurvedCanvasSettingsHelper* ____curvedCanvasSettingsHelper;

  /// @brief Field kPhysics3DRaycastDistance offset 0xffffffff size 0x4
  static constexpr float_t kPhysics3DRaycastDistance{ 6.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::VRGraphicRaycaster, 0x48>, "Size mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster, ____blockingMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster, ____physicsRaycaster) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster, ____canvas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster, ____raycastResults) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster, ____curvedCanvasSettingsHelper) == 0x40, "Offset mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::VRGraphicRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRGraphicRaycaster*, "VRUIControls", "VRGraphicRaycaster");
NEED_NO_BOX(::VRUIControls::__VRGraphicRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::__VRGraphicRaycaster____c*, "VRUIControls", "VRGraphicRaycaster/<>c");
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::__VRGraphicRaycaster__VRGraphicRaycastResult, "VRUIControls", "VRGraphicRaycaster/VRGraphicRaycastResult");
