#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/RoomMeshEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RoomMeshEvent)
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class RoomMeshEvent;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::RoomMeshEvent);
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.RoomMeshEvent
class CORDL_TYPE RoomMeshEvent : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field OnRoomMeshLoadCompleted, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_OnRoomMeshLoadCompleted,
                      put = __cordl_internal_set_OnRoomMeshLoadCompleted)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::MeshFilter>>* OnRoomMeshLoadCompleted;

  static inline ::Meta::XR::BuildingBlocks::RoomMeshEvent* New_ctor();

  constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::MeshFilter>>* const& __cordl_internal_get_OnRoomMeshLoadCompleted() const;

  constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::MeshFilter>>*& __cordl_internal_get_OnRoomMeshLoadCompleted();

  constexpr void __cordl_internal_set_OnRoomMeshLoadCompleted(::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::MeshFilter>>* value);

  /// @brief Method .ctor, addr 0x5885eec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMeshEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomMeshEvent(RoomMeshEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomMeshEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomMeshEvent(RoomMeshEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21168 };

  /// @brief Field OnRoomMeshLoadCompleted, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::MeshFilter>>* ___OnRoomMeshLoadCompleted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::RoomMeshEvent, ___OnRoomMeshLoadCompleted) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::RoomMeshEvent, 0x28>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::RoomMeshEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::RoomMeshEvent*, "Meta.XR.BuildingBlocks", "RoomMeshEvent");
