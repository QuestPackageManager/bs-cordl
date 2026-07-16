#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreCameraValues.hpp"
#include "UnityEngine/Rendering/zzzz__CoreCameraValues_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CoreCameraValues.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CoreCameraValues::*)(::UnityEngine::Rendering::CoreCameraValues)>(
    &::UnityEngine::Rendering::CoreCameraValues::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6b1aea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreCameraValues>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::CoreCameraValues>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreCameraValues.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::CoreCameraValues::*)(::System::Object*)>(&::UnityEngine::Rendering::CoreCameraValues::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6b1aed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreCameraValues>(), { ::i2c::class_of<::UnityEngine::Rendering::CoreCameraValues>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreCameraValues.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::CoreCameraValues::*)()>(&::UnityEngine::Rendering::CoreCameraValues::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b1af70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreCameraValues>(), { ::i2c::class_of<::UnityEngine::Rendering::CoreCameraValues>(), 2 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::CoreCameraValues::Equals(::UnityEngine::Rendering::CoreCameraValues other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreCameraValues>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::CoreCameraValues>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::CoreCameraValues::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CoreCameraValues>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::CoreCameraValues::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::CoreCameraValues>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>"
constexpr UnityEngine::Rendering::CoreCameraValues::operator ::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>* UnityEngine::Rendering::CoreCameraValues::i___System__IEquatable_1___UnityEngine__Rendering__CoreCameraValues_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::CoreCameraValues>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "filterMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CoreCameraValues::CoreCameraValues(int32_t filterMode, uint32_t cullingMask, int32_t instanceID) noexcept {
  this->filterMode = filterMode;
  this->cullingMask = cullingMask;
  this->instanceID = instanceID;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreCameraValues::CoreCameraValues() {}
