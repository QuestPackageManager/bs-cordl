#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/SoapServices.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SoapServices)
namespace System::Collections {
class Hashtable;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting {
class SoapServices_TypeInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class SoapServices;
}
namespace System::Runtime::Remoting {
class SoapServices_TypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::SoapServices);
MARK_REF_PTR_T(::System::Runtime::Remoting::SoapServices_TypeInfo);
// Dependencies System.Object
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.SoapServices/TypeInfo
class CORDL_TYPE SoapServices_TypeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Attributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Attributes, put = __cordl_internal_set_Attributes)) ::System::Collections::Hashtable* Attributes;

  /// @brief Field Elements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Elements, put = __cordl_internal_set_Elements)) ::System::Collections::Hashtable* Elements;

  static inline ::System::Runtime::Remoting::SoapServices_TypeInfo* New_ctor();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_Attributes() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Attributes();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_Elements() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Elements();

  constexpr void __cordl_internal_set_Attributes(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_Elements(::System::Collections::Hashtable* value);

  /// @brief Method .ctor, addr 0x3ce4d28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoapServices_TypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SoapServices_TypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoapServices_TypeInfo(SoapServices_TypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoapServices_TypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoapServices_TypeInfo(SoapServices_TypeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3076 };

  /// @brief Field Attributes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___Attributes;

  /// @brief Field Elements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___Elements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Remoting::SoapServices_TypeInfo, ___Attributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::SoapServices_TypeInfo, ___Elements) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::SoapServices_TypeInfo, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Remoting
// Dependencies System.Object
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.SoapServices
class CORDL_TYPE SoapServices : public ::System::Object {
public:
  // Declarations
  using TypeInfo = ::System::Runtime::Remoting::SoapServices_TypeInfo;

  /// @brief Field _soapActions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__soapActions, put = setStaticF__soapActions)) ::System::Collections::Hashtable* _soapActions;

  /// @brief Field _soapActionsMethods, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__soapActionsMethods, put = setStaticF__soapActionsMethods)) ::System::Collections::Hashtable* _soapActionsMethods;

  /// @brief Field _typeInfos, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__typeInfos, put = setStaticF__typeInfos)) ::System::Collections::Hashtable* _typeInfos;

  /// @brief Field _xmlElements, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__xmlElements, put = setStaticF__xmlElements)) ::System::Collections::Hashtable* _xmlElements;

  /// @brief Field _xmlTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__xmlTypes, put = setStaticF__xmlTypes)) ::System::Collections::Hashtable* _xmlTypes;

  /// @brief Method CodeXmlNamespaceForClrTypeNamespace, addr 0x3ce3db0, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW CodeXmlNamespaceForClrTypeNamespace(::StringW typeNamespace, ::StringW assemblyName);

  /// @brief Method EncodeNs, addr 0x3ce3f48, size 0xe4, virtual false, abstract: false, final false
  static inline ::StringW EncodeNs(::StringW ns);

  /// @brief Method GetAssemblyName, addr 0x3ce4094, size 0x134, virtual false, abstract: false, final false
  static inline ::StringW GetAssemblyName(::System::Reflection::MethodBase* mb);

  /// @brief Method GetNameKey, addr 0x3ce402c, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GetNameKey(::StringW name, ::StringW namspace);

  /// @brief Method GetXmlElementForInteropType, addr 0x3ce41c8, size 0xd4, virtual false, abstract: false, final false
  static inline bool GetXmlElementForInteropType(::System::Type* type, ::ByRef<::StringW> xmlElement, ::ByRef<::StringW> xmlNamespace);

  /// @brief Method GetXmlNamespaceForMethodCall, addr 0x3ce429c, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetXmlNamespaceForMethodCall(::System::Reflection::MethodBase* mb);

  /// @brief Method GetXmlNamespaceForMethodResponse, addr 0x3ce4330, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetXmlNamespaceForMethodResponse(::System::Reflection::MethodBase* mb);

  /// @brief Method GetXmlTypeForInteropType, addr 0x3ce43c4, size 0xc8, virtual false, abstract: false, final false
  static inline bool GetXmlTypeForInteropType(::System::Type* type, ::ByRef<::StringW> xmlType, ::ByRef<::StringW> xmlTypeNamespace);

  /// @brief Method PreLoad, addr 0x3ce448c, size 0xbc, virtual false, abstract: false, final false
  static inline void PreLoad(::System::Reflection::Assembly* assembly);

  /// @brief Method PreLoad, addr 0x3ce4548, size 0x4c8, virtual false, abstract: false, final false
  static inline void PreLoad(::System::Type* type);

  /// @brief Method RegisterInteropXmlElement, addr 0x3ce4b9c, size 0x18c, virtual false, abstract: false, final false
  static inline void RegisterInteropXmlElement(::StringW xmlElement, ::StringW xmlNamespace, ::System::Type* type);

  /// @brief Method RegisterInteropXmlType, addr 0x3ce4a10, size 0x18c, virtual false, abstract: false, final false
  static inline void RegisterInteropXmlType(::StringW xmlType, ::StringW xmlTypeNamespace, ::System::Type* type);

  static inline ::System::Collections::Hashtable* getStaticF__soapActions();

  static inline ::System::Collections::Hashtable* getStaticF__soapActionsMethods();

  static inline ::System::Collections::Hashtable* getStaticF__typeInfos();

  static inline ::System::Collections::Hashtable* getStaticF__xmlElements();

  static inline ::System::Collections::Hashtable* getStaticF__xmlTypes();

  /// @brief Method get_XmlNsForClrTypeWithAssembly, addr 0x3ce3cf0, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_XmlNsForClrTypeWithAssembly();

  /// @brief Method get_XmlNsForClrTypeWithNs, addr 0x3ce3d30, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_XmlNsForClrTypeWithNs();

  /// @brief Method get_XmlNsForClrTypeWithNsAndAssembly, addr 0x3ce3d70, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_XmlNsForClrTypeWithNsAndAssembly();

  static inline void setStaticF__soapActions(::System::Collections::Hashtable* value);

  static inline void setStaticF__soapActionsMethods(::System::Collections::Hashtable* value);

  static inline void setStaticF__typeInfos(::System::Collections::Hashtable* value);

  static inline void setStaticF__xmlElements(::System::Collections::Hashtable* value);

  static inline void setStaticF__xmlTypes(::System::Collections::Hashtable* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoapServices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SoapServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoapServices(SoapServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoapServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoapServices(SoapServices const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3077 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::SoapServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::SoapServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::SoapServices*, "System.Runtime.Remoting", "SoapServices");
NEED_NO_BOX(::System::Runtime::Remoting::SoapServices_TypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::SoapServices_TypeInfo*, "System.Runtime.Remoting", "SoapServices/TypeInfo");
