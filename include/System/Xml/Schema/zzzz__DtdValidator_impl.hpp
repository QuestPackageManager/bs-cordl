#pragma once
// IWYU pragma private; include "System/Xml/Schema/DtdValidator.hpp"
#include "System/Xml/Schema/zzzz__BaseValidator_impl.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_impl.hpp"
#include "System/Xml/Schema/zzzz__DtdValidator_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Schema/zzzz__DtdValidator_def.hpp"
#include "System/Xml/Schema/zzzz__IdRefNode_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaEntity_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/zzzz__HWStack_def.hpp"
#include "System/Xml/zzzz__IDtdParserAdapter_def.hpp"
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/Xml/zzzz__XmlValidatingReaderImpl_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator_NamespaceManager.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::DtdValidator_NamespaceManager::*)(::StringW)>(
    &::System::Xml::Schema::DtdValidator_NamespaceManager::LookupNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6019770;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator_NamespaceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator_NamespaceManager*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator_NamespaceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator_NamespaceManager::*)()>(
    &::System::Xml::Schema::DtdValidator_NamespaceManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x601976c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator_NamespaceManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW System::Xml::Schema::DtdValidator_NamespaceManager::LookupNamespace(::StringW prefix) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator_NamespaceManager*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline void System::Xml::Schema::DtdValidator_NamespaceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator_NamespaceManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::DtdValidator_NamespaceManager* System::Xml::Schema::DtdValidator_NamespaceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::DtdValidator_NamespaceManager*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::DtdValidator_NamespaceManager::DtdValidator_NamespaceManager() {}
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::IValidationEventHandling*, bool)>(&::System::Xml::Schema::DtdValidator::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x601723c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlValidatingReaderImpl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IValidationEventHandling*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x60172e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::Validate)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x60174fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.MeetsStandAloneConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::MeetsStandAloneConstraint)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6017834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                               "MeetsStandAloneConstraint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidatePIComment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidatePIComment)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x60178e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "ValidatePIComment",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidateElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidateElement)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6017724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "ValidateElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidateChildElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidateChildElement)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6017cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                               "ValidateChildElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidateStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidateStartElement)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x6017f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                               "ValidateStartElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidateEndStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidateEndStartElement)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x60188e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                               "ValidateEndStartElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ProcessElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ProcessElement)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6017dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "ProcessElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.CompleteValidation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::CompleteValidation)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6018a88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ValidateEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::ValidateEndElement)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6017b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                               "ValidateEndElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.get_PreserveWhitespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::get_PreserveWhitespace)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6018c84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.ProcessTokenizedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlTokenizedType, ::StringW)>(
    &::System::Xml::Schema::DtdValidator::ProcessTokenizedType)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6018cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "ProcessTokenizedType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTokenizedType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.CheckValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)(::StringW, ::System::Xml::Schema::SchemaAttDef*)>(
    &::System::Xml::Schema::DtdValidator::CheckValue)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x601836c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "CheckValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.AddID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)(::StringW, ::System::Object*)>(
    &::System::Xml::Schema::DtdValidator::AddID)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6018ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "AddID", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.FindId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::DtdValidator::*)(::StringW)>(
    &::System::Xml::Schema::DtdValidator::FindId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6018f68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.GenEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::DtdValidator::GenEntity)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x60179ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "GenEntity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.GetEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Schema::SchemaEntity* (::System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlQualifiedName*, bool)>(&::System::Xml::Schema::DtdValidator::GetEntity)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6018f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "GetEntity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.CheckForwardRefs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::CheckForwardRefs)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6018b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "CheckForwardRefs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.Push
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::DtdValidator::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::DtdValidator::Push)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6017418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "Push", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.Pop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::DtdValidator::*)()>(&::System::Xml::Schema::DtdValidator::Pop)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6018ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "Pop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.SetDefaultTypedValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::IDtdParserAdapter*)>(
    &::System::Xml::Schema::DtdValidator::SetDefaultTypedValue)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x6019030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "SetDefaultTypedValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::DtdValidator.CheckDefaultValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::IValidationEventHandling*, ::StringW)>(&::System::Xml::Schema::DtdValidator::CheckDefaultValue)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x6019338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "CheckDefaultValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IValidationEventHandling*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::HWStack*& System::Xml::Schema::DtdValidator::__cordl_internal_get_validationStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationStack;
}
constexpr ::System::Xml::HWStack* const& System::Xml::Schema::DtdValidator::__cordl_internal_get_validationStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationStack;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_validationStack(::System::Xml::HWStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validationStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::DtdValidator::__cordl_internal_get_attPresence() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attPresence;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::DtdValidator::__cordl_internal_get_attPresence() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attPresence;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_attPresence(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attPresence)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::DtdValidator::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::DtdValidator::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_name(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::DtdValidator::__cordl_internal_get_IDs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IDs;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::DtdValidator::__cordl_internal_get_IDs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IDs;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_IDs(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___IDs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::IdRefNode*& System::Xml::Schema::DtdValidator::__cordl_internal_get_idRefListHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idRefListHead;
}
constexpr ::System::Xml::Schema::IdRefNode* const& System::Xml::Schema::DtdValidator::__cordl_internal_get_idRefListHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___idRefListHead;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_idRefListHead(::System::Xml::Schema::IdRefNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___idRefListHead)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Schema::DtdValidator::__cordl_internal_get_processIdentityConstraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processIdentityConstraints;
}
constexpr bool const& System::Xml::Schema::DtdValidator::__cordl_internal_get_processIdentityConstraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processIdentityConstraints;
}
constexpr void System::Xml::Schema::DtdValidator::__cordl_internal_set_processIdentityConstraints(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processIdentityConstraints = value;
}
inline void System::Xml::Schema::DtdValidator::setStaticF_namespaceManager(::System::Xml::Schema::DtdValidator_NamespaceManager* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::DtdValidator_NamespaceManager*, "namespaceManager",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get>(
      std::forward<::System::Xml::Schema::DtdValidator_NamespaceManager*>(value));
}
inline ::System::Xml::Schema::DtdValidator_NamespaceManager* System::Xml::Schema::DtdValidator::getStaticF_namespaceManager() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::DtdValidator_NamespaceManager*, "namespaceManager",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get>();
}
inline void System::Xml::Schema::DtdValidator::_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::IValidationEventHandling* eventHandling, bool processIdentityConstraints) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlValidatingReaderImpl*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IValidationEventHandling*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, eventHandling, processIdentityConstraints);
}
inline void System::Xml::Schema::DtdValidator::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::Validate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::DtdValidator::MeetsStandAloneConstraint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                             "MeetsStandAloneConstraint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidatePIComment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "ValidatePIComment",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidateElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "ValidateElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidateChildElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                             "ValidateChildElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidateStartElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                             "ValidateStartElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidateEndStartElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(),
                                                                             "ValidateEndStartElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ProcessElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "ProcessElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::CompleteValidation() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ValidateEndElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "ValidateEndElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::DtdValidator::get_PreserveWhitespace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "ProcessTokenizedType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTokenizedType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ttype, name);
}
inline void System::Xml::Schema::DtdValidator::CheckValue(::StringW value, ::System::Xml::Schema::SchemaAttDef* attdef) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "CheckValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, attdef);
}
inline void System::Xml::Schema::DtdValidator::AddID(::StringW name, ::System::Object* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "AddID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, node);
}
inline ::System::Object* System::Xml::Schema::DtdValidator::FindId(::StringW name) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, name);
}
inline bool System::Xml::Schema::DtdValidator::GenEntity(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "GenEntity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, qname);
}
inline ::System::Xml::Schema::SchemaEntity* System::Xml::Schema::DtdValidator::GetEntity(::System::Xml::XmlQualifiedName* qname, bool fParameterEntity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "GetEntity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaEntity*, false>(this, ___internal_method, qname, fParameterEntity);
}
inline void System::Xml::Schema::DtdValidator::CheckForwardRefs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "CheckForwardRefs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::Push(::System::Xml::XmlQualifiedName* elementName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "Push", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementName);
}
inline bool System::Xml::Schema::DtdValidator::Pop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "Pop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::DtdValidator::SetDefaultTypedValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::IDtdParserAdapter* readerAdapter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "SetDefaultTypedValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IDtdParserAdapter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attdef, readerAdapter);
}
inline void System::Xml::Schema::DtdValidator::CheckDefaultValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::Schema::SchemaInfo* sinfo,
                                                                 ::System::Xml::IValidationEventHandling* eventHandling, ::StringW baseUriStr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::DtdValidator*>::get(), "CheckDefaultValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IValidationEventHandling*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attdef, sinfo, eventHandling, baseUriStr);
}
inline ::System::Xml::Schema::DtdValidator* System::Xml::Schema::DtdValidator::New_ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::IValidationEventHandling* eventHandling,
                                                                                        bool processIdentityConstraints) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::DtdValidator*>(reader, eventHandling, processIdentityConstraints));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::DtdValidator::DtdValidator() {}
