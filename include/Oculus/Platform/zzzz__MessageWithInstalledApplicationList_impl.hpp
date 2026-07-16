#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithInstalledApplicationList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithInstalledApplicationList_def.hpp"
#include "Oculus/Platform/Models/zzzz__InstalledApplicationList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithInstalledApplicationList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithInstalledApplicationList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithInstalledApplicationList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd8c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithInstalledApplicationList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithInstalledApplicationList.GetInstalledApplicationList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::InstalledApplicationList* (::Oculus::Platform::MessageWithInstalledApplicationList::*)()>(
    &::Oculus::Platform::MessageWithInstalledApplicationList::GetInstalledApplicationList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd8cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithInstalledApplicationList*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithInstalledApplicationList*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithInstalledApplicationList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::InstalledApplicationList* (::Oculus::Platform::MessageWithInstalledApplicationList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithInstalledApplicationList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dd8d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithInstalledApplicationList*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithInstalledApplicationList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithInstalledApplicationList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithInstalledApplicationList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::InstalledApplicationList* Oculus::Platform::MessageWithInstalledApplicationList::GetInstalledApplicationList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithInstalledApplicationList*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InstalledApplicationList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::InstalledApplicationList* Oculus::Platform::MessageWithInstalledApplicationList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithInstalledApplicationList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::InstalledApplicationList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithInstalledApplicationList* Oculus::Platform::MessageWithInstalledApplicationList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithInstalledApplicationList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithInstalledApplicationList::MessageWithInstalledApplicationList() {}
