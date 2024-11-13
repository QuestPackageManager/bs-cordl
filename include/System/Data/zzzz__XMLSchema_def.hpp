#pragma once
// IWYU pragma private; include "System/Data/XMLSchema.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XMLSchema)
namespace System::ComponentModel {
class TypeConverter;
}
namespace System::Data {
class DataTable;
}
namespace System::Xml {
class XmlAttributeCollection;
}
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
class XmlNode;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class XMLSchema;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::XMLSchema);
// Type: System.Data::XMLSchema
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::XMLSchema*
class CORDL_TYPE XMLSchema : public ::System::Object {
public:
  // Declarations
  /// @brief Method FEqualIdentity, addr 0x4129884, size 0x74, virtual false, abstract: false, final false
  static inline bool FEqualIdentity(::System::Xml::XmlNode* node, ::StringW name, ::StringW ns);

  /// @brief Method GenUniqueColumnName, addr 0x412b628, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW GenUniqueColumnName(::StringW proposedName, ::System::Data::DataTable* table);

  /// @brief Method GetBooleanAttribute, addr 0x412f618, size 0x150, virtual false, abstract: false, final false
  static inline bool GetBooleanAttribute(::System::Xml::XmlElement* element, ::StringW attrName, ::StringW attrNS, bool defVal);

  /// @brief Method GetConverter, addr 0x412f5c0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* type);

  static inline ::System::Data::XMLSchema* New_ctor();

  /// @brief Method SetProperties, addr 0x412ba84, size 0x44c, virtual false, abstract: false, final false
  static inline void SetProperties(::System::Object* instance, ::System::Xml::XmlAttributeCollection* attrs);

  /// @brief Method .ctor, addr 0x4129670, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XMLSchema();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XMLSchema", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XMLSchema(XMLSchema&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XMLSchema", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XMLSchema(XMLSchema const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11439 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::XMLSchema, 0x10>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::XMLSchema);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XMLSchema*, "System.Data", "XMLSchema");
