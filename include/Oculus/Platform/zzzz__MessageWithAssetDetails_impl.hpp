#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithAssetDetails.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetails_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetails._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithAssetDetails::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithAssetDetails::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd710c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetDetails*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetails.GetAssetDetails
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetDetails* (::Oculus::Platform::MessageWithAssetDetails::*)()>(
    &::Oculus::Platform::MessageWithAssetDetails::GetAssetDetails)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd9eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetDetails*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithAssetDetails*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetails.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetDetails* (::Oculus::Platform::MessageWithAssetDetails::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAssetDetails::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dd9ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetDetails*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithAssetDetails*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAssetDetails::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetDetails*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AssetDetails* Oculus::Platform::MessageWithAssetDetails::GetAssetDetails() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAssetDetails*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetails*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetDetails* Oculus::Platform::MessageWithAssetDetails::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAssetDetails*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetails*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAssetDetails* Oculus::Platform::MessageWithAssetDetails::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithAssetDetails*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAssetDetails::MessageWithAssetDetails() {}
