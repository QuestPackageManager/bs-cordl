#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPhysicsRaycaster)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine::EventSystems {
class __OVRPhysicsRaycaster____c;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class OVRPhysicsRaycaster;
}
namespace UnityEngine::EventSystems {
class __OVRPhysicsRaycaster____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::OVRPhysicsRaycaster);
MARK_REF_PTR_T(::UnityEngine::EventSystems::__OVRPhysicsRaycaster____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8740))
// CS Name: ::OVRPhysicsRaycaster::<>c*
class CORDL_TYPE __OVRPhysicsRaycaster____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::EventSystems::__OVRPhysicsRaycaster____c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0))::System::Comparison_1<::UnityEngine::RaycastHit>* __9__15_0;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0))::System::Comparison_1<::UnityEngine::RaycastHit>* __9__16_0;

  static inline void setStaticF___9(::UnityEngine::EventSystems::__OVRPhysicsRaycaster____c* value);

  static inline ::UnityEngine::EventSystems::__OVRPhysicsRaycaster____c* getStaticF___9();

  static inline void setStaticF___9__15_0(::System::Comparison_1<::UnityEngine::RaycastHit>* value);

  static inline ::System::Comparison_1<::UnityEngine::RaycastHit>* getStaticF___9__15_0();

  static inline void setStaticF___9__16_0(::System::Comparison_1<::UnityEngine::RaycastHit>* value);

  static inline ::System::Comparison_1<::UnityEngine::RaycastHit>* getStaticF___9__16_0();

  static inline ::UnityEngine::EventSystems::__OVRPhysicsRaycaster____c* New_ctor();

  /// @brief Method .ctor, addr 0x27fc27c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Raycast>b__15_0, addr 0x27fc284, size 0x40, virtual false, abstract: false, final false
  inline int32_t _Raycast_b__15_0(::UnityEngine::RaycastHit r1, ::UnityEngine::RaycastHit r2);

  /// @brief Method <Spherecast>b__16_0, addr 0x27fc2c4, size 0x40, virtual false, abstract: false, final false
  inline int32_t _Spherecast_b__16_0(::UnityEngine::RaycastHit r1, ::UnityEngine::RaycastHit r2);

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPhysicsRaycaster____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRPhysicsRaycaster____c(__OVRPhysicsRaycaster____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRPhysicsRaycaster____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRPhysicsRaycaster____c(__OVRPhysicsRaycaster____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRPhysicsRaycaster____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__OVRPhysicsRaycaster____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::OVRPhysicsRaycaster
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13209)), TypeDefinitionIndex(TypeDefinitionIndex(10204))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8741))
// CS Name: ::UnityEngine.EventSystems::OVRPhysicsRaycaster*
class CORDL_TYPE OVRPhysicsRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using __c = ::UnityEngine::EventSystems::__OVRPhysicsRaycaster____c;

  /// @brief Field m_EventMask, offset 0x20, size 0x4
  __declspec(property(get = __get_m_EventMask, put = __set_m_EventMask))::UnityEngine::LayerMask m_EventMask;

  /// @brief Field sortOrder, offset 0x24, size 0x4
  __declspec(property(get = __get_sortOrder, put = __set_sortOrder)) int32_t sortOrder;

  __declspec(property(get = get_eventCamera))::UnityEngine::Camera* eventCamera;

  __declspec(property(get = get_depth)) int32_t depth;

  __declspec(property(get = get_sortOrderPriority)) int32_t sortOrderPriority;

  __declspec(property(get = get_finalEventMask)) int32_t finalEventMask;

  __declspec(property(get = get_eventMask, put = set_eventMask))::UnityEngine::LayerMask eventMask;

  constexpr ::UnityEngine::LayerMask& __get_m_EventMask();

  constexpr ::UnityEngine::LayerMask const& __get_m_EventMask() const;

  constexpr void __set_m_EventMask(::UnityEngine::LayerMask value);

  constexpr int32_t& __get_sortOrder();

  constexpr int32_t const& __get_sortOrder() const;

  constexpr void __set_sortOrder(int32_t value);

  static inline ::UnityEngine::EventSystems::OVRPhysicsRaycaster* New_ctor();

  /// @brief Method .ctor, addr 0x27fbb40, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eventCamera, addr 0x27fbb68, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::Camera* get_eventCamera();

  /// @brief Method get_depth, addr 0x27fbbc0, size 0xc4, virtual true, abstract: false, final false
  inline int32_t get_depth();

  /// @brief Method get_sortOrderPriority, addr 0x27fbc84, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_sortOrderPriority();

  /// @brief Method get_finalEventMask, addr 0x27fbc8c, size 0xc4, virtual false, abstract: false, final false
  inline int32_t get_finalEventMask();

  /// @brief Method get_eventMask, addr 0x27fbd50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_eventMask();

  /// @brief Method set_eventMask, addr 0x27fbd58, size 0x8, virtual false, abstract: false, final false
  inline void set_eventMask(::UnityEngine::LayerMask value);

  /// @brief Method Raycast, addr 0x27fbd60, size 0x430, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method Spherecast, addr 0x27faacc, size 0x438, virtual false, abstract: false, final false
  inline void Spherecast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList,
                         float_t radius);

  /// @brief Method GetScreenPos, addr 0x27faf04, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetScreenPos(::UnityEngine::Vector3 worldPosition);

  // Ctor Parameters [CppParam { name: "", ty: "OVRPhysicsRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPhysicsRaycaster(OVRPhysicsRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPhysicsRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPhysicsRaycaster(OVRPhysicsRaycaster const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPhysicsRaycaster();

public:
  /// @brief Field m_EventMask, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_EventMask;

  /// @brief Field sortOrder, offset: 0x24, size: 0x4, def value: None
  int32_t ___sortOrder;

  /// @brief Field kNoEventMaskSet offset 0xffffffff size 0x4
  static constexpr int32_t kNoEventMaskSet{ static_cast<int32_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::OVRPhysicsRaycaster, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRPhysicsRaycaster, ___m_EventMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRPhysicsRaycaster, ___sortOrder) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::OVRPhysicsRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::OVRPhysicsRaycaster*, "UnityEngine.EventSystems", "OVRPhysicsRaycaster");
NEED_NO_BOX(::UnityEngine::EventSystems::__OVRPhysicsRaycaster____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__OVRPhysicsRaycaster____c*, "UnityEngine.EventSystems", "OVRPhysicsRaycaster/<>c");
