#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/Price.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Price_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Price._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Price::*)(::System::IntPtr)>(&::Oculus::Platform::Models::Price::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5bdc620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Price*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
constexpr uint32_t& Oculus::Platform::Models::Price::__cordl_internal_get_AmountInHundredths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AmountInHundredths;
}
constexpr uint32_t const& Oculus::Platform::Models::Price::__cordl_internal_get_AmountInHundredths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AmountInHundredths;
}
constexpr void Oculus::Platform::Models::Price::__cordl_internal_set_AmountInHundredths(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AmountInHundredths = value;
}
constexpr ::StringW& Oculus::Platform::Models::Price::__cordl_internal_get_Currency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Currency;
}
constexpr ::StringW const& Oculus::Platform::Models::Price::__cordl_internal_get_Currency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Currency;
}
constexpr void Oculus::Platform::Models::Price::__cordl_internal_set_Currency(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Currency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Oculus::Platform::Models::Price::__cordl_internal_get_Formatted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Formatted;
}
constexpr ::StringW const& Oculus::Platform::Models::Price::__cordl_internal_get_Formatted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Formatted;
}
constexpr void Oculus::Platform::Models::Price::__cordl_internal_set_Formatted(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Formatted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Oculus::Platform::Models::Price::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Price*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::Price* Oculus::Platform::Models::Price::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::Price*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Price::Price() {}
