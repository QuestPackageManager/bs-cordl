#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Error_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Error._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::Error::*)(int32_t, ::StringW, int32_t)>(
    &::Oculus::Platform::Models::Error::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x285a0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Error*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Platform::Models::Error::__cordl_internal_get_Code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Code;
}
constexpr int32_t const& Oculus::Platform::Models::Error::__cordl_internal_get_Code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Code;
}
constexpr void Oculus::Platform::Models::Error::__cordl_internal_set_Code(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Code = value;
}
constexpr int32_t& Oculus::Platform::Models::Error::__cordl_internal_get_HttpCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HttpCode;
}
constexpr int32_t const& Oculus::Platform::Models::Error::__cordl_internal_get_HttpCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HttpCode;
}
constexpr void Oculus::Platform::Models::Error::__cordl_internal_set_HttpCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HttpCode = value;
}
constexpr ::StringW& Oculus::Platform::Models::Error::__cordl_internal_get_Message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Message;
}
constexpr ::StringW const& Oculus::Platform::Models::Error::__cordl_internal_get_Message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Message;
}
constexpr void Oculus::Platform::Models::Error::__cordl_internal_set_Message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::Error* Oculus::Platform::Models::Error::New_ctor(int32_t code, ::StringW message, int32_t httpCode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::Error*>(code, message, httpCode));
}
inline void Oculus::Platform::Models::Error::_ctor(int32_t code, ::StringW message, int32_t httpCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::Error*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code, message, httpCode);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Error::Error() {}
