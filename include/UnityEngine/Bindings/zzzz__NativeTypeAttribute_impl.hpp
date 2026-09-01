#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\NativeTypeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__CodegenOptions_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NativeTypeAttribute_def.hpp"
#include "UnityEngine/Bindings/zzzz__CodegenOptions_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NativeTypeAttribute.set_Header
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativeTypeAttribute::*)(::StringW)>(&::UnityEngine::Bindings::NativeTypeAttribute::set_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb639c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(), { "set_Header", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeTypeAttribute.set_IntermediateScriptingStructName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativeTypeAttribute::*)(::StringW)>(
    &::UnityEngine::Bindings::NativeTypeAttribute::set_IntermediateScriptingStructName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb63a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(), { "set_IntermediateScriptingStructName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeTypeAttribute.set_CodegenOptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativeTypeAttribute::*)(::UnityEngine::Bindings::CodegenOptions)>(
    &::UnityEngine::Bindings::NativeTypeAttribute::set_CodegenOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb63ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(),
                                                                                           { "set_CodegenOptions", {}, { ::i2c::type_of<::UnityEngine::Bindings::CodegenOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativeTypeAttribute::*)()>(&::UnityEngine::Bindings::NativeTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb63b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativeTypeAttribute::*)(::UnityEngine::Bindings::CodegenOptions)>(
    &::UnityEngine::Bindings::NativeTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb63bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Bindings::CodegenOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativeTypeAttribute::*)(::StringW)>(&::UnityEngine::Bindings::NativeTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6bb63c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeTypeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativeTypeAttribute::*)(::UnityEngine::Bindings::CodegenOptions, ::StringW)>(
    &::UnityEngine::Bindings::NativeTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb64c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Bindings::CodegenOptions>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Bindings::NativeTypeAttribute::__cordl_internal_get__Header_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Header_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Bindings::NativeTypeAttribute::__cordl_internal_get__Header_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Header_k__BackingField;
}
constexpr void UnityEngine::Bindings::NativeTypeAttribute::__cordl_internal_set__Header_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Header_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Bindings::NativeTypeAttribute::__cordl_internal_get__IntermediateScriptingStructName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IntermediateScriptingStructName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Bindings::NativeTypeAttribute::__cordl_internal_get__IntermediateScriptingStructName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IntermediateScriptingStructName_k__BackingField;
}
constexpr void UnityEngine::Bindings::NativeTypeAttribute::__cordl_internal_set__IntermediateScriptingStructName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IntermediateScriptingStructName_k__BackingField = value;
}
constexpr ::UnityEngine::Bindings::CodegenOptions& UnityEngine::Bindings::NativeTypeAttribute::__cordl_internal_get__CodegenOptions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CodegenOptions_k__BackingField;
}
constexpr ::UnityEngine::Bindings::CodegenOptions const& UnityEngine::Bindings::NativeTypeAttribute::__cordl_internal_get__CodegenOptions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CodegenOptions_k__BackingField;
}
constexpr void UnityEngine::Bindings::NativeTypeAttribute::__cordl_internal_set__CodegenOptions_k__BackingField(::UnityEngine::Bindings::CodegenOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CodegenOptions_k__BackingField = value;
}
inline void UnityEngine::Bindings::NativeTypeAttribute::set_Header(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(), { "set_Header", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::NativeTypeAttribute::set_IntermediateScriptingStructName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(), { "set_IntermediateScriptingStructName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::NativeTypeAttribute::set_CodegenOptions(::UnityEngine::Bindings::CodegenOptions value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(), { "set_CodegenOptions", {}, { ::i2c::type_of<::UnityEngine::Bindings::CodegenOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::NativeTypeAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Bindings::NativeTypeAttribute::_ctor(::UnityEngine::Bindings::CodegenOptions codegenOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Bindings::CodegenOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codegenOptions);
}
inline void UnityEngine::Bindings::NativeTypeAttribute::_ctor(::StringW header) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header);
}
inline void UnityEngine::Bindings::NativeTypeAttribute::_ctor(::UnityEngine::Bindings::CodegenOptions codegenOptions, ::StringW intermediateStructName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeTypeAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Bindings::CodegenOptions>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codegenOptions, intermediateStructName);
}
inline ::UnityEngine::Bindings::NativeTypeAttribute* UnityEngine::Bindings::NativeTypeAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::NativeTypeAttribute*>());
}
inline ::UnityEngine::Bindings::NativeTypeAttribute* UnityEngine::Bindings::NativeTypeAttribute::New_ctor(::UnityEngine::Bindings::CodegenOptions codegenOptions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::NativeTypeAttribute*>(codegenOptions));
}
inline ::UnityEngine::Bindings::NativeTypeAttribute* UnityEngine::Bindings::NativeTypeAttribute::New_ctor(::StringW header) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::NativeTypeAttribute*>(header));
}
inline ::UnityEngine::Bindings::NativeTypeAttribute* UnityEngine::Bindings::NativeTypeAttribute::New_ctor(::UnityEngine::Bindings::CodegenOptions codegenOptions, ::StringW intermediateStructName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::NativeTypeAttribute*>(codegenOptions, intermediateStructName));
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::NativeTypeAttribute::NativeTypeAttribute() {}
