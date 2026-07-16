#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/InvitePanelResultInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__InvitePanelResultInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::InvitePanelResultInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::InvitePanelResultInfo::*)(::System::IntPtr)>(&::Oculus::Platform::Models::InvitePanelResultInfo::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5dedb40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::InvitePanelResultInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::InvitePanelResultInfo::__cordl_internal_get_InvitesSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitesSent;
}
constexpr bool const& Oculus::Platform::Models::InvitePanelResultInfo::__cordl_internal_get_InvitesSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___InvitesSent;
}
constexpr void Oculus::Platform::Models::InvitePanelResultInfo::__cordl_internal_set_InvitesSent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___InvitesSent = value;
}
inline void Oculus::Platform::Models::InvitePanelResultInfo::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::InvitePanelResultInfo*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::InvitePanelResultInfo* Oculus::Platform::Models::InvitePanelResultInfo::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::InvitePanelResultInfo*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::InvitePanelResultInfo::InvitePanelResultInfo() {}
