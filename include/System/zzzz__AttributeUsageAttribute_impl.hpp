#pragma once
// IWYU pragma private; include "System\AttributeUsageAttribute.hpp"
#include "System/zzzz__AttributeTargets_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__AttributeUsageAttribute_def.hpp"
#include "System/zzzz__AttributeTargets_def.hpp"
//  Writing Method size for method: ::System::AttributeUsageAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AttributeUsageAttribute::*)(::System::AttributeTargets)>(&::System::AttributeUsageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5baf1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AttributeUsageAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::AttributeTargets>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AttributeUsageAttribute.get_AllowMultiple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::AttributeUsageAttribute::*)()>(&::System::AttributeUsageAttribute::get_AllowMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5baf1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AttributeUsageAttribute*>(), { "get_AllowMultiple", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AttributeUsageAttribute.set_AllowMultiple
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AttributeUsageAttribute::*)(bool)>(&::System::AttributeUsageAttribute::set_AllowMultiple)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5baf1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AttributeUsageAttribute*>(), { "set_AllowMultiple", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AttributeUsageAttribute.get_Inherited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::AttributeUsageAttribute::*)()>(&::System::AttributeUsageAttribute::get_Inherited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5baf1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AttributeUsageAttribute*>(), { "get_Inherited", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::AttributeUsageAttribute.set_Inherited
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::AttributeUsageAttribute::*)(bool)>(&::System::AttributeUsageAttribute::set_Inherited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5baf1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AttributeUsageAttribute*>(), { "set_Inherited", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::AttributeTargets& System::AttributeUsageAttribute::__cordl_internal_get__attributeTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeTarget;
}
constexpr ::System::AttributeTargets const& System::AttributeUsageAttribute::__cordl_internal_get__attributeTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeTarget;
}
constexpr void System::AttributeUsageAttribute::__cordl_internal_set__attributeTarget(::System::AttributeTargets value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attributeTarget = value;
}
constexpr bool& System::AttributeUsageAttribute::__cordl_internal_get__allowMultiple() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowMultiple;
}
constexpr bool const& System::AttributeUsageAttribute::__cordl_internal_get__allowMultiple() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowMultiple;
}
constexpr void System::AttributeUsageAttribute::__cordl_internal_set__allowMultiple(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowMultiple = value;
}
constexpr bool& System::AttributeUsageAttribute::__cordl_internal_get__inherited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inherited;
}
constexpr bool const& System::AttributeUsageAttribute::__cordl_internal_get__inherited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inherited;
}
constexpr void System::AttributeUsageAttribute::__cordl_internal_set__inherited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inherited = value;
}
inline void System::AttributeUsageAttribute::setStaticF_Default(::System::AttributeUsageAttribute* value) {
  ::cordl_internals::setStaticField<::System::AttributeUsageAttribute*, "Default", ::System::AttributeUsageAttribute*>(std::forward<::System::AttributeUsageAttribute*>(value));
}
inline ::System::AttributeUsageAttribute* System::AttributeUsageAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::AttributeUsageAttribute*, "Default", ::System::AttributeUsageAttribute*>();
}
inline void System::AttributeUsageAttribute::_ctor(::System::AttributeTargets validOn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AttributeUsageAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::AttributeTargets>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, validOn);
}
inline bool System::AttributeUsageAttribute::get_AllowMultiple() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AttributeUsageAttribute*>(), { "get_AllowMultiple", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::AttributeUsageAttribute::set_AllowMultiple(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AttributeUsageAttribute*>(), { "set_AllowMultiple", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::AttributeUsageAttribute::get_Inherited() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AttributeUsageAttribute*>(), { "get_Inherited", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::AttributeUsageAttribute::set_Inherited(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::AttributeUsageAttribute*>(), { "set_Inherited", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::AttributeUsageAttribute* System::AttributeUsageAttribute::New_ctor(::System::AttributeTargets validOn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::AttributeUsageAttribute*>(validOn));
}
// Ctor Parameters []
constexpr ::System::AttributeUsageAttribute::AttributeUsageAttribute() {}
