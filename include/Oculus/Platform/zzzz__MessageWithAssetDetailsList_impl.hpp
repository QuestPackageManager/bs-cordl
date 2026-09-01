#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithAssetDetailsList.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAssetDetailsList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AssetDetailsList_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetailsList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithAssetDetailsList::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithAssetDetailsList::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd7168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetDetailsList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetailsList.GetAssetDetailsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetDetailsList* (::Oculus::Platform::MessageWithAssetDetailsList::*)()>(
    &::Oculus::Platform::MessageWithAssetDetailsList::GetAssetDetailsList)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dda094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetDetailsList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithAssetDetailsList*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAssetDetailsList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AssetDetailsList* (::Oculus::Platform::MessageWithAssetDetailsList::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAssetDetailsList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dda0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetDetailsList*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithAssetDetailsList*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAssetDetailsList::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAssetDetailsList*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AssetDetailsList* Oculus::Platform::MessageWithAssetDetailsList::GetAssetDetailsList() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAssetDetailsList*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetailsList*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AssetDetailsList* Oculus::Platform::MessageWithAssetDetailsList::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAssetDetailsList*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AssetDetailsList*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAssetDetailsList* Oculus::Platform::MessageWithAssetDetailsList::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithAssetDetailsList*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAssetDetailsList::MessageWithAssetDetailsList() {}
