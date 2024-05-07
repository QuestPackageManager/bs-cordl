#pragma once
// IWYU pragma private; include "System/Data/LookupNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Data::LookupNode
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::LookupNode*
class CORDL_TYPE LookupNode : public ::System::Data::ExpressionNode {
public:
  // Declarations
  /// @brief Field _column, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__column, put = __cordl_internal_set__column))::System::Data::DataColumn* _column;

  /// @brief Field _columnName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__columnName, put = __cordl_internal_set__columnName))::StringW _columnName;

  /// @brief Field _relation, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__relation, put = __cordl_internal_set__relation))::System::Data::DataRelation* _relation;

  /// @brief Field _relationName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__relationName, put = __cordl_internal_set__relationName))::StringW _relationName;

  /// @brief Method Bind, addr 0x2cd04b4, size 0x24c, virtual true, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method DependsOn, addr 0x2cd0878, size 0x10, virtual true, abstract: false, final false
  inline bool DependsOn(::System::Data::DataColumn* column);

  /// @brief Method Eval, addr 0x2cd0700, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x2cd0828, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Eval, addr 0x2cd0724, size 0x104, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method HasLocalAggregate, addr 0x2cd0868, size 0x8, virtual true, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x2cd0870, size 0x8, virtual true, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x2cd0858, size 0x8, virtual true, abstract: false, final false
  inline bool IsConstant();

  /// @brief Method IsTableConstant, addr 0x2cd0860, size 0x8, virtual true, abstract: false, final false
  inline bool IsTableConstant();

  static inline ::System::Data::LookupNode* New_ctor(::System::Data::DataTable* table, ::StringW columnName, ::StringW relationName);

  /// @brief Method Optimize, addr 0x2cd0888, size 0x4, virtual true, abstract: false, final false
  inline ::System::Data::ExpressionNode* Optimize();

  constexpr ::System::Data::DataColumn*& __cordl_internal_get__column();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataColumn*> const& __cordl_internal_get__column() const;

  constexpr ::StringW const& __cordl_internal_get__columnName() const;

  constexpr ::StringW& __cordl_internal_get__columnName();

  constexpr ::System::Data::DataRelation*& __cordl_internal_get__relation();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataRelation*> const& __cordl_internal_get__relation() const;

  constexpr ::StringW const& __cordl_internal_get__relationName() const;

  constexpr ::StringW& __cordl_internal_get__relationName();

  constexpr void __cordl_internal_set__column(::System::Data::DataColumn* value);

  constexpr void __cordl_internal_set__columnName(::StringW value);

  constexpr void __cordl_internal_set__relation(::System::Data::DataRelation* value);

  constexpr void __cordl_internal_set__relationName(::StringW value);

  /// @brief Method .ctor, addr 0x2cca2b0, size 0x3c, virtual false, abstract: false, final false
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
static_assert(::cordl_internals::size_check_v<::System::Data::LookupNode, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Data::LookupNode, ____relationName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::LookupNode, ____columnName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::LookupNode, ____column) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::LookupNode, ____relation) == 0x30, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::LookupNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::LookupNode*, "System.Data", "LookupNode");
