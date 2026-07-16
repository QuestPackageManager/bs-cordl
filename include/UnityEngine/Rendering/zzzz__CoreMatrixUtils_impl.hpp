#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreMatrixUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CoreMatrixUtils_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CoreMatrixUtils.MatrixTimesTranslation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::UnityEngine::Vector3)>(&::UnityEngine::Rendering::CoreMatrixUtils::MatrixTimesTranslation)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x67b83e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                                             { "MatrixTimesTranslation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreMatrixUtils.TranslationTimesMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::UnityEngine::Vector3)>(&::UnityEngine::Rendering::CoreMatrixUtils::TranslationTimesMatrix)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x67b8444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                                             { "TranslationTimesMatrix", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreMatrixUtils.MultiplyPerspectiveMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::CoreMatrixUtils::MultiplyPerspectiveMatrix)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x67b84cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                                             { "MultiplyPerspectiveMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreMatrixUtils.MultiplyOrthoMatrixCentered
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::CoreMatrixUtils::MultiplyOrthoMatrixCentered)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67b8574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                                             { "MultiplyOrthoMatrixCentered", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreMatrixUtils.MultiplyGenericOrthoMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::CoreMatrixUtils::MultiplyGenericOrthoMatrix)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x67b860c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                                             { "MultiplyGenericOrthoMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreMatrixUtils.MultiplyOrthoMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, bool)>(
    &::UnityEngine::Rendering::CoreMatrixUtils::MultiplyOrthoMatrix)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x67b86c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                                { "MultiplyOrthoMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreMatrixUtils.MultiplyProjectionMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, bool)>(
    &::UnityEngine::Rendering::CoreMatrixUtils::MultiplyProjectionMatrix)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x67b87bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                         { "MultiplyProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CoreMatrixUtils::MatrixTimesTranslation(::by_ref<::UnityEngine::Matrix4x4> inOutMatrix, ::UnityEngine::Vector3 translation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                                           { "MatrixTimesTranslation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inOutMatrix, translation);
}
inline void UnityEngine::Rendering::CoreMatrixUtils::TranslationTimesMatrix(::by_ref<::UnityEngine::Matrix4x4> inOutMatrix, ::UnityEngine::Vector3 translation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                                           { "TranslationTimesMatrix", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inOutMatrix, translation);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::CoreMatrixUtils::MultiplyPerspectiveMatrix(::UnityEngine::Matrix4x4 perspective, ::UnityEngine::Matrix4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                                           { "MultiplyPerspectiveMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, perspective, rhs);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::CoreMatrixUtils::MultiplyOrthoMatrixCentered(::UnityEngine::Matrix4x4 ortho, ::UnityEngine::Matrix4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                                           { "MultiplyOrthoMatrixCentered", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, ortho, rhs);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::CoreMatrixUtils::MultiplyGenericOrthoMatrix(::UnityEngine::Matrix4x4 ortho, ::UnityEngine::Matrix4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                                           { "MultiplyGenericOrthoMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, ortho, rhs);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::CoreMatrixUtils::MultiplyOrthoMatrix(::UnityEngine::Matrix4x4 ortho, ::UnityEngine::Matrix4x4 rhs, bool centered) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                              { "MultiplyOrthoMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, ortho, rhs, centered);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::CoreMatrixUtils::MultiplyProjectionMatrix(::UnityEngine::Matrix4x4 projMatrix, ::UnityEngine::Matrix4x4 rhs, bool orthoCentered) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::CoreMatrixUtils*>(),
                                              { "MultiplyProjectionMatrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, projMatrix, rhs, orthoCentered);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreMatrixUtils::CoreMatrixUtils() {}
