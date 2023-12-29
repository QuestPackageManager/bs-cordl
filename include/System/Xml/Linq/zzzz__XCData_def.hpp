#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XText_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XCData)
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlWriter;
}
namespace System::Xml::Linq {
class XNode;
}
// Forward declare root types
namespace System::Xml::Linq {
class XCData;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XCData);
// Type: System.Xml.Linq::XCData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15443))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15417))
// CS Name: ::System.Xml.Linq::XCData*
class CORDL_TYPE XCData : public ::System::Xml::Linq::XText {
public:
  // Declarations
  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  static inline ::System::Xml::Linq::XCData* New_ctor(::StringW value);

  /// @brief Method .ctor addr 0x26dfb98 size 0x4 virtual false final false
  inline void _ctor(::StringW value);

  static inline ::System::Xml::Linq::XCData* New_ctor(::System::Xml::Linq::XCData* other);

  /// @brief Method .ctor addr 0x26dfc14 size 0x4 virtual false final false
  inline void _ctor(::System::Xml::Linq::XCData* other);

  /// @brief Method get_NodeType addr 0x26dfc94 size 0x8 virtual true final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method WriteTo addr 0x26dfc9c size 0x74 virtual true final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  /// @brief Method CloneNode addr 0x26dfd10 size 0x60 virtual true final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  // Ctor Parameters [CppParam { name: "", ty: "XCData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XCData(XCData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XCData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XCData(XCData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XCData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XCData, 0x30>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XCData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XCData*, "System.Xml.Linq", "XCData");
