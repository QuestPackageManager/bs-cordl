#pragma once
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
class XmlWriter;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace System::Xml::Linq {
class XProcessingInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XProcessingInstruction);
// Type: System.Xml.Linq::XProcessingInstruction
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15453))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15457))
// CS Name: ::System.Xml.Linq::XProcessingInstruction*
class CORDL_TYPE XProcessingInstruction : public ::System::Xml::Linq::XNode {
public:
  // Declarations
  /// @brief Field target, offset 0x28, size 0x8
  __declspec(property(get = __get_target, put = __set_target))::StringW target;

  /// @brief Field data, offset 0x30, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::StringW data;

  __declspec(property(get = get_Data, put = set_Data))::StringW Data;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Target))::StringW Target;

  constexpr ::StringW& __get_target();

  constexpr ::StringW const& __get_target() const;

  constexpr void __set_target(::StringW value);

  constexpr ::StringW& __get_data();

  constexpr ::StringW const& __get_data() const;

  constexpr void __set_data(::StringW value);

  static inline ::System::Xml::Linq::XProcessingInstruction* New_ctor(::StringW target, ::StringW data);

  /// @brief Method .ctor, addr 0x28614a8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW target, ::StringW data);

  static inline ::System::Xml::Linq::XProcessingInstruction* New_ctor(::System::Xml::Linq::XProcessingInstruction* other);

  /// @brief Method .ctor, addr 0x286160c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XProcessingInstruction* other);

  /// @brief Method get_Data, addr 0x2861688, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Data();

  /// @brief Method set_Data, addr 0x2861690, size 0xf4, virtual false, abstract: false, final false
  inline void set_Data(::StringW value);

  /// @brief Method get_NodeType, addr 0x2861784, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Target, addr 0x286178c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Target();

  /// @brief Method WriteTo, addr 0x2861794, size 0x74, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  /// @brief Method CloneNode, addr 0x2861808, size 0x60, virtual true, abstract: false, final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  /// @brief Method ValidateName, addr 0x286152c, size 0xe0, virtual false, abstract: false, final false
  static inline void ValidateName(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "XProcessingInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XProcessingInstruction(XProcessingInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XProcessingInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XProcessingInstruction(XProcessingInstruction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XProcessingInstruction();

public:
  /// @brief Field target, offset: 0x28, size: 0x8, def value: None
  ::StringW ___target;

  /// @brief Field data, offset: 0x30, size: 0x8, def value: None
  ::StringW ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XProcessingInstruction, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::XProcessingInstruction, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XProcessingInstruction, ___data) == 0x30, "Offset mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XProcessingInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XProcessingInstruction*, "System.Xml.Linq", "XProcessingInstruction");
