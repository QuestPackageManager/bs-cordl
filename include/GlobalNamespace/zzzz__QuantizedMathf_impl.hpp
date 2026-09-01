#pragma once
// IWYU pragma private; include "GlobalNamespace\QuantizedMathf.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__QuantizedMathf_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuantizedMathf.Approximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::GlobalNamespace::QuantizedMathf::Approximately)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x37819b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(),
                                                             { "Approximately", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuantizedMathf.Approximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, float_t)>(&::GlobalNamespace::QuantizedMathf::Approximately)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3781a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(), { "Approximately", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuantizedMathf.Approximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::QuantizedMathf::Approximately)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3781a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(), { "Approximately", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuantizedMathf.Approximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::QuantizedMathf::Approximately)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3781b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(), { "Approximately", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuantizedMathf.Approximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&::GlobalNamespace::QuantizedMathf::Approximately)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3781b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(),
                                                                                           { "Approximately", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuantizedMathf.QuantizedVectorComponentToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::QuantizedMathf::QuantizedVectorComponentToString)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3781ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(), { "QuantizedVectorComponentToString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::QuantizedMathf::Approximately(::UnityEngine::Quaternion a, ::UnityEngine::Quaternion b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(),
                                                           { "Approximately", {}, { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::QuantizedMathf::Approximately(float_t a, float_t b, float_t epsilon) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(), { "Approximately", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, epsilon);
}
inline bool GlobalNamespace::QuantizedMathf::Approximately(int32_t a, int32_t b, int32_t epsilon) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(), { "Approximately", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, epsilon);
}
inline bool GlobalNamespace::QuantizedMathf::Approximately(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(), { "Approximately", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool GlobalNamespace::QuantizedMathf::Approximately(::UnityEngine::Pose a, ::UnityEngine::Pose b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(),
                                                                                         { "Approximately", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW GlobalNamespace::QuantizedMathf::QuantizedVectorComponentToString(int32_t v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuantizedMathf*>(), { "QuantizedVectorComponentToString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuantizedMathf::QuantizedMathf() {}
