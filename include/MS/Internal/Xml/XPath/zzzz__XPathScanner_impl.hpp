#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/XPathScanner.hpp"
#include "System/Xml/zzzz__XmlCharType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__XPathScanner_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__XPathScanner_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind::XPathScanner_LexKind(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind::XPathScanner_LexKind() {}
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Comma{ static_cast<int32_t>(0x2c) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Slash{ static_cast<int32_t>(0x2f) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::At{ static_cast<int32_t>(0x40) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Dot{ static_cast<int32_t>(0x2e) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::LParens{ static_cast<int32_t>(0x28) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::RParens{ static_cast<int32_t>(0x29) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::LBracket{ static_cast<int32_t>(0x5b) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::RBracket{ static_cast<int32_t>(0x5d) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Star{ static_cast<int32_t>(0x2a) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Plus{ static_cast<int32_t>(0x2b) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Minus{ static_cast<int32_t>(0x2d) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Eq{ static_cast<int32_t>(0x3d) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Lt{ static_cast<int32_t>(0x3c) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Gt{ static_cast<int32_t>(0x3e) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Bang{ static_cast<int32_t>(0x21) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Dollar{ static_cast<int32_t>(0x24) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Apos{ static_cast<int32_t>(0x27) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Quote{ static_cast<int32_t>(0x22) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Union{ static_cast<int32_t>(0x7c) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Ne{ static_cast<int32_t>(0x4e) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Le{ static_cast<int32_t>(0x4c) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Ge{ static_cast<int32_t>(0x47) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::And{ static_cast<int32_t>(0x41) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Or{ static_cast<int32_t>(0x4f) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::DotDot{ static_cast<int32_t>(0x44) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::SlashSlash{ static_cast<int32_t>(0x53) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Name{ static_cast<int32_t>(0x6e) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::String{ static_cast<int32_t>(0x73) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Number{ static_cast<int32_t>(0x64) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Axe{ static_cast<int32_t>(0x61) };
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner_LexKind::Eof{ static_cast<int32_t>(0x45) };
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::XPathScanner::*)(::StringW)>(&::MS::Internal::Xml::XPath::XPathScanner::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x60c24d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.get_SourceText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::MS::Internal::Xml::XPath::XPathScanner::*)()>(
    &::MS::Internal::Xml::XPath::XPathScanner::get_SourceText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60c588c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(),
                                                                               "get_SourceText", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.get_CurrentChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::MS::Internal::Xml::XPath::XPathScanner::*)()>(
    &::MS::Internal::Xml::XPath::XPathScanner::get_CurrentChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60c5894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(),
                                                                               "get_CurrentChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.NextChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::MS::Internal::Xml::XPath::XPathScanner::*)()>(&::MS::Internal::Xml::XPath::XPathScanner::NextChar)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60c5828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "NextChar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.get_Kind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MS::Internal::Xml::XPath::XPathScanner_LexKind (::MS::Internal::Xml::XPath::XPathScanner::*)()>(
    &::MS::Internal::Xml::XPath::XPathScanner::get_Kind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60c589c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "get_Kind",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::MS::Internal::Xml::XPath::XPathScanner::*)()>(&::MS::Internal::Xml::XPath::XPathScanner::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60c58a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "get_Name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::MS::Internal::Xml::XPath::XPathScanner::*)()>(&::MS::Internal::Xml::XPath::XPathScanner::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60c58ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "get_Prefix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.get_StringValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::MS::Internal::Xml::XPath::XPathScanner::*)()>(
    &::MS::Internal::Xml::XPath::XPathScanner::get_StringValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60c58b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(),
                                                                               "get_StringValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.get_NumberValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::MS::Internal::Xml::XPath::XPathScanner::*)()>(
    &::MS::Internal::Xml::XPath::XPathScanner::get_NumberValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60c58bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(),
                                                                               "get_NumberValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.get_CanBeFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::MS::Internal::Xml::XPath::XPathScanner::*)()>(&::MS::Internal::Xml::XPath::XPathScanner::get_CanBeFunction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60c58c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(),
                                                                               "get_CanBeFunction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.SkipSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::MS::Internal::Xml::XPath::XPathScanner::*)()>(&::MS::Internal::Xml::XPath::XPathScanner::SkipSpace)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x60c58cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "SkipSpace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.NextLex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::MS::Internal::Xml::XPath::XPathScanner::*)()>(&::MS::Internal::Xml::XPath::XPathScanner::NextLex)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x60c4240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "NextLex",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.ScanNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::MS::Internal::Xml::XPath::XPathScanner::*)()>(&::MS::Internal::Xml::XPath::XPathScanner::ScanNumber)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x60c5a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "ScanNumber",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.ScanFraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::MS::Internal::Xml::XPath::XPathScanner::*)()>(&::MS::Internal::Xml::XPath::XPathScanner::ScanFraction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60c58fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "ScanFraction",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.ScanString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::MS::Internal::Xml::XPath::XPathScanner::*)()>(&::MS::Internal::Xml::XPath::XPathScanner::ScanString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60c59b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "ScanString",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::XPathScanner.ScanName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::MS::Internal::Xml::XPath::XPathScanner::*)()>(&::MS::Internal::Xml::XPath::XPathScanner::ScanName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60c5b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "ScanName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__xpathExpr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xpathExpr;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__xpathExpr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xpathExpr;
}
constexpr void MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_set__xpathExpr(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xpathExpr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__xpathExprIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xpathExprIndex;
}
constexpr int32_t const& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__xpathExprIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xpathExprIndex;
}
constexpr void MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_set__xpathExprIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xpathExprIndex = value;
}
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__kind() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kind;
}
constexpr ::MS::Internal::Xml::XPath::XPathScanner_LexKind const& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__kind() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kind;
}
constexpr void MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_set__kind(::MS::Internal::Xml::XPath::XPathScanner_LexKind value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____kind = value;
}
constexpr char16_t& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__currentChar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentChar;
}
constexpr char16_t const& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__currentChar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentChar;
}
constexpr void MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_set__currentChar(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentChar = value;
}
constexpr ::StringW& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefix;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefix;
}
constexpr void MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_set__prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__stringValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringValue;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__stringValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringValue;
}
constexpr void MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_set__stringValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stringValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__numberValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberValue;
}
constexpr double_t const& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__numberValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberValue;
}
constexpr void MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_set__numberValue(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberValue = value;
}
constexpr bool& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__canBeFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBeFunction;
}
constexpr bool const& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__canBeFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canBeFunction;
}
constexpr void MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_set__canBeFunction(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canBeFunction = value;
}
constexpr ::System::Xml::XmlCharType& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__xmlCharType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlCharType;
}
constexpr ::System::Xml::XmlCharType const& MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_get__xmlCharType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlCharType;
}
constexpr void MS::Internal::Xml::XPath::XPathScanner::__cordl_internal_set__xmlCharType(::System::Xml::XmlCharType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xmlCharType = value;
}
inline void MS::Internal::Xml::XPath::XPathScanner::_ctor(::StringW xpathExpr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xpathExpr);
}
inline ::StringW MS::Internal::Xml::XPath::XPathScanner::get_SourceText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "get_SourceText",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline char16_t MS::Internal::Xml::XPath::XPathScanner::get_CurrentChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(),
                                                                             "get_CurrentChar", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline bool MS::Internal::Xml::XPath::XPathScanner::NextChar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "NextChar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::XPathScanner_LexKind MS::Internal::Xml::XPath::XPathScanner::get_Kind() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "get_Kind",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::MS::Internal::Xml::XPath::XPathScanner_LexKind, false>(this, ___internal_method);
}
inline ::StringW MS::Internal::Xml::XPath::XPathScanner::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "get_Name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW MS::Internal::Xml::XPath::XPathScanner::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "get_Prefix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW MS::Internal::Xml::XPath::XPathScanner::get_StringValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(),
                                                                             "get_StringValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline double_t MS::Internal::Xml::XPath::XPathScanner::get_NumberValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(),
                                                                             "get_NumberValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline bool MS::Internal::Xml::XPath::XPathScanner::get_CanBeFunction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(),
                                                                             "get_CanBeFunction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void MS::Internal::Xml::XPath::XPathScanner::SkipSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "SkipSpace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool MS::Internal::Xml::XPath::XPathScanner::NextLex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "NextLex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline double_t MS::Internal::Xml::XPath::XPathScanner::ScanNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "ScanNumber",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t MS::Internal::Xml::XPath::XPathScanner::ScanFraction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "ScanFraction",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::StringW MS::Internal::Xml::XPath::XPathScanner::ScanString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "ScanString",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW MS::Internal::Xml::XPath::XPathScanner::ScanName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::XPath::XPathScanner*>::get(), "ScanName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::XPathScanner* MS::Internal::Xml::XPath::XPathScanner::New_ctor(::StringW xpathExpr) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::MS::Internal::Xml::XPath::XPathScanner*>(xpathExpr));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::XPathScanner::XPathScanner() {}
