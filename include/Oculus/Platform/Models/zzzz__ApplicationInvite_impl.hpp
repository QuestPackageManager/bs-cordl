#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInvite_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ApplicationInvite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::ApplicationInvite::*)(void*)>(
    &::Oculus::Platform::Models::ApplicationInvite::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x25b0c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationInvite*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::Destination*& Oculus::Platform::Models::ApplicationInvite::__get_DestinationOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> const& Oculus::Platform::Models::ApplicationInvite::__get_DestinationOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationOptional;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_DestinationOptional(::Oculus::Platform::Models::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DestinationOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::Destination*& Oculus::Platform::Models::ApplicationInvite::__get_Destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Destination;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Destination*> const& Oculus::Platform::Models::ApplicationInvite::__get_Destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Destination;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_Destination(::Oculus::Platform::Models::Destination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Destination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& Oculus::Platform::Models::ApplicationInvite::__get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::ApplicationInvite::__get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr bool& Oculus::Platform::Models::ApplicationInvite::__get_IsActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsActive;
}
constexpr bool const& Oculus::Platform::Models::ApplicationInvite::__get_IsActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsActive;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_IsActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsActive = value;
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationInvite::__get_LobbySessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbySessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationInvite::__get_LobbySessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbySessionId;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_LobbySessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LobbySessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationInvite::__get_MatchSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchSessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationInvite::__get_MatchSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchSessionId;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_MatchSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MatchSessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::ApplicationInvite::__get_RecipientOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecipientOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& Oculus::Platform::Models::ApplicationInvite::__get_RecipientOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecipientOptional;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_RecipientOptional(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RecipientOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::ApplicationInvite::__get_Recipient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Recipient;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& Oculus::Platform::Models::ApplicationInvite::__get_Recipient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Recipient;
}
constexpr void Oculus::Platform::Models::ApplicationInvite::__set_Recipient(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Recipient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::ApplicationInvite* Oculus::Platform::Models::ApplicationInvite::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::ApplicationInvite*>(o));
}
inline void Oculus::Platform::Models::ApplicationInvite::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationInvite*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::ApplicationInvite::ApplicationInvite() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
