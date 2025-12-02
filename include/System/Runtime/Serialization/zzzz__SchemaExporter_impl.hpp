#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SchemaExporter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SchemaExporter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.ExportActualType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlElement* (*)(::System::Xml::XmlQualifiedName*, ::System::Xml::XmlDocument*)>(
    &::System::Runtime::Serialization::SchemaExporter::ExportActualType)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f42b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(), "ExportActualType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.GetXmlTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::ByRef<::System::Xml::XmlQualifiedName*>, ::ByRef<::System::Xml::Schema::XmlSchemaType*>,
                                                                                           ::ByRef<bool>)>(&::System::Runtime::Serialization::SchemaExporter::GetXmlTypeInfo)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f42d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(), "GetXmlTypeInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlQualifiedName*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.InvokeSchemaProviderMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Type*, ::System::Xml::Schema::XmlSchemaSet*, ::ByRef<::System::Xml::XmlQualifiedName*>, ::ByRef<::System::Xml::Schema::XmlSchemaType*>, ::ByRef<bool>)>(
        &::System::Runtime::Serialization::SchemaExporter::InvokeSchemaProviderMethod)> {
  constexpr static std::size_t size = 0xc58;
  constexpr static std::size_t addrs = 0x5f430c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(), "InvokeSchemaProviderMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlQualifiedName*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.CreateAnyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (*)()>(
    &::System::Runtime::Serialization::SchemaExporter::CreateAnyType)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5f43f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(),
                                                                               "CreateAnyType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.CreateAnyElementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (*)()>(
    &::System::Runtime::Serialization::SchemaExporter::CreateAnyElementType)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5f43d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(),
                                                                               "CreateAnyElementType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.IsSpecialXmlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::ByRef<::System::Xml::XmlQualifiedName*>, ::ByRef<::System::Xml::Schema::XmlSchemaType*>,
                                                                                           ::ByRef<bool>)>(&::System::Runtime::Serialization::SchemaExporter::IsSpecialXmlType)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5f42ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(), "IsSpecialXmlType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlQualifiedName*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.GetSchemaAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Xml::Schema::XmlSchemaAnnotation* (*)(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*>)>(&::System::Runtime::Serialization::SchemaExporter::GetSchemaAnnotation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f43e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(), "GetSchemaAnnotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SchemaExporter.get_ActualTypeAnnotationName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (*)()>(
    &::System::Runtime::Serialization::SchemaExporter::get_ActualTypeAnnotationName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f42c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(),
                                                                               "get_ActualTypeAnnotationName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::SchemaExporter::setStaticF_actualTypeAnnotationName(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "actualTypeAnnotationName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::SchemaExporter::getStaticF_actualTypeAnnotationName() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "actualTypeAnnotationName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get>();
}
inline ::System::Xml::XmlElement* System::Runtime::Serialization::SchemaExporter::ExportActualType(::System::Xml::XmlQualifiedName* typeName, ::System::Xml::XmlDocument* xmlDoc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(), "ExportActualType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocument*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlElement*, false>(nullptr, ___internal_method, typeName, xmlDoc);
}
inline void System::Runtime::Serialization::SchemaExporter::GetXmlTypeInfo(::System::Type* type, ::ByRef<::System::Xml::XmlQualifiedName*> stableName,
                                                                           ::ByRef<::System::Xml::Schema::XmlSchemaType*> xsdType, ::ByRef<bool> hasRoot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(), "GetXmlTypeInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlQualifiedName*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, stableName, xsdType, hasRoot);
}
inline bool System::Runtime::Serialization::SchemaExporter::InvokeSchemaProviderMethod(::System::Type* clrType, ::System::Xml::Schema::XmlSchemaSet* schemas,
                                                                                       ::ByRef<::System::Xml::XmlQualifiedName*> stableName, ::ByRef<::System::Xml::Schema::XmlSchemaType*> xsdType,
                                                                                       ::ByRef<bool> hasRoot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(), "InvokeSchemaProviderMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlQualifiedName*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, clrType, schemas, stableName, xsdType, hasRoot);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Runtime::Serialization::SchemaExporter::CreateAnyType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(),
                                                                             "CreateAnyType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*, false>(nullptr, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Runtime::Serialization::SchemaExporter::CreateAnyElementType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(),
                                                                             "CreateAnyElementType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*, false>(nullptr, ___internal_method);
}
inline bool System::Runtime::Serialization::SchemaExporter::IsSpecialXmlType(::System::Type* type, ::ByRef<::System::Xml::XmlQualifiedName*> typeName,
                                                                             ::ByRef<::System::Xml::Schema::XmlSchemaType*> xsdType, ::ByRef<bool> hasRoot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(), "IsSpecialXmlType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlQualifiedName*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaType*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, typeName, xsdType, hasRoot);
}
inline ::System::Xml::Schema::XmlSchemaAnnotation* System::Runtime::Serialization::SchemaExporter::GetSchemaAnnotation(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> nodes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(), "GetSchemaAnnotation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnnotation*, false>(nullptr, ___internal_method, nodes);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::SchemaExporter::get_ActualTypeAnnotationName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SchemaExporter*>::get(),
                                                                             "get_ActualTypeAnnotationName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SchemaExporter::SchemaExporter() {}
