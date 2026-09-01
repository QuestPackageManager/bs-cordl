#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\HttpTransferUpdate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::HttpTransferUpdate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::HttpTransferUpdate::*)(::System::IntPtr)>(&::Oculus::Platform::Models::HttpTransferUpdate::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5def9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::HttpTransferUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::HttpTransferUpdate::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::HttpTransferUpdate::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::HttpTransferUpdate::__cordl_internal_set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr ::ArrayW<uint8_t>& Oculus::Platform::Models::HttpTransferUpdate::__cordl_internal_get_Payload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Payload;
}
constexpr ::ArrayW<uint8_t> const& Oculus::Platform::Models::HttpTransferUpdate::__cordl_internal_get_Payload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Payload;
}
constexpr void Oculus::Platform::Models::HttpTransferUpdate::__cordl_internal_set_Payload(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Payload = value;
}
constexpr bool& Oculus::Platform::Models::HttpTransferUpdate::__cordl_internal_get_IsCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsCompleted;
}
constexpr bool const& Oculus::Platform::Models::HttpTransferUpdate::__cordl_internal_get_IsCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsCompleted;
}
constexpr void Oculus::Platform::Models::HttpTransferUpdate::__cordl_internal_set_IsCompleted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsCompleted = value;
}
inline void Oculus::Platform::Models::HttpTransferUpdate::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::HttpTransferUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::HttpTransferUpdate* Oculus::Platform::Models::HttpTransferUpdate::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::HttpTransferUpdate*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::HttpTransferUpdate::HttpTransferUpdate() {}
