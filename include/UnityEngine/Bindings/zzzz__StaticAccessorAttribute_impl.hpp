#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/StaticAccessorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__StaticAccessorType_impl.hpp"
#include "UnityEngine/Bindings/zzzz__StaticAccessorAttribute_def.hpp"
#include "UnityEngine/Bindings/zzzz__StaticAccessorType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::StaticAccessorAttribute.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::StaticAccessorAttribute::*)(::StringW)>(&::UnityEngine::Bindings::StaticAccessorAttribute::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb2fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::StaticAccessorAttribute*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::StaticAccessorAttribute.set_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::StaticAccessorAttribute::*)(::UnityEngine::Bindings::StaticAccessorType)>(
    &::UnityEngine::Bindings::StaticAccessorAttribute::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb2fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::StaticAccessorAttribute*>(), { "set_Type", {}, { ::i2c::type_of<::UnityEngine::Bindings::StaticAccessorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::StaticAccessorAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::StaticAccessorAttribute::*)(::StringW)>(&::UnityEngine::Bindings::StaticAccessorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb2fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::StaticAccessorAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::StaticAccessorAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::StaticAccessorAttribute::*)(::StringW, ::UnityEngine::Bindings::StaticAccessorType)>(
    &::UnityEngine::Bindings::StaticAccessorAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb2fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::StaticAccessorAttribute*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Bindings::StaticAccessorType>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr ::UnityEngine::Bindings::StaticAccessorType& UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::UnityEngine::Bindings::StaticAccessorType const& UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void UnityEngine::Bindings::StaticAccessorAttribute::__cordl_internal_set__Type_k__BackingField(::UnityEngine::Bindings::StaticAccessorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
inline void UnityEngine::Bindings::StaticAccessorAttribute::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::StaticAccessorAttribute*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::StaticAccessorAttribute::set_Type(::UnityEngine::Bindings::StaticAccessorType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::StaticAccessorAttribute*>(), { "set_Type", {}, { ::i2c::type_of<::UnityEngine::Bindings::StaticAccessorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::StaticAccessorAttribute::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::StaticAccessorAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Bindings::StaticAccessorAttribute::_ctor(::StringW name, ::UnityEngine::Bindings::StaticAccessorType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::StaticAccessorAttribute*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Bindings::StaticAccessorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, type);
}
inline ::UnityEngine::Bindings::StaticAccessorAttribute* UnityEngine::Bindings::StaticAccessorAttribute::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::StaticAccessorAttribute*>(name));
}
inline ::UnityEngine::Bindings::StaticAccessorAttribute* UnityEngine::Bindings::StaticAccessorAttribute::New_ctor(::StringW name, ::UnityEngine::Bindings::StaticAccessorType type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::StaticAccessorAttribute*>(name, type));
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::StaticAccessorAttribute::StaticAccessorAttribute() {}
