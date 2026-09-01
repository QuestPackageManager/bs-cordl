#pragma once
// IWYU pragma private; include "JetBrains\Annotations\AspMvcControllerAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspMvcControllerAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcControllerAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspMvcControllerAttribute::*)()>(&::JetBrains::Annotations::AspMvcControllerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3e130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcControllerAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcControllerAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspMvcControllerAttribute::*)(::StringW)>(&::JetBrains::Annotations::AspMvcControllerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcControllerAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcControllerAttribute.get_AnonymousProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::AspMvcControllerAttribute::*)()>(
    &::JetBrains::Annotations::AspMvcControllerAttribute::get_AnonymousProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcControllerAttribute*>(), { "get_AnonymousProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcControllerAttribute.set_AnonymousProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspMvcControllerAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::AspMvcControllerAttribute::set_AnonymousProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcControllerAttribute*>(), { "set_AnonymousProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::AspMvcControllerAttribute::__cordl_internal_get__AnonymousProperty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AnonymousProperty_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::AspMvcControllerAttribute::__cordl_internal_get__AnonymousProperty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AnonymousProperty_k__BackingField;
}
constexpr void JetBrains::Annotations::AspMvcControllerAttribute::__cordl_internal_set__AnonymousProperty_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AnonymousProperty_k__BackingField = value;
}
inline void JetBrains::Annotations::AspMvcControllerAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcControllerAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspMvcControllerAttribute::_ctor(::StringW anonymousProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcControllerAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anonymousProperty);
}
inline ::StringW JetBrains::Annotations::AspMvcControllerAttribute::get_AnonymousProperty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcControllerAttribute*>(), { "get_AnonymousProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspMvcControllerAttribute::set_AnonymousProperty(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcControllerAttribute*>(), { "set_AnonymousProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::AspMvcControllerAttribute* JetBrains::Annotations::AspMvcControllerAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AspMvcControllerAttribute*>());
}
inline ::JetBrains::Annotations::AspMvcControllerAttribute* JetBrains::Annotations::AspMvcControllerAttribute::New_ctor(::StringW anonymousProperty) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AspMvcControllerAttribute*>(anonymousProperty));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspMvcControllerAttribute::AspMvcControllerAttribute() {}
