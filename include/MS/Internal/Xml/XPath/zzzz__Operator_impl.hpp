#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Operator.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Operator_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Operator_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MS::Internal::Xml::XPath::Operator_Op::Operator_Op(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Operator_Op::Operator_Op() {}
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::INVALID{ static_cast<int32_t>(0x0) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::OR{ static_cast<int32_t>(0x1) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::AND{ static_cast<int32_t>(0x2) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::EQ{ static_cast<int32_t>(0x3) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::NE{ static_cast<int32_t>(0x4) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::LT{ static_cast<int32_t>(0x5) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::LE{ static_cast<int32_t>(0x6) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::GT{ static_cast<int32_t>(0x7) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::GE{ static_cast<int32_t>(0x8) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::PLUS{ static_cast<int32_t>(0x9) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::MINUS{ static_cast<int32_t>(0xa) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::MUL{ static_cast<int32_t>(0xb) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::DIV{ static_cast<int32_t>(0xc) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::MOD{ static_cast<int32_t>(0xd) };
constexpr ::MS::Internal::Xml::XPath::Operator_Op MS::Internal::Xml::XPath::Operator_Op::UNION{ static_cast<int32_t>(0xe) };
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::Operator::*)(
    ::MS::Internal::Xml::XPath::Operator_Op, ::MS::Internal::Xml::XPath::AstNode*, ::MS::Internal::Xml::XPath::AstNode*)>(&::MS::Internal::Xml::XPath::Operator::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x430b380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Operator_Op>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operator.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode_AstType (::MS::Internal::Xml::XPath::Operator::*)()>(
    &::MS::Internal::Xml::XPath::Operator::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430b3bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operator.get_ReturnType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::Operator::*)()>(
    &::MS::Internal::Xml::XPath::Operator::get_ReturnType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x430b3c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operator*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::MS::Internal::Xml::XPath::Operator_Op& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opType;
}
constexpr ::MS::Internal::Xml::XPath::Operator_Op const& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opType;
}
constexpr void MS::Internal::Xml::XPath::Operator::__cordl_internal_set__opType(::MS::Internal::Xml::XPath::Operator_Op value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____opType = value;
}
constexpr ::MS::Internal::Xml::XPath::AstNode*& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opnd1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opnd1;
}
constexpr ::MS::Internal::Xml::XPath::AstNode* const& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opnd1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opnd1;
}
constexpr void MS::Internal::Xml::XPath::Operator::__cordl_internal_set__opnd1(::MS::Internal::Xml::XPath::AstNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____opnd1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::MS::Internal::Xml::XPath::AstNode*& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opnd2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opnd2;
}
constexpr ::MS::Internal::Xml::XPath::AstNode* const& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opnd2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opnd2;
}
constexpr void MS::Internal::Xml::XPath::Operator::__cordl_internal_set__opnd2(::MS::Internal::Xml::XPath::AstNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____opnd2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void MS::Internal::Xml::XPath::Operator::setStaticF_s_invertOp(::ArrayW<::MS::Internal::Xml::XPath::Operator_Op, ::Array<::MS::Internal::Xml::XPath::Operator_Op>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::MS::Internal::Xml::XPath::Operator_Op, ::Array<::MS::Internal::Xml::XPath::Operator_Op>*>, "s_invertOp",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operator*>::get>(
      std::forward<::ArrayW<::MS::Internal::Xml::XPath::Operator_Op, ::Array<::MS::Internal::Xml::XPath::Operator_Op>*>>(value));
}
inline ::ArrayW<::MS::Internal::Xml::XPath::Operator_Op, ::Array<::MS::Internal::Xml::XPath::Operator_Op>*> MS::Internal::Xml::XPath::Operator::getStaticF_s_invertOp() {
  return ::cordl_internals::getStaticField<::ArrayW<::MS::Internal::Xml::XPath::Operator_Op, ::Array<::MS::Internal::Xml::XPath::Operator_Op>*>, "s_invertOp",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operator*>::get>();
}
inline void MS::Internal::Xml::XPath::Operator::_ctor(::MS::Internal::Xml::XPath::Operator_Op op, ::MS::Internal::Xml::XPath::AstNode* opnd1, ::MS::Internal::Xml::XPath::AstNode* opnd2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Operator_Op>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, opnd1, opnd2);
}
inline ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::Operator::get_Type() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode_AstType, false>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::Operator::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType, false>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::Operator* MS::Internal::Xml::XPath::Operator::New_ctor(::MS::Internal::Xml::XPath::Operator_Op op, ::MS::Internal::Xml::XPath::AstNode* opnd1,
                                                                                          ::MS::Internal::Xml::XPath::AstNode* opnd2) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::Operator*>(op, opnd1, opnd2));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Operator::Operator() {}
