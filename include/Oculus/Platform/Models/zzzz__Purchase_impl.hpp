#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Purchase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Purchase::*)(void*)>(&::Oculus::Platform::Models::Purchase::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x27087ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Purchase*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::Purchase::__cordl_internal_get_DeveloperPayload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeveloperPayload;
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__cordl_internal_get_DeveloperPayload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeveloperPayload;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set_DeveloperPayload(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeveloperPayload)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Oculus::Platform::Models::Purchase::__cordl_internal_get_ExpirationTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpirationTime;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Purchase::__cordl_internal_get_ExpirationTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExpirationTime;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set_ExpirationTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExpirationTime = value;
}
constexpr ::System::DateTime& Oculus::Platform::Models::Purchase::__cordl_internal_get_GrantTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GrantTime;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::Purchase::__cordl_internal_get_GrantTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GrantTime;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set_GrantTime(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GrantTime = value;
}
constexpr ::StringW& Oculus::Platform::Models::Purchase::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set__cordl_ID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_ID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Purchase::__cordl_internal_get_ReportingId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReportingId;
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__cordl_internal_get_ReportingId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReportingId;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set_ReportingId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ReportingId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Purchase::__cordl_internal_get_Sku() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sku;
}
constexpr ::StringW const& Oculus::Platform::Models::Purchase::__cordl_internal_get_Sku() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Sku;
}
constexpr void Oculus::Platform::Models::Purchase::__cordl_internal_set_Sku(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Sku)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::Purchase* Oculus::Platform::Models::Purchase::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::Purchase*>(o));
}
inline void Oculus::Platform::Models::Purchase::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Purchase*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Purchase::Purchase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
