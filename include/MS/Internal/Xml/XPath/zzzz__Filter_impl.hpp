#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Filter.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Filter_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Filter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::MS::Internal::Xml::XPath::Filter::*)(::MS::Internal::Xml::XPath::AstNode*, ::MS::Internal::Xml::XPath::AstNode*)>(&::MS::Internal::Xml::XPath::Filter::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4306678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Filter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Filter.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode_AstType (::MS::Internal::Xml::XPath::Filter::*)()>(
    &::MS::Internal::Xml::XPath::Filter::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43066a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Filter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Filter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Filter.get_ReturnType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::Filter::*)()>(
    &::MS::Internal::Xml::XPath::Filter::get_ReturnType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x43066ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Filter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Filter*>::get(), 5));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____input)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____condition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void MS::Internal::Xml::XPath::Filter::_ctor(::MS::Internal::Xml::XPath::AstNode* input, ::MS::Internal::Xml::XPath::AstNode* condition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Filter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, condition);
}
inline ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::Filter::get_Type() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Filter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode_AstType, false>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::Filter::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Filter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType, false>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::Filter* MS::Internal::Xml::XPath::Filter::New_ctor(::MS::Internal::Xml::XPath::AstNode* input, ::MS::Internal::Xml::XPath::AstNode* condition) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::Filter*>(input, condition));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Filter::Filter() {}
