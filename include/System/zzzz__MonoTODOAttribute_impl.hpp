#pragma once
// IWYU pragma private; include "System/MonoTODOAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__MonoTODOAttribute_def.hpp"
//  Writing Method size for method: ::System::MonoTODOAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MonoTODOAttribute::*)()>(&::System::MonoTODOAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c70504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoTODOAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::MonoTODOAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::MonoTODOAttribute::*)(::StringW)>(&::System::MonoTODOAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c7050c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoTODOAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::MonoTODOAttribute::__cordl_internal_get_comment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comment;
}
constexpr ::StringW const& System::MonoTODOAttribute::__cordl_internal_get_comment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comment;
}
constexpr void System::MonoTODOAttribute::__cordl_internal_set_comment(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comment = value;
}
inline void System::MonoTODOAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoTODOAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::MonoTODOAttribute::_ctor(::StringW comment) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::MonoTODOAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comment);
}
inline ::System::MonoTODOAttribute* System::MonoTODOAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::MonoTODOAttribute*>());
}
inline ::System::MonoTODOAttribute* System::MonoTODOAttribute::New_ctor(::StringW comment) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::MonoTODOAttribute*>(comment));
}
// Ctor Parameters []
constexpr ::System::MonoTODOAttribute::MonoTODOAttribute() {}
