#pragma once
// IWYU pragma private; include "GlobalNamespace\ReflectionProbeDataSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__ReflectionProbeDataSO_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReflectionProbeDataSO.get_reflectionProbeCubemap1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Cubemap> (::GlobalNamespace::ReflectionProbeDataSO::*)()>(
    &::GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e4a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReflectionProbeDataSO*>(), { "get_reflectionProbeCubemap1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReflectionProbeDataSO.set_reflectionProbeCubemap1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReflectionProbeDataSO::*)(::UnityEngine::Cubemap*)>(
    &::GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e4a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReflectionProbeDataSO*>(), { "set_reflectionProbeCubemap1", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReflectionProbeDataSO.get_reflectionProbeCubemap2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Cubemap> (::GlobalNamespace::ReflectionProbeDataSO::*)()>(
    &::GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e4a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReflectionProbeDataSO*>(), { "get_reflectionProbeCubemap2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReflectionProbeDataSO.set_reflectionProbeCubemap2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReflectionProbeDataSO::*)(::UnityEngine::Cubemap*)>(
    &::GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e4a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReflectionProbeDataSO*>(), { "set_reflectionProbeCubemap2", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReflectionProbeDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ReflectionProbeDataSO::*)()>(&::GlobalNamespace::ReflectionProbeDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e4a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReflectionProbeDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Cubemap>& GlobalNamespace::ReflectionProbeDataSO::__cordl_internal_get__reflectionProbeCubemap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbeCubemap1;
}
constexpr ::UnityW<::UnityEngine::Cubemap> const& GlobalNamespace::ReflectionProbeDataSO::__cordl_internal_get__reflectionProbeCubemap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbeCubemap1;
}
constexpr void GlobalNamespace::ReflectionProbeDataSO::__cordl_internal_set__reflectionProbeCubemap1(::UnityW<::UnityEngine::Cubemap> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectionProbeCubemap1 = value;
}
constexpr ::UnityW<::UnityEngine::Cubemap>& GlobalNamespace::ReflectionProbeDataSO::__cordl_internal_get__reflectionProbeCubemap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbeCubemap2;
}
constexpr ::UnityW<::UnityEngine::Cubemap> const& GlobalNamespace::ReflectionProbeDataSO::__cordl_internal_get__reflectionProbeCubemap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reflectionProbeCubemap2;
}
constexpr void GlobalNamespace::ReflectionProbeDataSO::__cordl_internal_set__reflectionProbeCubemap2(::UnityW<::UnityEngine::Cubemap> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reflectionProbeCubemap2 = value;
}
inline ::UnityW<::UnityEngine::Cubemap> GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReflectionProbeDataSO*>(), { "get_reflectionProbeCubemap1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>>(this, ___internal_method);
}
inline void GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap1(::UnityEngine::Cubemap* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReflectionProbeDataSO*>(), { "set_reflectionProbeCubemap1", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Cubemap> GlobalNamespace::ReflectionProbeDataSO::get_reflectionProbeCubemap2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReflectionProbeDataSO*>(), { "get_reflectionProbeCubemap2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>>(this, ___internal_method);
}
inline void GlobalNamespace::ReflectionProbeDataSO::set_reflectionProbeCubemap2(::UnityEngine::Cubemap* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReflectionProbeDataSO*>(), { "set_reflectionProbeCubemap2", {}, { ::i2c::type_of<::UnityEngine::Cubemap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ReflectionProbeDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ReflectionProbeDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ReflectionProbeDataSO* GlobalNamespace::ReflectionProbeDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ReflectionProbeDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReflectionProbeDataSO::ReflectionProbeDataSO() {}
