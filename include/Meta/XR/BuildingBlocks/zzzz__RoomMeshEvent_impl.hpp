#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/RoomMeshEvent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__RoomMeshEvent_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::RoomMeshEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::BuildingBlocks::RoomMeshEvent::*)()>(&::Meta::XR::BuildingBlocks::RoomMeshEvent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a33438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::RoomMeshEvent*>(), { ".ctor", {}, {} })));
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
  this->___OnRoomMeshLoadCompleted = value;
}
inline void Meta::XR::BuildingBlocks::RoomMeshEvent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::BuildingBlocks::RoomMeshEvent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::RoomMeshEvent* Meta::XR::BuildingBlocks::RoomMeshEvent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::BuildingBlocks::RoomMeshEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::RoomMeshEvent::RoomMeshEvent() {}
