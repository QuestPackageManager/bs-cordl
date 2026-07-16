#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithBlockedUserList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithBlockedUserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__BlockedUserList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithBlockedUserList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithBlockedUserList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithBlockedUserList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithBlockedUserList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithBlockedUserList.GetBlockedUserList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::BlockedUserList* (::Oculus::Platform::MessageWithBlockedUserList::*)()>(
    &::Oculus::Platform::MessageWithBlockedUserList::GetBlockedUserList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd83ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithBlockedUserList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithBlockedUserList*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithBlockedUserList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::BlockedUserList* (::Oculus::Platform::MessageWithBlockedUserList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithBlockedUserList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dd83f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithBlockedUserList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithBlockedUserList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithBlockedUserList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithBlockedUserList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::BlockedUserList* Oculus::Platform::MessageWithBlockedUserList::GetBlockedUserList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithBlockedUserList*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::BlockedUserList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::BlockedUserList* Oculus::Platform::MessageWithBlockedUserList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithBlockedUserList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::BlockedUserList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithBlockedUserList* Oculus::Platform::MessageWithBlockedUserList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithBlockedUserList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithBlockedUserList::MessageWithBlockedUserList() {}
