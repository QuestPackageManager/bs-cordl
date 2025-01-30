#pragma once
// IWYU pragma private; include "System/Data/BinaryNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryNode)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Data::Common {
struct StorageType;
}
namespace System::Data {
struct BinaryNode_DataTypePrecedence;
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
namespace System::Globalization {
class CompareInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
struct BinaryNode_DataTypePrecedence;
}
namespace System::Data {
class BinaryNode;
}
// Write type traits
MARK_VAL_T(::System::Data::BinaryNode_DataTypePrecedence);
MARK_REF_PTR_T(::System::Data::BinaryNode);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.BinaryNode/DataTypePrecedence
struct CORDL_TYPE BinaryNode_DataTypePrecedence {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BinaryNode_DataTypePrecedence_Unwrapped
  enum struct __BinaryNode_DataTypePrecedence_Unwrapped : int32_t {
    __E_SqlDateTime = static_cast<int32_t>(0x19),
    __E_DateTimeOffset = static_cast<int32_t>(0x18),
    __E_DateTime = static_cast<int32_t>(0x17),
    __E_TimeSpan = static_cast<int32_t>(0x14),
    __E_SqlDouble = static_cast<int32_t>(0x13),
    __E_Double = static_cast<int32_t>(0x12),
    __E_SqlSingle = static_cast<int32_t>(0x11),
    __E_Single = static_cast<int32_t>(0x10),
    __E_SqlDecimal = static_cast<int32_t>(0xf),
    __E_Decimal = static_cast<int32_t>(0xe),
    __E_SqlMoney = static_cast<int32_t>(0xd),
    __E_UInt64 = static_cast<int32_t>(0xc),
    __E_SqlInt64 = static_cast<int32_t>(0xb),
    __E_Int64 = static_cast<int32_t>(0xa),
    __E_UInt32 = static_cast<int32_t>(0x9),
    __E_SqlInt32 = static_cast<int32_t>(0x8),
    __E_Int32 = static_cast<int32_t>(0x7),
    __E_UInt16 = static_cast<int32_t>(0x6),
    __E_SqlInt16 = static_cast<int32_t>(0x5),
    __E_Int16 = static_cast<int32_t>(0x4),
    __E_Byte = static_cast<int32_t>(0x3),
    __E_SqlByte = static_cast<int32_t>(0x2),
    __E_SByte = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x0),
    __E_SqlBoolean = static_cast<int32_t>(0xffffffff),
    __E_Boolean = static_cast<int32_t>(0xfffffffe),
    __E_SqlGuid = static_cast<int32_t>(0xfffffffd),
    __E_SqlString = static_cast<int32_t>(0xfffffffc),
    __E_String = static_cast<int32_t>(0xfffffffb),
    __E_SqlXml = static_cast<int32_t>(0xfffffffa),
    __E_SqlChars = static_cast<int32_t>(0xfffffff9),
    __E_Char = static_cast<int32_t>(0xfffffff8),
    __E_SqlBytes = static_cast<int32_t>(0xfffffff7),
    __E_SqlBinary = static_cast<int32_t>(0xfffffff6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BinaryNode_DataTypePrecedence_Unwrapped() const noexcept {
    return static_cast<__BinaryNode_DataTypePrecedence_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryNode_DataTypePrecedence();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BinaryNode_DataTypePrecedence(int32_t value__) noexcept;

  /// @brief Field Boolean value: I32(-2)
  static ::System::Data::BinaryNode_DataTypePrecedence const Boolean;

  /// @brief Field Byte value: I32(3)
  static ::System::Data::BinaryNode_DataTypePrecedence const Byte;

  /// @brief Field Char value: I32(-8)
  static ::System::Data::BinaryNode_DataTypePrecedence const Char;

  /// @brief Field DateTime value: I32(23)
  static ::System::Data::BinaryNode_DataTypePrecedence const DateTime;

  /// @brief Field DateTimeOffset value: I32(24)
  static ::System::Data::BinaryNode_DataTypePrecedence const DateTimeOffset;

  /// @brief Field Decimal value: I32(14)
  static ::System::Data::BinaryNode_DataTypePrecedence const Decimal;

  /// @brief Field Double value: I32(18)
  static ::System::Data::BinaryNode_DataTypePrecedence const Double;

  /// @brief Field Error value: I32(0)
  static ::System::Data::BinaryNode_DataTypePrecedence const Error;

  /// @brief Field Int16 value: I32(4)
  static ::System::Data::BinaryNode_DataTypePrecedence const Int16;

  /// @brief Field Int32 value: I32(7)
  static ::System::Data::BinaryNode_DataTypePrecedence const Int32;

  /// @brief Field Int64 value: I32(10)
  static ::System::Data::BinaryNode_DataTypePrecedence const Int64;

  /// @brief Field SByte value: I32(1)
  static ::System::Data::BinaryNode_DataTypePrecedence const SByte;

  /// @brief Field Single value: I32(16)
  static ::System::Data::BinaryNode_DataTypePrecedence const Single;

  /// @brief Field SqlBinary value: I32(-10)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlBinary;

  /// @brief Field SqlBoolean value: I32(-1)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlBoolean;

  /// @brief Field SqlByte value: I32(2)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlByte;

  /// @brief Field SqlBytes value: I32(-9)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlBytes;

  /// @brief Field SqlChars value: I32(-7)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlChars;

  /// @brief Field SqlDateTime value: I32(25)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlDateTime;

  /// @brief Field SqlDecimal value: I32(15)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlDecimal;

  /// @brief Field SqlDouble value: I32(19)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlDouble;

  /// @brief Field SqlGuid value: I32(-3)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlGuid;

  /// @brief Field SqlInt16 value: I32(5)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlInt16;

  /// @brief Field SqlInt32 value: I32(8)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlInt32;

  /// @brief Field SqlInt64 value: I32(11)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlInt64;

  /// @brief Field SqlMoney value: I32(13)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlMoney;

  /// @brief Field SqlSingle value: I32(17)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlSingle;

  /// @brief Field SqlString value: I32(-4)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlString;

  /// @brief Field SqlXml value: I32(-6)
  static ::System::Data::BinaryNode_DataTypePrecedence const SqlXml;

  /// @brief Field String value: I32(-5)
  static ::System::Data::BinaryNode_DataTypePrecedence const String;

  /// @brief Field TimeSpan value: I32(20)
  static ::System::Data::BinaryNode_DataTypePrecedence const TimeSpan;

  /// @brief Field UInt16 value: I32(6)
  static ::System::Data::BinaryNode_DataTypePrecedence const UInt16;

  /// @brief Field UInt32 value: I32(9)
  static ::System::Data::BinaryNode_DataTypePrecedence const UInt32;

  /// @brief Field UInt64 value: I32(12)
  static ::System::Data::BinaryNode_DataTypePrecedence const UInt64;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11418 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::BinaryNode_DataTypePrecedence, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::BinaryNode_DataTypePrecedence, 0x4>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Data.ExpressionNode
namespace System::Data {
// Is value type: false
// CS Name: System.Data.BinaryNode
class CORDL_TYPE BinaryNode : public ::System::Data::ExpressionNode {
public:
  // Declarations
  using DataTypePrecedence = ::System::Data::BinaryNode_DataTypePrecedence;

  /// @brief Field _left, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__left, put = __cordl_internal_set__left)) ::System::Data::ExpressionNode* _left;

  /// @brief Field _op, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__op, put = __cordl_internal_set__op)) int32_t _op;

  /// @brief Field _right, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__right, put = __cordl_internal_set__right)) ::System::Data::ExpressionNode* _right;

  /// @brief Method BinaryCompare, addr 0x41773c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t BinaryCompare(::System::Object* vLeft, ::System::Object* vRight, ::System::Data::Common::StorageType resultType, int32_t op);

  /// @brief Method BinaryCompare, addr 0x41773cc, size 0xfb0, virtual false, abstract: false, final false
  inline int32_t BinaryCompare(::System::Object* vLeft, ::System::Object* vRight, ::System::Data::Common::StorageType resultType, int32_t op, ::System::Globalization::CompareInfo* comparer);

  /// @brief Method Bind, addr 0x41713b0, size 0x54, virtual true, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method DependsOn, addr 0x4176cd8, size 0x64, virtual true, abstract: false, final false
  inline bool DependsOn(::System::Data::DataColumn* column);

  /// @brief Method Eval, addr 0x4171404, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x4177394, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Object* Eval(::System::Data::ExpressionNode* expr, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version, ::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Eval, addr 0x4176b9c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Eval, addr 0x4171418, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method EvalBinaryOp, addr 0x4171434, size 0x5768, virtual false, abstract: false, final false
  inline ::System::Object* EvalBinaryOp(int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version,
                                        ::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method GetPrecedence, addr 0x4178fa8, size 0x24, virtual false, abstract: false, final false
  inline ::System::Data::BinaryNode_DataTypePrecedence GetPrecedence(::System::Data::Common::StorageType storageType);

  /// @brief Method GetPrecedenceType, addr 0x4178fcc, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Data::Common::StorageType GetPrecedenceType(::System::Data::BinaryNode_DataTypePrecedence code);

  /// @brief Method HasLocalAggregate, addr 0x4176c48, size 0x48, virtual true, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x4176c90, size 0x48, virtual true, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x4176bb8, size 0x48, virtual true, abstract: false, final false
  inline bool IsConstant();

  /// @brief Method IsMixed, addr 0x4178ff0, size 0x94, virtual false, abstract: false, final false
  inline bool IsMixed(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right);

  /// @brief Method IsMixedSql, addr 0x41790d4, size 0x8c, virtual false, abstract: false, final false
  inline bool IsMixedSql(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right);

  /// @brief Method IsTableConstant, addr 0x4176c00, size 0x48, virtual true, abstract: false, final false
  inline bool IsTableConstant();

  static inline ::System::Data::BinaryNode* New_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right);

  /// @brief Method Optimize, addr 0x4176d3c, size 0x234, virtual true, abstract: false, final false
  inline ::System::Data::ExpressionNode* Optimize();

  /// @brief Method ResultSqlType, addr 0x417866c, size 0x3e4, virtual false, abstract: false, final false
  inline ::System::Data::Common::StorageType ResultSqlType(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right, bool lc, bool rc, int32_t op);

  /// @brief Method ResultType, addr 0x4178a50, size 0x3fc, virtual false, abstract: false, final false
  inline ::System::Data::Common::StorageType ResultType(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right, bool lc, bool rc, int32_t op);

  /// @brief Method SetTypeMismatchError, addr 0x4177294, size 0x30, virtual false, abstract: false, final false
  inline void SetTypeMismatchError(int32_t op, ::System::Type* left, ::System::Type* right);

  /// @brief Method SqlResultType, addr 0x41792b4, size 0x34, virtual false, abstract: false, final false
  inline int32_t SqlResultType(int32_t typeCode);

  constexpr ::System::Data::ExpressionNode* const& __cordl_internal_get__left() const;

  constexpr ::System::Data::ExpressionNode*& __cordl_internal_get__left();

  constexpr int32_t const& __cordl_internal_get__op() const;

  constexpr int32_t& __cordl_internal_get__op();

  constexpr ::System::Data::ExpressionNode* const& __cordl_internal_get__right() const;

  constexpr ::System::Data::ExpressionNode*& __cordl_internal_get__right();

  constexpr void __cordl_internal_set__left(::System::Data::ExpressionNode* value);

  constexpr void __cordl_internal_set__op(int32_t value);

  constexpr void __cordl_internal_set__right(::System::Data::ExpressionNode* value);

  /// @brief Method .ctor, addr 0x417136c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryNode(BinaryNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryNode(BinaryNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11419 };

  /// @brief Field _op, offset: 0x18, size: 0x4, def value: None
  int32_t ____op;

  /// @brief Field _left, offset: 0x20, size: 0x8, def value: None
  ::System::Data::ExpressionNode* ____left;

  /// @brief Field _right, offset: 0x28, size: 0x8, def value: None
  ::System::Data::ExpressionNode* ____right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::BinaryNode, ____op) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::BinaryNode, ____left) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::BinaryNode, ____right) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::BinaryNode, 0x30>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::BinaryNode_DataTypePrecedence, "System.Data", "BinaryNode/DataTypePrecedence");
NEED_NO_BOX(::System::Data::BinaryNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::BinaryNode*, "System.Data", "BinaryNode");
