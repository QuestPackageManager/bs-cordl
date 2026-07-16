#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AssertionConditionAttribute.hpp"
#include "JetBrains/Annotations/zzzz__AssertionConditionType_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AssertionConditionAttribute_def.hpp"
#include "JetBrains/Annotations/zzzz__AssertionConditionType_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AssertionConditionAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AssertionConditionAttribute::*)(::JetBrains::Annotations::AssertionConditionType)>(
    &::JetBrains::Annotations::AssertionConditionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ac44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AssertionConditionAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::JetBrains::Annotations::AssertionConditionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AssertionConditionAttribute.get_ConditionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::JetBrains::Annotations::AssertionConditionType (::JetBrains::Annotations::AssertionConditionAttribute::*)()>(
    &::JetBrains::Annotations::AssertionConditionAttribute::get_ConditionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ac4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AssertionConditionAttribute*>(), { "get_ConditionType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AssertionConditionAttribute.set_ConditionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AssertionConditionAttribute::*)(::JetBrains::Annotations::AssertionConditionType)>(
    &::JetBrains::Annotations::AssertionConditionAttribute::set_ConditionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ac54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AssertionConditionAttribute*>(),
                                                                                           { "set_ConditionType", {}, { ::i2c::type_of<::JetBrains::Annotations::AssertionConditionType>() } })));
    return ___internal_method;
  }
};
constexpr ::JetBrains::Annotations::AssertionConditionType& JetBrains::Annotations::AssertionConditionAttribute::__cordl_internal_get__ConditionType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionType_k__BackingField;
}
constexpr ::JetBrains::Annotations::AssertionConditionType const& JetBrains::Annotations::AssertionConditionAttribute::__cordl_internal_get__ConditionType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConditionType_k__BackingField;
}
constexpr void JetBrains::Annotations::AssertionConditionAttribute::__cordl_internal_set__ConditionType_k__BackingField(::JetBrains::Annotations::AssertionConditionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConditionType_k__BackingField = value;
}
inline void JetBrains::Annotations::AssertionConditionAttribute::_ctor(::JetBrains::Annotations::AssertionConditionType conditionType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AssertionConditionAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::JetBrains::Annotations::AssertionConditionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditionType);
}
inline ::JetBrains::Annotations::AssertionConditionType JetBrains::Annotations::AssertionConditionAttribute::get_ConditionType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AssertionConditionAttribute*>(), { "get_ConditionType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::JetBrains::Annotations::AssertionConditionType>(this, ___internal_method);
}
inline void JetBrains::Annotations::AssertionConditionAttribute::set_ConditionType(::JetBrains::Annotations::AssertionConditionType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AssertionConditionAttribute*>(),
                                                                                         { "set_ConditionType", {}, { ::i2c::type_of<::JetBrains::Annotations::AssertionConditionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::AssertionConditionAttribute* JetBrains::Annotations::AssertionConditionAttribute::New_ctor(::JetBrains::Annotations::AssertionConditionType conditionType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AssertionConditionAttribute*>(conditionType));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AssertionConditionAttribute::AssertionConditionAttribute() {}
