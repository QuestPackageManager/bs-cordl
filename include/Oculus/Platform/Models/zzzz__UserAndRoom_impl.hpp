#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__UserAndRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::UserAndRoom._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::UserAndRoom::*)(void*)>(&::Oculus::Platform::Models::UserAndRoom::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x273d6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserAndRoom*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::Room*& Oculus::Platform::Models::UserAndRoom::__cordl_internal_get_RoomOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Room*> const& Oculus::Platform::Models::UserAndRoom::__cordl_internal_get_RoomOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RoomOptional;
}
constexpr void Oculus::Platform::Models::UserAndRoom::__cordl_internal_set_RoomOptional(::Oculus::Platform::Models::Room* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RoomOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::Room*& Oculus::Platform::Models::UserAndRoom::__cordl_internal_get_Room() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Room;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Room*> const& Oculus::Platform::Models::UserAndRoom::__cordl_internal_get_Room() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Room;
}
constexpr void Oculus::Platform::Models::UserAndRoom::__cordl_internal_set_Room(::Oculus::Platform::Models::Room* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Room)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::UserAndRoom::__cordl_internal_get_User() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___User;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& Oculus::Platform::Models::UserAndRoom::__cordl_internal_get_User() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___User;
}
constexpr void Oculus::Platform::Models::UserAndRoom::__cordl_internal_set_User(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___User)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::UserAndRoom* Oculus::Platform::Models::UserAndRoom::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::UserAndRoom*>(o));
}
inline void Oculus::Platform::Models::UserAndRoom::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserAndRoom*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::UserAndRoom::UserAndRoom() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
