#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::GroupPresenceJoinIntent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::GroupPresenceJoinIntent::*)(void*)>(
    &::Oculus::Platform::Models::GroupPresenceJoinIntent::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2705dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::GroupPresenceJoinIntent*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::GroupPresenceJoinIntent::__get_DeeplinkMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DeeplinkMessage;
}
constexpr ::StringW const& Oculus::Platform::Models::GroupPresenceJoinIntent::__get_DeeplinkMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DeeplinkMessage;
}
constexpr void Oculus::Platform::Models::GroupPresenceJoinIntent::__set_DeeplinkMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeeplinkMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::GroupPresenceJoinIntent::__get_DestinationApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DestinationApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::GroupPresenceJoinIntent::__get_DestinationApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DestinationApiName;
}
constexpr void Oculus::Platform::Models::GroupPresenceJoinIntent::__set_DestinationApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DestinationApiName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::GroupPresenceJoinIntent::__get_LobbySessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___LobbySessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::GroupPresenceJoinIntent::__get_LobbySessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___LobbySessionId;
}
constexpr void Oculus::Platform::Models::GroupPresenceJoinIntent::__set_LobbySessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LobbySessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::GroupPresenceJoinIntent::__get_MatchSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___MatchSessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::GroupPresenceJoinIntent::__get_MatchSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___MatchSessionId;
}
constexpr void Oculus::Platform::Models::GroupPresenceJoinIntent::__set_MatchSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MatchSessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* Oculus::Platform::Models::GroupPresenceJoinIntent::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::GroupPresenceJoinIntent*>(o));
}
inline void Oculus::Platform::Models::GroupPresenceJoinIntent::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::GroupPresenceJoinIntent*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::GroupPresenceJoinIntent::GroupPresenceJoinIntent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
