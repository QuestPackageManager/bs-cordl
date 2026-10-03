#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MathUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MathUtils_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::MathUtils.PreApply2DOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::by_ref<::UnityEngine::Matrix4x4>, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::MathUtils::PreApply2DOffset)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x71577bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MathUtils*>(),
                                                             { "PreApply2DOffset", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MathUtils.PostApply2DOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::by_ref<::UnityEngine::Matrix4x4>, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::MathUtils::PostApply2DOffset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x71577e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MathUtils*>(),
                                                             { "PostApply2DOffset", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Matrix4x4 UnityEngine::UIElements::MathUtils::PreApply2DOffset(::by_ref<::UnityEngine::Matrix4x4> m, ::UnityEngine::Vector2 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MathUtils*>(),
                                                           { "PreApply2DOffset", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, m, p);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::UIElements::MathUtils::PostApply2DOffset(::by_ref<::UnityEngine::Matrix4x4> m, ::UnityEngine::Vector2 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MathUtils*>(),
                                                           { "PostApply2DOffset", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, m, p);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MathUtils::MathUtils() {}
