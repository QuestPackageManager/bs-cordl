#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XmlNodeWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDocumentTypeWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlDocumentType;
}
namespace System::Xml {
class XmlDocumentType;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XmlDocumentTypeWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper);
// Type: Newtonsoft.Json.Converters::XmlDocumentTypeWrapper
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12052))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12051))
// CS Name: ::Newtonsoft.Json.Converters::XmlDocumentTypeWrapper*
class CORDL_TYPE XmlDocumentTypeWrapper : public ::Newtonsoft::Json::Converters::XmlNodeWrapper {
public:
  // Declarations
  /// @brief Field _documentType, offset 0x28, size 0x8
  __declspec(property(get = __get__documentType, put = __set__documentType))::System::Xml::XmlDocumentType* _documentType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_System))::StringW System;

  __declspec(property(get = get_Public))::StringW Public;

  __declspec(property(get = get_InternalSubset))::StringW InternalSubset;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDocumentType"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlDocumentType*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  constexpr ::System::Xml::XmlDocumentType*& __get__documentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocumentType*> const& __get__documentType() const;

  constexpr void __set__documentType(::System::Xml::XmlDocumentType* value);

  static inline ::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper* New_ctor(::System::Xml::XmlDocumentType* documentType);

  /// @brief Method .ctor addr 0x26b9c5c size 0x2c virtual false final false
  inline void _ctor(::System::Xml::XmlDocumentType* documentType);

  /// @brief Method get_Name addr 0x26ba238 size 0x20 virtual true final true
  inline ::StringW get_Name();

  /// @brief Method get_System addr 0x26ba258 size 0x1c virtual true final true
  inline ::StringW get_System();

  /// @brief Method get_Public addr 0x26ba274 size 0x1c virtual true final true
  inline ::StringW get_Public();

  /// @brief Method get_InternalSubset addr 0x26ba290 size 0x1c virtual true final true
  inline ::StringW get_InternalSubset();

  /// @brief Method get_LocalName addr 0x26ba2ac size 0x40 virtual true final false
  inline ::StringW get_LocalName();

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentTypeWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDocumentTypeWrapper(XmlDocumentTypeWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentTypeWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDocumentTypeWrapper(XmlDocumentTypeWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDocumentTypeWrapper();

public:
  /// @brief Field _documentType, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlDocumentType* ____documentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper, 0x30>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XmlDocumentTypeWrapper*, "Newtonsoft.Json.Converters", "XmlDocumentTypeWrapper");
