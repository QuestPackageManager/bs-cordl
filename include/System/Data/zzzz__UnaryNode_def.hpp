#pragma once
// IWYU pragma private; include "System/Data/UnaryNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnaryNode)
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
class UnaryNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::UnaryNode);
// Type: System.Data::UnaryNode
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::UnaryNode*
class CORDL_TYPE UnaryNode : public ::System::Data::ExpressionNode {
public:
  // Declarations
  /// @brief Field _op, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__op, put = __cordl_internal_set__op)) int32_t _op;

  /// @brief Field _right, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__right, put = __cordl_internal_set__right))::System::Data::ExpressionNode* _right;

  /// @brief Method Bind, addr 0x2cd2a08, size 0x28, virtual true, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method DependsOn, addr 0x2cd32f4, size 0x24, virtual true, abstract: false, final false
  inline bool DependsOn(::System::Data::DataColumn* column);

  /// @brief Method Eval, addr 0x2cd2a30, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x2cd3254, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Eval, addr 0x2cd2a44, size 0x40, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method EvalUnaryOp, addr 0x2cd2a84, size 0x7d0, virtual false, abstract: false, final false
  inline ::System::Object* EvalUnaryOp(int32_t op, ::System::Object* vl);

  /// @brief Method HasLocalAggregate, addr 0x2cd32b4, size 0x20, virtual true, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x2cd32d4, size 0x20, virtual true, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x2cd3274, size 0x20, virtual true, abstract: false, final false
  inline bool IsConstant();

  /// @brief Method IsTableConstant, addr 0x2cd3294, size 0x20, virtual true, abstract: false, final false
  inline bool IsTableConstant();

  static inline ::System::Data::UnaryNode* New_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* right);

  /// @brief Method Optimize, addr 0x2cd3318, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Data::ExpressionNode* Optimize();

  constexpr int32_t const& __cordl_internal_get__op() const;

  constexpr int32_t& __cordl_internal_get__op();

  constexpr ::System::Data::ExpressionNode*& __cordl_internal_get__right();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::ExpressionNode*> const& __cordl_internal_get__right() const;

  constexpr void __cordl_internal_set__op(int32_t value);

  constexpr void __cordl_internal_set__right(::System::Data::ExpressionNode* value);

  /// @brief Method .ctor, addr 0x2cd29d8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnaryNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnaryNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnaryNode(UnaryNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnaryNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnaryNode(UnaryNode const&) = delete;

  /// @brief Field _op, offset: 0x18, size: 0x4, def value: None
  int32_t ____op;

  /// @brief Field _right, offset: 0x20, size: 0x8, def value: None
  ::System::Data::ExpressionNode* ____right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::UnaryNode, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Data::UnaryNode, ____op) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::UnaryNode, ____right) == 0x20, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::UnaryNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::UnaryNode*, "System.Data", "UnaryNode");
