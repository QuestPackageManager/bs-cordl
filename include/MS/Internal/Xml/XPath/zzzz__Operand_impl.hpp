#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Operand.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Operand_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::Operand::*)(::StringW)>(&::MS::Internal::Xml::XPath::Operand::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4308678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::Operand::*)(double_t)>(&::MS::Internal::Xml::XPath::Operand::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x43086a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operand.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode_AstType (::MS::Internal::Xml::XPath::Operand::*)()>(
    &::MS::Internal::Xml::XPath::Operand::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4308718;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operand*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operand.get_ReturnType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::Operand::*)()>(
    &::MS::Internal::Xml::XPath::Operand::get_ReturnType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4308720;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operand*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operand*>::get(), 5));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____val)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void MS::Internal::Xml::XPath::Operand::_ctor(::StringW val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline void MS::Internal::Xml::XPath::Operand::_ctor(double_t val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val);
}
inline ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::Operand::get_Type() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operand*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode_AstType, false>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::Operand::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Operand*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType, false>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::Operand* MS::Internal::Xml::XPath::Operand::New_ctor(::StringW val) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::Operand*>(val));
}
inline ::MS::Internal::Xml::XPath::Operand* MS::Internal::Xml::XPath::Operand::New_ctor(double_t val) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::Operand*>(val));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Operand::Operand() {}
