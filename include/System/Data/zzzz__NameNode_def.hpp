#pragma once
// IWYU pragma private; include "System/Data/NameNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameNode)
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
class NameNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::NameNode);
// Dependencies System.Data.ExpressionNode
namespace System::Data {
// Is value type: false
// CS Name: System.Data.NameNode
class CORDL_TYPE NameNode : public ::System::Data::ExpressionNode {
public:
  // Declarations
  __declspec(property(get = get_IsSqlColumn)) bool IsSqlColumn;

  /// @brief Field _column, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__column, put = __cordl_internal_set__column)) ::System::Data::DataColumn* _column;

  /// @brief Field _found, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__found, put = __cordl_internal_set__found)) bool _found;

  /// @brief Field _name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Method Bind, addr 0x417c9a8, size 0x228, virtual true, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method DependsOn, addr 0x417cdc4, size 0x7c, virtual true, abstract: false, final false
  inline bool DependsOn(::System::Data::DataColumn* column);

  /// @brief Method Eval, addr 0x417cbd0, size 0x24, virtual true, abstract: false, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x417cc90, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::ArrayW<int32_t, ::Array<int32_t>*> records);

  /// @brief Method Eval, addr 0x417cbf4, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method HasLocalAggregate, addr 0x417cd1c, size 0x54, virtual true, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x417cd70, size 0x54, virtual true, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x417ccc0, size 0x8, virtual true, abstract: false, final false
  inline bool IsConstant();

  /// @brief Method IsTableConstant, addr 0x417ccc8, size 0x54, virtual true, abstract: false, final false
  inline bool IsTableConstant();

  static inline ::System::Data::NameNode* New_ctor(::System::Data::DataTable* table, ::StringW name);

  static inline ::System::Data::NameNode* New_ctor(::System::Data::DataTable* table, ::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t start, int32_t pos);

  /// @brief Method Optimize, addr 0x417ce40, size 0x4, virtual true, abstract: false, final false
  inline ::System::Data::ExpressionNode* Optimize();

  /// @brief Method ParseName, addr 0x417a914, size 0x1f4, virtual false, abstract: false, final false
  static inline ::StringW ParseName(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t start, int32_t pos);

  constexpr ::System::Data::DataColumn* const& __cordl_internal_get__column() const;

  constexpr ::System::Data::DataColumn*& __cordl_internal_get__column();

  constexpr bool const& __cordl_internal_get__found() const;

  constexpr bool& __cordl_internal_get__found();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr void __cordl_internal_set__column(::System::Data::DataColumn* value);

  constexpr void __cordl_internal_set__found(bool value);

  constexpr void __cordl_internal_set__name(::StringW value);

  /// @brief Method .ctor, addr 0x417b0a4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::StringW name);

  /// @brief Method .ctor, addr 0x417abc8, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t start, int32_t pos);

  /// @brief Method get_IsSqlColumn, addr 0x417c98c, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsSqlColumn();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameNode(NameNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameNode(NameNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11438 };

  /// @brief Field _name, offset: 0x18, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _found, offset: 0x20, size: 0x1, def value: None
  bool ____found;

  /// @brief Field _column, offset: 0x28, size: 0x8, def value: None
  ::System::Data::DataColumn* ____column;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::NameNode, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::NameNode, ____found) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::NameNode, ____column) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::NameNode, 0x30>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::NameNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::NameNode*, "System.Data", "NameNode");
