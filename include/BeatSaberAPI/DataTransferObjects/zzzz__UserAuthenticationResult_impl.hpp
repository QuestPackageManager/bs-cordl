#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserAuthenticationResult_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__AccessToken_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserInfo_def.hpp"
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::UserAuthenticationResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::*)()>(
    &::BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::UserAuthenticationResult*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::BeatSaberAPI::DataTransferObjects::UserInfo*& BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::__get_userInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userInfo;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaberAPI::DataTransferObjects::UserInfo*> const& BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::__get_userInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userInfo;
}
constexpr void BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::__set_userInfo(::BeatSaberAPI::DataTransferObjects::UserInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaberAPI::DataTransferObjects::AccessToken*& BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::__get_accessToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accessToken;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaberAPI::DataTransferObjects::AccessToken*> const& BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::__get_accessToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accessToken;
}
constexpr void BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::__set_accessToken(::BeatSaberAPI::DataTransferObjects::AccessToken* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___accessToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaberAPI::DataTransferObjects::UserAuthenticationResult* BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaberAPI::DataTransferObjects::UserAuthenticationResult*>());
}
inline void BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::UserAuthenticationResult*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaberAPI::DataTransferObjects::UserAuthenticationResult::UserAuthenticationResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
