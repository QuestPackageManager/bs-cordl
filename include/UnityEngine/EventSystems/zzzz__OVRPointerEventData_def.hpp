#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/OVRPointerEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OVRPointerEventData)
namespace UnityEngine::EventSystems {
class EventSystem;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class OVRPointerEventData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::OVRPointerEventData);
// Type: UnityEngine.EventSystems::OVRPointerEventData
// SizeInfo { instance_size: 384, native_size: -1, calculated_instance_size: 384, calculated_native_size: 384, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: ::UnityEngine.EventSystems::OVRPointerEventData*
class CORDL_TYPE OVRPointerEventData : public ::UnityEngine::EventSystems::PointerEventData {
public:
  // Declarations
  /// @brief Field swipeStart, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_swipeStart, put = __cordl_internal_set_swipeStart))::UnityEngine::Vector2 swipeStart;

  /// @brief Field worldSpaceRay, offset 0x160, size 0x18
  __declspec(property(get = __cordl_internal_get_worldSpaceRay, put = __cordl_internal_set_worldSpaceRay))::UnityEngine::Ray worldSpaceRay;

  static inline ::UnityEngine::EventSystems::OVRPointerEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method ToString, addr 0x2bf1968, size 0x3b4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_swipeStart() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_swipeStart();

  constexpr ::UnityEngine::Ray const& __cordl_internal_get_worldSpaceRay() const;

  constexpr ::UnityEngine::Ray& __cordl_internal_get_worldSpaceRay();

  constexpr void __cordl_internal_set_swipeStart(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_worldSpaceRay(::UnityEngine::Ray value);

  /// @brief Method .ctor, addr 0x2bef87c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPointerEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPointerEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPointerEventData(OVRPointerEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPointerEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPointerEventData(OVRPointerEventData const&) = delete;

  /// @brief Field worldSpaceRay, offset: 0x160, size: 0x18, def value: None
  ::UnityEngine::Ray ___worldSpaceRay;

  /// @brief Field swipeStart, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___swipeStart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::OVRPointerEventData, 0x180>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRPointerEventData, ___worldSpaceRay) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::OVRPointerEventData, ___swipeStart) == 0x178, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::OVRPointerEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::OVRPointerEventData*, "UnityEngine.EventSystems", "OVRPointerEventData");
