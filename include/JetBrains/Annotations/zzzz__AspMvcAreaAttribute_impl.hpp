#pragma once
// IWYU pragma private; include "JetBrains\Annotations\AspMvcAreaAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspMvcAreaAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcAreaAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspMvcAreaAttribute::*)()>(&::JetBrains::Annotations::AspMvcAreaAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3e114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcAreaAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspMvcAreaAttribute::*)(::StringW)>(&::JetBrains::Annotations::AspMvcAreaAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcAreaAttribute.get_AnonymousProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::AspMvcAreaAttribute::*)()>(&::JetBrains::Annotations::AspMvcAreaAttribute::get_AnonymousProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaAttribute*>(), { "get_AnonymousProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcAreaAttribute.set_AnonymousProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspMvcAreaAttribute::*)(::StringW)>(&::JetBrains::Annotations::AspMvcAreaAttribute::set_AnonymousProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaAttribute*>(), { "set_AnonymousProperty", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::AspMvcAreaAttribute::__cordl_internal_get__AnonymousProperty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AnonymousProperty_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::AspMvcAreaAttribute::__cordl_internal_get__AnonymousProperty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AnonymousProperty_k__BackingField;
}
constexpr void JetBrains::Annotations::AspMvcAreaAttribute::__cordl_internal_set__AnonymousProperty_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AnonymousProperty_k__BackingField = value;
}
inline void JetBrains::Annotations::AspMvcAreaAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspMvcAreaAttribute::_ctor(::StringW anonymousProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anonymousProperty);
}
inline ::StringW JetBrains::Annotations::AspMvcAreaAttribute::get_AnonymousProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaAttribute*>(), { "get_AnonymousProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspMvcAreaAttribute::set_AnonymousProperty(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaAttribute*>(), { "set_AnonymousProperty", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::AspMvcAreaAttribute* JetBrains::Annotations::AspMvcAreaAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AspMvcAreaAttribute*>());
}
inline ::JetBrains::Annotations::AspMvcAreaAttribute* JetBrains::Annotations::AspMvcAreaAttribute::New_ctor(::StringW anonymousProperty) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AspMvcAreaAttribute*>(anonymousProperty));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspMvcAreaAttribute::AspMvcAreaAttribute() {}
