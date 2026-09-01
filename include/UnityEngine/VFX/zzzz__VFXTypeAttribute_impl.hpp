#pragma once
// IWYU pragma private; include "UnityEngine\VFX\VFXTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXTypeAttribute_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXTypeAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VFXTypeAttribute_Usage::VFXTypeAttribute_Usage(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXTypeAttribute_Usage::VFXTypeAttribute_Usage() {}
constexpr ::UnityEngine::VFX::VFXTypeAttribute_Usage UnityEngine::VFX::VFXTypeAttribute_Usage::Default{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::VFX::VFXTypeAttribute_Usage UnityEngine::VFX::VFXTypeAttribute_Usage::GraphicsBuffer{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::VFX::VFXTypeAttribute_Usage UnityEngine::VFX::VFXTypeAttribute_Usage::ExcludeFromProperty{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::VFX::VFXTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXTypeAttribute::*)(::UnityEngine::VFX::VFXTypeAttribute_Usage, ::StringW)>(
    &::UnityEngine::VFX::VFXTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69d2234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXTypeAttribute_Usage>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXTypeAttribute.get_usages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VFX::VFXTypeAttribute_Usage (::UnityEngine::VFX::VFXTypeAttribute::*)()>(&::UnityEngine::VFX::VFXTypeAttribute::get_usages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69d2240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(), { "get_usages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXTypeAttribute.set_usages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXTypeAttribute::*)(::UnityEngine::VFX::VFXTypeAttribute_Usage)>(&::UnityEngine::VFX::VFXTypeAttribute::set_usages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69d2248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(), { "set_usages", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXTypeAttribute_Usage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXTypeAttribute.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::VFXTypeAttribute::*)()>(&::UnityEngine::VFX::VFXTypeAttribute::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69d2250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::VFXTypeAttribute.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::VFXTypeAttribute::*)(::StringW)>(&::UnityEngine::VFX::VFXTypeAttribute::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69d2258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::VFXTypeAttribute_Usage& UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_get__usages_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usages_k__BackingField;
}
constexpr ::UnityEngine::VFX::VFXTypeAttribute_Usage const& UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_get__usages_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usages_k__BackingField;
}
constexpr void UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_set__usages_k__BackingField(::UnityEngine::VFX::VFXTypeAttribute_Usage value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usages_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::VFX::VFXTypeAttribute::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name_k__BackingField = value;
}
inline void UnityEngine::VFX::VFXTypeAttribute::_ctor(::UnityEngine::VFX::VFXTypeAttribute_Usage usages, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXTypeAttribute_Usage>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usages, name);
}
inline ::UnityEngine::VFX::VFXTypeAttribute_Usage UnityEngine::VFX::VFXTypeAttribute::get_usages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(), { "get_usages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VFX::VFXTypeAttribute_Usage>(this, ___internal_method);
}
inline void UnityEngine::VFX::VFXTypeAttribute::set_usages(::UnityEngine::VFX::VFXTypeAttribute_Usage value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(), { "set_usages", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXTypeAttribute_Usage>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::VFX::VFXTypeAttribute::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::VFXTypeAttribute::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::VFXTypeAttribute*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::VFX::VFXTypeAttribute* UnityEngine::VFX::VFXTypeAttribute::New_ctor(::UnityEngine::VFX::VFXTypeAttribute_Usage usages, ::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::VFXTypeAttribute*>(usages, name));
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXTypeAttribute::VFXTypeAttribute() {}
