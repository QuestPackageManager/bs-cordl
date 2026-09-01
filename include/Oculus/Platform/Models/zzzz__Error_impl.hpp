#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\Error.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__Error_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::Error._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::Error::*)(int32_t, ::StringW, int32_t)>(&::Oculus::Platform::Models::Error::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5def878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Error*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
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
  this->___Message = value;
}
inline void Oculus::Platform::Models::Error::_ctor(int32_t code, ::StringW message, int32_t httpCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::Error*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, message, httpCode);
}
inline ::Oculus::Platform::Models::Error* Oculus::Platform::Models::Error::New_ctor(int32_t code, ::StringW message, int32_t httpCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::Error*>(code, message, httpCode));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::Error::Error() {}
