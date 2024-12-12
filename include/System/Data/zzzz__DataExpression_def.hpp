#pragma once
// IWYU pragma private; include "System/Data/DataExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/Common/zzzz__StorageType_def.hpp"
#include "System/Data/zzzz__IFilter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DataExpression)
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
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class DataExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataExpression);
// Dependencies System.Data.Common.StorageType, System.Data.IFilter, System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataExpression
class CORDL_TYPE DataExpression : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Expression)) ::StringW Expression;

  __declspec(property(get = get_HasValue)) bool HasValue;

  /// @brief Field _bound, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__bound, put = __cordl_internal_set__bound)) bool _bound;

  /// @brief Field _dataType, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__dataType, put = __cordl_internal_set__dataType)) ::System::Type* _dataType;

  /// @brief Field _dependency, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__dependency, put = __cordl_internal_set__dependency)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> _dependency;

  /// @brief Field _expr, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__expr, put = __cordl_internal_set__expr)) ::System::Data::ExpressionNode* _expr;

  /// @brief Field _originalExpression, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__originalExpression, put = __cordl_internal_set__originalExpression)) ::StringW _originalExpression;

  /// @brief Field _parsed, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__parsed, put = __cordl_internal_set__parsed)) bool _parsed;

  /// @brief Field _storageType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__storageType, put = __cordl_internal_set__storageType)) ::System::Data::Common::StorageType _storageType;

  /// @brief Field _table, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  /// @brief Convert operator to "::System::Data::IFilter"
  constexpr operator ::System::Data::IFilter*() noexcept;

  /// @brief Method Bind, addr 0x41784b4, size 0xe8, virtual false, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table);

  /// @brief Method DependsOn, addr 0x416e0e8, size 0x1c, virtual false, abstract: false, final false
  inline bool DependsOn(::System::Data::DataColumn* column);

  /// @brief Method Evaluate, addr 0x41785fc, size 0xc, virtual false, abstract: false, final false
  inline ::System::Object* Evaluate();

  /// @brief Method Evaluate, addr 0x4178608, size 0x1f4, virtual false, abstract: false, final false
  inline ::System::Object* Evaluate(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method GetDependency, addr 0x41789f8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> GetDependency();

  /// @brief Method HasLocalAggregate, addr 0x4178a70, size 0x18, virtual false, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x4178a88, size 0x18, virtual false, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method Invoke, addr 0x4178888, size 0xdc, virtual true, abstract: false, final true
  inline bool Invoke(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method IsTableAggregate, addr 0x4178a00, size 0x18, virtual false, abstract: false, final false
  inline bool IsTableAggregate();

  /// @brief Method IsUnknown, addr 0x4178a18, size 0x58, virtual false, abstract: false, final false
  static inline bool IsUnknown(::System::Object* value);

  static inline ::System::Data::DataExpression* New_ctor(::System::Data::DataTable* table, ::StringW expression);

  static inline ::System::Data::DataExpression* New_ctor(::System::Data::DataTable* table, ::StringW expression, ::System::Type* type);

  /// @brief Method ToBoolean, addr 0x4175184, size 0x284, virtual false, abstract: false, final false
  static inline bool ToBoolean(::System::Object* value);

  constexpr bool const& __cordl_internal_get__bound() const;

  constexpr bool& __cordl_internal_get__bound();

  constexpr ::System::Type* const& __cordl_internal_get__dataType() const;

  constexpr ::System::Type*& __cordl_internal_get__dataType();

  constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> const& __cordl_internal_get__dependency() const;

  constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>& __cordl_internal_get__dependency();

  constexpr ::System::Data::ExpressionNode* const& __cordl_internal_get__expr() const;

  constexpr ::System::Data::ExpressionNode*& __cordl_internal_get__expr();

  constexpr ::StringW const& __cordl_internal_get__originalExpression() const;

  constexpr ::StringW& __cordl_internal_get__originalExpression();

  constexpr bool const& __cordl_internal_get__parsed() const;

  constexpr bool& __cordl_internal_get__parsed();

  constexpr ::System::Data::Common::StorageType const& __cordl_internal_get__storageType() const;

  constexpr ::System::Data::Common::StorageType& __cordl_internal_get__storageType();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__table() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr void __cordl_internal_set__bound(bool value);

  constexpr void __cordl_internal_set__dataType(::System::Type* value);

  constexpr void __cordl_internal_set__dependency(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> value);

  constexpr void __cordl_internal_set__expr(::System::Data::ExpressionNode* value);

  constexpr void __cordl_internal_set__originalExpression(::StringW value);

  constexpr void __cordl_internal_set__parsed(bool value);

  constexpr void __cordl_internal_set__storageType(::System::Data::Common::StorageType value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x416ba88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::StringW expression);

  /// @brief Method .ctor, addr 0x417748c, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::StringW expression, ::System::Type* type);

  /// @brief Method get_Expression, addr 0x417859c, size 0x50, virtual false, abstract: false, final false
  inline ::StringW get_Expression();

  /// @brief Method get_HasValue, addr 0x41785ec, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasValue();

  /// @brief Convert to "::System::Data::IFilter"
  constexpr ::System::Data::IFilter* i___System__Data__IFilter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataExpression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataExpression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataExpression(DataExpression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataExpression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataExpression(DataExpression const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11419 };

  /// @brief Field _originalExpression, offset: 0x10, size: 0x8, def value: None
  ::StringW ____originalExpression;

  /// @brief Field _parsed, offset: 0x18, size: 0x1, def value: None
  bool ____parsed;

  /// @brief Field _bound, offset: 0x19, size: 0x1, def value: None
  bool ____bound;

  /// @brief Field _expr, offset: 0x20, size: 0x8, def value: None
  ::System::Data::ExpressionNode* ____expr;

  /// @brief Field _table, offset: 0x28, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _storageType, offset: 0x30, size: 0x4, def value: None
  ::System::Data::Common::StorageType ____storageType;

  /// @brief Field _dataType, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ____dataType;

  /// @brief Field _dependency, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ____dependency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataExpression, ____originalExpression) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataExpression, ____parsed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataExpression, ____bound) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataExpression, ____expr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataExpression, ____table) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataExpression, ____storageType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataExpression, ____dataType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataExpression, ____dependency) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataExpression, 0x48>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataExpression*, "System.Data", "DataExpression");
