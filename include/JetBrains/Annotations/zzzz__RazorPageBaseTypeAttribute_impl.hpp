#pragma once
// IWYU pragma private; include "JetBrains/Annotations/RazorPageBaseTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__RazorPageBaseTypeAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::RazorPageBaseTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::RazorPageBaseTypeAttribute::*)(::StringW)>(&::JetBrains::Annotations::RazorPageBaseTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ad34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::RazorPageBaseTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::RazorPageBaseTypeAttribute::*)(::StringW, ::StringW)>(
    &::JetBrains::Annotations::RazorPageBaseTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ad3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::RazorPageBaseTypeAttribute.get_BaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::RazorPageBaseTypeAttribute::*)()>(&::JetBrains::Annotations::RazorPageBaseTypeAttribute::get_BaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ad44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { "get_BaseType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::RazorPageBaseTypeAttribute.set_BaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::RazorPageBaseTypeAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::RazorPageBaseTypeAttribute::set_BaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ad4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { "set_BaseType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::RazorPageBaseTypeAttribute.get_PageName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::RazorPageBaseTypeAttribute::*)()>(&::JetBrains::Annotations::RazorPageBaseTypeAttribute::get_PageName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ad54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { "get_PageName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::RazorPageBaseTypeAttribute.set_PageName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::RazorPageBaseTypeAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::RazorPageBaseTypeAttribute::set_PageName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ad5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { "set_PageName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::RazorPageBaseTypeAttribute::__cordl_internal_get__BaseType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseType_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::RazorPageBaseTypeAttribute::__cordl_internal_get__BaseType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseType_k__BackingField;
}
constexpr void JetBrains::Annotations::RazorPageBaseTypeAttribute::__cordl_internal_set__BaseType_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BaseType_k__BackingField = value;
}
constexpr ::StringW& JetBrains::Annotations::RazorPageBaseTypeAttribute::__cordl_internal_get__PageName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PageName_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::RazorPageBaseTypeAttribute::__cordl_internal_get__PageName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PageName_k__BackingField;
}
constexpr void JetBrains::Annotations::RazorPageBaseTypeAttribute::__cordl_internal_set__PageName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PageName_k__BackingField = value;
}
inline void JetBrains::Annotations::RazorPageBaseTypeAttribute::_ctor(::StringW baseType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseType);
}
inline void JetBrains::Annotations::RazorPageBaseTypeAttribute::_ctor(::StringW baseType, ::StringW pageName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseType, pageName);
}
inline ::StringW JetBrains::Annotations::RazorPageBaseTypeAttribute::get_BaseType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { "get_BaseType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::RazorPageBaseTypeAttribute::set_BaseType(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { "set_BaseType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW JetBrains::Annotations::RazorPageBaseTypeAttribute::get_PageName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { "get_PageName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::RazorPageBaseTypeAttribute::set_PageName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(), { "set_PageName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::RazorPageBaseTypeAttribute* JetBrains::Annotations::RazorPageBaseTypeAttribute::New_ctor(::StringW baseType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(baseType));
}
inline ::JetBrains::Annotations::RazorPageBaseTypeAttribute* JetBrains::Annotations::RazorPageBaseTypeAttribute::New_ctor(::StringW baseType, ::StringW pageName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::RazorPageBaseTypeAttribute*>(baseType, pageName));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::RazorPageBaseTypeAttribute::RazorPageBaseTypeAttribute() {}
