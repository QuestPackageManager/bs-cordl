#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrPosef.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrQuaternionf_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrVector3f_impl.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e3dba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::*)(::UnityEngine::Pose)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e3dbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef.FromSessionSpaceCoordinates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef (*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::FromSessionSpaceCoordinates)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e3dc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(),
                                                             { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef.FromSessionSpaceCoordinates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef (*)(::UnityEngine::Pose)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::FromSessionSpaceCoordinates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e3dc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef.ToSessionSpacePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::*)()>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::ToSessionSpacePose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e3dc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), { "ToSessionSpacePose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::*)(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef)>(
    &::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::Equals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6e3dc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::*)(::System::Object*)>(&::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e3de80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::*)()>(&::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::GetHashCode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e3df14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::OpenXR::NativeTypes::XrPosef::_ctor(::UnityEngine::Vector3 vec3, ::UnityEngine::Quaternion quaternion) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vec3, quaternion);
}
inline void UnityEngine::XR::OpenXR::NativeTypes::XrPosef::_ctor(::UnityEngine::Pose pose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pose);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef UnityEngine::XR::OpenXR::NativeTypes::XrPosef::FromSessionSpaceCoordinates(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(),
                                                           { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(nullptr, ___internal_method, position, rotation);
}
inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef UnityEngine::XR::OpenXR::NativeTypes::XrPosef::FromSessionSpaceCoordinates(::UnityEngine::Pose pose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), { "FromSessionSpaceCoordinates", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(nullptr, ___internal_method, pose);
}
inline ::UnityEngine::Pose UnityEngine::XR::OpenXR::NativeTypes::XrPosef::ToSessionSpacePose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), { "ToSessionSpacePose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(*this, ___internal_method);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrPosef::Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::XR::OpenXR::NativeTypes::XrPosef::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::XR::OpenXR::NativeTypes::XrPosef::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>"
constexpr UnityEngine::XR::OpenXR::NativeTypes::XrPosef::operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>*
UnityEngine::XR::OpenXR::NativeTypes::XrPosef::i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrPosef_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrPosef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Orientation", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Position", ty:
// "::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::XrPosef(::UnityEngine::XR::OpenXR::NativeTypes::XrQuaternionf Orientation,
                                                                   ::UnityEngine::XR::OpenXR::NativeTypes::XrVector3f Position) noexcept {
  this->Orientation = Orientation;
  this->Position = Position;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef::XrPosef() {}
