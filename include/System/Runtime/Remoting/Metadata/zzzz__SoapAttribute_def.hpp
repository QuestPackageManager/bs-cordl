#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Metadata/SoapAttribute.hpp"
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
// CS Name: ::System.Runtime.Remoting.Metadata::SoapAttribute*
class CORDL_TYPE SoapAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field ProtXmlNamespace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ProtXmlNamespace, put = __cordl_internal_set_ProtXmlNamespace))::StringW ProtXmlNamespace;

  /// @brief Field ReflectInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ReflectInfo, put = __cordl_internal_set_ReflectInfo))::System::Object* ReflectInfo;

  __declspec(property(get = get_UseAttribute)) bool UseAttribute;

  __declspec(property(get = get_XmlNamespace))::StringW XmlNamespace;

  /// @brief Field _useAttribute, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__useAttribute, put = __cordl_internal_set__useAttribute)) bool _useAttribute;

  static inline ::System::Runtime::Remoting::Metadata::SoapAttribute* New_ctor();

  /// @brief Method SetReflectionObject, addr 0x2852fcc, size 0x8, virtual true, abstract: false, final false
  inline void SetReflectionObject(::System::Object* reflectionObject);

  constexpr ::StringW const& __cordl_internal_get_ProtXmlNamespace() const;

  constexpr ::StringW& __cordl_internal_get_ProtXmlNamespace();

  constexpr ::System::Object*& __cordl_internal_get_ReflectInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_ReflectInfo() const;

  constexpr bool const& __cordl_internal_get__useAttribute() const;

  constexpr bool& __cordl_internal_get__useAttribute();

  constexpr void __cordl_internal_set_ProtXmlNamespace(::StringW value);

  constexpr void __cordl_internal_set_ReflectInfo(::System::Object* value);

  constexpr void __cordl_internal_set__useAttribute(bool value);

  /// @brief Method .ctor, addr 0x2852fb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_UseAttribute, addr 0x2852fbc, size 0x8, virtual true, abstract: false, final false
  inline bool get_UseAttribute();

  /// @brief Method get_XmlNamespace, addr 0x2852fc4, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_XmlNamespace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoapAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SoapAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoapAttribute(SoapAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoapAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoapAttribute(SoapAttribute const&) = delete;

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
