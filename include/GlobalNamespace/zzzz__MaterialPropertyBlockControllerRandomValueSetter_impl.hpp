#pragma once
// IWYU pragma private; include "GlobalNamespace\MaterialPropertyBlockControllerRandomValueSetter.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockControllerRandomValueSetter_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58721e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::OnValidate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5872304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter.RefreshPropertyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::RefreshPropertyId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5872208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*>(), { "RefreshPropertyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter.ApplyParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::ApplyParams)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5872228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*>(), { "ApplyParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x587232c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const&
GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void
GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr ::StringW& GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyName = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
constexpr void GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_set__min(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____min = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
constexpr void GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_set__max(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____max = value;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*>& GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__materialPropertyBlocks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlocks;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*> const& GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__materialPropertyBlocks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlocks;
}
constexpr void GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_set__materialPropertyBlocks(::ArrayW<::UnityEngine::MaterialPropertyBlock*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlocks = value;
}
constexpr int32_t& GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::__cordl_internal_set__propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId = value;
}
inline void GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::Start() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::OnValidate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::RefreshPropertyId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*>(), { "RefreshPropertyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::ApplyParams() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*>(), { "ApplyParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter* GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockControllerRandomValueSetter::MaterialPropertyBlockControllerRandomValueSetter() {}
