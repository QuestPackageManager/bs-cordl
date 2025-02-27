#pragma once
// IWYU pragma private; include "System/Data/LookupNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LookupNode)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataRelation;
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
class LookupNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::LookupNode);
// Dependencies System.Data.ExpressionNode
namespace System::Data {
// Is value type: false
// CS Name: System.Data.LookupNode
class CORDL_TYPE LookupNode : public ::System::Data::ExpressionNode {
public:
  // Declarations
  /// @brief Field _column, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__column, put = __cordl_internal_set__column)) ::System::Data::DataColumn* _column;

  /// @brief Field _columnName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__columnName, put = __cordl_internal_set__columnName)) ::StringW _columnName;

  /// @brief Field _relation, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__relation, put = __cordl_internal_set__relation)) ::System::Data::DataRelation* _relation;

  /// @brief Field _relationName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__relationName, put = __cordl_internal_set__relationName)) ::StringW _relationName;

  /// @brief Method Bind, addr 0x4189e64, size 0x248, virtual true, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method DependsOn, addr 0x418a224, size 0x10, virtual true, abstract: false, final false
  inline bool DependsOn(::System::Data::DataColumn* column);

  /// @brief Method Eval, addr 0x418a0ac, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x418a1d4, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Eval, addr 0x418a0d0, size 0x104, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method HasLocalAggregate, addr 0x418a214, size 0x8, virtual true, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x418a21c, size 0x8, virtual true, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x418a204, size 0x8, virtual true, abstract: false, final false
  inline bool IsConstant();

  /// @brief Method IsTableConstant, addr 0x418a20c, size 0x8, virtual true, abstract: false, final false
  inline bool IsTableConstant();

  static inline ::System::Data::LookupNode* New_ctor(::System::Data::DataTable* table, ::StringW columnName, ::StringW relationName);

  /// @brief Method Optimize, addr 0x418a234, size 0x4, virtual true, abstract: false, final false
  inline ::System::Data::ExpressionNode* Optimize();

  constexpr ::System::Data::DataColumn* const& __cordl_internal_get__column() const;

  constexpr ::System::Data::DataColumn*& __cordl_internal_get__column();

  constexpr ::StringW const& __cordl_internal_get__columnName() const;

  constexpr ::StringW& __cordl_internal_get__columnName();

  constexpr ::System::Data::DataRelation* const& __cordl_internal_get__relation() const;

  constexpr ::System::Data::DataRelation*& __cordl_internal_get__relation();

  constexpr ::StringW const& __cordl_internal_get__relationName() const;

  constexpr ::StringW& __cordl_internal_get__relationName();

  constexpr void __cordl_internal_set__column(::System::Data::DataColumn* value);

  constexpr void __cordl_internal_set__columnName(::StringW value);

  constexpr void __cordl_internal_set__relation(::System::Data::DataRelation* value);

  constexpr void __cordl_internal_set__relationName(::StringW value);

  /// @brief Method .ctor, addr 0x4188438, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::StringW columnName, ::StringW relationName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LookupNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LookupNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LookupNode(LookupNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LookupNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LookupNode(LookupNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11437 };

  /// @brief Field _relationName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____relationName;

  /// @brief Field _columnName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____columnName;

  /// @brief Field _column, offset: 0x28, size: 0x8, def value: None
  ::System::Data::DataColumn* ____column;

  /// @brief Field _relation, offset: 0x30, size: 0x8, def value: None
  ::System::Data::DataRelation* ____relation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::LookupNode, ____relationName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::LookupNode, ____columnName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::LookupNode, ____column) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::LookupNode, ____relation) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::LookupNode, 0x38>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::LookupNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::LookupNode*, "System.Data", "LookupNode");
