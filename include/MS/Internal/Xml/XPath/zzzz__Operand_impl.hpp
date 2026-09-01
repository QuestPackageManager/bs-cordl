#pragma once
// IWYU pragma private; include "MS\Internal\Xml\XPath\Operand.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Operand_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::Operand::*)(::StringW)>(&::MS::Internal::Xml::XPath::Operand::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6276e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Operand*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operand._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::Operand::*)(double_t)>(&::MS::Internal::Xml::XPath::Operand::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6276e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Operand*>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operand.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode_AstType (::MS::Internal::Xml::XPath::Operand::*)()>(&::MS::Internal::Xml::XPath::Operand::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6276e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Operand*>(), { ::i2c::class_of<::MS::Internal::Xml::XPath::Operand*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operand.get_ReturnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::Operand::*)()>(&::MS::Internal::Xml::XPath::Operand::get_ReturnType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6276e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Operand*>(), { ::i2c::class_of<::MS::Internal::Xml::XPath::Operand*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XPath::XPathResultType& MS::Internal::Xml::XPath::Operand::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::System::Xml::XPath::XPathResultType const& MS::Internal::Xml::XPath::Operand::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void MS::Internal::Xml::XPath::Operand::__cordl_internal_set__type(::System::Xml::XPath::XPathResultType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::System::Object*& MS::Internal::Xml::XPath::Operand::__cordl_internal_get__val() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr ::System::Object* const& MS::Internal::Xml::XPath::Operand::__cordl_internal_get__val() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____val;
}
constexpr void MS::Internal::Xml::XPath::Operand::__cordl_internal_set__val(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____val = value;
}
inline void MS::Internal::Xml::XPath::Operand::_ctor(::StringW val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Operand*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void MS::Internal::Xml::XPath::Operand::_ctor(double_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::Operand*>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::Operand::get_Type() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::XPath::Operand*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode_AstType>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::Operand::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::XPath::Operand*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::Operand* MS::Internal::Xml::XPath::Operand::New_ctor(::StringW val) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::Operand*>(val));
}
inline ::MS::Internal::Xml::XPath::Operand* MS::Internal::Xml::XPath::Operand::New_ctor(double_t val) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::Operand*>(val));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Operand::Operand() {}
