#pragma once
// IWYU pragma private; include "System/Data/AggregateNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__AggregateType_def.hpp"
#include "System/Data/zzzz__Aggregate_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AggregateNode)
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
namespace System::Data {
struct FunctionId;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class AggregateNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::AggregateNode);
// Type: System.Data::AggregateNode
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::AggregateNode*
class CORDL_TYPE AggregateNode : public ::System::Data::ExpressionNode {
public:
  // Declarations
  /// @brief Field _aggregate, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__aggregate, put = __cordl_internal_set__aggregate))::System::Data::Aggregate _aggregate;

  /// @brief Field _childTable, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__childTable, put = __cordl_internal_set__childTable))::System::Data::DataTable* _childTable;

  /// @brief Field _column, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__column, put = __cordl_internal_set__column))::System::Data::DataColumn* _column;

  /// @brief Field _columnName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__columnName, put = __cordl_internal_set__columnName))::StringW _columnName;

  /// @brief Field _local, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__local, put = __cordl_internal_set__local)) bool _local;

  /// @brief Field _relation, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__relation, put = __cordl_internal_set__relation))::System::Data::DataRelation* _relation;

  /// @brief Field _relationName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__relationName, put = __cordl_internal_set__relationName))::StringW _relationName;

  /// @brief Field _type, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type))::System::Data::AggregateType _type;

  /// @brief Method Bind, addr 0x2cbe754, size 0x1ec, virtual false, abstract: false, final false
  static inline void Bind(::System::Data::DataRelation* relation, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method Bind, addr 0x2cbe3e4, size 0x270, virtual true, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method DependsOn, addr 0x2cbed54, size 0x7c, virtual true, abstract: false, final false
  inline bool DependsOn(::System::Data::DataColumn* column);

  /// @brief Method Eval, addr 0x2cbe940, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x2cbec68, size 0x74, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::ArrayW<int32_t, ::Array<int32_t>*> records);

  /// @brief Method Eval, addr 0x2cbe954, size 0x2d4, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method HasLocalAggregate, addr 0x2cbed3c, size 0x8, virtual true, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x2cbed44, size 0x10, virtual true, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x2cbed2c, size 0x8, virtual true, abstract: false, final false
  inline bool IsConstant();

  /// @brief Method IsTableConstant, addr 0x2cbed34, size 0x8, virtual true, abstract: false, final false
  inline bool IsTableConstant();

  static inline ::System::Data::AggregateNode* New_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName);

  static inline ::System::Data::AggregateNode* New_ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName, bool local, ::StringW relationName);

  /// @brief Method Optimize, addr 0x2cbedec, size 0x4, virtual true, abstract: false, final false
  inline ::System::Data::ExpressionNode* Optimize();

  constexpr ::System::Data::Aggregate const& __cordl_internal_get__aggregate() const;

  constexpr ::System::Data::Aggregate& __cordl_internal_get__aggregate();

  constexpr ::System::Data::DataTable*& __cordl_internal_get__childTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__childTable() const;

  constexpr ::System::Data::DataColumn*& __cordl_internal_get__column();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataColumn*> const& __cordl_internal_get__column() const;

  constexpr ::StringW const& __cordl_internal_get__columnName() const;

  constexpr ::StringW& __cordl_internal_get__columnName();

  constexpr bool const& __cordl_internal_get__local() const;

  constexpr bool& __cordl_internal_get__local();

  constexpr ::System::Data::DataRelation*& __cordl_internal_get__relation();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRelation*> const& __cordl_internal_get__relation() const;

  constexpr ::StringW const& __cordl_internal_get__relationName() const;

  constexpr ::StringW& __cordl_internal_get__relationName();

  constexpr ::System::Data::AggregateType const& __cordl_internal_get__type() const;

  constexpr ::System::Data::AggregateType& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__aggregate(::System::Data::Aggregate value);

  constexpr void __cordl_internal_set__childTable(::System::Data::DataTable* value);

  constexpr void __cordl_internal_set__column(::System::Data::DataColumn* value);

  constexpr void __cordl_internal_set__columnName(::StringW value);

  constexpr void __cordl_internal_set__local(bool value);

  constexpr void __cordl_internal_set__relation(::System::Data::DataRelation* value);

  constexpr void __cordl_internal_set__relationName(::StringW value);

  constexpr void __cordl_internal_set__type(::System::Data::AggregateType value);

  /// @brief Method .ctor, addr 0x2cbe288, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName);

  /// @brief Method .ctor, addr 0x2cbe294, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::System::Data::FunctionId aggregateType, ::StringW columnName, bool local, ::StringW relationName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AggregateNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AggregateNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AggregateNode(AggregateNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AggregateNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AggregateNode(AggregateNode const&) = delete;

  /// @brief Field _type, offset: 0x18, size: 0x4, def value: None
  ::System::Data::AggregateType ____type;

  /// @brief Field _aggregate, offset: 0x1c, size: 0x4, def value: None
  ::System::Data::Aggregate ____aggregate;

  /// @brief Field _local, offset: 0x20, size: 0x1, def value: None
  bool ____local;

  /// @brief Field _relationName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____relationName;

  /// @brief Field _columnName, offset: 0x30, size: 0x8, def value: None
  ::StringW ____columnName;

  /// @brief Field _childTable, offset: 0x38, size: 0x8, def value: None
  ::System::Data::DataTable* ____childTable;

  /// @brief Field _column, offset: 0x40, size: 0x8, def value: None
  ::System::Data::DataColumn* ____column;

  /// @brief Field _relation, offset: 0x48, size: 0x8, def value: None
  ::System::Data::DataRelation* ____relation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::AggregateNode, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Data::AggregateNode, ____type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::AggregateNode, ____aggregate) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Data::AggregateNode, ____local) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::AggregateNode, ____relationName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::AggregateNode, ____columnName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::AggregateNode, ____childTable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::AggregateNode, ____column) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::AggregateNode, ____relation) == 0x48, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::AggregateNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::AggregateNode*, "System.Data", "AggregateNode");
