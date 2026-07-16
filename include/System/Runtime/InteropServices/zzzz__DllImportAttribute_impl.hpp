#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/DllImportAttribute.hpp"
#include "System/Runtime/InteropServices/zzzz__CallingConvention_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__CharSet_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__DllImportAttribute_def.hpp"
#include "System/Reflection/zzzz__RuntimeMethodInfo_def.hpp"
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
#include "System/Runtime/InteropServices/zzzz__CharSet_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::DllImportAttribute.GetCustomAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (*)(::System::Reflection::RuntimeMethodInfo*)>(
    &::System::Runtime::InteropServices::DllImportAttribute::GetCustomAttribute)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b6a1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DllImportAttribute*>(),
                                                                                           { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::DllImportAttribute.IsDefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::RuntimeMethodInfo*)>(&::System::Runtime::InteropServices::DllImportAttribute::IsDefined)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b6a2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DllImportAttribute*>(),
                                                                                           { "IsDefined", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::DllImportAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::DllImportAttribute::*)(::StringW, ::StringW, ::System::Runtime::InteropServices::CharSet, bool, bool,
                                                                                                                        bool, ::System::Runtime::InteropServices::CallingConvention, bool, bool)>(
    &::System::Runtime::InteropServices::DllImportAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b6a274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DllImportAttribute*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::CharSet>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::InteropServices::CallingConvention>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::DllImportAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::InteropServices::DllImportAttribute::*)(::StringW)>(&::System::Runtime::InteropServices::DllImportAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6a2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DllImportAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::InteropServices::DllImportAttribute.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::InteropServices::DllImportAttribute::*)()>(&::System::Runtime::InteropServices::DllImportAttribute::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6a2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DllImportAttribute*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr ::StringW const& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_set__val(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____val = value;
}
constexpr ::StringW& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_EntryPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EntryPoint;
}
constexpr ::StringW const& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_EntryPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EntryPoint;
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_set_EntryPoint(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EntryPoint = value;
}
constexpr ::System::Runtime::InteropServices::CharSet& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_CharSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CharSet;
}
constexpr ::System::Runtime::InteropServices::CharSet const& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_CharSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CharSet;
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_set_CharSet(::System::Runtime::InteropServices::CharSet value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CharSet = value;
}
constexpr bool& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_SetLastError() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SetLastError;
}
constexpr bool const& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_SetLastError() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SetLastError;
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_set_SetLastError(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SetLastError = value;
}
constexpr bool& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_ExactSpelling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExactSpelling;
}
constexpr bool const& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_ExactSpelling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExactSpelling;
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_set_ExactSpelling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ExactSpelling = value;
}
constexpr bool& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_PreserveSig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PreserveSig;
}
constexpr bool const& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_PreserveSig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PreserveSig;
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_set_PreserveSig(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PreserveSig = value;
}
constexpr ::System::Runtime::InteropServices::CallingConvention& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_CallingConvention() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CallingConvention;
}
constexpr ::System::Runtime::InteropServices::CallingConvention const& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_CallingConvention() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CallingConvention;
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_set_CallingConvention(::System::Runtime::InteropServices::CallingConvention value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CallingConvention = value;
}
constexpr bool& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_BestFitMapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BestFitMapping;
}
constexpr bool const& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_BestFitMapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BestFitMapping;
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_set_BestFitMapping(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BestFitMapping = value;
}
constexpr bool& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_ThrowOnUnmappableChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ThrowOnUnmappableChar;
}
constexpr bool const& System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_get_ThrowOnUnmappableChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ThrowOnUnmappableChar;
}
constexpr void System::Runtime::InteropServices::DllImportAttribute::__cordl_internal_set_ThrowOnUnmappableChar(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ThrowOnUnmappableChar = value;
}
inline ::System::Attribute* System::Runtime::InteropServices::DllImportAttribute::GetCustomAttribute(::System::Reflection::RuntimeMethodInfo* method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DllImportAttribute*>(),
                                                                                         { "GetCustomAttribute", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(nullptr, ___internal_method, method);
}
inline bool System::Runtime::InteropServices::DllImportAttribute::IsDefined(::System::Reflection::RuntimeMethodInfo* method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DllImportAttribute*>(),
                                                                                         { "IsDefined", {}, { ::i2c::type_of<::System::Reflection::RuntimeMethodInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, method);
}
inline void System::Runtime::InteropServices::DllImportAttribute::_ctor(::StringW dllName, ::StringW entryPoint, ::System::Runtime::InteropServices::CharSet charSet, bool exactSpelling,
                                                                        bool setLastError, bool preserveSig, ::System::Runtime::InteropServices::CallingConvention callingConvention,
                                                                        bool bestFitMapping, bool throwOnUnmappableChar) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DllImportAttribute*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::InteropServices::CharSet>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<::System::Runtime::InteropServices::CallingConvention>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dllName, entryPoint, charSet, exactSpelling, setLastError, preserveSig, callingConvention, bestFitMapping,
                                                   throwOnUnmappableChar);
}
inline void System::Runtime::InteropServices::DllImportAttribute::_ctor(::StringW dllName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DllImportAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dllName);
}
inline ::StringW System::Runtime::InteropServices::DllImportAttribute::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::InteropServices::DllImportAttribute*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::DllImportAttribute* System::Runtime::InteropServices::DllImportAttribute::New_ctor(::StringW dllName, ::StringW entryPoint,
                                                                                                                              ::System::Runtime::InteropServices::CharSet charSet, bool exactSpelling,
                                                                                                                              bool setLastError, bool preserveSig,
                                                                                                                              ::System::Runtime::InteropServices::CallingConvention callingConvention,
                                                                                                                              bool bestFitMapping, bool throwOnUnmappableChar) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::DllImportAttribute*>(dllName, entryPoint, charSet, exactSpelling, setLastError, preserveSig,
                                                                                                                   callingConvention, bestFitMapping, throwOnUnmappableChar));
}
inline ::System::Runtime::InteropServices::DllImportAttribute* System::Runtime::InteropServices::DllImportAttribute::New_ctor(::StringW dllName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::InteropServices::DllImportAttribute*>(dllName));
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::DllImportAttribute::DllImportAttribute() {}
