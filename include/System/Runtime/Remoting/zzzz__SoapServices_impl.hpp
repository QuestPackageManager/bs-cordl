#pragma once
// IWYU pragma private; include "System\Runtime\Remoting\SoapServices.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/zzzz__SoapServices_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Runtime/Remoting/zzzz__SoapServices_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices_TypeInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Remoting::SoapServices_TypeInfo::*)()>(&::System::Runtime::Remoting::SoapServices_TypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b30b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices_TypeInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::SoapServices_TypeInfo::__cordl_internal_get_Attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attributes;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Remoting::SoapServices_TypeInfo::__cordl_internal_get_Attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attributes;
}
constexpr void System::Runtime::Remoting::SoapServices_TypeInfo::__cordl_internal_set_Attributes(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Attributes = value;
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Remoting::SoapServices_TypeInfo::__cordl_internal_get_Elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Elements;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Remoting::SoapServices_TypeInfo::__cordl_internal_get_Elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Elements;
}
constexpr void System::Runtime::Remoting::SoapServices_TypeInfo::__cordl_internal_set_Elements(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Elements = value;
}
inline void System::Runtime::Remoting::SoapServices_TypeInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices_TypeInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::SoapServices_TypeInfo* System::Runtime::Remoting::SoapServices_TypeInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Remoting::SoapServices_TypeInfo*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::SoapServices_TypeInfo::SoapServices_TypeInfo() {}
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.get_XmlNsForClrTypeWithAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithAssembly)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b2fab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "get_XmlNsForClrTypeWithAssembly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.get_XmlNsForClrTypeWithNs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNs)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b2faf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "get_XmlNsForClrTypeWithNs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.get_XmlNsForClrTypeWithNsAndAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNsAndAssembly)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b2fb38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "get_XmlNsForClrTypeWithNsAndAssembly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.CodeXmlNamespaceForClrTypeNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::Runtime::Remoting::SoapServices::CodeXmlNamespaceForClrTypeNamespace)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5b2fb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                                             { "CodeXmlNamespaceForClrTypeNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetNameKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::Runtime::Remoting::SoapServices::GetNameKey)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b2fe10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "GetNameKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetAssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::MethodBase*)>(&::System::Runtime::Remoting::SoapServices::GetAssemblyName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5b2fe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "GetAssemblyName", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetXmlElementForInteropType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::Runtime::Remoting::SoapServices::GetXmlElementForInteropType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5b2ff74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                         { "GetXmlElementForInteropType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetXmlNamespaceForMethodCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::MethodBase*)>(&::System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodCall)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b30050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                                                                           { "GetXmlNamespaceForMethodCall", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetXmlNamespaceForMethodResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Reflection::MethodBase*)>(&::System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodResponse)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b300e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                                                                           { "GetXmlNamespaceForMethodResponse", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.GetXmlTypeForInteropType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::Runtime::Remoting::SoapServices::GetXmlTypeForInteropType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5b30180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                         { "GetXmlTypeForInteropType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.PreLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::Assembly*)>(&::System::Runtime::Remoting::SoapServices::PreLoad)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b30250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "PreLoad", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.PreLoad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::Runtime::Remoting::SoapServices::PreLoad)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x5b30310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "PreLoad", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.RegisterInteropXmlElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::System::Type*)>(&::System::Runtime::Remoting::SoapServices::RegisterInteropXmlElement)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5b30974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                                             { "RegisterInteropXmlElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.RegisterInteropXmlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::System::Type*)>(&::System::Runtime::Remoting::SoapServices::RegisterInteropXmlType)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5b307e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                                             { "RegisterInteropXmlType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::SoapServices.EncodeNs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Runtime::Remoting::SoapServices::EncodeNs)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b2fd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "EncodeNs", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::Remoting::SoapServices::setStaticF__xmlTypes(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_xmlTypes", ::System::Runtime::Remoting::SoapServices*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::SoapServices::getStaticF__xmlTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_xmlTypes", ::System::Runtime::Remoting::SoapServices*>();
}
inline void System::Runtime::Remoting::SoapServices::setStaticF__xmlElements(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_xmlElements", ::System::Runtime::Remoting::SoapServices*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::SoapServices::getStaticF__xmlElements() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_xmlElements", ::System::Runtime::Remoting::SoapServices*>();
}
inline void System::Runtime::Remoting::SoapServices::setStaticF__soapActions(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_soapActions", ::System::Runtime::Remoting::SoapServices*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::SoapServices::getStaticF__soapActions() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_soapActions", ::System::Runtime::Remoting::SoapServices*>();
}
inline void System::Runtime::Remoting::SoapServices::setStaticF__soapActionsMethods(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_soapActionsMethods", ::System::Runtime::Remoting::SoapServices*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::SoapServices::getStaticF__soapActionsMethods() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_soapActionsMethods", ::System::Runtime::Remoting::SoapServices*>();
}
inline void System::Runtime::Remoting::SoapServices::setStaticF__typeInfos(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_typeInfos", ::System::Runtime::Remoting::SoapServices*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Remoting::SoapServices::getStaticF__typeInfos() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_typeInfos", ::System::Runtime::Remoting::SoapServices*>();
}
inline ::StringW System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithAssembly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "get_XmlNsForClrTypeWithAssembly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "get_XmlNsForClrTypeWithNs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNsAndAssembly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "get_XmlNsForClrTypeWithNsAndAssembly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::SoapServices::CodeXmlNamespaceForClrTypeNamespace(::StringW typeNamespace, ::StringW assemblyName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                                                                         { "CodeXmlNamespaceForClrTypeNamespace", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, typeNamespace, assemblyName);
}
inline ::StringW System::Runtime::Remoting::SoapServices::GetNameKey(::StringW name, ::StringW namspace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "GetNameKey", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, name, namspace);
}
inline ::StringW System::Runtime::Remoting::SoapServices::GetAssemblyName(::System::Reflection::MethodBase* mb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "GetAssemblyName", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mb);
}
inline bool System::Runtime::Remoting::SoapServices::GetXmlElementForInteropType(::System::Type* type, ::by_ref<::StringW> xmlElement, ::by_ref<::StringW> xmlNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                       { "GetXmlElementForInteropType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, xmlElement, xmlNamespace);
}
inline ::StringW System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodCall(::System::Reflection::MethodBase* mb) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                                                                         { "GetXmlNamespaceForMethodCall", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mb);
}
inline ::StringW System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodResponse(::System::Reflection::MethodBase* mb) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                                                                         { "GetXmlNamespaceForMethodResponse", {}, { ::i2c::type_of<::System::Reflection::MethodBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mb);
}
inline bool System::Runtime::Remoting::SoapServices::GetXmlTypeForInteropType(::System::Type* type, ::by_ref<::StringW> xmlType, ::by_ref<::StringW> xmlTypeNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                       { "GetXmlTypeForInteropType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, xmlType, xmlTypeNamespace);
}
inline void System::Runtime::Remoting::SoapServices::PreLoad(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "PreLoad", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, assembly);
}
inline void System::Runtime::Remoting::SoapServices::PreLoad(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "PreLoad", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void System::Runtime::Remoting::SoapServices::RegisterInteropXmlElement(::StringW xmlElement, ::StringW xmlNamespace, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                                           { "RegisterInteropXmlElement", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xmlElement, xmlNamespace, type);
}
inline void System::Runtime::Remoting::SoapServices::RegisterInteropXmlType(::StringW xmlType, ::StringW xmlTypeNamespace, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(),
                                                           { "RegisterInteropXmlType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xmlType, xmlTypeNamespace, type);
}
inline ::StringW System::Runtime::Remoting::SoapServices::EncodeNs(::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Remoting::SoapServices*>(), { "EncodeNs", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ns);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::SoapServices::SoapServices() {}
