#pragma once
// IWYU pragma private; include "System/Data/ConstNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstNode)
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
namespace System::Data {
struct ValueType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class ConstNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ConstNode);
// Dependencies System.Data.ExpressionNode
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ConstNode
class CORDL_TYPE ConstNode : public ::System::Data::ExpressionNode {
public:
  // Declarations
  /// @brief Field _val, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__val, put = __cordl_internal_set__val)) ::System::Object* _val;

  /// @brief Method Bind, addr 0x417d2fc, size 0x8, virtual true, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method Eval, addr 0x417d304, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x417d318, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Eval, addr 0x417d30c, size 0xc, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method HasLocalAggregate, addr 0x417d334, size 0x8, virtual true, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x417d33c, size 0x8, virtual true, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x417d324, size 0x8, virtual true, abstract: false, final false
  inline bool IsConstant();

  /// @brief Method IsTableConstant, addr 0x417d32c, size 0x8, virtual true, abstract: false, final false
  inline bool IsTableConstant();

  static inline ::System::Data::ConstNode* New_ctor(::System::Data::DataTable* table, ::System::Data::ValueType type, ::System::Object* constant);

  static inline ::System::Data::ConstNode* New_ctor(::System::Data::DataTable* table, ::System::Data::ValueType type, ::System::Object* constant, bool fParseQuotes);

  /// @brief Method Optimize, addr 0x417d344, size 0x4, virtual true, abstract: false, final false
  inline ::System::Data::ExpressionNode* Optimize();

  /// @brief Method SmallestDecimal, addr 0x417ce6c, size 0x490, virtual false, abstract: false, final false
  inline ::System::Object* SmallestDecimal(::System::Object* constant);

  /// @brief Method SmallestNumeric, addr 0x417c83c, size 0x630, virtual false, abstract: false, final false
  inline ::System::Object* SmallestNumeric(::System::Object* constant);

  constexpr ::System::Object* const& __cordl_internal_get__val() const;

  constexpr ::System::Object*& __cordl_internal_get__val();

  constexpr void __cordl_internal_set__val(::System::Object* value);

  /// @brief Method .ctor, addr 0x417c834, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::System::Data::ValueType type, ::System::Object* constant);

  /// @brief Method .ctor, addr 0x4179c08, size 0x2e4, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::System::Data::ValueType type, ::System::Object* constant, bool fParseQuotes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstNode(ConstNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstNode(ConstNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11422 };

  /// @brief Field _val, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____val;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::ConstNode, ____val) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::ConstNode, 0x20>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ConstNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ConstNode*, "System.Data", "ConstNode");
