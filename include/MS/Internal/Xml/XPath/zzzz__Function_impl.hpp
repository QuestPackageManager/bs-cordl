#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Function.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Function_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Function_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType::Function_FunctionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType::Function_FunctionType() {}
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncLast{ static_cast<int32_t>(0x0) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncPosition{ static_cast<int32_t>(0x1) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncCount{ static_cast<int32_t>(0x2) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncID{ static_cast<int32_t>(0x3) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncLocalName{ static_cast<int32_t>(0x4) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncNameSpaceUri{ static_cast<int32_t>(0x5) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncName{ static_cast<int32_t>(0x6) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncString{ static_cast<int32_t>(0x7) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncBoolean{ static_cast<int32_t>(0x8) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncNumber{ static_cast<int32_t>(0x9) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncTrue{ static_cast<int32_t>(0xa) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncFalse{ static_cast<int32_t>(0xb) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncNot{ static_cast<int32_t>(0xc) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncConcat{ static_cast<int32_t>(0xd) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncStartsWith{ static_cast<int32_t>(0xe) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncContains{ static_cast<int32_t>(0xf) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncSubstringBefore{ static_cast<int32_t>(0x10) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncSubstringAfter{ static_cast<int32_t>(0x11) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncSubstring{ static_cast<int32_t>(0x12) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncStringLength{ static_cast<int32_t>(0x13) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncNormalize{ static_cast<int32_t>(0x14) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncTranslate{ static_cast<int32_t>(0x15) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncLang{ static_cast<int32_t>(0x16) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncSum{ static_cast<int32_t>(0x17) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncFloor{ static_cast<int32_t>(0x18) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncCeiling{ static_cast<int32_t>(0x19) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncRound{ static_cast<int32_t>(0x1a) };
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType MS::Internal::Xml::XPath::Function_FunctionType::FuncUserDefined{ static_cast<int32_t>(0x1b) };
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Function._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::Function::*)(
    ::MS::Internal::Xml::XPath::Function_FunctionType, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*)>(&::MS::Internal::Xml::XPath::Function::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x43066b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Function_FunctionType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Function._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::Function::*)(
    ::StringW, ::StringW, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*)>(&::MS::Internal::Xml::XPath::Function::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x430674c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Function._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::Function::*)(
    ::MS::Internal::Xml::XPath::Function_FunctionType, ::MS::Internal::Xml::XPath::AstNode*)>(&::MS::Internal::Xml::XPath::Function::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x43067f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Function_FunctionType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Function.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode_AstType (::MS::Internal::Xml::XPath::Function::*)()>(
    &::MS::Internal::Xml::XPath::Function::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4306900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Function.get_ReturnType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::Function::*)()>(
    &::MS::Internal::Xml::XPath::Function::get_ReturnType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4306908;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType& MS::Internal::Xml::XPath::Function::__cordl_internal_get__functionType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionType;
}
constexpr ::MS::Internal::Xml::XPath::Function_FunctionType const& MS::Internal::Xml::XPath::Function::__cordl_internal_get__functionType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionType;
}
constexpr void MS::Internal::Xml::XPath::Function::__cordl_internal_set__functionType(::MS::Internal::Xml::XPath::Function_FunctionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____functionType = value;
}
constexpr ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*& MS::Internal::Xml::XPath::Function::__cordl_internal_get__argumentList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentList;
}
constexpr ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* const& MS::Internal::Xml::XPath::Function::__cordl_internal_get__argumentList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____argumentList;
}
constexpr void MS::Internal::Xml::XPath::Function::__cordl_internal_set__argumentList(::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____argumentList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& MS::Internal::Xml::XPath::Function::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::Function::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void MS::Internal::Xml::XPath::Function::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& MS::Internal::Xml::XPath::Function::__cordl_internal_get__prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefix;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::Function::__cordl_internal_get__prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefix;
}
constexpr void MS::Internal::Xml::XPath::Function::__cordl_internal_set__prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void MS::Internal::Xml::XPath::Function::setStaticF_ReturnTypes(::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*>, "ReturnTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get>(
      std::forward<::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*>>(value));
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*> MS::Internal::Xml::XPath::Function::getStaticF_ReturnTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XPath::XPathResultType, ::Array<::System::Xml::XPath::XPathResultType>*>, "ReturnTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get>();
}
inline void MS::Internal::Xml::XPath::Function::_ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype,
                                                      ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* argumentList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Function_FunctionType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ftype, argumentList);
}
inline void MS::Internal::Xml::XPath::Function::_ctor(::StringW prefix, ::StringW name, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* argumentList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, name, argumentList);
}
inline void MS::Internal::Xml::XPath::Function::_ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype, ::MS::Internal::Xml::XPath::AstNode* arg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Function_FunctionType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ftype, arg);
}
inline ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::Function::get_Type() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode_AstType, false>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::Function::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Function*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType, false>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::Function* MS::Internal::Xml::XPath::Function::New_ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype,
                                                                                          ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* argumentList) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::Function*>(ftype, argumentList));
}
inline ::MS::Internal::Xml::XPath::Function* MS::Internal::Xml::XPath::Function::New_ctor(::StringW prefix, ::StringW name,
                                                                                          ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* argumentList) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::Function*>(prefix, name, argumentList));
}
inline ::MS::Internal::Xml::XPath::Function* MS::Internal::Xml::XPath::Function::New_ctor(::MS::Internal::Xml::XPath::Function_FunctionType ftype, ::MS::Internal::Xml::XPath::AstNode* arg) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::Function*>(ftype, arg));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Function::Function() {}
