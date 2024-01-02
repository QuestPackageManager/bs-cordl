#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__LeafNode_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
CORDL_MODULE_EXPORT(LeafRangeNode)
namespace System::Xml::Schema {
class BitSet;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
class LeafRangeNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::LeafRangeNode);
// Type: System.Xml.Schema::LeafRangeNode
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11600)), TypeDefinitionIndex(TypeDefinitionIndex(2655))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11609))
// CS Name: ::System.Xml.Schema::LeafRangeNode*
class CORDL_TYPE LeafRangeNode : public ::System::Xml::Schema::LeafNode {
public:
  // Declarations
  /// @brief Field min, offset 0x18, size 0x10
  __declspec(property(get = __get_min, put = __set_min))::System::Decimal min;

  /// @brief Field max, offset 0x28, size 0x10
  __declspec(property(get = __get_max, put = __set_max))::System::Decimal max;

  /// @brief Field nextIteration, offset 0x38, size 0x8
  __declspec(property(get = __get_nextIteration, put = __set_nextIteration))::System::Xml::Schema::BitSet* nextIteration;

  __declspec(property(get = get_Max))::System::Decimal Max;

  __declspec(property(get = get_Min))::System::Decimal Min;

  __declspec(property(get = get_NextIteration, put = set_NextIteration))::System::Xml::Schema::BitSet* NextIteration;

  constexpr ::System::Decimal& __get_min();

  constexpr ::System::Decimal const& __get_min() const;

  constexpr void __set_min(::System::Decimal value);

  constexpr ::System::Decimal& __get_max();

  constexpr ::System::Decimal const& __get_max() const;

  constexpr void __set_max(::System::Decimal value);

  constexpr ::System::Xml::Schema::BitSet*& __get_nextIteration();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> const& __get_nextIteration() const;

  constexpr void __set_nextIteration(::System::Xml::Schema::BitSet* value);

  /// @brief Method get_Max, addr 0x28aed00, size 0xc, virtual false, abstract: false, final false
  inline ::System::Decimal get_Max();

  /// @brief Method get_Min, addr 0x28aed0c, size 0xc, virtual false, abstract: false, final false
  inline ::System::Decimal get_Min();

  /// @brief Method get_NextIteration, addr 0x28aed18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::BitSet* get_NextIteration();

  /// @brief Method set_NextIteration, addr 0x28aed20, size 0x8, virtual false, abstract: false, final false
  inline void set_NextIteration(::System::Xml::Schema::BitSet* value);

  // Ctor Parameters [CppParam { name: "", ty: "LeafRangeNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeafRangeNode(LeafRangeNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeafRangeNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeafRangeNode(LeafRangeNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeafRangeNode();

public:
  /// @brief Field min, offset: 0x18, size: 0x10, def value: None
  ::System::Decimal ___min;

  /// @brief Field max, offset: 0x28, size: 0x10, def value: None
  ::System::Decimal ___max;

  /// @brief Field nextIteration, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* ___nextIteration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::LeafRangeNode, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::LeafRangeNode, ___min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::LeafRangeNode, ___max) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::LeafRangeNode, ___nextIteration) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::LeafRangeNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::LeafRangeNode*, "System.Xml.Schema", "LeafRangeNode");
