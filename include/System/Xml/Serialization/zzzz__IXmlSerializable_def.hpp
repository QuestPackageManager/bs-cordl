#pragma once
// IWYU pragma private; include "System/Xml/Serialization/IXmlSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXmlSerializable)
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml::Serialization {
class IXmlSerializable;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::IXmlSerializable);
// Type: System.Xml.Serialization::IXmlSerializable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::IXmlSerializable*
class CORDL_TYPE IXmlSerializable {
public:
  // Declarations
  /// @brief Method GetSchema, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::Schema::XmlSchema* GetSchema();

  /// @brief Method ReadXml, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method WriteXml, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void WriteXml(::System::Xml::XmlWriter* writer);

  // Ctor Parameters [CppParam { name: "", ty: "IXmlSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IXmlSerializable(IXmlSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IXmlSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlSerializable(IXmlSerializable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::IXmlSerializable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::IXmlSerializable*, "System.Xml.Serialization", "IXmlSerializable");
