#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlMemberMapping)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlMemberMapping;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlMemberMapping);
// Type: System.Xml.Serialization::XmlMemberMapping
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlMemberMapping*
class CORDL_TYPE XmlMemberMapping : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlMemberMapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlMemberMapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlMemberMapping(XmlMemberMapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlMemberMapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlMemberMapping(XmlMemberMapping const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlMemberMapping, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlMemberMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlMemberMapping*, "System.Xml.Serialization", "XmlMemberMapping");
