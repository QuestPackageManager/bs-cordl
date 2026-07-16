#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAssetFileDownloadResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetFileDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithAssetFileDownloadResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAssetFileDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadResult.GetAssetFileDownloadResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDownloadResult* (::Oculus::Platform::MessageWithAssetFileDownloadResult::*)()>(
    &::Oculus::Platform::MessageWithAssetFileDownloadResult::GetAssetFileDownloadResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd810c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadResult*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetFileDownloadResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetFileDownloadResult* (::Oculus::Platform::MessageWithAssetFileDownloadResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAssetFileDownloadResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dd8150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadResult*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAssetFileDownloadResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AssetFileDownloadResult* Oculus::Platform::MessageWithAssetFileDownloadResult::GetAssetFileDownloadResult() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadResult*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetFileDownloadResult* Oculus::Platform::MessageWithAssetFileDownloadResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAssetFileDownloadResult*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetFileDownloadResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAssetFileDownloadResult* Oculus::Platform::MessageWithAssetFileDownloadResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithAssetFileDownloadResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAssetFileDownloadResult::MessageWithAssetFileDownloadResult() {}
