#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaInference.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaInference_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaInference_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContentExtension_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__NameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption::XmlSchemaInference_InferenceOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption::XmlSchemaInference_InferenceOption() {}
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption System::Xml::Schema::XmlSchemaInference_InferenceOption::Restricted{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption System::Xml::Schema::XmlSchemaInference_InferenceOption::Relaxed{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.set_Occurrence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaInference_InferenceOption)>(
    &::System::Xml::Schema::XmlSchemaInference::set_Occurrence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4266a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "set_Occurrence", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaInference_InferenceOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.get_Occurrence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaInference_InferenceOption (::System::Xml::Schema::XmlSchemaInference::*)()>(
    &::System::Xml::Schema::XmlSchemaInference::get_Occurrence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4266a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(),
                                                                               "get_Occurrence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.set_TypeInference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaInference_InferenceOption)>(
    &::System::Xml::Schema::XmlSchemaInference::set_TypeInference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4266a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "set_TypeInference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaInference_InferenceOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)()>(&::System::Xml::Schema::XmlSchemaInference::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4266a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.InferSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSet* (::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::XmlReader*)>(
    &::System::Xml::Schema::XmlSchemaInference::InferSchema)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4266b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "InferSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.InferSchema1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSet* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::XmlReader*, ::System::Xml::Schema::XmlSchemaSet*)>(&::System::Xml::Schema::XmlSchemaInference::InferSchema1)> {
  constexpr static std::size_t size = 0x9d4;
  constexpr static std::size_t addrs = 0x4266bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "InferSchema1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.AddAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::StringW, ::StringW, ::StringW, ::StringW, bool, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaObjectCollection*,
                                                  ::System::Xml::Schema::XmlSchemaObjectTable*)>(&::System::Xml::Schema::XmlSchemaInference::AddAttribute)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0x4268f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectTable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.CreateXmlSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::XmlSchemaInference::*)(::StringW)>(
    &::System::Xml::Schema::XmlSchemaInference::CreateXmlSchema)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x426b7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "CreateXmlSchema",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.AddElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaElement* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::StringW, ::StringW, ::StringW, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaObjectCollection*, int32_t)>(
    &::System::Xml::Schema::XmlSchemaInference::AddElement)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x42675c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "AddElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.InferElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(
    ::System::Xml::Schema::XmlSchemaElement*, bool, ::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::XmlSchemaInference::InferElement)> {
  constexpr static std::size_t size = 0x13e0;
  constexpr static std::size_t addrs = 0x4267b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "InferElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.CheckSimpleContentExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleContentExtension* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::XmlSchemaInference::CheckSimpleContentExtension)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x426c484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "CheckSimpleContentExtension", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.GetEffectiveSchemaType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaElement*, bool)>(&::System::Xml::Schema::XmlSchemaInference::GetEffectiveSchemaType)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x426bbd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "GetEffectiveSchemaType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindMatchingElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaElement* (
    ::System::Xml::Schema::XmlSchemaInference::*)(bool, ::System::Xml::XmlReader*, ::System::Xml::Schema::XmlSchemaComplexType*, ::ByRef<int32_t>, ::ByRef<bool>, ::System::Xml::Schema::XmlSchema*,
                                                  bool)>(&::System::Xml::Schema::XmlSchemaInference::FindMatchingElement)> {
  constexpr static std::size_t size = 0xfec;
  constexpr static std::size_t addrs = 0x426ca4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindMatchingElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.ProcessAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(::ByRef<::System::Xml::Schema::XmlSchemaElement*>, ::System::Xml::Schema::XmlSchemaType*, bool, ::System::Xml::Schema::XmlSchema*)>(
        &::System::Xml::Schema::XmlSchemaInference::ProcessAttributes)> {
  constexpr static std::size_t size = 0x6ec;
  constexpr static std::size_t addrs = 0x426bd08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "ProcessAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaElement*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.MoveAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(
    ::System::Xml::Schema::XmlSchemaSimpleContentExtension*, ::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::XmlSchemaInference::MoveAttributes)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x426c9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "MoveAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.MoveAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*, bool)>(&::System::Xml::Schema::XmlSchemaInference::MoveAttributes)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x426c5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "MoveAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Collections::ICollection*, ::StringW)>(&::System::Xml::Schema::XmlSchemaInference::FindAttribute)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x4269b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindAttribute", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindGlobalElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaElement* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::StringW, ::StringW, ::ByRef<::System::Xml::Schema::XmlSchema*>)>(&::System::Xml::Schema::XmlSchemaInference::FindGlobalElement)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x426b848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindGlobalElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchema*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaElement* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::StringW)>(&::System::Xml::Schema::XmlSchemaInference::FindElement)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x426dbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindAttributeRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAttribute* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Collections::ICollection*, ::StringW, ::StringW)>(&::System::Xml::Schema::XmlSchemaInference::FindAttributeRef)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x426974c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindAttributeRef", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.FindElementRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaElement* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::StringW, ::StringW)>(&::System::Xml::Schema::XmlSchemaInference::FindElementRef)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x426dcf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindElementRef", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.MakeExistingAttributesOptional
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Xml::Schema::XmlSchemaInference::MakeExistingAttributesOptional)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x426c3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "MakeExistingAttributesOptional", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.SwitchUseToOptional
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(
    ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Xml::Schema::XmlSchemaInference::SwitchUseToOptional)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x426e0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "SwitchUseToOptional", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.RefineSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::XmlSchemaInference::*)(::StringW, ::ByRef<int32_t>)>(
    &::System::Xml::Schema::XmlSchemaInference::RefineSimpleType)> {
  constexpr static std::size_t size = 0x114c;
  constexpr static std::size_t addrs = 0x4269e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(),
                                                                               "RefineSimpleType", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.InferSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::ByRef<bool>)>(&::System::Xml::Schema::XmlSchemaInference::InferSimpleType)> {
  constexpr static std::size_t size = 0x15a8;
  constexpr static std::size_t addrs = 0x426e1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "InferSimpleType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.DateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, bool, bool)>(&::System::Xml::Schema::XmlSchemaInference::DateTime)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x426f78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "DateTime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.CreateNewElementforChoice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaElement* (
    ::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaElement*)>(&::System::Xml::Schema::XmlSchemaInference::CreateNewElementforChoice)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x426de54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "CreateNewElementforChoice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.GetSchemaType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XmlSchemaInference::GetSchemaType)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x426afe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "GetSchemaType", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaInference.SetMinMaxOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaInference::*)(::System::Xml::Schema::XmlSchemaElement*, bool)>(
    &::System::Xml::Schema::XmlSchemaInference::SetMinMaxOccurs)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x426da38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "SetMinMaxOccurs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_rootSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSchema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_rootSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSchema;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_rootSchema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rootSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaSet*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_schemaSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaSet;
}
constexpr ::System::Xml::Schema::XmlSchemaSet* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_schemaSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaSet;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_schemaSet(::System::Xml::Schema::XmlSchemaSet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlReader*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_xtr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xtr;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_xtr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xtr;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_xtr(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xtr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::NameTable*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_nametable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nametable;
}
constexpr ::System::Xml::NameTable* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_nametable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nametable;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_nametable(::System::Xml::NameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nametable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_TargetNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetNamespace;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_TargetNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TargetNamespace;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_TargetNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TargetNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_NamespaceManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NamespaceManager;
}
constexpr ::System::Xml::XmlNamespaceManager* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_NamespaceManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NamespaceManager;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_NamespaceManager(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NamespaceManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_schemaList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaList;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_schemaList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaList;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_schemaList(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_occurrence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occurrence;
}
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_occurrence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occurrence;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_occurrence(::System::Xml::Schema::XmlSchemaInference_InferenceOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occurrence = value;
}
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_typeInference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInference;
}
constexpr ::System::Xml::Schema::XmlSchemaInference_InferenceOption const& System::Xml::Schema::XmlSchemaInference::__cordl_internal_get_typeInference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInference;
}
constexpr void System::Xml::Schema::XmlSchemaInference::__cordl_internal_set_typeInference(::System::Xml::Schema::XmlSchemaInference_InferenceOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeInference = value;
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_boolean(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_boolean", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_boolean() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_boolean", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_byte(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_byte", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_byte() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_byte", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_unsignedByte(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedByte", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_unsignedByte() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedByte",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_short(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_short", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_short() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_short", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_unsignedShort(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedShort", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_unsignedShort() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedShort",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_int(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_int", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_int() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_int", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_unsignedInt(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedInt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_unsignedInt() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedInt",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_long(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_long", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_long() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_long", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_unsignedLong(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedLong", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_unsignedLong() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_unsignedLong",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_integer(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_integer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_integer() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_integer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_decimal(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_decimal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_decimal() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_decimal", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_float(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_float", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_float() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_float", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_double(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_double", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_double() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_double", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_duration(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_duration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_duration() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_duration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_dateTime(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_dateTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_dateTime() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_dateTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_time(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_time", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_time() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_time", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_date(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_date", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_date() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_date", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_gYearMonth(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_gYearMonth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_gYearMonth() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_gYearMonth",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_string(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_string", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_string() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_string", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_ST_anySimpleType(::System::Xml::XmlQualifiedName* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlQualifiedName*, "ST_anySimpleType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::System::Xml::XmlQualifiedName*>(value));
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::getStaticF_ST_anySimpleType() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlQualifiedName*, "ST_anySimpleType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::setStaticF_SimpleTypes(::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*>, "SimpleTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>(
      std::forward<::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*>>(value));
}
inline ::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*> System::Xml::Schema::XmlSchemaInference::getStaticF_SimpleTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XmlQualifiedName*, ::Array<::System::Xml::XmlQualifiedName*>*>, "SimpleTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get>();
}
inline void System::Xml::Schema::XmlSchemaInference::set_Occurrence(::System::Xml::Schema::XmlSchemaInference_InferenceOption value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "set_Occurrence", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaInference_InferenceOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaInference_InferenceOption System::Xml::Schema::XmlSchemaInference::get_Occurrence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(),
                                                                             "get_Occurrence", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaInference_InferenceOption, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaInference::set_TypeInference(::System::Xml::Schema::XmlSchemaInference_InferenceOption value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "set_TypeInference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaInference_InferenceOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaInference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::Schema::XmlSchemaInference::InferSchema(::System::Xml::XmlReader* instanceDocument) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "InferSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSet*, false>(this, ___internal_method, instanceDocument);
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::Schema::XmlSchemaInference::InferSchema1(::System::Xml::XmlReader* instanceDocument, ::System::Xml::Schema::XmlSchemaSet* schemas) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "InferSchema1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSet*, false>(this, ___internal_method, instanceDocument, schemas);
}
inline ::System::Xml::Schema::XmlSchemaAttribute* System::Xml::Schema::XmlSchemaInference::AddAttribute(::StringW localName, ::StringW prefix, ::StringW childURI, ::StringW attrValue,
                                                                                                        bool bCreatingNewType, ::System::Xml::Schema::XmlSchema* parentSchema,
                                                                                                        ::System::Xml::Schema::XmlSchemaObjectCollection* addLocation,
                                                                                                        ::System::Xml::Schema::XmlSchemaObjectTable* compiledAttributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "AddAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectTable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttribute*, false>(this, ___internal_method, localName, prefix, childURI, attrValue, bCreatingNewType, parentSchema,
                                                                                                addLocation, compiledAttributes);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaInference::CreateXmlSchema(::StringW targetNS) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "CreateXmlSchema",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(this, ___internal_method, targetNS);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::AddElement(::StringW localName, ::StringW prefix, ::StringW childURI,
                                                                                                    ::System::Xml::Schema::XmlSchema* parentSchema,
                                                                                                    ::System::Xml::Schema::XmlSchemaObjectCollection* addLocation, int32_t positionWithinCollection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "AddElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*, false>(this, ___internal_method, localName, prefix, childURI, parentSchema, addLocation,
                                                                                              positionWithinCollection);
}
inline void System::Xml::Schema::XmlSchemaInference::InferElement(::System::Xml::Schema::XmlSchemaElement* xse, bool bCreatingNewType, ::System::Xml::Schema::XmlSchema* parentSchema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "InferElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xse, bCreatingNewType, parentSchema);
}
inline ::System::Xml::Schema::XmlSchemaSimpleContentExtension* System::Xml::Schema::XmlSchemaInference::CheckSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* ct) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "CheckSimpleContentExtension", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleContentExtension*, false>(this, ___internal_method, ct);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::XmlSchemaInference::GetEffectiveSchemaType(::System::Xml::Schema::XmlSchemaElement* elem, bool bCreatingNewType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "GetEffectiveSchemaType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*, false>(this, ___internal_method, elem, bCreatingNewType);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::FindMatchingElement(bool bCreatingNewType, ::System::Xml::XmlReader* xtr,
                                                                                                             ::System::Xml::Schema::XmlSchemaComplexType* ct, ::ByRef<int32_t> lastUsedSeqItem,
                                                                                                             ::ByRef<bool> bParticleChanged, ::System::Xml::Schema::XmlSchema* parentSchema,
                                                                                                             bool setMaxoccurs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindMatchingElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*, false>(this, ___internal_method, bCreatingNewType, xtr, ct, lastUsedSeqItem, bParticleChanged, parentSchema,
                                                                                              setMaxoccurs);
}
inline void System::Xml::Schema::XmlSchemaInference::ProcessAttributes(::ByRef<::System::Xml::Schema::XmlSchemaElement*> xse, ::System::Xml::Schema::XmlSchemaType* effectiveSchemaType,
                                                                       bool bCreatingNewType, ::System::Xml::Schema::XmlSchema* parentSchema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "ProcessAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchemaElement*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xse, effectiveSchemaType, bCreatingNewType, parentSchema);
}
inline void System::Xml::Schema::XmlSchemaInference::MoveAttributes(::System::Xml::Schema::XmlSchemaSimpleContentExtension* scExtension, ::System::Xml::Schema::XmlSchemaComplexType* ct) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "MoveAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scExtension, ct);
}
inline void System::Xml::Schema::XmlSchemaInference::MoveAttributes(::System::Xml::Schema::XmlSchemaComplexType* ct, ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleContentExtension,
                                                                    bool bCreatingNewType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "MoveAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ct, simpleContentExtension, bCreatingNewType);
}
inline ::System::Xml::Schema::XmlSchemaAttribute* System::Xml::Schema::XmlSchemaInference::FindAttribute(::System::Collections::ICollection* attributes, ::StringW attrName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttribute*, false>(this, ___internal_method, attributes, attrName);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::FindGlobalElement(::StringW namespaceURI, ::StringW localName,
                                                                                                           ::ByRef<::System::Xml::Schema::XmlSchema*> parentSchema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindGlobalElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::Schema::XmlSchema*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*, false>(this, ___internal_method, namespaceURI, localName, parentSchema);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::FindElement(::System::Xml::Schema::XmlSchemaObjectCollection* elements, ::StringW elementName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*, false>(this, ___internal_method, elements, elementName);
}
inline ::System::Xml::Schema::XmlSchemaAttribute* System::Xml::Schema::XmlSchemaInference::FindAttributeRef(::System::Collections::ICollection* attributes, ::StringW attributeName, ::StringW nsURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindAttributeRef", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAttribute*, false>(this, ___internal_method, attributes, attributeName, nsURI);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::FindElementRef(::System::Xml::Schema::XmlSchemaObjectCollection* elements, ::StringW elementName,
                                                                                                        ::StringW nsURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "FindElementRef", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*, false>(this, ___internal_method, elements, elementName, nsURI);
}
inline void System::Xml::Schema::XmlSchemaInference::MakeExistingAttributesOptional(::System::Xml::Schema::XmlSchemaComplexType* ct,
                                                                                    ::System::Xml::Schema::XmlSchemaObjectCollection* attributesInInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "MakeExistingAttributesOptional", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ct, attributesInInstance);
}
inline void System::Xml::Schema::XmlSchemaInference::SwitchUseToOptional(::System::Xml::Schema::XmlSchemaObjectCollection* attributes,
                                                                         ::System::Xml::Schema::XmlSchemaObjectCollection* attributesInInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "SwitchUseToOptional", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes, attributesInInstance);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaInference::RefineSimpleType(::StringW s, ::ByRef<int32_t> iTypeFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "RefineSimpleType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(this, ___internal_method, s, iTypeFlags);
}
inline int32_t System::Xml::Schema::XmlSchemaInference::InferSimpleType(::StringW s, ::ByRef<bool> bNeedsRangeCheck) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "InferSimpleType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, bNeedsRangeCheck);
}
inline int32_t System::Xml::Schema::XmlSchemaInference::DateTime(::StringW s, bool bDate, bool bTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "DateTime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, bDate, bTime);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::XmlSchemaInference::CreateNewElementforChoice(::System::Xml::Schema::XmlSchemaElement* copyElement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "CreateNewElementforChoice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*, false>(this, ___internal_method, copyElement);
}
inline int32_t System::Xml::Schema::XmlSchemaInference::GetSchemaType(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "GetSchemaType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, qname);
}
inline void System::Xml::Schema::XmlSchemaInference::SetMinMaxOccurs(::System::Xml::Schema::XmlSchemaElement* el, bool setMaxOccurs) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaInference*>::get(), "SetMinMaxOccurs", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, el, setMaxOccurs);
}
inline ::System::Xml::Schema::XmlSchemaInference* System::Xml::Schema::XmlSchemaInference::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaInference*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaInference::XmlSchemaInference() {}
