#pragma once
// IWYU pragma private; include "UnityEngineInternal\MathfInternal.hpp"
#include "UnityEngineInternal/zzzz__MathfInternal_def.hpp"
inline void UnityEngineInternal::MathfInternal::setStaticF_FloatMinNormal(float_t value) {
  ::cordl_internals::setStaticField<float_t, "FloatMinNormal", ::UnityEngineInternal::MathfInternal>(std::forward<float_t>(value));
}
inline float_t UnityEngineInternal::MathfInternal::getStaticF_FloatMinNormal() {
  return ::cordl_internals::getStaticField<float_t, "FloatMinNormal", ::UnityEngineInternal::MathfInternal>();
}
inline void UnityEngineInternal::MathfInternal::setStaticF_FloatMinDenormal(float_t value) {
  ::cordl_internals::setStaticField<float_t, "FloatMinDenormal", ::UnityEngineInternal::MathfInternal>(std::forward<float_t>(value));
}
inline float_t UnityEngineInternal::MathfInternal::getStaticF_FloatMinDenormal() {
  return ::cordl_internals::getStaticField<float_t, "FloatMinDenormal", ::UnityEngineInternal::MathfInternal>();
}
inline void UnityEngineInternal::MathfInternal::setStaticF_IsFlushToZeroEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "IsFlushToZeroEnabled", ::UnityEngineInternal::MathfInternal>(std::forward<bool>(value));
}
inline bool UnityEngineInternal::MathfInternal::getStaticF_IsFlushToZeroEnabled() {
  return ::cordl_internals::getStaticField<bool, "IsFlushToZeroEnabled", ::UnityEngineInternal::MathfInternal>();
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::MathfInternal::MathfInternal() {}
