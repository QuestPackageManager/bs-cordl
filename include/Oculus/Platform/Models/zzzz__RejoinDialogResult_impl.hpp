#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/RejoinDialogResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::RejoinDialogResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::RejoinDialogResult::*)(::System::IntPtr)>(&::Oculus::Platform::Models::RejoinDialogResult::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5df0178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::RejoinDialogResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::RejoinDialogResult::__cordl_internal_get_RejoinSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RejoinSelected;
}
constexpr bool const& Oculus::Platform::Models::RejoinDialogResult::__cordl_internal_get_RejoinSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RejoinSelected;
}
constexpr void Oculus::Platform::Models::RejoinDialogResult::__cordl_internal_set_RejoinSelected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RejoinSelected = value;
}
inline void Oculus::Platform::Models::RejoinDialogResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::RejoinDialogResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::RejoinDialogResult* Oculus::Platform::Models::RejoinDialogResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::RejoinDialogResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::RejoinDialogResult::RejoinDialogResult() {}
