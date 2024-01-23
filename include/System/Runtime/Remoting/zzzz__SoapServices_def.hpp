#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class __SoapServices__TypeInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class SoapServices;
}
namespace System::Runtime::Remoting {
class __SoapServices__TypeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::SoapServices);
MARK_REF_PTR_T(::System::Runtime::Remoting::__SoapServices__TypeInfo);
// Type: ::TypeInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3077))
// CS Name: ::SoapServices::TypeInfo*
class CORDL_TYPE __SoapServices__TypeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Attributes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Attributes, put = __cordl_internal_set_Attributes))::System::Collections::Hashtable* Attributes;

  /// @brief Field Elements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Elements, put = __cordl_internal_set_Elements))::System::Collections::Hashtable* Elements;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Attributes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_Attributes() const;

  constexpr void __cordl_internal_set_Attributes(::System::Collections::Hashtable* value);

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_Elements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_Elements() const;

  constexpr void __cordl_internal_set_Elements(::System::Collections::Hashtable* value);

  static inline ::System::Runtime::Remoting::__SoapServices__TypeInfo* New_ctor();

  /// @brief Method .ctor, addr 0x249551c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SoapServices__TypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SoapServices__TypeInfo(__SoapServices__TypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SoapServices__TypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SoapServices__TypeInfo(__SoapServices__TypeInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SoapServices__TypeInfo();

public:
  /// @brief Field Attributes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___Attributes;

  /// @brief Field Elements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___Elements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::__SoapServices__TypeInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::__SoapServices__TypeInfo, ___Attributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::__SoapServices__TypeInfo, ___Elements) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Remoting
// Type: System.Runtime.Remoting::SoapServices
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3078))
// CS Name: ::System.Runtime.Remoting::SoapServices*
class CORDL_TYPE SoapServices : public ::System::Object {
public:
  // Declarations
  using TypeInfo = ::System::Runtime::Remoting::__SoapServices__TypeInfo;

  /// @brief Field _xmlTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__xmlTypes, put = setStaticF__xmlTypes))::System::Collections::Hashtable* _xmlTypes;

  /// @brief Field _xmlElements, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__xmlElements, put = setStaticF__xmlElements))::System::Collections::Hashtable* _xmlElements;

  /// @brief Field _soapActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__soapActions, put = setStaticF__soapActions))::System::Collections::Hashtable* _soapActions;

  /// @brief Field _soapActionsMethods, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__soapActionsMethods, put = setStaticF__soapActionsMethods))::System::Collections::Hashtable* _soapActionsMethods;

  /// @brief Field _typeInfos, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__typeInfos, put = setStaticF__typeInfos))::System::Collections::Hashtable* _typeInfos;

  static inline void setStaticF__xmlTypes(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__xmlTypes();

  static inline void setStaticF__xmlElements(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__xmlElements();

  static inline void setStaticF__soapActions(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__soapActions();

  static inline void setStaticF__soapActionsMethods(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__soapActionsMethods();

  static inline void setStaticF__typeInfos(::System::Collections::Hashtable* value);

  static inline ::System::Collections::Hashtable* getStaticF__typeInfos();

  /// @brief Method get_XmlNsForClrTypeWithAssembly, addr 0x24944e4, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_XmlNsForClrTypeWithAssembly();

  /// @brief Method get_XmlNsForClrTypeWithNs, addr 0x2494524, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_XmlNsForClrTypeWithNs();

  /// @brief Method get_XmlNsForClrTypeWithNsAndAssembly, addr 0x2494564, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_XmlNsForClrTypeWithNsAndAssembly();

  /// @brief Method CodeXmlNamespaceForClrTypeNamespace, addr 0x24945a4, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW CodeXmlNamespaceForClrTypeNamespace(::StringW typeNamespace, ::StringW assemblyName);

  /// @brief Method GetNameKey, addr 0x2494820, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GetNameKey(::StringW name, ::StringW namspace);

  /// @brief Method GetAssemblyName, addr 0x2494888, size 0x134, virtual false, abstract: false, final false
  static inline ::StringW GetAssemblyName(::System::Reflection::MethodBase* mb);

  /// @brief Method GetXmlElementForInteropType, addr 0x24949bc, size 0xd0, virtual false, abstract: false, final false
  static inline bool GetXmlElementForInteropType(::System::Type* type, ByRef<::StringW> xmlElement, ByRef<::StringW> xmlNamespace);

  /// @brief Method GetXmlNamespaceForMethodCall, addr 0x2494a8c, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetXmlNamespaceForMethodCall(::System::Reflection::MethodBase* mb);

  /// @brief Method GetXmlNamespaceForMethodResponse, addr 0x2494b20, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetXmlNamespaceForMethodResponse(::System::Reflection::MethodBase* mb);

  /// @brief Method GetXmlTypeForInteropType, addr 0x2494bb4, size 0xc8, virtual false, abstract: false, final false
  static inline bool GetXmlTypeForInteropType(::System::Type* type, ByRef<::StringW> xmlType, ByRef<::StringW> xmlTypeNamespace);

  /// @brief Method PreLoad, addr 0x2494c7c, size 0xbc, virtual false, abstract: false, final false
  static inline void PreLoad(::System::Reflection::Assembly* assembly);

  /// @brief Method PreLoad, addr 0x2494d38, size 0x4c4, virtual false, abstract: false, final false
  static inline void PreLoad(::System::Type* type);

  /// @brief Method RegisterInteropXmlElement, addr 0x249538c, size 0x190, virtual false, abstract: false, final false
  static inline void RegisterInteropXmlElement(::StringW xmlElement, ::StringW xmlNamespace, ::System::Type* type);

  /// @brief Method RegisterInteropXmlType, addr 0x24951fc, size 0x190, virtual false, abstract: false, final false
  static inline void RegisterInteropXmlType(::StringW xmlType, ::StringW xmlTypeNamespace, ::System::Type* type);

  /// @brief Method EncodeNs, addr 0x249473c, size 0xe4, virtual false, abstract: false, final false
  static inline ::StringW EncodeNs(::StringW ns);

  // Ctor Parameters [CppParam { name: "", ty: "SoapServices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoapServices(SoapServices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoapServices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoapServices(SoapServices const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoapServices();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::SoapServices, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::SoapServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::SoapServices*, "System.Runtime.Remoting", "SoapServices");
NEED_NO_BOX(::System::Runtime::Remoting::__SoapServices__TypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::__SoapServices__TypeInfo*, "System.Runtime.Remoting", "SoapServices/TypeInfo");
