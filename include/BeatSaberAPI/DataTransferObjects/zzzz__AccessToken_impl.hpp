#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__AccessToken_def.hpp"
//  Writing Method size for method: ::BeatSaberAPI::DataTransferObjects::AccessToken._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaberAPI::DataTransferObjects::AccessToken::*)()>(
    &::BeatSaberAPI::DataTransferObjects::AccessToken::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21e8b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::AccessToken*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::AccessToken::__get_token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___token;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::AccessToken::__get_token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___token;
}
constexpr void BeatSaberAPI::DataTransferObjects::AccessToken::__set_token(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___token)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaberAPI::DataTransferObjects::AccessToken::__get_expiration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expiration;
}
constexpr ::StringW const& BeatSaberAPI::DataTransferObjects::AccessToken::__get_expiration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expiration;
}
constexpr void BeatSaberAPI::DataTransferObjects::AccessToken::__set_expiration(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___expiration)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaberAPI::DataTransferObjects::AccessToken* BeatSaberAPI::DataTransferObjects::AccessToken::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaberAPI::DataTransferObjects::AccessToken*>());
}
inline void BeatSaberAPI::DataTransferObjects::AccessToken::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaberAPI::DataTransferObjects::AccessToken*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaberAPI::DataTransferObjects::AccessToken::AccessToken() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
