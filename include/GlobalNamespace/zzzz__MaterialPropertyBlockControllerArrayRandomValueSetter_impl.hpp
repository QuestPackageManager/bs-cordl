#pragma once
// IWYU pragma private; include "GlobalNamespace\MaterialPropertyBlockControllerArrayRandomValueSetter.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_impl.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockControllerArrayRandomValueSetter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5871fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::OnValidate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58721b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter.RefreshPropertyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::RefreshPropertyId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5872004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*>(), { "RefreshPropertyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter.ApplyParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::ApplyParams)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5872024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*>(), { "ApplyParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58721dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>>&
GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__materialPropertyBlockControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> const&
GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__materialPropertyBlockControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr void GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_set__materialPropertyBlockControllers(
    ::ArrayW<::UnityW<::GlobalNamespace::MaterialPropertyBlockController>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockControllers = value;
}
constexpr ::StringW& GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyName;
}
constexpr void GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyName = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
constexpr void GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_set__min(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____min = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
constexpr void GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_set__max(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____max = value;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*>& GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__materialPropertyBlocks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlocks;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*> const& GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__materialPropertyBlocks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlocks;
}
constexpr void GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_set__materialPropertyBlocks(::ArrayW<::UnityEngine::MaterialPropertyBlock*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlocks = value;
}
constexpr int32_t& GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__propertyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr int32_t const& GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_get__propertyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____propertyId;
}
constexpr void GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::__cordl_internal_set__propertyId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____propertyId = value;
}
inline void GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::Start() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::OnValidate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::RefreshPropertyId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*>(), { "RefreshPropertyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::ApplyParams() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*>(), { "ApplyParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter* GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockControllerArrayRandomValueSetter::MaterialPropertyBlockControllerArrayRandomValueSetter() {}
