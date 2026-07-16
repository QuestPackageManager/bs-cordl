#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/SendInvitesResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SendInvitesResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SendInvitesResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::SendInvitesResult::*)(::System::IntPtr)>(&::Oculus::Platform::Models::SendInvitesResult::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5df0448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::SendInvitesResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::ApplicationInviteList*& Oculus::Platform::Models::SendInvitesResult::__cordl_internal_get_Invites() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Invites;
}
constexpr ::Oculus::Platform::Models::ApplicationInviteList* const& Oculus::Platform::Models::SendInvitesResult::__cordl_internal_get_Invites() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Invites;
}
constexpr void Oculus::Platform::Models::SendInvitesResult::__cordl_internal_set_Invites(::Oculus::Platform::Models::ApplicationInviteList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Invites = value;
}
inline void Oculus::Platform::Models::SendInvitesResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::SendInvitesResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::SendInvitesResult* Oculus::Platform::Models::SendInvitesResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::SendInvitesResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::SendInvitesResult::SendInvitesResult() {}
