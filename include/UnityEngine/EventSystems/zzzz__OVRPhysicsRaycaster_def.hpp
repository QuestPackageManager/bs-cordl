#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/OVRPhysicsRaycaster.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPhysicsRaycaster)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine::EventSystems {
class OVRPhysicsRaycaster___c;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class OVRPhysicsRaycaster;
}
namespace UnityEngine::EventSystems {
class OVRPhysicsRaycaster___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::OVRPhysicsRaycaster);
MARK_REF_PTR_T(::UnityEngine::EventSystems::OVRPhysicsRaycaster___c);
// Dependencies System.Object
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.OVRPhysicsRaycaster/<>c
class CORDL_TYPE OVRPhysicsRaycaster___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0)) ::System::Comparison_1<::UnityEngine::RaycastHit>* __9__15_0;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0)) ::System::Comparison_1<::UnityEngine::RaycastHit>* __9__16_0;

  static inline ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c* New_ctor();

  /// @brief Method <Raycast>b__15_0, addr 0x4081150, size 0x40, virtual false, abstract: false, final false
  inline int32_t _Raycast_b__15_0(::UnityEngine::RaycastHit r1, ::UnityEngine::RaycastHit r2);

  /// @brief Method <Spherecast>b__16_0, addr 0x4081190, size 0x40, virtual false, abstract: false, final false
  inline int32_t _Spherecast_b__16_0(::UnityEngine::RaycastHit r1, ::UnityEngine::RaycastHit r2);

  /// @brief Method .ctor, addr 0x4081148, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityEngine::RaycastHit>* getStaticF___9__15_0();

  static inline ::System::Comparison_1<::UnityEngine::RaycastHit>* getStaticF___9__16_0();

  static inline void setStaticF___9(::UnityEngine::EventSystems::OVRPhysicsRaycaster___c* value);

  static inline void setStaticF___9__15_0(::System::Comparison_1<::UnityEngine::RaycastHit>* value);

  static inline void setStaticF___9__16_0(::System::Comparison_1<::UnityEngine::RaycastHit>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPhysicsRaycaster___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPhysicsRaycaster___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPhysicsRaycaster___c(OVRPhysicsRaycaster___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPhysicsRaycaster___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPhysicsRaycaster___c(OVRPhysicsRaycaster___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9057 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::OVRPhysicsRaycaster___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Dependencies UnityEngine.EventSystems.BaseRaycaster, UnityEngine.LayerMask
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.OVRPhysicsRaycaster
class CORDL_TYPE OVRPhysicsRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using __c = ::UnityEngine::EventSystems::OVRPhysicsRaycaster___c;

  __declspec(property(get = get_depth)) int32_t depth;

  __declspec(property(get = get_eventCamera)) ::UnityW<::UnityEngine::Camera> eventCamera;

  __declspec(property(get = get_eventMask, put = set_eventMask)) ::UnityEngine::LayerMask eventMask;

  __declspec(property(get = get_finalEventMask)) int32_t finalEventMask;

  /// @brief Field m_EventMask, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EventMask, put = __cordl_internal_set_m_EventMask)) ::UnityEngine::LayerMask m_EventMask;

  /// @brief Field sortOrder, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_sortOrder, put = __cordl_internal_set_sortOrder)) int32_t sortOrder;

  __declspec(property(get = get_sortOrderPriority)) int32_t sortOrderPriority;

  /// @brief Method GetScreenPos, addr 0x407fdb8, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetScreenPos(::UnityEngine::Vector3 worldPosition);

  static inline ::UnityEngine::EventSystems::OVRPhysicsRaycaster* New_ctor();

  /// @brief Method Raycast, addr 0x4080c24, size 0x440, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method Spherecast, addr 0x407f970, size 0x448, virtual false, abstract: false, final false
  inline void Spherecast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList,
                         float_t radius);

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_EventMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_EventMask();

  constexpr int32_t const& __cordl_internal_get_sortOrder() const;

  constexpr int32_t& __cordl_internal_get_sortOrder();

  constexpr void __cordl_internal_set_m_EventMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_sortOrder(int32_t value);

  /// @brief Method .ctor, addr 0x4080a04, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_depth, addr 0x4080a84, size 0xc4, virtual true, abstract: false, final false
  inline int32_t get_depth();

  /// @brief Method get_eventCamera, addr 0x4080a2c, size 0x58, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  /// @brief Method get_eventMask, addr 0x4080c14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_eventMask();

  /// @brief Method get_finalEventMask, addr 0x4080b50, size 0xc4, virtual false, abstract: false, final false
  inline int32_t get_finalEventMask();

  /// @brief Method get_sortOrderPriority, addr 0x4080b48, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_sortOrderPriority();

  /// @brief Method set_eventMask, addr 0x4080c1c, size 0x8, virtual false, abstract: false, final false
  inline void set_eventMask(::UnityEngine::LayerMask value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPhysicsRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPhysicsRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPhysicsRaycaster(OVRPhysicsRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPhysicsRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPhysicsRaycaster(OVRPhysicsRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9058 };

  /// @brief Field kNoEventMaskSet offset 0xffffffff size 0x4
  static constexpr int32_t kNoEventMaskSet{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field m_EventMask, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_EventMask;

  /// @brief Field sortOrder, offset: 0x2c, size: 0x4, def value: None
  int32_t ___sortOrder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::OVRPhysicsRaycaster, ___m_EventMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRPhysicsRaycaster, ___sortOrder) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::OVRPhysicsRaycaster, 0x30>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::OVRPhysicsRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::OVRPhysicsRaycaster*, "UnityEngine.EventSystems", "OVRPhysicsRaycaster");
NEED_NO_BOX(::UnityEngine::EventSystems::OVRPhysicsRaycaster___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::OVRPhysicsRaycaster___c*, "UnityEngine.EventSystems", "OVRPhysicsRaycaster/<>c");
