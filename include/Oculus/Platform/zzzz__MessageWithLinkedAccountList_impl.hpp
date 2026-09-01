#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithLinkedAccountList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithLinkedAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLinkedAccountList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithLinkedAccountList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithLinkedAccountList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd7a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLinkedAccountList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLinkedAccountList.GetLinkedAccountList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LinkedAccountList* (::Oculus::Platform::MessageWithLinkedAccountList::*)()>(
    &::Oculus::Platform::MessageWithLinkedAccountList::GetLinkedAccountList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddb72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLinkedAccountList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithLinkedAccountList*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLinkedAccountList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::LinkedAccountList* (::Oculus::Platform::MessageWithLinkedAccountList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithLinkedAccountList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddb770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLinkedAccountList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithLinkedAccountList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithLinkedAccountList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithLinkedAccountList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::LinkedAccountList* Oculus::Platform::MessageWithLinkedAccountList::GetLinkedAccountList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLinkedAccountList*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LinkedAccountList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::LinkedAccountList* Oculus::Platform::MessageWithLinkedAccountList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithLinkedAccountList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LinkedAccountList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithLinkedAccountList* Oculus::Platform::MessageWithLinkedAccountList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithLinkedAccountList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithLinkedAccountList::MessageWithLinkedAccountList() {}
