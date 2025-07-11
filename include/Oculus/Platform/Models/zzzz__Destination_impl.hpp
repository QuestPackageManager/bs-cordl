#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Destination.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Destination_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Destination._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Destination::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::Destination::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3f8f474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Destination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::Destination::__cordl_internal_get_ApiName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApiName;
}
constexpr ::StringW const& Oculus::Platform::Models::Destination::__cordl_internal_get_ApiName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApiName;
}
constexpr void Oculus::Platform::Models::Destination::__cordl_internal_set_ApiName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ApiName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Destination::__cordl_internal_get_DeeplinkMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr ::StringW const& Oculus::Platform::Models::Destination::__cordl_internal_get_DeeplinkMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeeplinkMessage;
}
constexpr void Oculus::Platform::Models::Destination::__cordl_internal_set_DeeplinkMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeeplinkMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Destination::__cordl_internal_get_DisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr ::StringW const& Oculus::Platform::Models::Destination::__cordl_internal_get_DisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayName;
}
constexpr void Oculus::Platform::Models::Destination::__cordl_internal_set_DisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::Destination::_ctor(::System::IntPtr o) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Destination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::Destination* Oculus::Platform::Models::Destination::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::Destination*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Destination::Destination() {}
