#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlXml.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlXml_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlParserContext_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlXml::*)()>(&::System::Data::SqlTypes::SqlXml::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d49ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.CreateReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReader* (::System::Data::SqlTypes::SqlXml::*)()>(&::System::Data::SqlTypes::SqlXml::CreateReader)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2d4a034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "CreateReader",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.CreateSqlXmlReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReader* (*)(::System::IO::Stream*, bool, bool)>(
    &::System::Data::SqlTypes::SqlXml::CreateSqlXmlReader)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2d4a32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "CreateSqlXmlReader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.CreateSqlReaderDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>* (*)()>(
        &::System::Data::SqlTypes::SqlXml::CreateSqlReaderDelegate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2d4a6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(),
                                                                               "CreateSqlReaderDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.get_CreateSqlReaderMethodInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (*)()>(&::System::Data::SqlTypes::SqlXml::get_CreateSqlReaderMethodInfo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2d4a208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(),
                                                                               "get_CreateSqlReaderMethodInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.get_IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::SqlTypes::SqlXml::*)()>(&::System::Data::SqlTypes::SqlXml::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d4a188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "get_IsNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.SetNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlXml::*)()>(&::System::Data::SqlTypes::SqlXml::SetNull)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d4a020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "SetNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlXml::*)()>(
    &::System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d4a7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(),
                                                 "System.Xml.Serialization.IXmlSerializable.GetSchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlXml::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2d4a7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "System.Xml.Serialization.IXmlSerializable.ReadXml", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::SqlTypes::SqlXml::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2d4a9c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "System.Xml.Serialization.IXmlSerializable.WriteXml",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXml.GetXsdType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(
    &::System::Data::SqlTypes::SqlXml::GetXsdType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2d4ab18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "GetXsdType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlXml::operator ::System::Data::SqlTypes::INullable*() noexcept {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlXml::i___System__Data__SqlTypes__INullable() noexcept {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlXml::operator ::System::Xml::Serialization::IXmlSerializable*() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlXml::i___System__Xml__Serialization__IXmlSerializable() noexcept {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(this));
}
constexpr ::System::Reflection::MethodInfo*& System::Data::SqlTypes::SqlXml::__cordl_internal_get__createSqlReaderMethodInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createSqlReaderMethodInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& System::Data::SqlTypes::SqlXml::__cordl_internal_get__createSqlReaderMethodInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createSqlReaderMethodInfo;
}
constexpr void System::Data::SqlTypes::SqlXml::__cordl_internal_set__createSqlReaderMethodInfo(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____createSqlReaderMethodInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::SqlTypes::SqlXml::__cordl_internal_get__fNotNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fNotNull;
}
constexpr bool const& System::Data::SqlTypes::SqlXml::__cordl_internal_get__fNotNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fNotNull;
}
constexpr void System::Data::SqlTypes::SqlXml::__cordl_internal_set__fNotNull(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fNotNull = value;
}
constexpr ::System::IO::Stream*& System::Data::SqlTypes::SqlXml::__cordl_internal_get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Data::SqlTypes::SqlXml::__cordl_internal_get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr void System::Data::SqlTypes::SqlXml::__cordl_internal_set__stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::SqlTypes::SqlXml::__cordl_internal_get__firstCreateReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstCreateReader;
}
constexpr bool const& System::Data::SqlTypes::SqlXml::__cordl_internal_get__firstCreateReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstCreateReader;
}
constexpr void System::Data::SqlTypes::SqlXml::__cordl_internal_set__firstCreateReader(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstCreateReader = value;
}
inline void System::Data::SqlTypes::SqlXml::setStaticF_s_sqlReaderDelegate(
    ::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*, "s_sqlReaderDelegate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get>(
      std::forward<::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*>(value));
}
inline ::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*
System::Data::SqlTypes::SqlXml::getStaticF_s_sqlReaderDelegate() {
  return ::cordl_internals::getStaticField<::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*,
                                           "s_sqlReaderDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get>();
}
inline void System::Data::SqlTypes::SqlXml::setStaticF_s_defaultXmlReaderSettings(::System::Xml::XmlReaderSettings* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlReaderSettings*, "s_defaultXmlReaderSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get>(
      std::forward<::System::Xml::XmlReaderSettings*>(value));
}
inline ::System::Xml::XmlReaderSettings* System::Data::SqlTypes::SqlXml::getStaticF_s_defaultXmlReaderSettings() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlReaderSettings*, "s_defaultXmlReaderSettings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get>();
}
inline void System::Data::SqlTypes::SqlXml::setStaticF_s_defaultXmlReaderSettingsCloseInput(::System::Xml::XmlReaderSettings* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlReaderSettings*, "s_defaultXmlReaderSettingsCloseInput",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get>(std::forward<::System::Xml::XmlReaderSettings*>(value));
}
inline ::System::Xml::XmlReaderSettings* System::Data::SqlTypes::SqlXml::getStaticF_s_defaultXmlReaderSettingsCloseInput() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlReaderSettings*, "s_defaultXmlReaderSettingsCloseInput",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get>();
}
inline void System::Data::SqlTypes::SqlXml::setStaticF_s_createSqlReaderMethodInfo(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "s_createSqlReaderMethodInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Data::SqlTypes::SqlXml::getStaticF_s_createSqlReaderMethodInfo() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "s_createSqlReaderMethodInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get>();
}
inline ::System::Data::SqlTypes::SqlXml* System::Data::SqlTypes::SqlXml::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::SqlTypes::SqlXml*>());
}
inline void System::Data::SqlTypes::SqlXml::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::XmlReader* System::Data::SqlTypes::SqlXml::CreateReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "CreateReader",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*, false>(this, ___internal_method);
}
/// @param closeInput: bool (default: false)
/// @param throwTargetInvocationExceptions: bool (default: false)
inline ::System::Xml::XmlReader* System::Data::SqlTypes::SqlXml::CreateSqlXmlReader(::System::IO::Stream* stream, bool closeInput, bool throwTargetInvocationExceptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "CreateSqlXmlReader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*, false>(nullptr, ___internal_method, stream, closeInput, throwTargetInvocationExceptions);
}
inline ::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*
System::Data::SqlTypes::SqlXml::CreateSqlReaderDelegate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(),
                                                                             "CreateSqlReaderDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_4<::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*, ::System::Xml::XmlReader*>*, false>(
      nullptr, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Data::SqlTypes::SqlXml::get_CreateSqlReaderMethodInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(),
                                                                             "get_CreateSqlReaderMethodInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(nullptr, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlXml::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "get_IsNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlXml::SetNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "SetNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "System.Xml.Serialization.IXmlSerializable.GetSchema",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "System.Xml.Serialization.IXmlSerializable.ReadXml", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, r);
}
inline void System::Data::SqlTypes::SqlXml::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "System.Xml.Serialization.IXmlSerializable.WriteXml", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlXml::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::SqlXml*>::get(), "GetXsdType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(nullptr, ___internal_method, schemaSet);
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlXml::SqlXml() {}
