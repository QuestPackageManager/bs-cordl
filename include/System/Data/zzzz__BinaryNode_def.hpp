#pragma once
// IWYU pragma private; include "System/Data/BinaryNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct __BinaryNode__DataTypePrecedence;
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
struct __BinaryNode__DataTypePrecedence;
}
namespace System::Data {
class BinaryNode;
}
// Write type traits
MARK_VAL_T(::System::Data::__BinaryNode__DataTypePrecedence);
MARK_REF_PTR_T(::System::Data::BinaryNode);
// Type: ::DataTypePrecedence
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::BinaryNode::DataTypePrecedence
struct CORDL_TYPE __BinaryNode__DataTypePrecedence {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BinaryNode__DataTypePrecedence_Unwrapped
  enum struct ____BinaryNode__DataTypePrecedence_Unwrapped : int32_t {
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
  constexpr operator ____BinaryNode__DataTypePrecedence_Unwrapped() const noexcept {
    return static_cast<____BinaryNode__DataTypePrecedence_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BinaryNode__DataTypePrecedence();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BinaryNode__DataTypePrecedence(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Boolean value: static_cast<int32_t>(0xfffffffe)
  static ::System::Data::__BinaryNode__DataTypePrecedence const Boolean;

  /// @brief Field Byte value: static_cast<int32_t>(0x3)
  static ::System::Data::__BinaryNode__DataTypePrecedence const Byte;

  /// @brief Field Char value: static_cast<int32_t>(0xfffffff8)
  static ::System::Data::__BinaryNode__DataTypePrecedence const Char;

  /// @brief Field DateTime value: static_cast<int32_t>(0x17)
  static ::System::Data::__BinaryNode__DataTypePrecedence const DateTime;

  /// @brief Field DateTimeOffset value: static_cast<int32_t>(0x18)
  static ::System::Data::__BinaryNode__DataTypePrecedence const DateTimeOffset;

  /// @brief Field Decimal value: static_cast<int32_t>(0xe)
  static ::System::Data::__BinaryNode__DataTypePrecedence const Decimal;

  /// @brief Field Double value: static_cast<int32_t>(0x12)
  static ::System::Data::__BinaryNode__DataTypePrecedence const Double;

  /// @brief Field Error value: static_cast<int32_t>(0x0)
  static ::System::Data::__BinaryNode__DataTypePrecedence const Error;

  /// @brief Field Int16 value: static_cast<int32_t>(0x4)
  static ::System::Data::__BinaryNode__DataTypePrecedence const Int16;

  /// @brief Field Int32 value: static_cast<int32_t>(0x7)
  static ::System::Data::__BinaryNode__DataTypePrecedence const Int32;

  /// @brief Field Int64 value: static_cast<int32_t>(0xa)
  static ::System::Data::__BinaryNode__DataTypePrecedence const Int64;

  /// @brief Field SByte value: static_cast<int32_t>(0x1)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SByte;

  /// @brief Field Single value: static_cast<int32_t>(0x10)
  static ::System::Data::__BinaryNode__DataTypePrecedence const Single;

  /// @brief Field SqlBinary value: static_cast<int32_t>(0xfffffff6)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlBinary;

  /// @brief Field SqlBoolean value: static_cast<int32_t>(0xffffffff)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlBoolean;

  /// @brief Field SqlByte value: static_cast<int32_t>(0x2)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlByte;

  /// @brief Field SqlBytes value: static_cast<int32_t>(0xfffffff7)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlBytes;

  /// @brief Field SqlChars value: static_cast<int32_t>(0xfffffff9)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlChars;

  /// @brief Field SqlDateTime value: static_cast<int32_t>(0x19)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlDateTime;

  /// @brief Field SqlDecimal value: static_cast<int32_t>(0xf)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlDecimal;

  /// @brief Field SqlDouble value: static_cast<int32_t>(0x13)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlDouble;

  /// @brief Field SqlGuid value: static_cast<int32_t>(0xfffffffd)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlGuid;

  /// @brief Field SqlInt16 value: static_cast<int32_t>(0x5)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlInt16;

  /// @brief Field SqlInt32 value: static_cast<int32_t>(0x8)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlInt32;

  /// @brief Field SqlInt64 value: static_cast<int32_t>(0xb)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlInt64;

  /// @brief Field SqlMoney value: static_cast<int32_t>(0xd)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlMoney;

  /// @brief Field SqlSingle value: static_cast<int32_t>(0x11)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlSingle;

  /// @brief Field SqlString value: static_cast<int32_t>(0xfffffffc)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlString;

  /// @brief Field SqlXml value: static_cast<int32_t>(0xfffffffa)
  static ::System::Data::__BinaryNode__DataTypePrecedence const SqlXml;

  /// @brief Field String value: static_cast<int32_t>(0xfffffffb)
  static ::System::Data::__BinaryNode__DataTypePrecedence const String;

  /// @brief Field TimeSpan value: static_cast<int32_t>(0x14)
  static ::System::Data::__BinaryNode__DataTypePrecedence const TimeSpan;

  /// @brief Field UInt16 value: static_cast<int32_t>(0x6)
  static ::System::Data::__BinaryNode__DataTypePrecedence const UInt16;

  /// @brief Field UInt32 value: static_cast<int32_t>(0x9)
  static ::System::Data::__BinaryNode__DataTypePrecedence const UInt32;

  /// @brief Field UInt64 value: static_cast<int32_t>(0xc)
  static ::System::Data::__BinaryNode__DataTypePrecedence const UInt64;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::__BinaryNode__DataTypePrecedence, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::__BinaryNode__DataTypePrecedence, value__) == 0x0, "Offset mismatch!");

} // namespace System::Data
// Type: System.Data::BinaryNode
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::BinaryNode*
class CORDL_TYPE BinaryNode : public ::System::Data::ExpressionNode {
public:
  // Declarations
  using DataTypePrecedence = ::System::Data::__BinaryNode__DataTypePrecedence;

  /// @brief Field _left, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__left, put = __cordl_internal_set__left))::System::Data::ExpressionNode* _left;

  /// @brief Field _op, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__op, put = __cordl_internal_set__op)) int32_t _op;

  /// @brief Field _right, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__right, put = __cordl_internal_set__right))::System::Data::ExpressionNode* _right;

  /// @brief Method BinaryCompare, addr 0x2ce5680, size 0x8, virtual false, abstract: false, final false
  inline int32_t BinaryCompare(::System::Object* vLeft, ::System::Object* vRight, ::System::Data::Common::StorageType resultType, int32_t op);

  /// @brief Method BinaryCompare, addr 0x2ce5688, size 0xdd0, virtual false, abstract: false, final false
  inline int32_t BinaryCompare(::System::Object* vLeft, ::System::Object* vRight, ::System::Data::Common::StorageType resultType, int32_t op, ::System::Globalization::CompareInfo* comparer);

  /// @brief Method Bind, addr 0x2cdf524, size 0x54, virtual true, abstract: false, final false
  inline void Bind(::System::Data::DataTable* table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>* list);

  /// @brief Method DependsOn, addr 0x2ce4fa0, size 0x64, virtual true, abstract: false, final false
  inline bool DependsOn(::System::Data::DataColumn* column);

  /// @brief Method Eval, addr 0x2cdf578, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* Eval();

  /// @brief Method Eval, addr 0x2ce5650, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Object* Eval(::System::Data::ExpressionNode* expr, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version, ::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Eval, addr 0x2ce4e64, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method Eval, addr 0x2cdf58c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version);

  /// @brief Method EvalBinaryOp, addr 0x2cdf5a8, size 0x58bc, virtual false, abstract: false, final false
  inline ::System::Object* EvalBinaryOp(int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right, ::System::Data::DataRow* row, ::System::Data::DataRowVersion version,
                                        ::ArrayW<int32_t, ::Array<int32_t>*> recordNos);

  /// @brief Method GetPrecedence, addr 0x2ce7058, size 0x24, virtual false, abstract: false, final false
  inline ::System::Data::__BinaryNode__DataTypePrecedence GetPrecedence(::System::Data::Common::StorageType storageType);

  /// @brief Method GetPrecedenceType, addr 0x2ce707c, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Data::Common::StorageType GetPrecedenceType(::System::Data::__BinaryNode__DataTypePrecedence code);

  /// @brief Method HasLocalAggregate, addr 0x2ce4f10, size 0x48, virtual true, abstract: false, final false
  inline bool HasLocalAggregate();

  /// @brief Method HasRemoteAggregate, addr 0x2ce4f58, size 0x48, virtual true, abstract: false, final false
  inline bool HasRemoteAggregate();

  /// @brief Method IsConstant, addr 0x2ce4e80, size 0x48, virtual true, abstract: false, final false
  inline bool IsConstant();

  /// @brief Method IsMixed, addr 0x2ce70a0, size 0x9c, virtual false, abstract: false, final false
  inline bool IsMixed(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right);

  /// @brief Method IsMixedSql, addr 0x2ce71b0, size 0xac, virtual false, abstract: false, final false
  inline bool IsMixedSql(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right);

  /// @brief Method IsTableConstant, addr 0x2ce4ec8, size 0x48, virtual true, abstract: false, final false
  inline bool IsTableConstant();

  static inline ::System::Data::BinaryNode* New_ctor(::System::Data::DataTable* table, int32_t op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right);

  /// @brief Method Optimize, addr 0x2ce5004, size 0x238, virtual true, abstract: false, final false
  inline ::System::Data::ExpressionNode* Optimize();

  /// @brief Method ResultSqlType, addr 0x2ce6734, size 0x3dc, virtual false, abstract: false, final false
  inline ::System::Data::Common::StorageType ResultSqlType(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right, bool lc, bool rc, int32_t op);

  /// @brief Method ResultType, addr 0x2ce6b10, size 0x3e0, virtual false, abstract: false, final false
  inline ::System::Data::Common::StorageType ResultType(::System::Data::Common::StorageType left, ::System::Data::Common::StorageType right, bool lc, bool rc, int32_t op);

  /// @brief Method SetTypeMismatchError, addr 0x2ce5550, size 0x30, virtual false, abstract: false, final false
  inline void SetTypeMismatchError(int32_t op, ::System::Type* left, ::System::Type* right);

  /// @brief Method SqlResultType, addr 0x2ce73e4, size 0x34, virtual false, abstract: false, final false
  inline int32_t SqlResultType(int32_t typeCode);

  constexpr ::System::Data::ExpressionNode*& __cordl_internal_get__left();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::ExpressionNode*> const& __cordl_internal_get__left() const;

  constexpr int32_t const& __cordl_internal_get__op() const;

  constexpr int32_t& __cordl_internal_get__op();

  constexpr ::System::Data::ExpressionNode*& __cordl_internal_get__right();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::ExpressionNode*> const& __cordl_internal_get__right() const;

  constexpr void __cordl_internal_set__left(::System::Data::ExpressionNode* value);

  constexpr void __cordl_internal_set__op(int32_t value);

  constexpr void __cordl_internal_set__right(::System::Data::ExpressionNode* value);

  /// @brief Method .ctor, addr 0x2cdf4e0, size 0x44, virtual false, abstract: false, final false
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

  /// @brief Field _op, offset: 0x18, size: 0x4, def value: None
  int32_t ____op;

  /// @brief Field _left, offset: 0x20, size: 0x8, def value: None
  ::System::Data::ExpressionNode* ____left;

  /// @brief Field _right, offset: 0x28, size: 0x8, def value: None
  ::System::Data::ExpressionNode* ____right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::BinaryNode, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Data::BinaryNode, ____op) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::BinaryNode, ____left) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::BinaryNode, ____right) == 0x28, "Offset mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::__BinaryNode__DataTypePrecedence, "System.Data", "BinaryNode/DataTypePrecedence");
NEED_NO_BOX(::System::Data::BinaryNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::BinaryNode*, "System.Data", "BinaryNode");
