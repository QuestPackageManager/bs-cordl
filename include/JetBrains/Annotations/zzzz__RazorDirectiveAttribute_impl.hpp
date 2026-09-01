#pragma once
// IWYU pragma private; include "JetBrains\Annotations\RazorDirectiveAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__RazorDirectiveAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::RazorDirectiveAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::RazorDirectiveAttribute::*)(::StringW)>(&::JetBrains::Annotations::RazorDirectiveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorDirectiveAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::RazorDirectiveAttribute.get_Directive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::RazorDirectiveAttribute::*)()>(&::JetBrains::Annotations::RazorDirectiveAttribute::get_Directive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorDirectiveAttribute*>(), { "get_Directive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::RazorDirectiveAttribute.set_Directive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::RazorDirectiveAttribute::*)(::StringW)>(&::JetBrains::Annotations::RazorDirectiveAttribute::set_Directive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorDirectiveAttribute*>(), { "set_Directive", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::RazorDirectiveAttribute::__cordl_internal_get__Directive_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Directive_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::RazorDirectiveAttribute::__cordl_internal_get__Directive_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Directive_k__BackingField;
}
constexpr void JetBrains::Annotations::RazorDirectiveAttribute::__cordl_internal_set__Directive_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Directive_k__BackingField = value;
}
inline void JetBrains::Annotations::RazorDirectiveAttribute::_ctor(::StringW directive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorDirectiveAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directive);
}
inline ::StringW JetBrains::Annotations::RazorDirectiveAttribute::get_Directive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorDirectiveAttribute*>(), { "get_Directive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::RazorDirectiveAttribute::set_Directive(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorDirectiveAttribute*>(), { "set_Directive", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::RazorDirectiveAttribute* JetBrains::Annotations::RazorDirectiveAttribute::New_ctor(::StringW directive) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::RazorDirectiveAttribute*>(directive));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::RazorDirectiveAttribute::RazorDirectiveAttribute() {}
