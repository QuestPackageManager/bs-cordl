#pragma once
// IWYU pragma private; include "VRUIControls/VRGraphicRaycaster.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRGraphicRaycaster)
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
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
struct Ray;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace VRUIControls {
class PhysicsRaycasterWithCache;
}
namespace VRUIControls {
struct VRGraphicRaycaster_VRGraphicRaycastResult;
}
namespace VRUIControls {
class VRGraphicRaycaster___c;
}
// Forward declare root types
namespace VRUIControls {
class VRGraphicRaycaster;
}
namespace VRUIControls {
class VRGraphicRaycaster___c;
}
namespace VRUIControls {
struct VRGraphicRaycaster_VRGraphicRaycastResult;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::VRGraphicRaycaster);
MARK_REF_PTR_T(::VRUIControls::VRGraphicRaycaster___c);
MARK_VAL_T(::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult);
// Dependencies UnityEngine.Vector2, UnityEngine.Vector3
namespace VRUIControls {
// Is value type: true
// CS Name: VRUIControls.VRGraphicRaycaster/VRGraphicRaycastResult
struct CORDL_TYPE VRGraphicRaycaster_VRGraphicRaycastResult {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x4aeeccc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UI::Graphic* graphic, float_t distance, ::UnityEngine::Vector3 position, ::UnityEngine::Vector2 insideRootCanvasPosition);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VRGraphicRaycaster_VRGraphicRaycastResult();

  // Ctor Parameters [CppParam { name: "graphic", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "insideRootCanvasPosition", ty: "::UnityEngine::Vector2", modifiers: "",
  // def_value: None }]
  constexpr VRGraphicRaycaster_VRGraphicRaycastResult(::UnityW<::UnityEngine::UI::Graphic> graphic, float_t distance, ::UnityEngine::Vector3 position,
                                                      ::UnityEngine::Vector2 insideRootCanvasPosition) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18261 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field graphic, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> graphic;

  /// @brief Field distance, offset: 0x8, size: 0x4, def value: None
  float_t distance;

  /// @brief Field position, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field insideRootCanvasPosition, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 insideRootCanvasPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult, graphic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult, distance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult, position) == 0xc, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult, insideRootCanvasPosition) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult, 0x20>, "Size mismatch!");

} // namespace VRUIControls
// Dependencies System.Object
namespace VRUIControls {
// Is value type: false
// CS Name: VRUIControls.VRGraphicRaycaster/<>c
class CORDL_TYPE VRGraphicRaycaster___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::VRUIControls::VRGraphicRaycaster___c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* __9__12_0;

  static inline ::VRUIControls::VRGraphicRaycaster___c* New_ctor();

  /// @brief Method <RaycastCanvas>b__12_0, addr 0x4aeee64, size 0x50, virtual false, abstract: false, final false
  inline int32_t _RaycastCanvas_b__12_0(::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult g1, ::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult g2);

  /// @brief Method .ctor, addr 0x4aeee5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::VRUIControls::VRGraphicRaycaster___c* getStaticF___9();

  static inline ::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* getStaticF___9__12_0();

  static inline void setStaticF___9(::VRUIControls::VRGraphicRaycaster___c* value);

  static inline void setStaticF___9__12_0(::System::Comparison_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRGraphicRaycaster___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRGraphicRaycaster___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRGraphicRaycaster___c(VRGraphicRaycaster___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRGraphicRaycaster___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRGraphicRaycaster___c(VRGraphicRaycaster___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::VRGraphicRaycaster___c, 0x10>, "Size mismatch!");

} // namespace VRUIControls
// Dependencies UnityEngine.EventSystems.BaseRaycaster, UnityEngine.LayerMask
namespace VRUIControls {
// Is value type: false
// CS Name: VRUIControls.VRGraphicRaycaster
class CORDL_TYPE VRGraphicRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using VRGraphicRaycastResult = ::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult;

  using __c = ::VRUIControls::VRGraphicRaycaster___c;

  /// @brief Field _blockingMask, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__blockingMask, put = __cordl_internal_set__blockingMask)) ::UnityEngine::LayerMask _blockingMask;

  /// @brief Field _canvas, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__canvas, put = __cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas> _canvas;

  /// @brief Field _curvedCanvasSettingsHelper, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__curvedCanvasSettingsHelper, put = __cordl_internal_set__curvedCanvasSettingsHelper)) ::HMUI::CurvedCanvasSettingsHelper* _curvedCanvasSettingsHelper;

  /// @brief Field _physicsRaycaster, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__physicsRaycaster, put = __cordl_internal_set__physicsRaycaster)) ::VRUIControls::PhysicsRaycasterWithCache* _physicsRaycaster;

  /// @brief Field _ray2DCircleIntersectionDistances, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__ray2DCircleIntersectionDistances, put = setStaticF__ray2DCircleIntersectionDistances)) ::ArrayW<float_t, ::Array<float_t>*> _ray2DCircleIntersectionDistances;

  /// @brief Field _raycastResults, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__raycastResults,
                      put = __cordl_internal_set__raycastResults)) ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* _raycastResults;

  __declspec(property(get = get_eventCamera)) ::UnityW<::UnityEngine::Camera> eventCamera;

  static inline ::VRUIControls::VRGraphicRaycaster* New_ctor();

  /// @brief Method OnEnable, addr 0x4aeda44, size 0x70, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Raycast, addr 0x4aedab4, size 0x6c0, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method RaycastCanvas, addr 0x4aee174, size 0xb58, virtual false, abstract: false, final false
  static inline void RaycastCanvas(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, float_t hitDistance, float_t curvedUIRadius,
                                   ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* results);

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__blockingMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__blockingMask();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas();

  constexpr ::HMUI::CurvedCanvasSettingsHelper* const& __cordl_internal_get__curvedCanvasSettingsHelper() const;

  constexpr ::HMUI::CurvedCanvasSettingsHelper*& __cordl_internal_get__curvedCanvasSettingsHelper();

  constexpr ::VRUIControls::PhysicsRaycasterWithCache* const& __cordl_internal_get__physicsRaycaster() const;

  constexpr ::VRUIControls::PhysicsRaycasterWithCache*& __cordl_internal_get__physicsRaycaster();

  constexpr ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* const& __cordl_internal_get__raycastResults() const;

  constexpr ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>*& __cordl_internal_get__raycastResults();

  constexpr void __cordl_internal_set__blockingMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper* value);

  constexpr void __cordl_internal_set__physicsRaycaster(::VRUIControls::PhysicsRaycasterWithCache* value);

  constexpr void __cordl_internal_set__raycastResults(::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* value);

  /// @brief Method .ctor, addr 0x4aeece0, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF__ray2DCircleIntersectionDistances();

  /// @brief Method get_eventCamera, addr 0x4aeda3c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  static inline void setStaticF__ray2DCircleIntersectionDistances(::ArrayW<float_t, ::Array<float_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRGraphicRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRGraphicRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRGraphicRaycaster(VRGraphicRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRGraphicRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRGraphicRaycaster(VRGraphicRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18263 };

  /// @brief Field kPhysics3DRaycastDistance offset 0xffffffff size 0x4
  static constexpr float_t kPhysics3DRaycastDistance{ static_cast<float_t>(6.0f) };

  /// @brief Field _blockingMask, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____blockingMask;

  /// @brief Field _physicsRaycaster, offset: 0x30, size: 0x8, def value: None
  ::VRUIControls::PhysicsRaycasterWithCache* ____physicsRaycaster;

  /// @brief Field _canvas, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ____canvas;

  /// @brief Field _raycastResults, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult>* ____raycastResults;

  /// @brief Field _curvedCanvasSettingsHelper, offset: 0x48, size: 0x8, def value: None
  ::HMUI::CurvedCanvasSettingsHelper* ____curvedCanvasSettingsHelper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VRUIControls::VRGraphicRaycaster, ____blockingMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster, ____physicsRaycaster) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster, ____canvas) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster, ____raycastResults) == 0x40, "Offset mismatch!");

static_assert(offsetof(::VRUIControls::VRGraphicRaycaster, ____curvedCanvasSettingsHelper) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VRUIControls::VRGraphicRaycaster, 0x50>, "Size mismatch!");

} // namespace VRUIControls
NEED_NO_BOX(::VRUIControls::VRGraphicRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRGraphicRaycaster*, "VRUIControls", "VRGraphicRaycaster");
NEED_NO_BOX(::VRUIControls::VRGraphicRaycaster___c);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRGraphicRaycaster___c*, "VRUIControls", "VRGraphicRaycaster/<>c");
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRGraphicRaycaster_VRGraphicRaycastResult, "VRUIControls", "VRGraphicRaycaster/VRGraphicRaycastResult");
