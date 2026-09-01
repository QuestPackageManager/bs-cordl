#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithNetSyncSessionList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncSessionList_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithNetSyncSessionList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithNetSyncSessionList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ddbe60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionList.GetNetSyncSessionList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSessionList* (::Oculus::Platform::MessageWithNetSyncSessionList::*)()>(
    &::Oculus::Platform::MessageWithNetSyncSessionList::GetNetSyncSessionList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddbebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionList*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSessionList* (::Oculus::Platform::MessageWithNetSyncSessionList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithNetSyncSessionList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddbf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithNetSyncSessionList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::NetSyncSessionList* Oculus::Platform::MessageWithNetSyncSessionList::GetNetSyncSessionList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionList*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSessionList* Oculus::Platform::MessageWithNetSyncSessionList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithNetSyncSessionList* Oculus::Platform::MessageWithNetSyncSessionList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithNetSyncSessionList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithNetSyncSessionList::MessageWithNetSyncSessionList() {}
