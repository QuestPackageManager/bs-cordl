#pragma once
#include "Oculus/Platform/zzzz__UserPresenceStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::User._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::User::*)(void*)>(&::Oculus::Platform::Models::User::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27f5a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::User*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& Oculus::Platform::Models::User::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::User::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_ImageURL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ImageURL;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_ImageURL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ImageURL;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_ImageURL(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ImageURL)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_OculusID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OculusID;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_OculusID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OculusID;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_OculusID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OculusID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_Presence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Presence;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_Presence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Presence;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_Presence(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Presence)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_PresenceDeeplinkMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceDeeplinkMessage;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_PresenceDeeplinkMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceDeeplinkMessage;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_PresenceDeeplinkMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PresenceDeeplinkMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_PresenceDestinationApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceDestinationApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_PresenceDestinationApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceDestinationApiName;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_PresenceDestinationApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PresenceDestinationApiName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_PresenceLobbySessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceLobbySessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_PresenceLobbySessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceLobbySessionId;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_PresenceLobbySessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PresenceLobbySessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_PresenceMatchSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceMatchSessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_PresenceMatchSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceMatchSessionId;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_PresenceMatchSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PresenceMatchSessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::UserPresenceStatus& Oculus::Platform::Models::User::__cordl_internal_get_PresenceStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceStatus;
}
constexpr ::Oculus::Platform::UserPresenceStatus const& Oculus::Platform::Models::User::__cordl_internal_get_PresenceStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PresenceStatus;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_PresenceStatus(::Oculus::Platform::UserPresenceStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PresenceStatus = value;
}
constexpr ::StringW& Oculus::Platform::Models::User::__cordl_internal_get_SmallImageUrl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SmallImageUrl;
}
constexpr ::StringW const& Oculus::Platform::Models::User::__cordl_internal_get_SmallImageUrl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SmallImageUrl;
}
constexpr void Oculus::Platform::Models::User::__cordl_internal_set_SmallImageUrl(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SmallImageUrl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::User* Oculus::Platform::Models::User::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::User*>(o));
}
inline void Oculus::Platform::Models::User::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::User*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::User::User() {}
