#pragma once
// IWYU pragma private; include "GlobalNamespace\RandomValueToShader.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__RandomValueToShader_def.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomValueToShader.SetRandom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomValueToShader::*)(::GlobalNamespace::IRandom*)>(&::GlobalNamespace::RandomValueToShader::SetRandom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomValueToShader*>(), { "SetRandom", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomValueToShader.SetRandomValueToShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomValueToShader::*)()>(&::GlobalNamespace::RandomValueToShader::SetRandomValueToShaders)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x58685e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomValueToShader*>(), { "SetRandomValueToShaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomValueToShader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomValueToShader::*)()>(&::GlobalNamespace::RandomValueToShader::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5868714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomValueToShader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IRandom*& GlobalNamespace::RandomValueToShader::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::GlobalNamespace::IRandom* const& GlobalNamespace::RandomValueToShader::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::RandomValueToShader::__cordl_internal_set__random(::GlobalNamespace::IRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____random = value;
}
constexpr int32_t& GlobalNamespace::RandomValueToShader::__cordl_internal_get__lastFrameNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameNum;
}
constexpr int32_t const& GlobalNamespace::RandomValueToShader::__cordl_internal_get__lastFrameNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameNum;
}
constexpr void GlobalNamespace::RandomValueToShader::__cordl_internal_set__lastFrameNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFrameNum = value;
}
inline void GlobalNamespace::RandomValueToShader::setStaticF__randomValueID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_randomValueID", ::GlobalNamespace::RandomValueToShader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::RandomValueToShader::getStaticF__randomValueID() {
  return ::cordl_internals::getStaticField<int32_t, "_randomValueID", ::GlobalNamespace::RandomValueToShader*>();
}
inline void GlobalNamespace::RandomValueToShader::SetRandom(::GlobalNamespace::IRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomValueToShader*>(), { "SetRandom", {}, { ::i2c::type_of<::GlobalNamespace::IRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random);
}
inline void GlobalNamespace::RandomValueToShader::SetRandomValueToShaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomValueToShader*>(), { "SetRandomValueToShaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomValueToShader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomValueToShader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomValueToShader* GlobalNamespace::RandomValueToShader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomValueToShader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomValueToShader::RandomValueToShader() {}
