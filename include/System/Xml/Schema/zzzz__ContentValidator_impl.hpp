#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ContentValidator::*)(::System::Xml::Schema::XmlSchemaContentType)>(
    &::System::Xml::Schema::ContentValidator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x28b2390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::ContentValidator::*)(::System::Xml::Schema::XmlSchemaContentType, bool, bool)>(
    &::System::Xml::Schema::ContentValidator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28b23c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.get_ContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaContentType (::System::Xml::Schema::ContentValidator::*)()>(
    &::System::Xml::Schema::ContentValidator::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28b2400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get(),
                                                                               "get_ContentType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::ContentValidator.get_IsOpen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::ContentValidator::*)()>(&::System::Xml::Schema::ContentValidator::get_IsOpen)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x28b2408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get(), "get_IsOpen",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaContentType& System::Xml::Schema::ContentValidator::__cordl_internal_get_contentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr ::System::Xml::Schema::XmlSchemaContentType const& System::Xml::Schema::ContentValidator::__cordl_internal_get_contentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr void System::Xml::Schema::ContentValidator::__cordl_internal_set_contentType(::System::Xml::Schema::XmlSchemaContentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentType = value;
}
constexpr bool& System::Xml::Schema::ContentValidator::__cordl_internal_get_isOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOpen;
}
constexpr bool const& System::Xml::Schema::ContentValidator::__cordl_internal_get_isOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isOpen;
}
constexpr void System::Xml::Schema::ContentValidator::__cordl_internal_set_isOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isOpen = value;
}
constexpr bool& System::Xml::Schema::ContentValidator::__cordl_internal_get_isEmptiable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEmptiable;
}
constexpr bool const& System::Xml::Schema::ContentValidator::__cordl_internal_get_isEmptiable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEmptiable;
}
constexpr void System::Xml::Schema::ContentValidator::__cordl_internal_set_isEmptiable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEmptiable = value;
}
inline void System::Xml::Schema::ContentValidator::setStaticF_Empty(::System::Xml::Schema::ContentValidator* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get>(
      std::forward<::System::Xml::Schema::ContentValidator*>(value));
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get>();
}
inline void System::Xml::Schema::ContentValidator::setStaticF_TextOnly(::System::Xml::Schema::ContentValidator* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator*, "TextOnly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get>(
      std::forward<::System::Xml::Schema::ContentValidator*>(value));
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::getStaticF_TextOnly() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator*, "TextOnly",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get>();
}
inline void System::Xml::Schema::ContentValidator::setStaticF_Mixed(::System::Xml::Schema::ContentValidator* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator*, "Mixed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get>(
      std::forward<::System::Xml::Schema::ContentValidator*>(value));
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::getStaticF_Mixed() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator*, "Mixed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get>();
}
inline void System::Xml::Schema::ContentValidator::setStaticF_Any(::System::Xml::Schema::ContentValidator* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::ContentValidator*, "Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get>(
      std::forward<::System::Xml::Schema::ContentValidator*>(value));
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::getStaticF_Any() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::ContentValidator*, "Any", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get>();
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::ContentValidator*>(contentType));
}
inline void System::Xml::Schema::ContentValidator::_ctor(::System::Xml::Schema::XmlSchemaContentType contentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentType);
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::ContentValidator::New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::ContentValidator*>(contentType, isOpen, isEmptiable));
}
inline void System::Xml::Schema::ContentValidator::_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaContentType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentType, isOpen, isEmptiable);
}
inline ::System::Xml::Schema::XmlSchemaContentType System::Xml::Schema::ContentValidator::get_ContentType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get(), "get_ContentType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContentType, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::ContentValidator::get_IsOpen() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::ContentValidator*>::get(), "get_IsOpen",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::ContentValidator::ContentValidator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
