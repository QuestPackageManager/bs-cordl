#pragma once
// IWYU pragma private; include "System/Xml/Linq/XProcessingInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XProcessingInstruction)
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
class XProcessingInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XProcessingInstruction);
// Dependencies System.Xml.Linq.XNode
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XProcessingInstruction
class CORDL_TYPE XProcessingInstruction : public ::System::Xml::Linq::XNode {
public:
  // Declarations
  __declspec(property(get = get_Data, put = set_Data)) ::StringW Data;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Target)) ::StringW Target;

  /// @brief Field data, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::StringW data;

  /// @brief Field target, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::StringW target;

  /// @brief Method CloneNode, addr 0x424e75c, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  static inline ::System::Xml::Linq::XProcessingInstruction* New_ctor(::System::Xml::Linq::XProcessingInstruction* other);

  static inline ::System::Xml::Linq::XProcessingInstruction* New_ctor(::StringW target, ::StringW data);

  /// @brief Method ValidateName, addr 0x424e494, size 0xd8, virtual false, abstract: false, final false
  static inline void ValidateName(::StringW name);

  /// @brief Method WriteTo, addr 0x424e6ec, size 0x70, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  constexpr ::StringW const& __cordl_internal_get_data() const;

  constexpr ::StringW& __cordl_internal_get_data();

  constexpr ::StringW const& __cordl_internal_get_target() const;

  constexpr ::StringW& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_data(::StringW value);

  constexpr void __cordl_internal_set_target(::StringW value);

  /// @brief Method .ctor, addr 0x424e56c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XProcessingInstruction* other);

  /// @brief Method .ctor, addr 0x424a270, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW target, ::StringW data);

  /// @brief Method get_Data, addr 0x424e5e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Data();

  /// @brief Method get_NodeType, addr 0x424e6dc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Target, addr 0x424e6e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Target();

  /// @brief Method set_Data, addr 0x424e5ec, size 0xf0, virtual false, abstract: false, final false
  inline void set_Data(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XProcessingInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XProcessingInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XProcessingInstruction(XProcessingInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XProcessingInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XProcessingInstruction(XProcessingInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17987 };

  /// @brief Field target, offset: 0x28, size: 0x8, def value: None
  ::StringW ___target;

  /// @brief Field data, offset: 0x30, size: 0x8, def value: None
  ::StringW ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XProcessingInstruction, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XProcessingInstruction, ___data) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XProcessingInstruction, 0x38>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XProcessingInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XProcessingInstruction*, "System.Xml.Linq", "XProcessingInstruction");
