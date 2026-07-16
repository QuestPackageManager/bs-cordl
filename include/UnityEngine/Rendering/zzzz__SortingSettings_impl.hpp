#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingSettings.hpp"
#include "UnityEngine/Rendering/zzzz__DistanceMetric_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SortingSettings_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SortingSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SortingSettings::*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::SortingSettings::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b255cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SortingSettings.get_criteria
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::SortingCriteria (::UnityEngine::Rendering::SortingSettings::*)()>(
    &::UnityEngine::Rendering::SortingSettings::get_criteria)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b25634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), { "get_criteria", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SortingSettings.set_criteria
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::SortingSettings::*)(::UnityEngine::Rendering::SortingCriteria)>(
    &::UnityEngine::Rendering::SortingSettings::set_criteria)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2563c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), { "set_criteria", {}, { ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SortingSettings.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SortingSettings::*)(::UnityEngine::Rendering::SortingSettings)>(
    &::UnityEngine::Rendering::SortingSettings::Equals)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6b1dcb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::SortingSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SortingSettings.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::SortingSettings::*)(::System::Object*)>(&::UnityEngine::Rendering::SortingSettings::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b25644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), { ::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::SortingSettings.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::SortingSettings::*)()>(&::UnityEngine::Rendering::SortingSettings::GetHashCode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b1e024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), { ::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::SortingSettings::_ctor(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, camera);
}
inline ::UnityEngine::Rendering::SortingCriteria UnityEngine::Rendering::SortingSettings::get_criteria() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), { "get_criteria", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SortingCriteria>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::SortingSettings::set_criteria(::UnityEngine::Rendering::SortingCriteria value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), { "set_criteria", {}, { ::i2c::type_of<::UnityEngine::Rendering::SortingCriteria>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::SortingSettings::Equals(::UnityEngine::Rendering::SortingSettings other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Rendering::SortingSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Rendering::SortingSettings::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Rendering::SortingSettings::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SortingSettings>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::SortingSettings>"
constexpr UnityEngine::Rendering::SortingSettings::operator ::System::IEquatable_1<::UnityEngine::Rendering::SortingSettings>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SortingSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::SortingSettings>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::SortingSettings>* UnityEngine::Rendering::SortingSettings::i___System__IEquatable_1___UnityEngine__Rendering__SortingSettings_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::SortingSettings>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_WorldToCameraMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CameraPosition", ty: "::UnityEngine::Vector3",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CustomAxis", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Criteria", ty:
// "::UnityEngine::Rendering::SortingCriteria", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DistanceMetric", ty: "::UnityEngine::Rendering::DistanceMetric", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::SortingSettings::SortingSettings(::UnityEngine::Matrix4x4 m_WorldToCameraMatrix, ::UnityEngine::Vector3 m_CameraPosition, ::UnityEngine::Vector3 m_CustomAxis,
                                                                     ::UnityEngine::Rendering::SortingCriteria m_Criteria, ::UnityEngine::Rendering::DistanceMetric m_DistanceMetric) noexcept {
  this->m_WorldToCameraMatrix = m_WorldToCameraMatrix;
  this->m_CameraPosition = m_CameraPosition;
  this->m_CustomAxis = m_CustomAxis;
  this->m_Criteria = m_Criteria;
  this->m_DistanceMetric = m_DistanceMetric;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SortingSettings::SortingSettings() {}
