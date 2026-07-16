#pragma once
// IWYU pragma private; include "JetBrains/Annotations/MustUseReturnValueAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__MustUseReturnValueAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::MustUseReturnValueAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::MustUseReturnValueAttribute::*)()>(&::JetBrains::Annotations::MustUseReturnValueAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3aa6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MustUseReturnValueAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::MustUseReturnValueAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::MustUseReturnValueAttribute::*)(::StringW)>(&::JetBrains::Annotations::MustUseReturnValueAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3aa70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MustUseReturnValueAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::MustUseReturnValueAttribute.get_Justification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::MustUseReturnValueAttribute::*)()>(
    &::JetBrains::Annotations::MustUseReturnValueAttribute::get_Justification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3aa78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MustUseReturnValueAttribute*>(), { "get_Justification", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::MustUseReturnValueAttribute.set_Justification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::MustUseReturnValueAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::MustUseReturnValueAttribute::set_Justification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3aa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MustUseReturnValueAttribute*>(), { "set_Justification", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::MustUseReturnValueAttribute::__cordl_internal_get__Justification_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Justification_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::MustUseReturnValueAttribute::__cordl_internal_get__Justification_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Justification_k__BackingField;
}
constexpr void JetBrains::Annotations::MustUseReturnValueAttribute::__cordl_internal_set__Justification_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Justification_k__BackingField = value;
}
inline void JetBrains::Annotations::MustUseReturnValueAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MustUseReturnValueAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JetBrains::Annotations::MustUseReturnValueAttribute::_ctor(::StringW justification) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MustUseReturnValueAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, justification);
}
inline ::StringW JetBrains::Annotations::MustUseReturnValueAttribute::get_Justification() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MustUseReturnValueAttribute*>(), { "get_Justification", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::MustUseReturnValueAttribute::set_Justification(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::MustUseReturnValueAttribute*>(), { "set_Justification", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::MustUseReturnValueAttribute* JetBrains::Annotations::MustUseReturnValueAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::MustUseReturnValueAttribute*>());
}
inline ::JetBrains::Annotations::MustUseReturnValueAttribute* JetBrains::Annotations::MustUseReturnValueAttribute::New_ctor(::StringW justification) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::MustUseReturnValueAttribute*>(justification));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::MustUseReturnValueAttribute::MustUseReturnValueAttribute() {}
