#pragma once
// IWYU pragma private; include "JetBrains/Annotations/PathReferenceAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__PathReferenceAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::PathReferenceAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::PathReferenceAttribute::*)()>(&::JetBrains::Annotations::PathReferenceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3aa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PathReferenceAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::PathReferenceAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::PathReferenceAttribute::*)(::StringW)>(&::JetBrains::Annotations::PathReferenceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3aa90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PathReferenceAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::PathReferenceAttribute.get_BasePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::PathReferenceAttribute::*)()>(&::JetBrains::Annotations::PathReferenceAttribute::get_BasePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3aa98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PathReferenceAttribute*>(), { "get_BasePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::PathReferenceAttribute.set_BasePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::PathReferenceAttribute::*)(::StringW)>(&::JetBrains::Annotations::PathReferenceAttribute::set_BasePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3aaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PathReferenceAttribute*>(), { "set_BasePath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::PathReferenceAttribute::__cordl_internal_get__BasePath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BasePath_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::PathReferenceAttribute::__cordl_internal_get__BasePath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BasePath_k__BackingField;
}
constexpr void JetBrains::Annotations::PathReferenceAttribute::__cordl_internal_set__BasePath_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BasePath_k__BackingField = value;
}
inline void JetBrains::Annotations::PathReferenceAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PathReferenceAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JetBrains::Annotations::PathReferenceAttribute::_ctor(::StringW basePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PathReferenceAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basePath);
}
inline ::StringW JetBrains::Annotations::PathReferenceAttribute::get_BasePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PathReferenceAttribute*>(), { "get_BasePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::PathReferenceAttribute::set_BasePath(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PathReferenceAttribute*>(), { "set_BasePath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::PathReferenceAttribute* JetBrains::Annotations::PathReferenceAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::PathReferenceAttribute*>());
}
inline ::JetBrains::Annotations::PathReferenceAttribute* JetBrains::Annotations::PathReferenceAttribute::New_ctor(::StringW basePath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::PathReferenceAttribute*>(basePath));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::PathReferenceAttribute::PathReferenceAttribute() {}
