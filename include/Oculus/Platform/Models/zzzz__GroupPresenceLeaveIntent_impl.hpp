#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::GroupPresenceLeaveIntent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::GroupPresenceLeaveIntent::*)(void*)>(
    &::Oculus::Platform::Models::GroupPresenceLeaveIntent::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27f77ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::GroupPresenceLeaveIntent::__cordl_internal_get_DestinationApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::GroupPresenceLeaveIntent::__cordl_internal_get_DestinationApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DestinationApiName;
}
constexpr void Oculus::Platform::Models::GroupPresenceLeaveIntent::__cordl_internal_set_DestinationApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DestinationApiName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::GroupPresenceLeaveIntent::__cordl_internal_get_LobbySessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbySessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::GroupPresenceLeaveIntent::__cordl_internal_get_LobbySessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LobbySessionId;
}
constexpr void Oculus::Platform::Models::GroupPresenceLeaveIntent::__cordl_internal_set_LobbySessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LobbySessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::GroupPresenceLeaveIntent::__cordl_internal_get_MatchSessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchSessionId;
}
constexpr ::StringW const& Oculus::Platform::Models::GroupPresenceLeaveIntent::__cordl_internal_get_MatchSessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchSessionId;
}
constexpr void Oculus::Platform::Models::GroupPresenceLeaveIntent::__cordl_internal_set_MatchSessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MatchSessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* Oculus::Platform::Models::GroupPresenceLeaveIntent::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>(o));
}
inline void Oculus::Platform::Models::GroupPresenceLeaveIntent::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::GroupPresenceLeaveIntent::GroupPresenceLeaveIntent() {}
