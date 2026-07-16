#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyBlockVectorAnimator.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockVectorAnimator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockVectorAnimator.SetProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockVectorAnimator::*)()>(&::GlobalNamespace::MaterialPropertyBlockVectorAnimator::SetProperty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5874998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockVectorAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockVectorAnimator::*)()>(&::GlobalNamespace::MaterialPropertyBlockVectorAnimator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58749c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& GlobalNamespace::MaterialPropertyBlockVectorAnimator::__cordl_internal_get__vector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vector;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::MaterialPropertyBlockVectorAnimator::__cordl_internal_get__vector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vector;
}
constexpr void GlobalNamespace::MaterialPropertyBlockVectorAnimator::__cordl_internal_set__vector(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vector = value;
}
inline void GlobalNamespace::MaterialPropertyBlockVectorAnimator::SetProperty() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockVectorAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockVectorAnimator* GlobalNamespace::MaterialPropertyBlockVectorAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockVectorAnimator::MaterialPropertyBlockVectorAnimator() {}
