#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexReplacement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexReplacement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Match_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexNode_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexOptions_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexReplacement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexReplacement::*)(
    ::StringW, ::System::Text::RegularExpressions::RegexNode*, ::System::Collections::Hashtable*)>(&::System::Text::RegularExpressions::RegexReplacement::_ctor)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x4422338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexReplacement.GetOrCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Text::RegularExpressions::RegexReplacement* (*)(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*, ::StringW,
                                                                          ::System::Collections::Hashtable*, int32_t, ::System::Collections::Hashtable*,
                                                                          ::System::Text::RegularExpressions::RegexOptions)>(&::System::Text::RegularExpressions::RegexReplacement::GetOrCreate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4426dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(), "GetOrCreate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexReplacement.get_Pattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::RegularExpressions::RegexReplacement::*)()>(
    &::System::Text::RegularExpressions::RegexReplacement::get_Pattern)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4426edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(),
                                                                               "get_Pattern", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexReplacement.ReplacementImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexReplacement::*)(
    ::System::Text::StringBuilder*, ::System::Text::RegularExpressions::Match*)>(&::System::Text::RegularExpressions::RegexReplacement::ReplacementImpl)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x4426ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(), "ReplacementImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Match*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexReplacement.ReplacementImplRTL
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexReplacement::*)(
    ::System::Collections::Generic::List_1<::StringW>*, ::System::Text::RegularExpressions::Match*)>(&::System::Text::RegularExpressions::RegexReplacement::ReplacementImplRTL)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x4427088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(), "ReplacementImplRTL", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Match*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexReplacement.Replace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::RegularExpressions::RegexReplacement::*)(
    ::System::Text::RegularExpressions::Regex*, ::StringW, int32_t, int32_t)>(&::System::Text::RegularExpressions::RegexReplacement::Replace)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x44272b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Text::RegularExpressions::RegexReplacement::__cordl_internal_get__strings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strings;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Text::RegularExpressions::RegexReplacement::__cordl_internal_get__strings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strings;
}
constexpr void System::Text::RegularExpressions::RegexReplacement::__cordl_internal_set__strings(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____strings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& System::Text::RegularExpressions::RegexReplacement::__cordl_internal_get__rules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rules;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& System::Text::RegularExpressions::RegexReplacement::__cordl_internal_get__rules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rules;
}
constexpr void System::Text::RegularExpressions::RegexReplacement::__cordl_internal_set__rules(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Text::RegularExpressions::RegexReplacement::__cordl_internal_get__Pattern_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Pattern_k__BackingField;
}
constexpr ::StringW const& System::Text::RegularExpressions::RegexReplacement::__cordl_internal_get__Pattern_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Pattern_k__BackingField;
}
constexpr void System::Text::RegularExpressions::RegexReplacement::__cordl_internal_set__Pattern_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Pattern_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Text::RegularExpressions::RegexReplacement::_ctor(::StringW rep, ::System::Text::RegularExpressions::RegexNode* concat, ::System::Collections::Hashtable* _caps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rep, concat, _caps);
}
inline ::System::Text::RegularExpressions::RegexReplacement*
System::Text::RegularExpressions::RegexReplacement::GetOrCreate(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* replRef, ::StringW replacement,
                                                                ::System::Collections::Hashtable* caps, int32_t capsize, ::System::Collections::Hashtable* capnames,
                                                                ::System::Text::RegularExpressions::RegexOptions roptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(), "GetOrCreate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexReplacement*, false>(nullptr, ___internal_method, replRef, replacement, caps, capsize, capnames, roptions);
}
inline ::StringW System::Text::RegularExpressions::RegexReplacement::get_Pattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(),
                                                                             "get_Pattern", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexReplacement::ReplacementImpl(::System::Text::StringBuilder* sb, ::System::Text::RegularExpressions::Match* match) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(), "ReplacementImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Match*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sb, match);
}
inline void System::Text::RegularExpressions::RegexReplacement::ReplacementImplRTL(::System::Collections::Generic::List_1<::StringW>* al, ::System::Text::RegularExpressions::Match* match) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(), "ReplacementImplRTL", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Match*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, al, match);
}
inline ::StringW System::Text::RegularExpressions::RegexReplacement::Replace(::System::Text::RegularExpressions::Regex* regex, ::StringW input, int32_t count, int32_t startat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexReplacement*>::get(), "Replace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::Regex*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, regex, input, count, startat);
}
inline ::System::Text::RegularExpressions::RegexReplacement* System::Text::RegularExpressions::RegexReplacement::New_ctor(::StringW rep, ::System::Text::RegularExpressions::RegexNode* concat,
                                                                                                                          ::System::Collections::Hashtable* _caps) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::RegularExpressions::RegexReplacement*>(rep, concat, _caps));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexReplacement::RegexReplacement() {}
