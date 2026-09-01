#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithCowatchViewerList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCowatchViewerList_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithCowatchViewerList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithCowatchViewerList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd7500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerList.GetCowatchViewerList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::CowatchViewerList* (::Oculus::Platform::MessageWithCowatchViewerList::*)()>(
    &::Oculus::Platform::MessageWithCowatchViewerList::GetCowatchViewerList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dda954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerList*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::CowatchViewerList* (::Oculus::Platform::MessageWithCowatchViewerList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithCowatchViewerList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dda998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithCowatchViewerList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CowatchViewerList* Oculus::Platform::MessageWithCowatchViewerList::GetCowatchViewerList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerList*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchViewerList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CowatchViewerList* Oculus::Platform::MessageWithCowatchViewerList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchViewerList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithCowatchViewerList* Oculus::Platform::MessageWithCowatchViewerList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithCowatchViewerList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCowatchViewerList::MessageWithCowatchViewerList() {}
