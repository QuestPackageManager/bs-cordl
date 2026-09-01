#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\NetSyncSetSessionPropertyResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSession_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::NetSyncSetSessionPropertyResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::NetSyncSetSessionPropertyResult::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5df124c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::NetSyncSession*& Oculus::Platform::Models::NetSyncSetSessionPropertyResult::__cordl_internal_get_Session() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Session;
}
constexpr ::Oculus::Platform::Models::NetSyncSession* const& Oculus::Platform::Models::NetSyncSetSessionPropertyResult::__cordl_internal_get_Session() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Session;
}
constexpr void Oculus::Platform::Models::NetSyncSetSessionPropertyResult::__cordl_internal_set_Session(::Oculus::Platform::Models::NetSyncSession* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Session = value;
}
inline void Oculus::Platform::Models::NetSyncSetSessionPropertyResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* Oculus::Platform::Models::NetSyncSetSessionPropertyResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult::NetSyncSetSessionPropertyResult() {}
