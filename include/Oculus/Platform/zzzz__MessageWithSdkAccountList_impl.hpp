#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithSdkAccountList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithSdkAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithSdkAccountList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithSdkAccountList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithSdkAccountList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd7f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithSdkAccountList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithSdkAccountList.GetSdkAccountList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::SdkAccountList* (::Oculus::Platform::MessageWithSdkAccountList::*)()>(
    &::Oculus::Platform::MessageWithSdkAccountList::GetSdkAccountList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddcd4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithSdkAccountList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithSdkAccountList*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithSdkAccountList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::SdkAccountList* (::Oculus::Platform::MessageWithSdkAccountList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithSdkAccountList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddcd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithSdkAccountList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithSdkAccountList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithSdkAccountList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithSdkAccountList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::SdkAccountList* Oculus::Platform::MessageWithSdkAccountList::GetSdkAccountList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithSdkAccountList*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SdkAccountList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SdkAccountList* Oculus::Platform::MessageWithSdkAccountList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithSdkAccountList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SdkAccountList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithSdkAccountList* Oculus::Platform::MessageWithSdkAccountList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithSdkAccountList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithSdkAccountList::MessageWithSdkAccountList() {}
