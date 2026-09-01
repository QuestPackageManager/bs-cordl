#pragma once
// IWYU pragma private; include "System\Data\ZeroOpNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZeroOpNode)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataRowVersion;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class ExpressionNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class ZeroOpNode;
}
// Write type traits
MARK_REF_T(::System::Data::ZeroOpNode*);
DEFINE_IL2CPP_CLASS(::System::Data::ZeroOpNode*, "System.Data", "ZeroOpNode");
// Dependencies System.Data.ExpressionNode
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ZeroOpNode
class CORDL_TYPE ZeroOpNode : public ::System::Data::ExpressionNode {
public:
  // Declarations
  /// @brief Field _op, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__op, put = __cordl_internal_set__op)) int32_t _op;

  /// @brief Method Bind, addr 0x6044f98, size 0x4, virtual true, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method Eval, addr 0x6044f9c, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x604505c, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::ArrayW<int32_t> recordNos);

  /// @brief Method Eval, addr 0x6045050, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method HasLocalAggregate, addr 0x6045078, size 0x8, virtual true, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x6045080, size 0x8, virtual true, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x6045068, size 0x8, virtual true, abstract: false, final false
  inline bool IsConstant();

  /// @brief Method IsTableConstant, addr 0x6045070, size 0x8, virtual true, abstract: false, final false
  inline bool IsTableConstant();

  static inline ::System::Data::ZeroOpNode* New_ctor(int32_t op);

  /// @brief Method Optimize, addr 0x6045088, size 0x4, virtual true, abstract: false, final false
  inline ::System::Data::ExpressionNode* Optimize();

  constexpr int32_t const& __cordl_internal_get__op() const;

  constexpr int32_t& __cordl_internal_get__op();

  constexpr void __cordl_internal_set__op(int32_t value);

  /// @brief Method .ctor, addr 0x6044f8c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t op);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZeroOpNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZeroOpNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZeroOpNode(ZeroOpNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZeroOpNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZeroOpNode(ZeroOpNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13830 };

  /// @brief Field _op, offset: 0x18, size: 0x4, def value: None
  int32_t ____op;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::ZeroOpNode, ____op) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Data::ZeroOpNode) == 0x20, "Size mismatch!");

} // namespace System::Data
