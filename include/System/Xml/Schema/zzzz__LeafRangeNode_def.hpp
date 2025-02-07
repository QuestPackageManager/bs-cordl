#pragma once
// IWYU pragma private; include "System/Xml/Schema/LeafRangeNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__LeafNode_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeafRangeNode)
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
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
// Dependencies System.Decimal, System.Xml.Schema.LeafNode
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.LeafRangeNode
class CORDL_TYPE LeafRangeNode : public ::System::Xml::Schema::LeafNode {
public:
  // Declarations
  __declspec(property(get = get_IsRangeNode)) bool IsRangeNode;

  __declspec(property(get = get_Max)) ::System::Decimal Max;

  __declspec(property(get = get_Min)) ::System::Decimal Min;

  __declspec(property(get = get_NextIteration, put = set_NextIteration)) ::System::Xml::Schema::BitSet* NextIteration;

  /// @brief Field max, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) ::System::Decimal max;

  /// @brief Field min, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) ::System::Decimal min;

  /// @brief Field nextIteration, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_nextIteration, put = __cordl_internal_set_nextIteration)) ::System::Xml::Schema::BitSet* nextIteration;

  /// @brief Method ExpandTree, addr 0x43a15f8, size 0x34, virtual true, abstract: false, final false
  inline void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  static inline ::System::Xml::Schema::LeafRangeNode* New_ctor(::System::Decimal min, ::System::Decimal max);

  static inline ::System::Xml::Schema::LeafRangeNode* New_ctor(int32_t pos, ::System::Decimal min, ::System::Decimal max);

  constexpr ::System::Decimal const& __cordl_internal_get_max() const;

  constexpr ::System::Decimal& __cordl_internal_get_max();

  constexpr ::System::Decimal const& __cordl_internal_get_min() const;

  constexpr ::System::Decimal& __cordl_internal_get_min();

  constexpr ::System::Xml::Schema::BitSet* const& __cordl_internal_get_nextIteration() const;

  constexpr ::System::Xml::Schema::BitSet*& __cordl_internal_get_nextIteration();

  constexpr void __cordl_internal_set_max(::System::Decimal value);

  constexpr void __cordl_internal_set_min(::System::Decimal value);

  constexpr void __cordl_internal_set_nextIteration(::System::Xml::Schema::BitSet* value);

  /// @brief Method .ctor, addr 0x43a1530, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Decimal min, ::System::Decimal max);

  /// @brief Method .ctor, addr 0x43a1578, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(int32_t pos, ::System::Decimal min, ::System::Decimal max);

  /// @brief Method get_IsRangeNode, addr 0x43a15f0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsRangeNode();

  /// @brief Method get_Max, addr 0x43a15c8, size 0xc, virtual false, abstract: false, final false
  inline ::System::Decimal get_Max();

  /// @brief Method get_Min, addr 0x43a15d4, size 0xc, virtual false, abstract: false, final false
  inline ::System::Decimal get_Min();

  /// @brief Method get_NextIteration, addr 0x43a15e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::BitSet* get_NextIteration();

  /// @brief Method set_NextIteration, addr 0x43a15e8, size 0x8, virtual false, abstract: false, final false
  inline void set_NextIteration(::System::Xml::Schema::BitSet* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeafRangeNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeafRangeNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeafRangeNode(LeafRangeNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeafRangeNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeafRangeNode(LeafRangeNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7508 };

  /// @brief Field min, offset: 0x18, size: 0x10, def value: None
  ::System::Decimal ___min;

  /// @brief Field max, offset: 0x28, size: 0x10, def value: None
  ::System::Decimal ___max;

  /// @brief Field nextIteration, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* ___nextIteration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::LeafRangeNode, ___min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::LeafRangeNode, ___max) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::LeafRangeNode, ___nextIteration) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::LeafRangeNode, 0x40>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::LeafRangeNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::LeafRangeNode*, "System.Xml.Schema", "LeafRangeNode");
