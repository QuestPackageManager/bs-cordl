#pragma once
// IWYU pragma private; include "GlobalNamespace/ConstructorStringExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConstructorStringExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConstructorStringExtensions.ToConstructorString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Vector3)>(&::GlobalNamespace::ConstructorStringExtensions::ToConstructorString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3320e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConstructorStringExtensions*>(), { "ToConstructorString", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConstructorStringExtensions.ToConstructorString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::ConstructorStringExtensions::ToConstructorString)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x3320f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConstructorStringExtensions*>(), { "ToConstructorString", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConstructorStringExtensions.ToConstructorString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Pose)>(&::GlobalNamespace::ConstructorStringExtensions::ToConstructorString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x33210f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConstructorStringExtensions*>(), { "ToConstructorString", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ConstructorStringExtensions::ToConstructorString(::UnityEngine::Vector3 vector) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConstructorStringExtensions*>(), { "ToConstructorString", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, vector);
}
inline ::StringW GlobalNamespace::ConstructorStringExtensions::ToConstructorString(::UnityEngine::Quaternion quaternion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConstructorStringExtensions*>(), { "ToConstructorString", {}, { ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, quaternion);
}
inline ::StringW GlobalNamespace::ConstructorStringExtensions::ToConstructorString(::UnityEngine::Pose pose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConstructorStringExtensions*>(), { "ToConstructorString", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pose);
}
template <typename T> inline ::StringW GlobalNamespace::ConstructorStringExtensions::ToConstructorString(::System::Collections::Generic::List_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConstructorStringExtensions*>(),
                                                           { "ToConstructorString", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConstructorStringExtensions::ConstructorStringExtensions() {}
