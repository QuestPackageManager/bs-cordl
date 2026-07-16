#pragma once
// IWYU pragma private; include "JetBrains/Annotations/PublicAPIAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__PublicAPIAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::PublicAPIAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::PublicAPIAttribute::*)()>(&::JetBrains::Annotations::PublicAPIAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3aa48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PublicAPIAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::PublicAPIAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::PublicAPIAttribute::*)(::StringW)>(&::JetBrains::Annotations::PublicAPIAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3aa4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PublicAPIAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::PublicAPIAttribute.get_Comment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::PublicAPIAttribute::*)()>(&::JetBrains::Annotations::PublicAPIAttribute::get_Comment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3aa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PublicAPIAttribute*>(), { "get_Comment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::PublicAPIAttribute.set_Comment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::PublicAPIAttribute::*)(::StringW)>(&::JetBrains::Annotations::PublicAPIAttribute::set_Comment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3aa5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PublicAPIAttribute*>(), { "set_Comment", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::PublicAPIAttribute::__cordl_internal_get__Comment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Comment_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::PublicAPIAttribute::__cordl_internal_get__Comment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Comment_k__BackingField;
}
constexpr void JetBrains::Annotations::PublicAPIAttribute::__cordl_internal_set__Comment_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Comment_k__BackingField = value;
}
inline void JetBrains::Annotations::PublicAPIAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PublicAPIAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JetBrains::Annotations::PublicAPIAttribute::_ctor(::StringW comment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PublicAPIAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comment);
}
inline ::StringW JetBrains::Annotations::PublicAPIAttribute::get_Comment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PublicAPIAttribute*>(), { "get_Comment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::PublicAPIAttribute::set_Comment(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::PublicAPIAttribute*>(), { "set_Comment", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::PublicAPIAttribute* JetBrains::Annotations::PublicAPIAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::PublicAPIAttribute*>());
}
inline ::JetBrains::Annotations::PublicAPIAttribute* JetBrains::Annotations::PublicAPIAttribute::New_ctor(::StringW comment) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::PublicAPIAttribute*>(comment));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::PublicAPIAttribute::PublicAPIAttribute() {}
