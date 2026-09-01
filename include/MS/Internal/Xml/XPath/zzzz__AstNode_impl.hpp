#pragma once
// IWYU pragma private; include "MS\Internal\Xml\XPath\AstNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MS::Internal::Xml::XPath::AstNode_AstType::AstNode_AstType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::AstNode_AstType::AstNode_AstType() {}
constexpr ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::AstNode_AstType::Axis{ static_cast<int32_t>(0x0) };
constexpr ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::AstNode_AstType::Operator{ static_cast<int32_t>(0x1) };
constexpr ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::AstNode_AstType::Filter{ static_cast<int32_t>(0x2) };
constexpr ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::AstNode_AstType::ConstantOperand{ static_cast<int32_t>(0x3) };
constexpr ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::AstNode_AstType::Function{ static_cast<int32_t>(0x4) };
constexpr ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::AstNode_AstType::Group{ static_cast<int32_t>(0x5) };
constexpr ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::AstNode_AstType::Root{ static_cast<int32_t>(0x6) };
constexpr ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::AstNode_AstType::Variable{ static_cast<int32_t>(0x7) };
constexpr ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::AstNode_AstType::Error{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::MS::Internal::Xml::XPath::AstNode.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MS::Internal::Xml::XPath::AstNode_AstType (::MS::Internal::Xml::XPath::AstNode::*)()>(&::MS::Internal::Xml::XPath::AstNode::get_Type)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), { ::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::AstNode.get_ReturnType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::AstNode::*)()>(&::MS::Internal::Xml::XPath::AstNode::get_ReturnType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), { ::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::AstNode._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::AstNode::*)()>(&::MS::Internal::Xml::XPath::AstNode::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62769c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::AstNode::get_Type() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode_AstType>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::AstNode::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType>(this, ___internal_method);
}
inline void MS::Internal::Xml::XPath::AstNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::AstNode::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::AstNode*>());
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::AstNode::AstNode() {}
