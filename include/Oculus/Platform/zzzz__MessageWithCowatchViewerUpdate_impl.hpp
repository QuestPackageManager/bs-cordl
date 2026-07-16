#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithCowatchViewerUpdate.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCowatchViewerUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchViewerUpdate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerUpdate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithCowatchViewerUpdate::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithCowatchViewerUpdate::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerUpdate.GetCowatchViewerUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::CowatchViewerUpdate* (::Oculus::Platform::MessageWithCowatchViewerUpdate::*)()>(
    &::Oculus::Platform::MessageWithCowatchViewerUpdate::GetCowatchViewerUpdate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd880c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerUpdate*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerUpdate*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchViewerUpdate.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::CowatchViewerUpdate* (::Oculus::Platform::MessageWithCowatchViewerUpdate::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithCowatchViewerUpdate::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dd8850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerUpdate*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerUpdate*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithCowatchViewerUpdate::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CowatchViewerUpdate* Oculus::Platform::MessageWithCowatchViewerUpdate::GetCowatchViewerUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerUpdate*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchViewerUpdate*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CowatchViewerUpdate* Oculus::Platform::MessageWithCowatchViewerUpdate::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchViewerUpdate*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchViewerUpdate*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithCowatchViewerUpdate* Oculus::Platform::MessageWithCowatchViewerUpdate::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithCowatchViewerUpdate*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCowatchViewerUpdate::MessageWithCowatchViewerUpdate() {}
