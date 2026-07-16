#pragma once
// IWYU pragma private; include "Zenject/IfNotBoundBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IfNotBoundBinder_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::IfNotBoundBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IfNotBoundBinder::*)(::Zenject::BindInfo*)>(&::Zenject::IfNotBoundBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e596d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IfNotBoundBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IfNotBoundBinder.get_BindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Zenject::BindInfo* (::Zenject::IfNotBoundBinder::*)()>(&::Zenject::IfNotBoundBinder::get_BindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e596e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IfNotBoundBinder*>(), { "get_BindInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IfNotBoundBinder.set_BindInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IfNotBoundBinder::*)(::Zenject::BindInfo*)>(&::Zenject::IfNotBoundBinder::set_BindInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e596e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IfNotBoundBinder*>(), { "set_BindInfo", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::IfNotBoundBinder.IfNotBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Zenject::IfNotBoundBinder::*)()>(&::Zenject::IfNotBoundBinder::IfNotBound)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e596f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IfNotBoundBinder*>(), { "IfNotBound", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Zenject::BindInfo*& Zenject::IfNotBoundBinder::__cordl_internal_get__BindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
constexpr ::Zenject::BindInfo* const& Zenject::IfNotBoundBinder::__cordl_internal_get__BindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BindInfo_k__BackingField;
}
constexpr void Zenject::IfNotBoundBinder::__cordl_internal_set__BindInfo_k__BackingField(::Zenject::BindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BindInfo_k__BackingField = value;
}
inline void Zenject::IfNotBoundBinder::_ctor(::Zenject::BindInfo* bindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IfNotBoundBinder*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bindInfo);
}
inline ::Zenject::BindInfo* Zenject::IfNotBoundBinder::get_BindInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IfNotBoundBinder*>(), { "get_BindInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::BindInfo*>(this, ___internal_method);
}
inline void Zenject::IfNotBoundBinder::set_BindInfo(::Zenject::BindInfo* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IfNotBoundBinder*>(), { "set_BindInfo", {}, { ::i2c::type_of<::Zenject::BindInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Zenject::IfNotBoundBinder::IfNotBound() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::IfNotBoundBinder*>(), { "IfNotBound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Zenject::IfNotBoundBinder* Zenject::IfNotBoundBinder::New_ctor(::Zenject::BindInfo* bindInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::IfNotBoundBinder*>(bindInfo));
}
// Ctor Parameters []
constexpr ::Zenject::IfNotBoundBinder::IfNotBoundBinder() {}
