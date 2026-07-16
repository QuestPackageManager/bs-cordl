#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutDirectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirectionExtensions_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutDirectionExtensions.DirectionSign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::NoteCutDirectionExtensions::DirectionSign)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x325c218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "DirectionSign", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutDirectionExtensions.Direction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::NoteCutDirectionExtensions::Direction)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x325c27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "Direction", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutDirectionExtensions.RotationAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::NoteCutDirectionExtensions::RotationAngle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x325c2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "RotationAngle", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutDirectionExtensions.Rotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::NoteCutDirection, float_t)>(&::GlobalNamespace::NoteCutDirectionExtensions::Rotation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x325c2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(),
                                                                                           { "Rotation", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutDirectionExtensions.IsMainDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::NoteCutDirectionExtensions::IsMainDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x325c2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "IsMainDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutDirectionExtensions.MainNoteCutDirectionFromCutDirAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteCutDirection (*)(float_t)>(&::GlobalNamespace::NoteCutDirectionExtensions::MainNoteCutDirectionFromCutDirAngle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x325c308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "MainNoteCutDirectionFromCutDirAngle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutDirectionExtensions.Mirrored
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteCutDirection (*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::NoteCutDirectionExtensions::Mirrored)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x325c390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "Mirrored", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutDirectionExtensions.Opposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteCutDirection (*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::NoteCutDirectionExtensions::Opposite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x325c3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "Opposite", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutDirectionExtensions.IsOnSamePlane
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::NoteCutDirection, ::GlobalNamespace::NoteCutDirection)>(
    &::GlobalNamespace::NoteCutDirectionExtensions::IsOnSamePlane)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x325c3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(),
                                                { "IsOnSamePlane", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutDirectionExtensions.NoteCutDirectionFromDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteCutDirection (*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::NoteCutDirectionExtensions::NoteCutDirectionFromDirection)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x325c48c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "NoteCutDirectionFromDirection", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2Int GlobalNamespace::NoteCutDirectionExtensions::DirectionSign(::GlobalNamespace::NoteCutDirection cutDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "DirectionSign", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(nullptr, ___internal_method, cutDirection);
}
inline ::UnityEngine::Vector2 GlobalNamespace::NoteCutDirectionExtensions::Direction(::GlobalNamespace::NoteCutDirection cutDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "Direction", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, cutDirection);
}
inline float_t GlobalNamespace::NoteCutDirectionExtensions::RotationAngle(::GlobalNamespace::NoteCutDirection cutDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "RotationAngle", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, cutDirection);
}
inline ::UnityEngine::Quaternion GlobalNamespace::NoteCutDirectionExtensions::Rotation(::GlobalNamespace::NoteCutDirection cutDirection, float_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(),
                                                                                         { "Rotation", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, cutDirection, offset);
}
inline bool GlobalNamespace::NoteCutDirectionExtensions::IsMainDirection(::GlobalNamespace::NoteCutDirection cutDirection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "IsMainDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cutDirection);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirectionExtensions::MainNoteCutDirectionFromCutDirAngle(float_t angle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "MainNoteCutDirectionFromCutDirAngle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection>(nullptr, ___internal_method, angle);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirectionExtensions::Mirrored(::GlobalNamespace::NoteCutDirection cutDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "Mirrored", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection>(nullptr, ___internal_method, cutDirection);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirectionExtensions::Opposite(::GlobalNamespace::NoteCutDirection cutDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "Opposite", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection>(nullptr, ___internal_method, cutDirection);
}
inline bool GlobalNamespace::NoteCutDirectionExtensions::IsOnSamePlane(::GlobalNamespace::NoteCutDirection noteCutDirection1, ::GlobalNamespace::NoteCutDirection noteCutDirection2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(),
                                                           { "IsOnSamePlane", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, noteCutDirection1, noteCutDirection2);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteCutDirectionExtensions::NoteCutDirectionFromDirection(::UnityEngine::Vector3 direction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteCutDirectionExtensions*>(), { "NoteCutDirectionFromDirection", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection>(nullptr, ___internal_method, direction);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutDirectionExtensions::NoteCutDirectionExtensions() {}
