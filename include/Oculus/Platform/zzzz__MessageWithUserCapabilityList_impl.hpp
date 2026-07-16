#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithUserCapabilityList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithUserCapabilityList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserCapabilityList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithUserCapabilityList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithUserCapabilityList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserCapabilityList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserCapabilityList.GetUserCapabilityList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserCapabilityList* (::Oculus::Platform::MessageWithUserCapabilityList::*)()>(
    &::Oculus::Platform::MessageWithUserCapabilityList::GetUserCapabilityList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddb1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserCapabilityList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithUserCapabilityList*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserCapabilityList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::UserCapabilityList* (::Oculus::Platform::MessageWithUserCapabilityList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithUserCapabilityList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddb224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserCapabilityList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithUserCapabilityList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithUserCapabilityList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithUserCapabilityList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::UserCapabilityList* Oculus::Platform::MessageWithUserCapabilityList::GetUserCapabilityList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithUserCapabilityList*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserCapabilityList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserCapabilityList* Oculus::Platform::MessageWithUserCapabilityList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithUserCapabilityList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserCapabilityList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithUserCapabilityList* Oculus::Platform::MessageWithUserCapabilityList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithUserCapabilityList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithUserCapabilityList::MessageWithUserCapabilityList() {}
