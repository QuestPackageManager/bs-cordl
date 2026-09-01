#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithHttpTransferUpdate.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithHttpTransferUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithHttpTransferUpdate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithHttpTransferUpdate::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithHttpTransferUpdate::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd82a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithHttpTransferUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithHttpTransferUpdate.GetHttpTransferUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::HttpTransferUpdate* (::Oculus::Platform::MessageWithHttpTransferUpdate::*)()>(
    &::Oculus::Platform::MessageWithHttpTransferUpdate::GetHttpTransferUpdate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddd7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithHttpTransferUpdate*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithHttpTransferUpdate*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithHttpTransferUpdate.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::HttpTransferUpdate* (::Oculus::Platform::MessageWithHttpTransferUpdate::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithHttpTransferUpdate::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddd7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithHttpTransferUpdate*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithHttpTransferUpdate*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithHttpTransferUpdate::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithHttpTransferUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::HttpTransferUpdate* Oculus::Platform::MessageWithHttpTransferUpdate::GetHttpTransferUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithHttpTransferUpdate*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::HttpTransferUpdate*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::HttpTransferUpdate* Oculus::Platform::MessageWithHttpTransferUpdate::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithHttpTransferUpdate*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::HttpTransferUpdate*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithHttpTransferUpdate* Oculus::Platform::MessageWithHttpTransferUpdate::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithHttpTransferUpdate*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithHttpTransferUpdate::MessageWithHttpTransferUpdate() {}
