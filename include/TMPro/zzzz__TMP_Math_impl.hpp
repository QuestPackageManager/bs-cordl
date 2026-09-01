#pragma once
// IWYU pragma private; include "TMPro\TMP_Math.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "TMPro/zzzz__TMP_Math_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Math.Approximately
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t)>(&::TMPro::TMP_Math::Approximately)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6949554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Math*>(), { "Approximately", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Math.Mod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::TMPro::TMP_Math::Mod)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x694957c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Math*>(), { "Mod", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_Math::setStaticF_MAX_16BIT(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "MAX_16BIT", ::TMPro::TMP_Math*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 TMPro::TMP_Math::getStaticF_MAX_16BIT() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "MAX_16BIT", ::TMPro::TMP_Math*>();
}
inline void TMPro::TMP_Math::setStaticF_MIN_16BIT(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "MIN_16BIT", ::TMPro::TMP_Math*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 TMPro::TMP_Math::getStaticF_MIN_16BIT() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "MIN_16BIT", ::TMPro::TMP_Math*>();
}
inline bool TMPro::TMP_Math::Approximately(float_t a, float_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Math*>(), { "Approximately", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int32_t TMPro::TMP_Math::Mod(int32_t a, int32_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_Math*>(), { "Mod", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Math::TMP_Math() {}
