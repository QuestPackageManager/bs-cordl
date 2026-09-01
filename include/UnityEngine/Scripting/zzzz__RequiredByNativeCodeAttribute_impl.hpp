#pragma once
// IWYU pragma private; include "UnityEngine\Scripting\RequiredByNativeCodeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Scripting/zzzz__RequiredByNativeCodeAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Scripting::RequiredByNativeCodeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::RequiredByNativeCodeAttribute::*)()>(&::UnityEngine::Scripting::RequiredByNativeCodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb6590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Scripting::RequiredByNativeCodeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::RequiredByNativeCodeAttribute::*)(::StringW)>(&::UnityEngine::Scripting::RequiredByNativeCodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb6594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Scripting::RequiredByNativeCodeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::RequiredByNativeCodeAttribute::*)(bool)>(&::UnityEngine::Scripting::RequiredByNativeCodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb659c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Scripting::RequiredByNativeCodeAttribute.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::RequiredByNativeCodeAttribute::*)(::StringW)>(
    &::UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb65a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Scripting::RequiredByNativeCodeAttribute.set_Optional
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::RequiredByNativeCodeAttribute::*)(bool)>(
    &::UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_Optional)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb65ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { "set_Optional", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Scripting::RequiredByNativeCodeAttribute.set_GenerateProxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Scripting::RequiredByNativeCodeAttribute::*)(bool)>(
    &::UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_GenerateProxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb65b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { "set_GenerateProxy", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Scripting::RequiredByNativeCodeAttribute::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Scripting::RequiredByNativeCodeAttribute::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::Scripting::RequiredByNativeCodeAttribute::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name_k__BackingField = value;
}
constexpr bool& UnityEngine::Scripting::RequiredByNativeCodeAttribute::__cordl_internal_get__Optional_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Optional_k__BackingField;
}
constexpr bool const& UnityEngine::Scripting::RequiredByNativeCodeAttribute::__cordl_internal_get__Optional_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Optional_k__BackingField;
}
constexpr void UnityEngine::Scripting::RequiredByNativeCodeAttribute::__cordl_internal_set__Optional_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Optional_k__BackingField = value;
}
constexpr bool& UnityEngine::Scripting::RequiredByNativeCodeAttribute::__cordl_internal_get__GenerateProxy_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GenerateProxy_k__BackingField;
}
constexpr bool const& UnityEngine::Scripting::RequiredByNativeCodeAttribute::__cordl_internal_get__GenerateProxy_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GenerateProxy_k__BackingField;
}
constexpr void UnityEngine::Scripting::RequiredByNativeCodeAttribute::__cordl_internal_set__GenerateProxy_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____GenerateProxy_k__BackingField = value;
}
inline void UnityEngine::Scripting::RequiredByNativeCodeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Scripting::RequiredByNativeCodeAttribute::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::Scripting::RequiredByNativeCodeAttribute::_ctor(bool optional) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, optional);
}
inline void UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_Optional(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { "set_Optional", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Scripting::RequiredByNativeCodeAttribute::set_GenerateProxy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(), { "set_GenerateProxy", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Scripting::RequiredByNativeCodeAttribute* UnityEngine::Scripting::RequiredByNativeCodeAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>());
}
inline ::UnityEngine::Scripting::RequiredByNativeCodeAttribute* UnityEngine::Scripting::RequiredByNativeCodeAttribute::New_ctor(::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(name));
}
inline ::UnityEngine::Scripting::RequiredByNativeCodeAttribute* UnityEngine::Scripting::RequiredByNativeCodeAttribute::New_ctor(bool optional) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Scripting::RequiredByNativeCodeAttribute*>(optional));
}
// Ctor Parameters []
constexpr ::UnityEngine::Scripting::RequiredByNativeCodeAttribute::RequiredByNativeCodeAttribute() {}
