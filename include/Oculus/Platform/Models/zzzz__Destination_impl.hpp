#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Destination._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Destination::*)(void*)>(&::Oculus::Platform::Models::Destination::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27040b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Destination*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::Destination::__get_ApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::Destination::__get_ApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApiName;
}
constexpr void Oculus::Platform::Models::Destination::__set_ApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ApiName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Destination::__get_DeeplinkMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr ::StringW const& Oculus::Platform::Models::Destination::__get_DeeplinkMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr void Oculus::Platform::Models::Destination::__set_DeeplinkMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeeplinkMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Destination::__get_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr ::StringW const& Oculus::Platform::Models::Destination::__get_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr void Oculus::Platform::Models::Destination::__set_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::Destination* Oculus::Platform::Models::Destination::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::Destination*>(o));
}
inline void Oculus::Platform::Models::Destination::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Destination*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Destination::Destination() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
