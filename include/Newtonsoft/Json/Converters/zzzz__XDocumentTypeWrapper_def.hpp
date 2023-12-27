#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XDocumentTypeWrapper)
namespace Newtonsoft::Json::Converters {
class IXmlDocumentType;
}
namespace Newtonsoft::Json::Converters {
class IXmlNode;
}
namespace System::Xml::Linq {
class XDocumentType;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class XDocumentTypeWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::XDocumentTypeWrapper);
// Type: Newtonsoft.Json.Converters::XDocumentTypeWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12065))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12059))
// CS Name: ::Newtonsoft.Json.Converters::XDocumentTypeWrapper*
class CORDL_TYPE XDocumentTypeWrapper : public ::Newtonsoft::Json::Converters::XObjectWrapper {
public:
  // Declarations
  /// @brief Field _documentType, offset 0x18, size 0x8
  __declspec(property(get = __get__documentType, put = __set__documentType))::System::Xml::Linq::XDocumentType* _documentType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_System))::StringW System;

  __declspec(property(get = get_Public))::StringW Public;

  __declspec(property(get = get_InternalSubset))::StringW InternalSubset;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlDocumentType"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlDocumentType*() noexcept;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  constexpr ::System::Xml::Linq::XDocumentType*& __get__documentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XDocumentType*> const& __get__documentType() const;

  constexpr void __set__documentType(::System::Xml::Linq::XDocumentType* value);

  static inline ::Newtonsoft::Json::Converters::XDocumentTypeWrapper* New_ctor(::System::Xml::Linq::XDocumentType* documentType);

  /// @brief Method .ctor addr 0x26baf7c size 0x6c virtual false final false
  inline void _ctor(::System::Xml::Linq::XDocumentType* documentType);

  /// @brief Method get_Name addr 0x26bafe8 size 0x1c virtual true final true
  inline ::StringW get_Name();

  /// @brief Method get_System addr 0x26bb004 size 0x1c virtual true final true
  inline ::StringW get_System();

  /// @brief Method get_Public addr 0x26bb020 size 0x1c virtual true final true
  inline ::StringW get_Public();

  /// @brief Method get_InternalSubset addr 0x26bb03c size 0x1c virtual true final true
  inline ::StringW get_InternalSubset();

  /// @brief Method get_LocalName addr 0x26bb058 size 0x40 virtual true final false
  inline ::StringW get_LocalName();

  // Ctor Parameters [CppParam { name: "", ty: "XDocumentTypeWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XDocumentTypeWrapper(XDocumentTypeWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XDocumentTypeWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XDocumentTypeWrapper(XDocumentTypeWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XDocumentTypeWrapper();

public:
  /// @brief Field _documentType, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Linq::XDocumentType* ____documentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::XDocumentTypeWrapper, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::XDocumentTypeWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::XDocumentTypeWrapper*, "Newtonsoft.Json.Converters", "XDocumentTypeWrapper");
