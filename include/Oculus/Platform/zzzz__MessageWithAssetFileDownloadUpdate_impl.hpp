#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAssetFileDownloadUpdate.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetFileDownloadUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadUpdate_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadUpdate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithAssetFileDownloadUpdate::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAssetFileDownloadUpdate::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd50b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadUpdate.GetAssetFileDownloadUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDownloadUpdate* (::Oculus::Platform::MessageWithAssetFileDownloadUpdate::*)()>(
    &::Oculus::Platform::MessageWithAssetFileDownloadUpdate::GetAssetFileDownloadUpdate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd81ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadUpdate*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadUpdate*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadUpdate.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDownloadUpdate* (::Oculus::Platform::MessageWithAssetFileDownloadUpdate::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAssetFileDownloadUpdate::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dd8230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadUpdate*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadUpdate*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAssetFileDownloadUpdate::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadUpdate*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* Oculus::Platform::MessageWithAssetFileDownloadUpdate::GetAssetFileDownloadUpdate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadUpdate*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadUpdate*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* Oculus::Platform::MessageWithAssetFileDownloadUpdate::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadUpdate*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadUpdate*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAssetFileDownloadUpdate* Oculus::Platform::MessageWithAssetFileDownloadUpdate::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithAssetFileDownloadUpdate*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAssetFileDownloadUpdate::MessageWithAssetFileDownloadUpdate() {}
