#pragma once
// IWYU pragma private; include "Unity\Profiling\DebugScreenCapture.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__TextureFormat_impl.hpp"
#include "Unity/Profiling/zzzz__DebugScreenCapture_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::DebugScreenCapture.set_RawImageDataReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::DebugScreenCapture::*)(::Unity::Collections::NativeArray_1<uint8_t>)>(
    &::Unity::Profiling::DebugScreenCapture::set_RawImageDataReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5df20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::DebugScreenCapture>(),
                                                                                           { "set_RawImageDataReference", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::DebugScreenCapture.set_ImageFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::DebugScreenCapture::*)(::UnityEngine::TextureFormat)>(&::Unity::Profiling::DebugScreenCapture::set_ImageFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5df28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::DebugScreenCapture>(), { "set_ImageFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::DebugScreenCapture.set_Width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::DebugScreenCapture::*)(int32_t)>(&::Unity::Profiling::DebugScreenCapture::set_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5df30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::DebugScreenCapture>(), { "set_Width", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::DebugScreenCapture.set_Height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Profiling::DebugScreenCapture::*)(int32_t)>(&::Unity::Profiling::DebugScreenCapture::set_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5df38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::DebugScreenCapture>(), { "set_Height", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Profiling::DebugScreenCapture::set_RawImageDataReference(::Unity::Collections::NativeArray_1<uint8_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::DebugScreenCapture>(),
                                                                                         { "set_RawImageDataReference", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Unity::Profiling::DebugScreenCapture::set_ImageFormat(::UnityEngine::TextureFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::DebugScreenCapture>(), { "set_ImageFormat", {}, { ::i2c::type_of<::UnityEngine::TextureFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Unity::Profiling::DebugScreenCapture::set_Width(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::DebugScreenCapture>(), { "set_Width", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void Unity::Profiling::DebugScreenCapture::set_Height(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Profiling::DebugScreenCapture>(), { "set_Height", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_RawImageDataReference_k__BackingField", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_ImageFormat_k__BackingField", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Width_k__BackingField", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_Height_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::DebugScreenCapture::DebugScreenCapture(::Unity::Collections::NativeArray_1<uint8_t> _RawImageDataReference_k__BackingField,
                                                                     ::UnityEngine::TextureFormat _ImageFormat_k__BackingField, int32_t _Width_k__BackingField,
                                                                     int32_t _Height_k__BackingField) noexcept {
  this->_RawImageDataReference_k__BackingField = _RawImageDataReference_k__BackingField;
  this->_ImageFormat_k__BackingField = _ImageFormat_k__BackingField;
  this->_Width_k__BackingField = _Width_k__BackingField;
  this->_Height_k__BackingField = _Height_k__BackingField;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::DebugScreenCapture::DebugScreenCapture() {}
