#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SoapAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Metadata::SoapAttribute);
// Type: System.Runtime.Remoting.Metadata::SoapAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3138))
// CS Name: ::System.Runtime.Remoting.Metadata::SoapAttribute*
class CORDL_TYPE SoapAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _useAttribute, offset 0x10, size 0x1
  __declspec(property(get = __get__useAttribute, put = __set__useAttribute)) bool _useAttribute;

  /// @brief Field ProtXmlNamespace, offset 0x18, size 0x8
  __declspec(property(get = __get_ProtXmlNamespace, put = __set_ProtXmlNamespace))::StringW ProtXmlNamespace;

  /// @brief Field ReflectInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_ReflectInfo, put = __set_ReflectInfo))::System::Object* ReflectInfo;

  __declspec(property(get = get_UseAttribute)) bool UseAttribute;

  __declspec(property(get = get_XmlNamespace))::StringW XmlNamespace;

  constexpr bool& __get__useAttribute();

  constexpr bool const& __get__useAttribute() const;

  constexpr void __set__useAttribute(bool value);

  constexpr ::StringW& __get_ProtXmlNamespace();

  constexpr ::StringW const& __get_ProtXmlNamespace() const;

  constexpr void __set_ProtXmlNamespace(::StringW value);

  constexpr ::System::Object*& __get_ReflectInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_ReflectInfo() const;

  constexpr void __set_ReflectInfo(::System::Object* value);

  static inline ::System::Runtime::Remoting::Metadata::SoapAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x24a5c8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_UseAttribute, addr 0x24a5c94, size 0x8, virtual true, abstract: false, final false
  inline bool get_UseAttribute();

  /// @brief Method get_XmlNamespace, addr 0x24a5c9c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_XmlNamespace();

  /// @brief Method SetReflectionObject, addr 0x24a5ca4, size 0x8, virtual true, abstract: false, final false
  inline void SetReflectionObject(::System::Object* reflectionObject);

  // Ctor Parameters [CppParam { name: "", ty: "SoapAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoapAttribute(SoapAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoapAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoapAttribute(SoapAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoapAttribute();

public:
  /// @brief Field _useAttribute, offset: 0x10, size: 0x1, def value: None
  bool ____useAttribute;

  /// @brief Field ProtXmlNamespace, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ProtXmlNamespace;

  /// @brief Field ReflectInfo, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___ReflectInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Metadata::SoapAttribute, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapAttribute, ____useAttribute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapAttribute, ___ProtXmlNamespace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapAttribute, ___ReflectInfo) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Metadata
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapAttribute*, "System.Runtime.Remoting.Metadata", "SoapAttribute");
