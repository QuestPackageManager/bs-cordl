#pragma once
// IWYU pragma private; include "System/Data/ZeroOpNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
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
MARK_REF_PTR_T(::System::Data::ZeroOpNode);
// Dependencies System.Data.ExpressionNode
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ZeroOpNode
class CORDL_TYPE ZeroOpNode : public ::System::Data::ExpressionNode {
public:
  // Declarations
  /// @brief Field _op, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__op, put = __cordl_internal_set__op)) int32_t _op;

  /// @brief Method Bind, addr 0x417e400, size 0x4, virtual true, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method Eval, addr 0x417e404, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x417e4cc, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Eval, addr 0x417e4c0, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method HasLocalAggregate, addr 0x417e4e8, size 0x8, virtual true, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x417e4f0, size 0x8, virtual true, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x417e4d8, size 0x8, virtual true, abstract: false, final false
  inline bool IsConstant();

  /// @brief Method IsTableConstant, addr 0x417e4e0, size 0x8, virtual true, abstract: false, final false
  inline bool IsTableConstant();

  static inline ::System::Data::ZeroOpNode* New_ctor(int32_t op);

  /// @brief Method Optimize, addr 0x417e4f8, size 0x4, virtual true, abstract: false, final false
  inline ::System::Data::ExpressionNode* Optimize();

  constexpr int32_t const& __cordl_internal_get__op() const;

  constexpr int32_t& __cordl_internal_get__op();

  constexpr void __cordl_internal_set__op(int32_t value);

  /// @brief Method .ctor, addr 0x417e3d4, size 0x2c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11441 };

  /// @brief Field _op, offset: 0x18, size: 0x4, def value: None
  int32_t ____op;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::ZeroOpNode, ____op) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::ZeroOpNode, 0x20>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ZeroOpNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ZeroOpNode*, "System.Data", "ZeroOpNode");
