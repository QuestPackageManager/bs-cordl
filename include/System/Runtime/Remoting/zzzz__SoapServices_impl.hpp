#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__SoapServices_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Remoting/zzzz__SoapServices_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::__SoapServices__TypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::__SoapServices__TypeInfo::*)()>(
    &::System::Runtime::Remoting::__SoapServices__TypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249551c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::__SoapServices__TypeInfo*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::__SoapServices__TypeInfo::__get_Attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attributes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Runtime::Remoting::__SoapServices__TypeInfo::__get_Attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attributes;
}
constexpr void System::Runtime::Remoting::__SoapServices__TypeInfo::__set_Attributes(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::__SoapServices__TypeInfo::__get_Elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Elements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Runtime::Remoting::__SoapServices__TypeInfo::__get_Elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Elements;
}
constexpr void System::Runtime::Remoting::__SoapServices__TypeInfo::__set_Elements(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Remoting::__SoapServices__TypeInfo* System::Runtime::Remoting::__SoapServices__TypeInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::__SoapServices__TypeInfo*>());
}
inline void System::Runtime::Remoting::__SoapServices__TypeInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::__SoapServices__TypeInfo*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::__SoapServices__TypeInfo::__SoapServices__TypeInfo() {}
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.get_XmlNsForClrTypeWithAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithAssembly)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24944e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(),
                                                                               "get_XmlNsForClrTypeWithAssembly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.get_XmlNsForClrTypeWithNs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2494524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(),
                                                                               "get_XmlNsForClrTypeWithNs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.get_XmlNsForClrTypeWithNsAndAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNsAndAssembly)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2494564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(),
                                                                               "get_XmlNsForClrTypeWithNsAndAssembly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.CodeXmlNamespaceForClrTypeNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(
    &::System::Runtime::Remoting::SoapServices::CodeXmlNamespaceForClrTypeNamespace)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x24945a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "CodeXmlNamespaceForClrTypeNamespace", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetNameKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::Runtime::Remoting::SoapServices::GetNameKey)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2494820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetNameKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetAssemblyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::MethodBase*)>(&::System::Runtime::Remoting::SoapServices::GetAssemblyName)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2494888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetAssemblyName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetXmlElementForInteropType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ByRef<::StringW>, ByRef<::StringW>)>(
    &::System::Runtime::Remoting::SoapServices::GetXmlElementForInteropType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x24949bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetXmlElementForInteropType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetXmlNamespaceForMethodCall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::MethodBase*)>(
    &::System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodCall)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2494a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetXmlNamespaceForMethodCall",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetXmlNamespaceForMethodResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::MethodBase*)>(
    &::System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodResponse)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2494b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetXmlNamespaceForMethodResponse",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetXmlTypeForInteropType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ByRef<::StringW>, ByRef<::StringW>)>(
    &::System::Runtime::Remoting::SoapServices::GetXmlTypeForInteropType)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2494bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetXmlTypeForInteropType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.PreLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::Assembly*)>(&::System::Runtime::Remoting::SoapServices::PreLoad)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2494c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "PreLoad", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.PreLoad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::System::Runtime::Remoting::SoapServices::PreLoad)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x2494d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "PreLoad", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.RegisterInteropXmlElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::System::Type*)>(
    &::System::Runtime::Remoting::SoapServices::RegisterInteropXmlElement)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x249538c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "RegisterInteropXmlElement", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.RegisterInteropXmlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::System::Type*)>(
    &::System::Runtime::Remoting::SoapServices::RegisterInteropXmlType)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x24951fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "RegisterInteropXmlType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.EncodeNs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Remoting::SoapServices::EncodeNs)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x249473c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "EncodeNs", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::SoapServices::setStaticF__xmlTypes(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_xmlTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::SoapServices::getStaticF__xmlTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_xmlTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get>();
}
inline void System::Runtime::Remoting::SoapServices::setStaticF__xmlElements(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_xmlElements", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::SoapServices::getStaticF__xmlElements() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_xmlElements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get>();
}
inline void System::Runtime::Remoting::SoapServices::setStaticF__soapActions(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_soapActions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::SoapServices::getStaticF__soapActions() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_soapActions",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get>();
}
inline void System::Runtime::Remoting::SoapServices::setStaticF__soapActionsMethods(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_soapActionsMethods", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::SoapServices::getStaticF__soapActionsMethods() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_soapActionsMethods",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get>();
}
inline void System::Runtime::Remoting::SoapServices::setStaticF__typeInfos(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_typeInfos", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::SoapServices::getStaticF__typeInfos() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_typeInfos", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get>();
}
inline ::StringW System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithAssembly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(),
                                                                             "get_XmlNsForClrTypeWithAssembly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(),
                                                                             "get_XmlNsForClrTypeWithNs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNsAndAssembly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(),
                                                                             "get_XmlNsForClrTypeWithNsAndAssembly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::SoapServices::CodeXmlNamespaceForClrTypeNamespace(::StringW typeNamespace, ::StringW assemblyName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "CodeXmlNamespaceForClrTypeNamespace", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, typeNamespace, assemblyName);
}
inline ::StringW System::Runtime::Remoting::SoapServices::GetNameKey(::StringW name, ::StringW namspace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetNameKey", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name, namspace);
}
inline ::StringW System::Runtime::Remoting::SoapServices::GetAssemblyName(::System::Reflection::MethodBase* mb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetAssemblyName", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, mb);
}
inline bool System::Runtime::Remoting::SoapServices::GetXmlElementForInteropType(::System::Type* type, ByRef<::StringW> xmlElement, ByRef<::StringW> xmlNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetXmlElementForInteropType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, xmlElement, xmlNamespace);
}
inline ::StringW System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodCall(::System::Reflection::MethodBase* mb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetXmlNamespaceForMethodCall",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, mb);
}
inline ::StringW System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodResponse(::System::Reflection::MethodBase* mb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetXmlNamespaceForMethodResponse",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, mb);
}
inline bool System::Runtime::Remoting::SoapServices::GetXmlTypeForInteropType(::System::Type* type, ByRef<::StringW> xmlType, ByRef<::StringW> xmlTypeNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "GetXmlTypeForInteropType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type, xmlType, xmlTypeNamespace);
}
inline void System::Runtime::Remoting::SoapServices::PreLoad(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "PreLoad", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, assembly);
}
inline void System::Runtime::Remoting::SoapServices::PreLoad(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "PreLoad", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void System::Runtime::Remoting::SoapServices::RegisterInteropXmlElement(::StringW xmlElement, ::StringW xmlNamespace, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "RegisterInteropXmlElement", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xmlElement, xmlNamespace, type);
}
inline void System::Runtime::Remoting::SoapServices::RegisterInteropXmlType(::StringW xmlType, ::StringW xmlTypeNamespace, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "RegisterInteropXmlType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xmlType, xmlTypeNamespace, type);
}
inline ::StringW System::Runtime::Remoting::SoapServices::EncodeNs(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::SoapServices*>::get(), "EncodeNs", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, ns);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::SoapServices::SoapServices() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
