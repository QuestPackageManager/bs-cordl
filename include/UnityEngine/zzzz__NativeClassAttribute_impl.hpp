#pragma once
// IWYU pragma private; include "UnityEngine\NativeClassAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__NativeClassAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::NativeClassAttribute.set_QualifiedNativeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::NativeClassAttribute::*)(::StringW)>(&::UnityEngine::NativeClassAttribute::set_QualifiedNativeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb5e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NativeClassAttribute*>(), { "set_QualifiedNativeName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::NativeClassAttribute.set_Declaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::NativeClassAttribute::*)(::StringW)>(&::UnityEngine::NativeClassAttribute::set_Declaration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb5e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NativeClassAttribute*>(), { "set_Declaration", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::NativeClassAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::NativeClassAttribute::*)(::StringW)>(&::UnityEngine::NativeClassAttribute::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6bb5e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NativeClassAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::NativeClassAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::NativeClassAttribute::*)(::StringW, ::StringW)>(&::UnityEngine::NativeClassAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb5ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NativeClassAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::NativeClassAttribute::__cordl_internal_get__QualifiedNativeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____QualifiedNativeName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::NativeClassAttribute::__cordl_internal_get__QualifiedNativeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____QualifiedNativeName_k__BackingField;
}
constexpr void UnityEngine::NativeClassAttribute::__cordl_internal_set__QualifiedNativeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____QualifiedNativeName_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::NativeClassAttribute::__cordl_internal_get__Declaration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Declaration_k__BackingField;
}
constexpr ::StringW const& UnityEngine::NativeClassAttribute::__cordl_internal_get__Declaration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Declaration_k__BackingField;
}
constexpr void UnityEngine::NativeClassAttribute::__cordl_internal_set__Declaration_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Declaration_k__BackingField = value;
}
inline void UnityEngine::NativeClassAttribute::set_QualifiedNativeName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NativeClassAttribute*>(), { "set_QualifiedNativeName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::NativeClassAttribute::set_Declaration(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NativeClassAttribute*>(), { "set_Declaration", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::NativeClassAttribute::_ctor(::StringW qualifiedCppName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NativeClassAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualifiedCppName);
}
inline void UnityEngine::NativeClassAttribute::_ctor(::StringW qualifiedCppName, ::StringW declaration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::NativeClassAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualifiedCppName, declaration);
}
inline ::UnityEngine::NativeClassAttribute* UnityEngine::NativeClassAttribute::New_ctor(::StringW qualifiedCppName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::NativeClassAttribute*>(qualifiedCppName));
}
inline ::UnityEngine::NativeClassAttribute* UnityEngine::NativeClassAttribute::New_ctor(::StringW qualifiedCppName, ::StringW declaration) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::NativeClassAttribute*>(qualifiedCppName, declaration));
}
// Ctor Parameters []
constexpr ::UnityEngine::NativeClassAttribute::NativeClassAttribute() {}
