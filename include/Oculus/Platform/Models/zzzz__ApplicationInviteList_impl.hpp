#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\ApplicationInviteList.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInvite_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ApplicationInviteList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::ApplicationInviteList::*)(::System::IntPtr)>(&::Oculus::Platform::Models::ApplicationInviteList::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5dd9b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ApplicationInviteList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::Models::ApplicationInviteList::_ctor(::System::IntPtr a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ApplicationInviteList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a);
}
inline ::Oculus::Platform::Models::ApplicationInviteList* Oculus::Platform::Models::ApplicationInviteList::New_ctor(::System::IntPtr a) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::ApplicationInviteList*>(a));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::ApplicationInviteList::ApplicationInviteList() {}
