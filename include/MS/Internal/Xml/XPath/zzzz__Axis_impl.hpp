#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Axis.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Axis_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Axis_def.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType::Axis_AxisType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType::Axis_AxisType() {}
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::Ancestor{ static_cast<int32_t>(0x0) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::AncestorOrSelf{ static_cast<int32_t>(0x1) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::Attribute{ static_cast<int32_t>(0x2) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::Child{ static_cast<int32_t>(0x3) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::Descendant{ static_cast<int32_t>(0x4) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::DescendantOrSelf{ static_cast<int32_t>(0x5) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::Following{ static_cast<int32_t>(0x6) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::FollowingSibling{ static_cast<int32_t>(0x7) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::Namespace{ static_cast<int32_t>(0x8) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::Parent{ static_cast<int32_t>(0x9) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::Preceding{ static_cast<int32_t>(0xa) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::PrecedingSibling{ static_cast<int32_t>(0xb) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::Self{ static_cast<int32_t>(0xc) };
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis_AxisType::None{ static_cast<int32_t>(0xd) };
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::Axis::*)(
    ::MS::Internal::Xml::XPath::Axis_AxisType, ::MS::Internal::Xml::XPath::AstNode*, ::StringW, ::StringW, ::System::Xml::XPath::XPathNodeType)>(&::MS::Internal::Xml::XPath::Axis::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x430ad88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Axis_AxisType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XPath::XPathNodeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::MS::Internal::Xml::XPath::Axis::*)(::MS::Internal::Xml::XPath::Axis_AxisType, ::MS::Internal::Xml::XPath::AstNode*)>(&::MS::Internal::Xml::XPath::Axis::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x430ae20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Axis_AxisType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode_AstType (::MS::Internal::Xml::XPath::Axis::*)()>(
    &::MS::Internal::Xml::XPath::Axis::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430ae9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis.get_ReturnType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::Axis::*)()>(
    &::MS::Internal::Xml::XPath::Axis::get_ReturnType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430aea4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis.get_Input
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::AstNode* (::MS::Internal::Xml::XPath::Axis::*)()>(
    &::MS::Internal::Xml::XPath::Axis::get_Input)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430aeac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_Input",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis.set_Input
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::Axis::*)(::MS::Internal::Xml::XPath::AstNode*)>(
    &::MS::Internal::Xml::XPath::Axis::set_Input)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430aeb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "set_Input", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::MS::Internal::Xml::XPath::Axis::*)()>(&::MS::Internal::Xml::XPath::Axis::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430aebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_Prefix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::MS::Internal::Xml::XPath::Axis::*)()>(&::MS::Internal::Xml::XPath::Axis::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430aec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_Name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XPath::XPathNodeType (::MS::Internal::Xml::XPath::Axis::*)()>(
    &::MS::Internal::Xml::XPath::Axis::get_NodeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430aecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_NodeType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis.get_TypeOfAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::Axis_AxisType (::MS::Internal::Xml::XPath::Axis::*)()>(
    &::MS::Internal::Xml::XPath::Axis::get_TypeOfAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430aed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_TypeOfAxis",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis.get_AbbrAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::MS::Internal::Xml::XPath::Axis::*)()>(&::MS::Internal::Xml::XPath::Axis::get_AbbrAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430aedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_AbbrAxis",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis.get_Urn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::MS::Internal::Xml::XPath::Axis::*)()>(&::MS::Internal::Xml::XPath::Axis::get_Urn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430aee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_Urn",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Axis.set_Urn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::Axis::*)(::StringW)>(&::MS::Internal::Xml::XPath::Axis::set_Urn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x430aeec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "set_Urn", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__axisType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axisType;
}
constexpr ::MS::Internal::Xml::XPath::Axis_AxisType const& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__axisType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____axisType;
}
constexpr void MS::Internal::Xml::XPath::Axis::__cordl_internal_set__axisType(::MS::Internal::Xml::XPath::Axis_AxisType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____axisType = value;
}
constexpr ::MS::Internal::Xml::XPath::AstNode*& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____input;
}
constexpr ::MS::Internal::Xml::XPath::AstNode* const& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____input;
}
constexpr void MS::Internal::Xml::XPath::Axis::__cordl_internal_set__input(::MS::Internal::Xml::XPath::AstNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____input)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefix;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefix;
}
constexpr void MS::Internal::Xml::XPath::Axis::__cordl_internal_set__prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void MS::Internal::Xml::XPath::Axis::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XPath::XPathNodeType& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__nodeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeType;
}
constexpr ::System::Xml::XPath::XPathNodeType const& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__nodeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodeType;
}
constexpr void MS::Internal::Xml::XPath::Axis::__cordl_internal_set__nodeType(::System::Xml::XPath::XPathNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodeType = value;
}
constexpr bool& MS::Internal::Xml::XPath::Axis::__cordl_internal_get_abbrAxis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___abbrAxis;
}
constexpr bool const& MS::Internal::Xml::XPath::Axis::__cordl_internal_get_abbrAxis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___abbrAxis;
}
constexpr void MS::Internal::Xml::XPath::Axis::__cordl_internal_set_abbrAxis(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___abbrAxis = value;
}
constexpr ::StringW& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__urn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____urn;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::Axis::__cordl_internal_get__urn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____urn;
}
constexpr void MS::Internal::Xml::XPath::Axis::__cordl_internal_set__urn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____urn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void MS::Internal::Xml::XPath::Axis::_ctor(::MS::Internal::Xml::XPath::Axis_AxisType axisType, ::MS::Internal::Xml::XPath::AstNode* input, ::StringW prefix, ::StringW name,
                                                  ::System::Xml::XPath::XPathNodeType nodetype) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Axis_AxisType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XPath::XPathNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axisType, input, prefix, name, nodetype);
}
inline void MS::Internal::Xml::XPath::Axis::_ctor(::MS::Internal::Xml::XPath::Axis_AxisType axisType, ::MS::Internal::Xml::XPath::AstNode* input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::Axis_AxisType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axisType, input);
}
inline ::MS::Internal::Xml::XPath::AstNode_AstType MS::Internal::Xml::XPath::Axis::get_Type() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode_AstType, false>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::Axis::get_ReturnType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType, false>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::Axis::get_Input() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_Input",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::AstNode*, false>(this, ___internal_method);
}
inline void MS::Internal::Xml::XPath::Axis::set_Input(::MS::Internal::Xml::XPath::AstNode* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "set_Input", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::MS::Internal::Xml::XPath::AstNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW MS::Internal::Xml::XPath::Axis::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_Prefix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW MS::Internal::Xml::XPath::Axis::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_Name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathNodeType MS::Internal::Xml::XPath::Axis::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_NodeType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathNodeType, false>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::Axis_AxisType MS::Internal::Xml::XPath::Axis::get_TypeOfAxis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_TypeOfAxis",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::Axis_AxisType, false>(this, ___internal_method);
}
inline bool MS::Internal::Xml::XPath::Axis::get_AbbrAxis() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_AbbrAxis",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW MS::Internal::Xml::XPath::Axis::get_Urn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "get_Urn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void MS::Internal::Xml::XPath::Axis::set_Urn(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::Axis*>::get(), "set_Urn", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::MS::Internal::Xml::XPath::Axis* MS::Internal::Xml::XPath::Axis::New_ctor(::MS::Internal::Xml::XPath::Axis_AxisType axisType, ::MS::Internal::Xml::XPath::AstNode* input, ::StringW prefix,
                                                                                  ::StringW name, ::System::Xml::XPath::XPathNodeType nodetype) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::Axis*>(axisType, input, prefix, name, nodetype));
}
inline ::MS::Internal::Xml::XPath::Axis* MS::Internal::Xml::XPath::Axis::New_ctor(::MS::Internal::Xml::XPath::Axis_AxisType axisType, ::MS::Internal::Xml::XPath::AstNode* input) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::Axis*>(axisType, input));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Axis::Axis() {}
