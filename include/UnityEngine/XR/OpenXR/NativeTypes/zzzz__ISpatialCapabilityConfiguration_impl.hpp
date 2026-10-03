#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/ISpatialCapabilityConfiguration.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__ISpatialCapabilityConfiguration_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialCapabilityEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSpatialComponentTypeEXT_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrStructureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration.get_type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType (::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::get_type)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration.get_next
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::get_next)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration.get_capability
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT (::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::get_capability)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration.get_enabledComponentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::get_enabledComponentCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration.get_enabledComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* (
    ::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::get_enabledComponents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(), 4 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::get_type() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrStructureType>(this, ___internal_method);
}
inline void* UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::get_next() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::get_capability() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialCapabilityEXT>(this, ___internal_method);
}
inline uint32_t UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::get_enabledComponentCount() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT* UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration::get_enabledComponents() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::ISpatialCapabilityConfiguration*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrSpatialComponentTypeEXT*>(this, ___internal_method);
}
