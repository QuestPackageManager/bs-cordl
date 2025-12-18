#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/RoomMeshEvent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__RoomMeshEvent_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::RoomMeshEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::RoomMeshEvent::*)()>(&::Meta::XR::BuildingBlocks::RoomMeshEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5885eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::RoomMeshEvent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::MeshFilter>>*& Meta::XR::BuildingBlocks::RoomMeshEvent::__cordl_internal_get_OnRoomMeshLoadCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnRoomMeshLoadCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::MeshFilter>>* const& Meta::XR::BuildingBlocks::RoomMeshEvent::__cordl_internal_get_OnRoomMeshLoadCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnRoomMeshLoadCompleted;
}
constexpr void Meta::XR::BuildingBlocks::RoomMeshEvent::__cordl_internal_set_OnRoomMeshLoadCompleted(::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::MeshFilter>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnRoomMeshLoadCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::BuildingBlocks::RoomMeshEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::RoomMeshEvent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::RoomMeshEvent* Meta::XR::BuildingBlocks::RoomMeshEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::BuildingBlocks::RoomMeshEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::RoomMeshEvent::RoomMeshEvent() {}
