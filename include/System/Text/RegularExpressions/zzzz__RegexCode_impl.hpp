#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexCode.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexPrefix_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexBoyerMoore_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexPrefix_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCode::*)(
    ::ArrayW<int32_t, ::Array<int32_t>*>, ::System::Collections::Generic::List_1<::StringW>*, int32_t, ::System::Collections::Hashtable*, int32_t, ::System::Text::RegularExpressions::RegexBoyerMoore*,
    ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>, int32_t, bool)>(&::System::Text::RegularExpressions::RegexCode::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4419148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCode.OpcodeBacktracks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::Text::RegularExpressions::RegexCode::OpcodeBacktracks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x4419218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCode*>::get(), "OpcodeBacktracks",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Codes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Codes;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Codes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Codes;
}
constexpr void System::Text::RegularExpressions::RegexCode::__cordl_internal_set_Codes(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Codes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Strings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Strings;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Strings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Strings;
}
constexpr void System::Text::RegularExpressions::RegexCode::__cordl_internal_set_Strings(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Strings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_TrackCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackCount;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_TrackCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TrackCount;
}
constexpr void System::Text::RegularExpressions::RegexCode::__cordl_internal_set_TrackCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TrackCount = value;
}
constexpr ::System::Collections::Hashtable*& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Caps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Caps;
}
constexpr ::System::Collections::Hashtable* const& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Caps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Caps;
}
constexpr void System::Text::RegularExpressions::RegexCode::__cordl_internal_set_Caps(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Caps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_CapSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapSize;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_CapSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CapSize;
}
constexpr void System::Text::RegularExpressions::RegexCode::__cordl_internal_set_CapSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CapSize = value;
}
constexpr ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_FCPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FCPrefix;
}
constexpr ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> const& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_FCPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FCPrefix;
}
constexpr void System::Text::RegularExpressions::RegexCode::__cordl_internal_set_FCPrefix(::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FCPrefix = value;
}
constexpr ::System::Text::RegularExpressions::RegexBoyerMoore*& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_BMPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BMPrefix;
}
constexpr ::System::Text::RegularExpressions::RegexBoyerMoore* const& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_BMPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BMPrefix;
}
constexpr void System::Text::RegularExpressions::RegexCode::__cordl_internal_set_BMPrefix(::System::Text::RegularExpressions::RegexBoyerMoore* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___BMPrefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Anchors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Anchors;
}
constexpr int32_t const& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Anchors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Anchors;
}
constexpr void System::Text::RegularExpressions::RegexCode::__cordl_internal_set_Anchors(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Anchors = value;
}
constexpr bool& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_RightToLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightToLeft;
}
constexpr bool const& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_RightToLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RightToLeft;
}
constexpr void System::Text::RegularExpressions::RegexCode::__cordl_internal_set_RightToLeft(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RightToLeft = value;
}
inline void System::Text::RegularExpressions::RegexCode::_ctor(::ArrayW<int32_t, ::Array<int32_t>*> codes, ::System::Collections::Generic::List_1<::StringW>* stringlist, int32_t trackcount,
                                                               ::System::Collections::Hashtable* caps, int32_t capsize, ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix,
                                                               ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> fcPrefix, int32_t anchors, bool rightToLeft) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, codes, stringlist, trackcount, caps, capsize, bmPrefix, fcPrefix, anchors, rightToLeft);
}
inline bool System::Text::RegularExpressions::RegexCode::OpcodeBacktracks(int32_t Op) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCode*>::get(), "OpcodeBacktracks",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, Op);
}
inline ::System::Text::RegularExpressions::RegexCode*
System::Text::RegularExpressions::RegexCode::New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> codes, ::System::Collections::Generic::List_1<::StringW>* stringlist, int32_t trackcount,
                                                      ::System::Collections::Hashtable* caps, int32_t capsize, ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix,
                                                      ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> fcPrefix, int32_t anchors, bool rightToLeft) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::RegularExpressions::RegexCode*>(codes, stringlist, trackcount, caps, capsize, bmPrefix, fcPrefix, anchors, rightToLeft));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexCode::RegexCode() {}
