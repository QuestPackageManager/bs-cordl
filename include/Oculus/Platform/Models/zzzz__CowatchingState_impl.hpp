#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/CowatchingState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchingState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::CowatchingState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::CowatchingState::*)(::System::IntPtr)>(&::Oculus::Platform::Models::CowatchingState::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ded010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::CowatchingState*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::CowatchingState::__cordl_internal_get_InSession() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InSession;
}
constexpr bool const& Oculus::Platform::Models::CowatchingState::__cordl_internal_get_InSession() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InSession;
}
constexpr void Oculus::Platform::Models::CowatchingState::__cordl_internal_set_InSession(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InSession = value;
}
inline void Oculus::Platform::Models::CowatchingState::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::CowatchingState*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::CowatchingState* Oculus::Platform::Models::CowatchingState::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::CowatchingState*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::CowatchingState::CowatchingState() {}
