#pragma once
// IWYU pragma private; include "Mono\RuntimeMarshal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/zzzz__RuntimeMarshal_def.hpp"
#include "Mono/zzzz__MonoAssemblyName_def.hpp"
#include "Mono/zzzz__SafeStringMarshal_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeMarshal.PtrToUtf8String
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::Mono::RuntimeMarshal::PtrToUtf8String)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5aadf3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "PtrToUtf8String", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeMarshal.MarshalString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::SafeStringMarshal (*)(::StringW)>(&::Mono::RuntimeMarshal::MarshalString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aadfa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "MarshalString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeMarshal.DecodeBlobSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::Mono::RuntimeMarshal::DecodeBlobSize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5aadfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "DecodeBlobSize", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeMarshal.DecodeBlobArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::IntPtr)>(&::Mono::RuntimeMarshal::DecodeBlobArray)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5aae014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "DecodeBlobArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeMarshal.AsciHexDigitValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::Mono::RuntimeMarshal::AsciHexDigitValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5aae0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "AsciHexDigitValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeMarshal.FreeAssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Mono::MonoAssemblyName>, bool)>(&::Mono::RuntimeMarshal::FreeAssemblyName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5aae0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "FreeAssemblyName", {}, { ::i2c::type_of<::by_ref<::Mono::MonoAssemblyName>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::StringW Mono::RuntimeMarshal::PtrToUtf8String(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "PtrToUtf8String", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ptr);
}
inline ::Mono::SafeStringMarshal Mono::RuntimeMarshal::MarshalString(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "MarshalString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::SafeStringMarshal>(nullptr, ___internal_method, str);
}
inline int32_t Mono::RuntimeMarshal::DecodeBlobSize(::System::IntPtr in_ptr, ::by_ref<::System::IntPtr> out_ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "DecodeBlobSize", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, in_ptr, out_ptr);
}
inline ::ArrayW<uint8_t> Mono::RuntimeMarshal::DecodeBlobArray(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "DecodeBlobArray", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, ptr);
}
inline int32_t Mono::RuntimeMarshal::AsciHexDigitValue(int32_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "AsciHexDigitValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, c);
}
inline void Mono::RuntimeMarshal::FreeAssemblyName(::by_ref<::Mono::MonoAssemblyName> name, bool freeStruct) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::RuntimeMarshal*>(), { "FreeAssemblyName", {}, { ::i2c::type_of<::by_ref<::Mono::MonoAssemblyName>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, freeStruct);
}
// Ctor Parameters []
constexpr ::Mono::RuntimeMarshal::RuntimeMarshal() {}
