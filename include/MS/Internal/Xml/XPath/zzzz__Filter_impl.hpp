#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Filter.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Filter_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Filter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::Filter::*)(::MS::Internal::Xml::XPath::AstNode*, ::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::Filter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6271268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Filter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>(), ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Filter.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode_AstType (::MS::Internal::Xml::XPath::Filter::*)()>(&::MS::Internal::Xml::XPath::Filter::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6271270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Filter*>(), { ::i2c::class_of<::MS::Internal::Xml::XPath::Filter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Filter.get_ReturnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::Filter::*)()>(&::MS::Internal::Xml::XPath::Filter::get_ReturnType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6271278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Filter*>(), { ::i2c::class_of<::MS::Internal::Xml::XPath::Filter*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::MS::Internal::Xml::XPath::AstNode*& MS::Internal::Xml::XPath::Filter::__cordl_internal_get__input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____input;
}
constexpr ::MS::Internal::Xml::XPath::AstNode* const& MS::Internal::Xml::XPath::Filter::__cordl_internal_get__input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____input;
}
constexpr void MS::Internal::Xml::XPath::Filter::__cordl_internal_set__input(::MS::Internal::Xml::XPath::AstNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____input = value;
}
constexpr ::MS::Internal::Xml::XPath::AstNode*& MS::Internal::Xml::XPath::Filter::__cordl_internal_get__condition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____condition;
}
constexpr ::MS::Internal::Xml::XPath::AstNode* const& MS::Internal::Xml::XPath::Filter::__cordl_internal_get__condition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____condition;
}
constexpr void MS::Internal::Xml::XPath::Filter::__cordl_internal_set__condition(::MS::Internal::Xml::XPath::AstNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____condition = value;
}
inline void MS::Internal::Xml::XPath::Filter::_ctor(::MS::Internal::Xml::XPath::AstNode* input, ::MS::Internal::Xml::XPath::AstNode* condition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Filter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>(), ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, condition);
}
inline ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::Filter::get_Type() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::XPath::Filter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode_AstType>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::Filter::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::XPath::Filter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::Filter* MS::Internal::Xml::XPath::Filter::New_ctor(::MS::Internal::Xml::XPath::AstNode* input, ::MS::Internal::Xml::XPath::AstNode* condition) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::Filter*>(input, condition));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Filter::Filter() {}
