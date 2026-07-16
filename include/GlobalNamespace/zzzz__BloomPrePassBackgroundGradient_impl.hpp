#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundGradient.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundTextureGradient_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundGradient_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundGradient.UpdatePixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundGradient::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Color32>, int32_t)>(
    &::GlobalNamespace::BloomPrePassBackgroundGradient::UpdatePixels)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x586286c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundGradient*>(), { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundGradient*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundGradient._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundGradient::*)()>(&::GlobalNamespace::BloomPrePassBackgroundGradient::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58628e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundGradient*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Gradient*& GlobalNamespace::BloomPrePassBackgroundGradient::__cordl_internal_get__gradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradient;
}
constexpr ::UnityEngine::Gradient* const& GlobalNamespace::BloomPrePassBackgroundGradient::__cordl_internal_get__gradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradient;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundGradient::__cordl_internal_set__gradient(::UnityEngine::Gradient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gradient = value;
}
inline void GlobalNamespace::BloomPrePassBackgroundGradient::UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int32_t numberOfPixels) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundGradient*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pixels, numberOfPixels);
}
inline void GlobalNamespace::BloomPrePassBackgroundGradient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundGradient*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundGradient* GlobalNamespace::BloomPrePassBackgroundGradient::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassBackgroundGradient*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundGradient::BloomPrePassBackgroundGradient() {}
