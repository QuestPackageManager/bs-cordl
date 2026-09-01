#pragma once
// IWYU pragma private; include "JetBrains\Annotations\AspChildControlTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspChildControlTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspChildControlTypeAttribute::*)(::StringW, ::System::Type*)>(
    &::JetBrains::Annotations::AspChildControlTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspChildControlTypeAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.get_TagName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::AspChildControlTypeAttribute::*)()>(&::JetBrains::Annotations::AspChildControlTypeAttribute::get_TagName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspChildControlTypeAttribute*>(), { "get_TagName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.set_TagName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspChildControlTypeAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::AspChildControlTypeAttribute::set_TagName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspChildControlTypeAttribute*>(), { "set_TagName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.get_ControlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::JetBrains::Annotations::AspChildControlTypeAttribute::*)()>(
    &::JetBrains::Annotations::AspChildControlTypeAttribute::get_ControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspChildControlTypeAttribute*>(), { "get_ControlType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspChildControlTypeAttribute.set_ControlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspChildControlTypeAttribute::*)(::System::Type*)>(
    &::JetBrains::Annotations::AspChildControlTypeAttribute::set_ControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspChildControlTypeAttribute*>(), { "set_ControlType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_get__TagName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TagName_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_get__TagName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TagName_k__BackingField;
}
constexpr void JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_set__TagName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TagName_k__BackingField = value;
}
constexpr ::System::Type*& JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_get__ControlType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ControlType_k__BackingField;
}
constexpr ::System::Type* const& JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_get__ControlType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ControlType_k__BackingField;
}
constexpr void JetBrains::Annotations::AspChildControlTypeAttribute::__cordl_internal_set__ControlType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ControlType_k__BackingField = value;
}
inline void JetBrains::Annotations::AspChildControlTypeAttribute::_ctor(::StringW tagName, ::System::Type* controlType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspChildControlTypeAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tagName, controlType);
}
inline ::StringW JetBrains::Annotations::AspChildControlTypeAttribute::get_TagName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspChildControlTypeAttribute*>(), { "get_TagName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspChildControlTypeAttribute::set_TagName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspChildControlTypeAttribute*>(), { "set_TagName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* JetBrains::Annotations::AspChildControlTypeAttribute::get_ControlType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspChildControlTypeAttribute*>(), { "get_ControlType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspChildControlTypeAttribute::set_ControlType(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspChildControlTypeAttribute*>(), { "set_ControlType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::AspChildControlTypeAttribute* JetBrains::Annotations::AspChildControlTypeAttribute::New_ctor(::StringW tagName, ::System::Type* controlType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AspChildControlTypeAttribute*>(tagName, controlType));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspChildControlTypeAttribute::AspChildControlTypeAttribute() {}
