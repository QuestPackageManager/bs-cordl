#pragma once
// IWYU pragma private; include "System\Data\ExpressionParser.hpp"
#include "System/Data/zzzz__ExpressionNode_impl.hpp"
#include "System/Data/zzzz__OperatorInfo_impl.hpp"
#include "System/Data/zzzz__Tokens_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__ExpressionParser_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/Data/zzzz__ExpressionParser_def.hpp"
#include "System/Data/zzzz__FunctionId_def.hpp"
#include "System/Data/zzzz__Tokens_def.hpp"
//  Writing Method size for method: ::System::Data::ExpressionParser_ReservedWords._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser_ReservedWords::*)(::StringW, ::System::Data::Tokens, int32_t)>(
    &::System::Data::ExpressionParser_ReservedWords::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6042c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser_ReservedWords>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::Tokens>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Data::ExpressionParser_ReservedWords::_ctor(::StringW word, ::System::Data::Tokens token, int32_t op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser_ReservedWords>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Data::Tokens>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, word, token, op);
}
// Ctor Parameters [CppParam { name: "_word", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "_token", ty: "::System::Data::Tokens", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_op", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::ExpressionParser_ReservedWords::ExpressionParser_ReservedWords(::StringW _word, ::System::Data::Tokens _token, int32_t _op) noexcept {
  this->_word = _word;
  this->_token = _token;
  this->_op = _op;
}
// Ctor Parameters []
constexpr ::System::Data::ExpressionParser_ReservedWords::ExpressionParser_ReservedWords() {}
//  Writing Method size for method: ::System::Data::ExpressionParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)(::System::Data::DataTable*)>(&::System::Data::ExpressionParser::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x603fbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.LoadExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)(::StringW)>(&::System::Data::ExpressionParser::LoadExpression)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x603fc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "LoadExpression", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.StartScan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::StartScan)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x604105c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "StartScan", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ExpressionNode* (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::Parse)> {
  constexpr static std::size_t size = 0xc48;
  constexpr static std::size_t addrs = 0x603fda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "Parse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ParseAggregateArgument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ExpressionNode* (::System::Data::ExpressionParser::*)(::System::Data::FunctionId)>(
    &::System::Data::ExpressionParser::ParseAggregateArgument)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6041c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ParseAggregateArgument", {}, { ::i2c::type_of<::System::Data::FunctionId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.NodePop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ExpressionNode* (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::NodePop)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6041bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "NodePop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.NodePeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::ExpressionNode* (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::NodePeek)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6041b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "NodePeek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.NodePush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)(::System::Data::ExpressionNode*)>(&::System::Data::ExpressionParser::NodePush)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6041ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "NodePush", {}, { ::i2c::type_of<::System::Data::ExpressionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.BuildExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)(int32_t)>(&::System::Data::ExpressionParser::BuildExpression)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6041550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "BuildExpression", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.CheckToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)(::System::Data::Tokens)>(&::System::Data::ExpressionParser::CheckToken)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6041a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "CheckToken", {}, { ::i2c::type_of<::System::Data::Tokens>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.Scan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::Tokens (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::Scan)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x60410f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "Scan", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanNumeric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanNumeric)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6042494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanNumeric", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60427fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)(char16_t, char16_t, ::StringW)>(&::System::Data::ExpressionParser::ScanName)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x604238c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanName", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanDate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6042224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanDate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanBinaryConstant
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanBinaryConstant)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60425c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanBinaryConstant", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanReserved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanReserved)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x60425dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanReserved", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)(char16_t)>(&::System::Data::ExpressionParser::ScanString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60422c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanString", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)(::System::Data::Tokens)>(&::System::Data::ExpressionParser::ScanToken)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6041804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanToken", {}, { ::i2c::type_of<::System::Data::Tokens>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.ScanWhite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::ExpressionParser::*)()>(&::System::Data::ExpressionParser::ScanWhite)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60421c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanWhite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.IsWhiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ExpressionParser::*)(char16_t)>(&::System::Data::ExpressionParser::IsWhiteSpace)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6042988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "IsWhiteSpace", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.IsAlphaNumeric
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ExpressionParser::*)(char16_t)>(&::System::Data::ExpressionParser::IsAlphaNumeric)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60427b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "IsAlphaNumeric", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.IsDigit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ExpressionParser::*)(char16_t)>(&::System::Data::ExpressionParser::IsDigit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60425c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "IsDigit", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::ExpressionParser.IsAlpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::ExpressionParser::*)(char16_t)>(&::System::Data::ExpressionParser::IsAlpha)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6042910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "IsAlpha", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
constexpr char16_t& System::Data::ExpressionParser::__cordl_internal_get__escape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____escape;
}
constexpr char16_t const& System::Data::ExpressionParser::__cordl_internal_get__escape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____escape;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__escape(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____escape = value;
}
constexpr char16_t& System::Data::ExpressionParser::__cordl_internal_get__decimalSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decimalSeparator;
}
constexpr char16_t const& System::Data::ExpressionParser::__cordl_internal_get__decimalSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decimalSeparator;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__decimalSeparator(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decimalSeparator = value;
}
constexpr char16_t& System::Data::ExpressionParser::__cordl_internal_get__listSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listSeparator;
}
constexpr char16_t const& System::Data::ExpressionParser::__cordl_internal_get__listSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listSeparator;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__listSeparator(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____listSeparator = value;
}
constexpr char16_t& System::Data::ExpressionParser::__cordl_internal_get__exponentL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exponentL;
}
constexpr char16_t const& System::Data::ExpressionParser::__cordl_internal_get__exponentL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exponentL;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__exponentL(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exponentL = value;
}
constexpr char16_t& System::Data::ExpressionParser::__cordl_internal_get__exponentU() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exponentU;
}
constexpr char16_t const& System::Data::ExpressionParser::__cordl_internal_get__exponentU() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exponentU;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__exponentU(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exponentU = value;
}
constexpr ::ArrayW<char16_t>& System::Data::ExpressionParser::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::ArrayW<char16_t> const& System::Data::ExpressionParser::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__text(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__pos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__pos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__pos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pos = value;
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____start;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____start = value;
}
constexpr ::System::Data::Tokens& System::Data::ExpressionParser::__cordl_internal_get__token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr ::System::Data::Tokens const& System::Data::ExpressionParser::__cordl_internal_get__token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__token(::System::Data::Tokens value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____token = value;
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__op() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__op() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____op;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__op(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____op = value;
}
constexpr ::ArrayW<::System::Data::OperatorInfo*>& System::Data::ExpressionParser::__cordl_internal_get__ops() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ops;
}
constexpr ::ArrayW<::System::Data::OperatorInfo*> const& System::Data::ExpressionParser::__cordl_internal_get__ops() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ops;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__ops(::ArrayW<::System::Data::OperatorInfo*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ops = value;
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__topOperator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topOperator;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__topOperator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topOperator;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__topOperator(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topOperator = value;
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__topNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topNode;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__topNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topNode;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__topNode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topNode = value;
}
constexpr ::System::Data::DataTable*& System::Data::ExpressionParser::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::ExpressionParser::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__table(::System::Data::DataTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
constexpr ::ArrayW<::System::Data::ExpressionNode*>& System::Data::ExpressionParser::__cordl_internal_get__nodeStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeStack;
}
constexpr ::ArrayW<::System::Data::ExpressionNode*> const& System::Data::ExpressionParser::__cordl_internal_get__nodeStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeStack;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__nodeStack(::ArrayW<::System::Data::ExpressionNode*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeStack = value;
}
constexpr int32_t& System::Data::ExpressionParser::__cordl_internal_get__prevOperand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevOperand;
}
constexpr int32_t const& System::Data::ExpressionParser::__cordl_internal_get__prevOperand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevOperand;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__prevOperand(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevOperand = value;
}
constexpr ::System::Data::ExpressionNode*& System::Data::ExpressionParser::__cordl_internal_get__expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr ::System::Data::ExpressionNode* const& System::Data::ExpressionParser::__cordl_internal_get__expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr void System::Data::ExpressionParser::__cordl_internal_set__expression(::System::Data::ExpressionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expression = value;
}
inline void System::Data::ExpressionParser::setStaticF_s_reservedwords(::ArrayW<::System::Data::ExpressionParser_ReservedWords> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Data::ExpressionParser_ReservedWords>, "s_reservedwords", ::System::Data::ExpressionParser*>(
      std::forward<::ArrayW<::System::Data::ExpressionParser_ReservedWords>>(value));
}
inline ::ArrayW<::System::Data::ExpressionParser_ReservedWords> System::Data::ExpressionParser::getStaticF_s_reservedwords() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Data::ExpressionParser_ReservedWords>, "s_reservedwords", ::System::Data::ExpressionParser*>();
}
inline void System::Data::ExpressionParser::_ctor(::System::Data::DataTable* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { ".ctor", {}, { ::i2c::type_of<::System::Data::DataTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void System::Data::ExpressionParser::LoadExpression(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "LoadExpression", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Data::ExpressionParser::StartScan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "StartScan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::ExpressionNode* System::Data::ExpressionParser::Parse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "Parse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*>(this, ___internal_method);
}
inline ::System::Data::ExpressionNode* System::Data::ExpressionParser::ParseAggregateArgument(::System::Data::FunctionId aggregate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ParseAggregateArgument", {}, { ::i2c::type_of<::System::Data::FunctionId>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*>(this, ___internal_method, aggregate);
}
inline ::System::Data::ExpressionNode* System::Data::ExpressionParser::NodePop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "NodePop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*>(this, ___internal_method);
}
inline ::System::Data::ExpressionNode* System::Data::ExpressionParser::NodePeek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "NodePeek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::ExpressionNode*>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::NodePush(::System::Data::ExpressionNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "NodePush", {}, { ::i2c::type_of<::System::Data::ExpressionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Data::ExpressionParser::BuildExpression(int32_t pri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "BuildExpression", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pri);
}
inline void System::Data::ExpressionParser::CheckToken(::System::Data::Tokens token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "CheckToken", {}, { ::i2c::type_of<::System::Data::Tokens>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::System::Data::Tokens System::Data::ExpressionParser::Scan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "Scan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::Tokens>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanNumeric() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanNumeric", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanName(char16_t chEnd, char16_t esc, ::StringW charsToEscape) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(),
                                                                                         { "ScanName", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chEnd, esc, charsToEscape);
}
inline void System::Data::ExpressionParser::ScanDate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanDate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanBinaryConstant() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanBinaryConstant", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanReserved() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanReserved", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::ExpressionParser::ScanString(char16_t escape) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanString", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, escape);
}
inline void System::Data::ExpressionParser::ScanToken(::System::Data::Tokens token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanToken", {}, { ::i2c::type_of<::System::Data::Tokens>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void System::Data::ExpressionParser::ScanWhite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "ScanWhite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::ExpressionParser::IsWhiteSpace(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "IsWhiteSpace", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch);
}
inline bool System::Data::ExpressionParser::IsAlphaNumeric(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "IsAlphaNumeric", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch);
}
inline bool System::Data::ExpressionParser::IsDigit(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "IsDigit", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch);
}
inline bool System::Data::ExpressionParser::IsAlpha(char16_t ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::ExpressionParser*>(), { "IsAlpha", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ch);
}
inline ::System::Data::ExpressionParser* System::Data::ExpressionParser::New_ctor(::System::Data::DataTable* table) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::ExpressionParser*>(table));
}
// Ctor Parameters []
constexpr ::System::Data::ExpressionParser::ExpressionParser() {}
