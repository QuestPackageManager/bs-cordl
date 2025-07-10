#pragma once
// IWYU pragma private; include "System/Net/HeaderInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HeaderInfo_def.hpp"
#include "System/Net/zzzz__HeaderParser_def.hpp"
//  Writing Method size for method: ::System::Net::HeaderInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HeaderInfo::*)(::StringW, bool, bool, bool, ::System::Net::HeaderParser*)>(
    &::System::Net::HeaderInfo::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x44a8978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HeaderParser*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::HeaderInfo::__cordl_internal_get_IsRequestRestricted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsRequestRestricted;
}
constexpr bool const& System::Net::HeaderInfo::__cordl_internal_get_IsRequestRestricted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsRequestRestricted;
}
constexpr void System::Net::HeaderInfo::__cordl_internal_set_IsRequestRestricted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsRequestRestricted = value;
}
constexpr bool& System::Net::HeaderInfo::__cordl_internal_get_IsResponseRestricted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsResponseRestricted;
}
constexpr bool const& System::Net::HeaderInfo::__cordl_internal_get_IsResponseRestricted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsResponseRestricted;
}
constexpr void System::Net::HeaderInfo::__cordl_internal_set_IsResponseRestricted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsResponseRestricted = value;
}
constexpr ::System::Net::HeaderParser*& System::Net::HeaderInfo::__cordl_internal_get_Parser() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parser;
}
constexpr ::System::Net::HeaderParser* const& System::Net::HeaderInfo::__cordl_internal_get_Parser() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parser;
}
constexpr void System::Net::HeaderInfo::__cordl_internal_set_Parser(::System::Net::HeaderParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parser)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::HeaderInfo::__cordl_internal_get_HeaderName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeaderName;
}
constexpr ::StringW const& System::Net::HeaderInfo::__cordl_internal_get_HeaderName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HeaderName;
}
constexpr void System::Net::HeaderInfo::__cordl_internal_set_HeaderName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HeaderName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HeaderInfo::__cordl_internal_get_AllowMultiValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllowMultiValues;
}
constexpr bool const& System::Net::HeaderInfo::__cordl_internal_get_AllowMultiValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AllowMultiValues;
}
constexpr void System::Net::HeaderInfo::__cordl_internal_set_AllowMultiValues(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AllowMultiValues = value;
}
inline void System::Net::HeaderInfo::_ctor(::StringW name, bool requestRestricted, bool responseRestricted, bool multi, ::System::Net::HeaderParser* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HeaderParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, requestRestricted, responseRestricted, multi, p);
}
inline ::System::Net::HeaderInfo* System::Net::HeaderInfo::New_ctor(::StringW name, bool requestRestricted, bool responseRestricted, bool multi, ::System::Net::HeaderParser* p) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::HeaderInfo*>(name, requestRestricted, responseRestricted, multi, p));
}
// Ctor Parameters []
constexpr ::System::Net::HeaderInfo::HeaderInfo() {}
