#pragma once
// IWYU pragma private; include "System/Data/ExpressionParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__Tokens_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionParser)
namespace System::Data {
class DataTable;
}
namespace System::Data {
class ExpressionNode;
}
namespace System::Data {
struct FunctionId;
}
namespace System::Data {
class OperatorInfo;
}
namespace System::Data {
struct Tokens;
}
namespace System::Data {
struct __ExpressionParser__ReservedWords;
}
// Forward declare root types
namespace System::Data {
class ExpressionParser;
}
namespace System::Data {
struct __ExpressionParser__ReservedWords;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ExpressionParser);
MARK_VAL_T(::System::Data::__ExpressionParser__ReservedWords);
// Type: ::ReservedWords
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: true
// CS Name: ::ExpressionParser::ReservedWords
struct CORDL_TYPE __ExpressionParser__ReservedWords {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x41193f8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW word, ::System::Data::Tokens token, int32_t op);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExpressionParser__ReservedWords();

  // Ctor Parameters [CppParam { name: "_word", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_token", ty: "::System::Data::Tokens", modifiers: "", def_value: None }, CppParam {
  // name: "_op", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ExpressionParser__ReservedWords(::StringW _word, ::System::Data::Tokens _token, int32_t _op) noexcept;

  /// @brief Field _word, offset: 0x0, size: 0x8, def value: None
  ::StringW _word;

  /// @brief Field _token, offset: 0x8, size: 0x4, def value: None
  ::System::Data::Tokens _token;

  /// @brief Field _op, offset: 0xc, size: 0x4, def value: None
  int32_t _op;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11390 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::__ExpressionParser__ReservedWords, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Data::__ExpressionParser__ReservedWords, _word) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::__ExpressionParser__ReservedWords, _token) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Data::__ExpressionParser__ReservedWords, _op) == 0xc, "Offset mismatch!");

} // namespace System::Data
// Type: System.Data::ExpressionParser
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::ExpressionParser*
class CORDL_TYPE ExpressionParser : public ::System::Object {
public:
  // Declarations
  using ReservedWords = ::System::Data::__ExpressionParser__ReservedWords;

  /// @brief Field _decimalSeparator, offset 0x12, size 0x2
  __declspec(property(get = __cordl_internal_get__decimalSeparator, put = __cordl_internal_set__decimalSeparator)) char16_t _decimalSeparator;

  /// @brief Field _escape, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get__escape, put = __cordl_internal_set__escape)) char16_t _escape;

  /// @brief Field _exponentL, offset 0x16, size 0x2
  __declspec(property(get = __cordl_internal_get__exponentL, put = __cordl_internal_set__exponentL)) char16_t _exponentL;

  /// @brief Field _exponentU, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get__exponentU, put = __cordl_internal_set__exponentU)) char16_t _exponentU;

  /// @brief Field _expression, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__expression, put = __cordl_internal_set__expression)) ::System::Data::ExpressionNode* _expression;

  /// @brief Field _listSeparator, offset 0x14, size 0x2
  __declspec(property(get = __cordl_internal_get__listSeparator, put = __cordl_internal_set__listSeparator)) char16_t _listSeparator;

  /// @brief Field _nodeStack, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__nodeStack, put = __cordl_internal_set__nodeStack)) ::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> _nodeStack;

  /// @brief Field _op, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__op, put = __cordl_internal_set__op)) int32_t _op;

  /// @brief Field _ops, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__ops, put = __cordl_internal_set__ops)) ::ArrayW<::System::Data::OperatorInfo*, ::Array<::System::Data::OperatorInfo*>*> _ops;

  /// @brief Field _pos, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__pos, put = __cordl_internal_set__pos)) int32_t _pos;

  /// @brief Field _prevOperand, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__prevOperand, put = __cordl_internal_set__prevOperand)) int32_t _prevOperand;

  /// @brief Field _start, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__start, put = __cordl_internal_set__start)) int32_t _start;

  /// @brief Field _table, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::ArrayW<char16_t, ::Array<char16_t>*> _text;

  /// @brief Field _token, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__token, put = __cordl_internal_set__token)) ::System::Data::Tokens _token;

  /// @brief Field _topNode, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__topNode, put = __cordl_internal_set__topNode)) int32_t _topNode;

  /// @brief Field _topOperator, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__topOperator, put = __cordl_internal_set__topOperator)) int32_t _topOperator;

  /// @brief Field s_reservedwords, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_reservedwords,
                             put = setStaticF_s_reservedwords)) ::ArrayW<::System::Data::__ExpressionParser__ReservedWords, ::Array<::System::Data::__ExpressionParser__ReservedWords>*>
      s_reservedwords;

  /// @brief Method BuildExpression, addr 0x4117ce0, size 0x228, virtual false, abstract: false, final false
  inline void BuildExpression(int32_t pri);

  /// @brief Method CheckToken, addr 0x41181b4, size 0x44, virtual false, abstract: false, final false
  inline void CheckToken(::System::Data::Tokens token);

  /// @brief Method IsAlpha, addr 0x41190ec, size 0x2c, virtual false, abstract: false, final false
  inline bool IsAlpha(char16_t ch);

  /// @brief Method IsAlphaNumeric, addr 0x4118fa8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsAlphaNumeric(char16_t ch);

  /// @brief Method IsDigit, addr 0x4118db4, size 0x14, virtual false, abstract: false, final false
  inline bool IsDigit(char16_t ch);

  /// @brief Method IsWhiteSpace, addr 0x4119168, size 0x14, virtual false, abstract: false, final false
  inline bool IsWhiteSpace(char16_t ch);

  /// @brief Method LoadExpression, addr 0x41163c0, size 0xc4, virtual false, abstract: false, final false
  inline void LoadExpression(::StringW data);

  static inline ::System::Data::ExpressionParser* New_ctor(::System::Data::DataTable* table);

  /// @brief Method NodePeek, addr 0x4118358, size 0x44, virtual false, abstract: false, final false
  inline ::System::Data::ExpressionNode* NodePeek();

  /// @brief Method NodePop, addr 0x41183dc, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Data::ExpressionNode* NodePop();

  /// @brief Method NodePush, addr 0x41182c4, size 0x94, virtual false, abstract: false, final false
  inline void NodePush(::System::Data::ExpressionNode* node);

  /// @brief Method Parse, addr 0x41164f8, size 0xca8, virtual false, abstract: false, final false
  inline ::System::Data::ExpressionNode* Parse();

  /// @brief Method ParseAggregateArgument, addr 0x4118418, size 0x2a8, virtual false, abstract: false, final false
  inline ::System::Data::ExpressionNode* ParseAggregateArgument(::System::Data::FunctionId aggregate);

  /// @brief Method Scan, addr 0x41178b0, size 0x3a0, virtual false, abstract: false, final false
  inline ::System::Data::Tokens Scan();

  /// @brief Method ScanBinaryConstant, addr 0x4118db0, size 0x4, virtual false, abstract: false, final false
  inline void ScanBinaryConstant();

  /// @brief Method ScanDate, addr 0x4118a08, size 0xa0, virtual false, abstract: false, final false
  inline void ScanDate();

  /// @brief Method ScanName, addr 0x4118fe4, size 0x68, virtual false, abstract: false, final false
  inline void ScanName();

  /// @brief Method ScanName, addr 0x4118b78, size 0x10c, virtual false, abstract: false, final false
  inline void ScanName(char16_t chEnd, char16_t esc, ::StringW charsToEscape);

  /// @brief Method ScanNumeric, addr 0x4118c84, size 0x12c, virtual false, abstract: false, final false
  inline void ScanNumeric();

  /// @brief Method ScanReserved, addr 0x4118dc8, size 0x1e0, virtual false, abstract: false, final false
  inline void ScanReserved();

  /// @brief Method ScanString, addr 0x4118aa8, size 0xd0, virtual false, abstract: false, final false
  inline void ScanString(char16_t escape);

  /// @brief Method ScanToken, addr 0x4117f98, size 0x28, virtual false, abstract: false, final false
  inline void ScanToken(::System::Data::Tokens token);

  /// @brief Method ScanWhite, addr 0x41189b0, size 0x58, virtual false, abstract: false, final false
  inline void ScanWhite();

  /// @brief Method StartScan, addr 0x41177e4, size 0x90, virtual false, abstract: false, final false
  inline void StartScan();

  constexpr char16_t const& __cordl_internal_get__decimalSeparator() const;

  constexpr char16_t& __cordl_internal_get__decimalSeparator();

  constexpr char16_t const& __cordl_internal_get__escape() const;

  constexpr char16_t& __cordl_internal_get__escape();

  constexpr char16_t const& __cordl_internal_get__exponentL() const;

  constexpr char16_t& __cordl_internal_get__exponentL();

  constexpr char16_t const& __cordl_internal_get__exponentU() const;

  constexpr char16_t& __cordl_internal_get__exponentU();

  constexpr ::System::Data::ExpressionNode*& __cordl_internal_get__expression();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::ExpressionNode*> const& __cordl_internal_get__expression() const;

  constexpr char16_t const& __cordl_internal_get__listSeparator() const;

  constexpr char16_t& __cordl_internal_get__listSeparator();

  constexpr ::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> const& __cordl_internal_get__nodeStack() const;

  constexpr ::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*>& __cordl_internal_get__nodeStack();

  constexpr int32_t const& __cordl_internal_get__op() const;

  constexpr int32_t& __cordl_internal_get__op();

  constexpr ::ArrayW<::System::Data::OperatorInfo*, ::Array<::System::Data::OperatorInfo*>*> const& __cordl_internal_get__ops() const;

  constexpr ::ArrayW<::System::Data::OperatorInfo*, ::Array<::System::Data::OperatorInfo*>*>& __cordl_internal_get__ops();

  constexpr int32_t const& __cordl_internal_get__pos() const;

  constexpr int32_t& __cordl_internal_get__pos();

  constexpr int32_t const& __cordl_internal_get__prevOperand() const;

  constexpr int32_t& __cordl_internal_get__prevOperand();

  constexpr int32_t const& __cordl_internal_get__start() const;

  constexpr int32_t& __cordl_internal_get__start();

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__table() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get__text() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get__text();

  constexpr ::System::Data::Tokens const& __cordl_internal_get__token() const;

  constexpr ::System::Data::Tokens& __cordl_internal_get__token();

  constexpr int32_t const& __cordl_internal_get__topNode() const;

  constexpr int32_t& __cordl_internal_get__topNode();

  constexpr int32_t const& __cordl_internal_get__topOperator() const;

  constexpr int32_t& __cordl_internal_get__topOperator();

  constexpr void __cordl_internal_set__decimalSeparator(char16_t value);

  constexpr void __cordl_internal_set__escape(char16_t value);

  constexpr void __cordl_internal_set__exponentL(char16_t value);

  constexpr void __cordl_internal_set__exponentU(char16_t value);

  constexpr void __cordl_internal_set__expression(::System::Data::ExpressionNode* value);

  constexpr void __cordl_internal_set__listSeparator(char16_t value);

  constexpr void __cordl_internal_set__nodeStack(::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> value);

  constexpr void __cordl_internal_set__op(int32_t value);

  constexpr void __cordl_internal_set__ops(::ArrayW<::System::Data::OperatorInfo*, ::Array<::System::Data::OperatorInfo*>*> value);

  constexpr void __cordl_internal_set__pos(int32_t value);

  constexpr void __cordl_internal_set__prevOperand(int32_t value);

  constexpr void __cordl_internal_set__start(int32_t value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  constexpr void __cordl_internal_set__text(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set__token(::System::Data::Tokens value);

  constexpr void __cordl_internal_set__topNode(int32_t value);

  constexpr void __cordl_internal_set__topOperator(int32_t value);

  /// @brief Method .ctor, addr 0x411631c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table);

  static inline ::ArrayW<::System::Data::__ExpressionParser__ReservedWords, ::Array<::System::Data::__ExpressionParser__ReservedWords>*> getStaticF_s_reservedwords();

  static inline void setStaticF_s_reservedwords(::ArrayW<::System::Data::__ExpressionParser__ReservedWords, ::Array<::System::Data::__ExpressionParser__ReservedWords>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionParser(ExpressionParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionParser(ExpressionParser const&) = delete;

  /// @brief Field _escape, offset: 0x10, size: 0x2, def value: None
  char16_t ____escape;

  /// @brief Field _decimalSeparator, offset: 0x12, size: 0x2, def value: None
  char16_t ____decimalSeparator;

  /// @brief Field _listSeparator, offset: 0x14, size: 0x2, def value: None
  char16_t ____listSeparator;

  /// @brief Field _exponentL, offset: 0x16, size: 0x2, def value: None
  char16_t ____exponentL;

  /// @brief Field _exponentU, offset: 0x18, size: 0x2, def value: None
  char16_t ____exponentU;

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____text;

  /// @brief Field _pos, offset: 0x28, size: 0x4, def value: None
  int32_t ____pos;

  /// @brief Field _start, offset: 0x2c, size: 0x4, def value: None
  int32_t ____start;

  /// @brief Field _token, offset: 0x30, size: 0x4, def value: None
  ::System::Data::Tokens ____token;

  /// @brief Field _op, offset: 0x34, size: 0x4, def value: None
  int32_t ____op;

  /// @brief Field _ops, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Data::OperatorInfo*, ::Array<::System::Data::OperatorInfo*>*> ____ops;

  /// @brief Field _topOperator, offset: 0x40, size: 0x4, def value: None
  int32_t ____topOperator;

  /// @brief Field _topNode, offset: 0x44, size: 0x4, def value: None
  int32_t ____topNode;

  /// @brief Field _table, offset: 0x48, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _nodeStack, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Data::ExpressionNode*, ::Array<::System::Data::ExpressionNode*>*> ____nodeStack;

  /// @brief Field _prevOperand, offset: 0x58, size: 0x4, def value: None
  int32_t ____prevOperand;

  /// @brief Field _expression, offset: 0x60, size: 0x8, def value: None
  ::System::Data::ExpressionNode* ____expression;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ExpressionParser, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____escape) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____decimalSeparator) == 0x12, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____listSeparator) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____exponentL) == 0x16, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____exponentU) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____pos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____start) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____token) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____op) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____ops) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____topOperator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____topNode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____table) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____nodeStack) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____prevOperand) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::ExpressionParser, ____expression) == 0x60, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ExpressionParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ExpressionParser*, "System.Data", "ExpressionParser");
DEFINE_IL2CPP_ARG_TYPE(::System::Data::__ExpressionParser__ReservedWords, "System.Data", "ExpressionParser/ReservedWords");
