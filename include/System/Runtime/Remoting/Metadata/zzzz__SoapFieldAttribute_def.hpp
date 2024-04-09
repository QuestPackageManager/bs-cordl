#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SoapFieldAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapFieldAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Metadata::SoapFieldAttribute);
// Type: System.Runtime.Remoting.Metadata::SoapFieldAttribute
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// CS Name: ::System.Runtime.Remoting.Metadata::SoapFieldAttribute*
class CORDL_TYPE SoapFieldAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute {
public:
  // Declarations
  __declspec(property(get = get_XmlElementName))::StringW XmlElementName;

  /// @brief Field _elementName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__elementName, put = __cordl_internal_set__elementName))::StringW _elementName;

  /// @brief Field _isElement, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isElement, put = __cordl_internal_set__isElement)) bool _isElement;

  /// @brief Method IsInteropXmlElement, addr 0x2722b4c, size 0x8, virtual false, abstract: false, final false
  inline bool IsInteropXmlElement();

  static inline ::System::Runtime::Remoting::Metadata::SoapFieldAttribute* New_ctor();

  /// @brief Method SetReflectionObject, addr 0x2722b54, size 0xa0, virtual true, abstract: false, final false
  inline void SetReflectionObject(::System::Object* reflectionObject);

  constexpr ::StringW const& __cordl_internal_get__elementName() const;

  constexpr ::StringW& __cordl_internal_get__elementName();

  constexpr bool const& __cordl_internal_get__isElement() const;

  constexpr bool& __cordl_internal_get__isElement();

  constexpr void __cordl_internal_set__elementName(::StringW value);

  constexpr void __cordl_internal_set__isElement(bool value);

  /// @brief Method .ctor, addr 0x2722b3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_XmlElementName, addr 0x2722b44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlElementName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoapFieldAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SoapFieldAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoapFieldAttribute(SoapFieldAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoapFieldAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoapFieldAttribute(SoapFieldAttribute const&) = delete;

  /// @brief Field _elementName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____elementName;

  /// @brief Field _isElement, offset: 0x30, size: 0x1, def value: None
  bool ____isElement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Metadata::SoapFieldAttribute, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapFieldAttribute, ____elementName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::Metadata::SoapFieldAttribute, ____isElement) == 0x30, "Offset mismatch!");

} // namespace System::Runtime::Remoting::Metadata
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapFieldAttribute*, "System.Runtime.Remoting.Metadata", "SoapFieldAttribute");
