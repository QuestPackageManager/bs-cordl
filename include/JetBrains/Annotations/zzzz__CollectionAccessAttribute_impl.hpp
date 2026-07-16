#pragma once
// IWYU pragma private; include "JetBrains/Annotations/CollectionAccessAttribute.hpp"
#include "JetBrains/Annotations/zzzz__CollectionAccessType_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__CollectionAccessAttribute_def.hpp"
#include "JetBrains/Annotations/zzzz__CollectionAccessType_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::CollectionAccessAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::CollectionAccessAttribute::*)(::JetBrains::Annotations::CollectionAccessType)>(
    &::JetBrains::Annotations::CollectionAccessAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ac28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::CollectionAccessAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::JetBrains::Annotations::CollectionAccessType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::CollectionAccessAttribute.get_CollectionAccessType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JetBrains::Annotations::CollectionAccessType (::JetBrains::Annotations::CollectionAccessAttribute::*)()>(
    &::JetBrains::Annotations::CollectionAccessAttribute::get_CollectionAccessType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ac30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::CollectionAccessAttribute*>(), { "get_CollectionAccessType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::CollectionAccessAttribute.set_CollectionAccessType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::CollectionAccessAttribute::*)(::JetBrains::Annotations::CollectionAccessType)>(
    &::JetBrains::Annotations::CollectionAccessAttribute::set_CollectionAccessType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ac38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::CollectionAccessAttribute*>(),
                                                                                           { "set_CollectionAccessType", {}, { ::i2c::type_of<::JetBrains::Annotations::CollectionAccessType>() } })));
    return ___internal_method;
  }
};
constexpr ::JetBrains::Annotations::CollectionAccessType& JetBrains::Annotations::CollectionAccessAttribute::__cordl_internal_get__CollectionAccessType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CollectionAccessType_k__BackingField;
}
constexpr ::JetBrains::Annotations::CollectionAccessType const& JetBrains::Annotations::CollectionAccessAttribute::__cordl_internal_get__CollectionAccessType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CollectionAccessType_k__BackingField;
}
constexpr void JetBrains::Annotations::CollectionAccessAttribute::__cordl_internal_set__CollectionAccessType_k__BackingField(::JetBrains::Annotations::CollectionAccessType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CollectionAccessType_k__BackingField = value;
}
inline void JetBrains::Annotations::CollectionAccessAttribute::_ctor(::JetBrains::Annotations::CollectionAccessType collectionAccessType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::CollectionAccessAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::JetBrains::Annotations::CollectionAccessType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectionAccessType);
}
inline ::JetBrains::Annotations::CollectionAccessType JetBrains::Annotations::CollectionAccessAttribute::get_CollectionAccessType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::CollectionAccessAttribute*>(), { "get_CollectionAccessType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::JetBrains::Annotations::CollectionAccessType>(this, ___internal_method);
}
inline void JetBrains::Annotations::CollectionAccessAttribute::set_CollectionAccessType(::JetBrains::Annotations::CollectionAccessType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::CollectionAccessAttribute*>(),
                                                                                         { "set_CollectionAccessType", {}, { ::i2c::type_of<::JetBrains::Annotations::CollectionAccessType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::CollectionAccessAttribute* JetBrains::Annotations::CollectionAccessAttribute::New_ctor(::JetBrains::Annotations::CollectionAccessType collectionAccessType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::CollectionAccessAttribute*>(collectionAccessType));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::CollectionAccessAttribute::CollectionAccessAttribute() {}
