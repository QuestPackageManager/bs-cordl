#pragma once
// IWYU pragma private; include "GlobalNamespace/AlphaSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AlphaSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlphaSO.op_Implicit_float_t
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::GlobalNamespace::AlphaSO*)>(&::GlobalNamespace::AlphaSO::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x36f48e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaSO*>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::AlphaSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlphaSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AlphaSO::*)()>(&::GlobalNamespace::AlphaSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f48f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AlphaSO::__cordl_internal_get_alphaValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alphaValue;
}
constexpr float_t const& GlobalNamespace::AlphaSO::__cordl_internal_get_alphaValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___alphaValue;
}
constexpr void GlobalNamespace::AlphaSO::__cordl_internal_set_alphaValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___alphaValue = value;
}
inline float_t GlobalNamespace::AlphaSO::op_Implicit_float_t(::GlobalNamespace::AlphaSO* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaSO*>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::AlphaSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::AlphaSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AlphaSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AlphaSO* GlobalNamespace::AlphaSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AlphaSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlphaSO::AlphaSO() {}
