#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MS::Internal::Xml::XPath::__AstNode__AstType::__AstNode__AstType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::__AstNode__AstType::__AstNode__AstType() {}
constexpr ::MS::Internal::Xml::XPath::__AstNode__AstType MS::Internal::Xml::XPath::__AstNode__AstType::Axis{ static_cast<int32_t>(0x0) };
constexpr ::MS::Internal::Xml::XPath::__AstNode__AstType MS::Internal::Xml::XPath::__AstNode__AstType::Operator{ static_cast<int32_t>(0x1) };
constexpr ::MS::Internal::Xml::XPath::__AstNode__AstType MS::Internal::Xml::XPath::__AstNode__AstType::Filter{ static_cast<int32_t>(0x2) };
constexpr ::MS::Internal::Xml::XPath::__AstNode__AstType MS::Internal::Xml::XPath::__AstNode__AstType::ConstantOperand{ static_cast<int32_t>(0x3) };
constexpr ::MS::Internal::Xml::XPath::__AstNode__AstType MS::Internal::Xml::XPath::__AstNode__AstType::Function{ static_cast<int32_t>(0x4) };
constexpr ::MS::Internal::Xml::XPath::__AstNode__AstType MS::Internal::Xml::XPath::__AstNode__AstType::Group{ static_cast<int32_t>(0x5) };
constexpr ::MS::Internal::Xml::XPath::__AstNode__AstType MS::Internal::Xml::XPath::__AstNode__AstType::Root{ static_cast<int32_t>(0x6) };
constexpr ::MS::Internal::Xml::XPath::__AstNode__AstType MS::Internal::Xml::XPath::__AstNode__AstType::Variable{ static_cast<int32_t>(0x7) };
constexpr ::MS::Internal::Xml::XPath::__AstNode__AstType MS::Internal::Xml::XPath::__AstNode__AstType::Error{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::MS::Internal::Xml::XPath::AstNode.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::__AstNode__AstType (::MS::Internal::Xml::XPath::AstNode::*)()>(
    &::MS::Internal::Xml::XPath::AstNode::get_Type)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::AstNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::AstNode*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::AstNode.get_ReturnType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::AstNode::*)()>(
    &::MS::Internal::Xml::XPath::AstNode::get_ReturnType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::AstNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::AstNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::AstNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::AstNode::*)()>(&::MS::Internal::Xml::XPath::AstNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d617a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::AstNode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::MS::Internal::Xml::XPath::__AstNode__AstType MS::Internal::Xml::XPath::AstNode::get_Type() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::AstNode*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::__AstNode__AstType, false>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::AstNode::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::AstNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType, false>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::AstNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::AstNode*>());
}
inline void MS::Internal::Xml::XPath::AstNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::AstNode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::AstNode::AstNode() {}
