#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrUuid.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrUuid_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid.get_empty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid (*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::get_empty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e48fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), { "get_empty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid.get_dataPart1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::get_dataPart1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e48ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), { "get_dataPart1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid.get_dataPart2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::get_dataPart2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e48ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), { "get_dataPart2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::*)(uint64_t, uint64_t)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e48fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6e49004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::ToString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e49028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), 3 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid UnityEngine::XR::OpenXR::NativeTypes::XrUuid::get_empty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), { "get_empty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(nullptr, ___internal_method);
}
inline uint64_t UnityEngine::XR::OpenXR::NativeTypes::XrUuid::get_dataPart1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), { "get_dataPart1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline uint64_t UnityEngine::XR::OpenXR::NativeTypes::XrUuid::get_dataPart2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), { "get_dataPart2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrUuid::_ctor(uint64_t dataPart1, uint64_t dataPart2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dataPart1, dataPart2);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrUuid::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrUuid other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::StringW UnityEngine::XR::OpenXR::NativeTypes::XrUuid::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrUuid::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>*
UnityEngine::XR::OpenXR::NativeTypes::XrUuid::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrUuid_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrUuid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_dataPart1_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_dataPart2_k__BackingField", ty: "uint64_t",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::XrUuid(uint64_t _dataPart1_k__BackingField, uint64_t _dataPart2_k__BackingField) noexcept {
  this->_dataPart1_k__BackingField = _dataPart1_k__BackingField;
  this->_dataPart2_k__BackingField = _dataPart2_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrUuid::XrUuid() {}
