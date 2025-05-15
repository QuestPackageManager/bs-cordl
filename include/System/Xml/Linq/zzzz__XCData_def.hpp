#pragma once
// IWYU pragma private; include "System/Xml/Linq/XCData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XText_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XCData)
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml::Linq {
class XCData;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XCData);
// Dependencies System.Xml.Linq.XText
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XCData
class CORDL_TYPE XCData : public ::System::Xml::Linq::XText {
public:
  // Declarations
  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  /// @brief Method CloneNode, addr 0x4246c4c, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  static inline ::System::Xml::Linq::XCData* New_ctor(::System::Xml::Linq::XCData* other);

  static inline ::System::Xml::Linq::XCData* New_ctor(::StringW value);

  /// @brief Method WriteTo, addr 0x4246bdc, size 0x70, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  /// @brief Method .ctor, addr 0x4246b58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XCData* other);

  /// @brief Method .ctor, addr 0x4246ae0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

  /// @brief Method get_NodeType, addr 0x4246bd4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XCData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XCData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XCData(XCData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XCData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XCData(XCData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17960 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XCData, 0x30>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XCData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XCData*, "System.Xml.Linq", "XCData");
