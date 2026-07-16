#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithApplicationInviteList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithApplicationInviteList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationInviteList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithApplicationInviteList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithApplicationInviteList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd4e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithApplicationInviteList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationInviteList.GetApplicationInviteList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ApplicationInviteList* (::Oculus::Platform::MessageWithApplicationInviteList::*)()>(
    &::Oculus::Platform::MessageWithApplicationInviteList::GetApplicationInviteList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd7838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithApplicationInviteList*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithApplicationInviteList*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithApplicationInviteList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::ApplicationInviteList* (::Oculus::Platform::MessageWithApplicationInviteList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithApplicationInviteList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dd787c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithApplicationInviteList*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithApplicationInviteList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithApplicationInviteList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithApplicationInviteList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ApplicationInviteList* Oculus::Platform::MessageWithApplicationInviteList::GetApplicationInviteList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithApplicationInviteList*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationInviteList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ApplicationInviteList* Oculus::Platform::MessageWithApplicationInviteList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithApplicationInviteList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ApplicationInviteList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithApplicationInviteList* Oculus::Platform::MessageWithApplicationInviteList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithApplicationInviteList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithApplicationInviteList::MessageWithApplicationInviteList() {}
