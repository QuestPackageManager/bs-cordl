#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomFogEnvironment.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomFogEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogEnvironmentParams_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomFogEnvironment.get_fogParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> (::GlobalNamespace::BloomFogEnvironment::*)()>(
    &::GlobalNamespace::BloomFogEnvironment::get_fogParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58613fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogEnvironment*>(), { "get_fogParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogEnvironment.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogEnvironment::*)()>(&::GlobalNamespace::BloomFogEnvironment::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5861404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogEnvironment*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogEnvironment.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogEnvironment::*)()>(&::GlobalNamespace::BloomFogEnvironment::OnValidate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5861464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogEnvironment*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogEnvironment._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomFogEnvironment::*)()>(&::GlobalNamespace::BloomFogEnvironment::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58616e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogEnvironment*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& GlobalNamespace::BloomFogEnvironment::__cordl_internal_get__bloomFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& GlobalNamespace::BloomFogEnvironment::__cordl_internal_get__bloomFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr void GlobalNamespace::BloomFogEnvironment::__cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomFog = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>& GlobalNamespace::BloomFogEnvironment::__cordl_internal_get__fogParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fogParams;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> const& GlobalNamespace::BloomFogEnvironment::__cordl_internal_get__fogParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fogParams;
}
constexpr void GlobalNamespace::BloomFogEnvironment::__cordl_internal_set__fogParams(::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fogParams = value;
}
inline ::UnityW<::GlobalNamespace::BloomFogEnvironmentParams> GlobalNamespace::BloomFogEnvironment::get_fogParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogEnvironment*>(), { "get_fogParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BloomFogEnvironmentParams>>(this, ___internal_method);
}
inline void GlobalNamespace::BloomFogEnvironment::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogEnvironment*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomFogEnvironment::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogEnvironment*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BloomFogEnvironment::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomFogEnvironment*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomFogEnvironment* GlobalNamespace::BloomFogEnvironment::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomFogEnvironment*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomFogEnvironment::BloomFogEnvironment() {}
