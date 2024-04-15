#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionNode)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Data::Common {
struct StorageType;
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
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class ExpressionNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ExpressionNode);
// Type: System.Data::ExpressionNode
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::ExpressionNode*
class CORDL_TYPE ExpressionNode : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FormatProvider))::System::IFormatProvider* FormatProvider;

  __declspec(property(get = get_IsSqlColumn)) bool IsSqlColumn;

  /// @brief Field _table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table))::System::Data::DataTable* _table;

  __declspec(property(get = get_table))::System::Data::DataTable* table;

  /// @brief Method Bind, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method BindTable, addr 0x2bcceb0, size 0x8, virtual false, abstract: false, final false
  inline void BindTable(::System::Data::DataTable* table);

  /// @brief Method DependsOn, addr 0x2bcceb8, size 0x8, virtual true, abstract: false, final false
  inline bool DependsOn(::System::Data::DataColumn* column);

  /// @brief Method Eval, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Eval(::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Eval, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method HasLocalAggregate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsConstant();

  /// @brief Method IsFloat, addr 0x2bccec0, size 0x20, virtual false, abstract: false, final false
  static inline bool IsFloat(::System::Data::Common::StorageType type);

  /// @brief Method IsFloatSql, addr 0x2bccee0, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsFloatSql(::System::Data::Common::StorageType type);

  /// @brief Method IsInteger, addr 0x2bca300, size 0x24, virtual false, abstract: false, final false
  static inline bool IsInteger(::System::Data::Common::StorageType type);

  /// @brief Method IsIntegerSql, addr 0x2bc9f00, size 0x38, virtual false, abstract: false, final false
  static inline bool IsIntegerSql(::System::Data::Common::StorageType type);

  /// @brief Method IsNumeric, addr 0x2bca2e0, size 0x20, virtual false, abstract: false, final false
  static inline bool IsNumeric(::System::Data::Common::StorageType type);

  /// @brief Method IsNumericSql, addr 0x2bca428, size 0x64, virtual false, abstract: false, final false
  static inline bool IsNumericSql(::System::Data::Common::StorageType type);

  /// @brief Method IsSigned, addr 0x2bca14c, size 0x48, virtual false, abstract: false, final false
  static inline bool IsSigned(::System::Data::Common::StorageType type);

  /// @brief Method IsSignedSql, addr 0x2bca26c, size 0x38, virtual false, abstract: false, final false
  static inline bool IsSignedSql(::System::Data::Common::StorageType type);

  /// @brief Method IsTableConstant, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsTableConstant();

  /// @brief Method IsUnsigned, addr 0x2bca194, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsUnsigned(::System::Data::Common::StorageType type);

  /// @brief Method IsUnsignedSql, addr 0x2bca2a4, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsUnsignedSql(::System::Data::Common::StorageType type);

  static inline ::System::Data::ExpressionNode* New_ctor(::System::Data::DataTable* table);

  /// @brief Method Optimize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Data::ExpressionNode* Optimize();

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__table() const;

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x2bc1a6c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table);

  /// @brief Method get_FormatProvider, addr 0x2bc9468, size 0x6c, virtual false, abstract: false, final false
  inline ::System::IFormatProvider* get_FormatProvider();

  /// @brief Method get_IsSqlColumn, addr 0x2bccea0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSqlColumn();

  /// @brief Method get_table, addr 0x2bccea8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* get_table();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionNode(ExpressionNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionNode(ExpressionNode const&) = delete;

  /// @brief Field _table, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ExpressionNode, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Data::ExpressionNode, ____table) == 0x10, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ExpressionNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ExpressionNode*, "System.Data", "ExpressionNode");
