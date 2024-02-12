#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Team_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Team._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Team::*)(void*)>(&::Oculus::Platform::Models::Team::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x273d5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Team*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::UserList*& Oculus::Platform::Models::Team::__cordl_internal_get_AssignedUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssignedUsers;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::UserList*> const& Oculus::Platform::Models::Team::__cordl_internal_get_AssignedUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssignedUsers;
}
constexpr void Oculus::Platform::Models::Team::__cordl_internal_set_AssignedUsers(::Oculus::Platform::Models::UserList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AssignedUsers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Oculus::Platform::Models::Team::__cordl_internal_get_MaxUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxUsers;
}
constexpr int32_t const& Oculus::Platform::Models::Team::__cordl_internal_get_MaxUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxUsers;
}
constexpr void Oculus::Platform::Models::Team::__cordl_internal_set_MaxUsers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxUsers = value;
}
constexpr int32_t& Oculus::Platform::Models::Team::__cordl_internal_get_MinUsers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MinUsers;
}
constexpr int32_t const& Oculus::Platform::Models::Team::__cordl_internal_get_MinUsers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MinUsers;
}
constexpr void Oculus::Platform::Models::Team::__cordl_internal_set_MinUsers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MinUsers = value;
}
constexpr ::StringW& Oculus::Platform::Models::Team::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& Oculus::Platform::Models::Team::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void Oculus::Platform::Models::Team::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::Team* Oculus::Platform::Models::Team::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::Team*>(o));
}
inline void Oculus::Platform::Models::Team::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Team*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Team::Team() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
