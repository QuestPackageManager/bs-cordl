#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexBoyerMoore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexBoyerMoore_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexBoyerMoore._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexBoyerMoore::*)(
    ::StringW, bool, bool, ::System::Globalization::CultureInfo*)>(&::System::Text::RegularExpressions::RegexBoyerMoore::_ctor)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x4411318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexBoyerMoore.MatchPattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexBoyerMoore::*)(::StringW, int32_t)>(
    &::System::Text::RegularExpressions::RegexBoyerMoore::MatchPattern)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x44117ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(), "MatchPattern", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexBoyerMoore.IsMatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::RegexBoyerMoore::*)(::StringW, int32_t, int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexBoyerMoore::IsMatch)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x44118d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(), "IsMatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexBoyerMoore.Scan
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::RegularExpressions::RegexBoyerMoore::*)(::StringW, int32_t, int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexBoyerMoore::Scan)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x441193c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(), "Scan", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_Positive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Positive;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_Positive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Positive;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_Positive(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Positive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_NegativeASCII() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NegativeASCII;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_NegativeASCII() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NegativeASCII;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_NegativeASCII(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NegativeASCII)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_NegativeUnicode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NegativeUnicode;
}
constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const&
System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_NegativeUnicode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NegativeUnicode;
}
constexpr void
System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_NegativeUnicode(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NegativeUnicode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_Pattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pattern;
}
constexpr ::StringW const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_Pattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pattern;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_Pattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Pattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_LowASCII() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LowASCII;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_LowASCII() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LowASCII;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_LowASCII(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LowASCII = value;
}
constexpr int32_t& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_HighASCII() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HighASCII;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_HighASCII() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HighASCII;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_HighASCII(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HighASCII = value;
}
constexpr bool& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_RightToLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightToLeft;
}
constexpr bool const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_RightToLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightToLeft;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_RightToLeft(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RightToLeft = value;
}
constexpr bool& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_CaseInsensitive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CaseInsensitive;
}
constexpr bool const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get_CaseInsensitive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CaseInsensitive;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set_CaseInsensitive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CaseInsensitive = value;
}
constexpr ::System::Globalization::CultureInfo*& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void System::Text::RegularExpressions::RegexBoyerMoore::__cordl_internal_set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____culture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Text::RegularExpressions::RegexBoyerMoore::_ctor(::StringW pattern, bool caseInsensitive, bool rightToLeft, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pattern, caseInsensitive, rightToLeft, culture);
}
inline bool System::Text::RegularExpressions::RegexBoyerMoore::MatchPattern(::StringW text, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(), "MatchPattern", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text, index);
}
inline bool System::Text::RegularExpressions::RegexBoyerMoore::IsMatch(::StringW text, int32_t index, int32_t beglimit, int32_t endlimit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(), "IsMatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text, index, beglimit, endlimit);
}
inline int32_t System::Text::RegularExpressions::RegexBoyerMoore::Scan(::StringW text, int32_t index, int32_t beglimit, int32_t endlimit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(), "Scan", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, text, index, beglimit, endlimit);
}
inline ::System::Text::RegularExpressions::RegexBoyerMoore* System::Text::RegularExpressions::RegexBoyerMoore::New_ctor(::StringW pattern, bool caseInsensitive, bool rightToLeft,
                                                                                                                        ::System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::RegularExpressions::RegexBoyerMoore*>(pattern, caseInsensitive, rightToLeft, culture));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexBoyerMoore::RegexBoyerMoore() {}
