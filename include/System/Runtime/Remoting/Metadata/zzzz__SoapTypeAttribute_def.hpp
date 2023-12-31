#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SoapTypeAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Metadata::SoapTypeAttribute);
// Type: System.Runtime.Remoting.Metadata::SoapTypeAttribute
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 82, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3142))
// CS Name: ::System.Runtime.Remoting.Metadata::SoapTypeAttribute*
class CORDL_TYPE SoapTypeAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute {
public:
  // Declarations
  /// @brief Field _useAttribute, offset 0x28, size 0x1
  __declspec(property(get = __get__useAttribute, put = __set__useAttribute)) bool _useAttribute;

  /// @brief Field _xmlElementName, offset 0x30, size 0x8
  __declspec(property(get = __get__xmlElementName, put = __set__xmlElementName))::StringW _xmlElementName;

  /// @brief Field _xmlNamespace, offset 0x38, size 0x8
  __declspec(property(get = __get__xmlNamespace, put = __set__xmlNamespace))::StringW _xmlNamespace;

  /// @brief Field _xmlTypeName, offset 0x40, size 0x8
  __declspec(property(get = __get__xmlTypeName, put = __set__xmlTypeName))::StringW _xmlTypeName;

  /// @brief Field _xmlTypeNamespace, offset 0x48, size 0x8
  __declspec(property(get = __get__xmlTypeNamespace, put = __set__xmlTypeNamespace))::StringW _xmlTypeNamespace;

  /// @brief Field _isType, offset 0x50, size 0x1
  __declspec(property(get = __get__isType, put = __set__isType)) bool _isType;

  /// @brief Field _isElement, offset 0x51, size 0x1
  __declspec(property(get = __get__isElement, put = __set__isElement)) bool _isElement;

  __declspec(property(get = get_UseAttribute)) bool UseAttribute;

  __declspec(property(get = get_XmlElementName))::StringW XmlElementName;

  __declspec(property(get = get_XmlNamespace))::StringW XmlNamespace;

  __declspec(property(get = get_XmlTypeName))::StringW XmlTypeName;

  __declspec(property(get = get_XmlTypeNamespace))::StringW XmlTypeNamespace;

  __declspec(property(get = get_IsInteropXmlElement)) bool IsInteropXmlElement;

  __declspec(property(get = get_IsInteropXmlType)) bool IsInteropXmlType;

  constexpr bool& __get__useAttribute();

  constexpr bool const& __get__useAttribute() const;

  constexpr void __set__useAttribute(bool value);

  constexpr ::StringW& __get__xmlElementName();

  constexpr ::StringW const& __get__xmlElementName() const;

  constexpr void __set__xmlElementName(::StringW value);

  constexpr ::StringW& __get__xmlNamespace();

  constexpr ::StringW const& __get__xmlNamespace() const;

  constexpr void __set__xmlNamespace(::StringW value);

  constexpr ::StringW& __get__xmlTypeName();

  constexpr ::StringW const& __get__xmlTypeName() const;

  constexpr void __set__xmlTypeName(::StringW value);

  constexpr ::StringW& __get__xmlTypeNamespace();

  constexpr ::StringW const& __get__xmlTypeNamespace() const;

  constexpr void __set__xmlTypeNamespace(::StringW value);

  constexpr bool& __get__isType();

  constexpr bool const& __get__isType() const;

  constexpr void __set__isType(bool value);

  constexpr bool& __get__isElement();

  constexpr bool const& __get__isElement() const;

  constexpr void __set__isElement(bool value);

  static inline ::System::Runtime::Remoting::Metadata::SoapTypeAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x24a5f30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_UseAttribute, addr 0x24a5f38, size 0x8, virtual true, abstract: false, final false
  inline bool get_UseAttribute();

  /// @brief Method get_XmlElementName, addr 0x24a5f40, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlElementName();

  /// @brief Method get_XmlNamespace, addr 0x24a5f48, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_XmlNamespace();

  /// @brief Method get_XmlTypeName, addr 0x24a5f50, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlTypeName();

  /// @brief Method get_XmlTypeNamespace, addr 0x24a5f58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlTypeNamespace();

  /// @brief Method get_IsInteropXmlElement, addr 0x24a5f60, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInteropXmlElement();

  /// @brief Method get_IsInteropXmlType, addr 0x24a5f68, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsInteropXmlType();

  /// @brief Method SetReflectionObject, addr 0x24a5f70, size 0x1fc, virtual true, abstract: false, final false
  inline void SetReflectionObject(::System::Object* reflectionObject);

  // Ctor Parameters [CppParam { name: "", ty: "SoapTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoapTypeAttribute(SoapTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoapTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoapTypeAttribute(SoapTypeAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoapTypeAttribute();

public:
  /// @brief Field _useAttribute, offset: 0x28, size: 0x1, def value: None
  bool ____useAttribute;

  /// @brief Field _xmlElementName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____xmlElementName;

  /// @brief Field _xmlNamespace, offset: 0x38, size: 0x8, def value: None
  ::StringW ____xmlNamespace;

  /// @brief Field _xmlTypeName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____xmlTypeName;

  /// @brief Field _xmlTypeNamespace, offset: 0x48, size: 0x8, def value: None
  ::StringW ____xmlTypeNamespace;

  /// @brief Field _isType, offset: 0x50, size: 0x1, def value: None
  bool ____isType;

  /// @brief Field _isElement, offset: 0x51, size: 0x1, def value: None
  bool ____isElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Metadata::SoapTypeAttribute, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapTypeAttribute, ____useAttribute) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapTypeAttribute, ____xmlElementName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapTypeAttribute, ____xmlNamespace) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapTypeAttribute, ____xmlTypeName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapTypeAttribute, ____xmlTypeNamespace) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapTypeAttribute, ____isType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapTypeAttribute, ____isElement) == 0x51, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Metadata
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapTypeAttribute*, "System.Runtime.Remoting.Metadata", "SoapTypeAttribute");
