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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexReplacement::*)(
    ::StringW, ::System::Text::RegularExpressions::RegexNode*, ::System::Collections::Hashtable*)>(&::System::Text::RegularExpressions::RegexReplacement::_ctor)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x638a1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexNode*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexReplacement.GetOrCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexReplacement* (*)(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*,
                                                                                                                 ::StringW, ::System::Collections::Hashtable*, int32_t,
                                                                                                                 ::System::Collections::Hashtable*, ::System::Text::RegularExpressions::RegexOptions)>(
    &::System::Text::RegularExpressions::RegexReplacement::GetOrCreate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x638ecbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(),
                                                             { "GetOrCreate",
                                                               {},
                                                               { ::i2c::type_of<::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Hashtable*>(),
                                                                 ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexReplacement.get_Pattern
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::RegularExpressions::RegexReplacement::*)()>(&::System::Text::RegularExpressions::RegexReplacement::get_Pattern)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x638ede8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(), { "get_Pattern", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexReplacement.ReplacementImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexReplacement::*)(::System::Text::StringBuilder*, ::System::Text::RegularExpressions::Match*)>(
    &::System::Text::RegularExpressions::RegexReplacement::ReplacementImpl)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x638edf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(),
                                                { "ReplacementImpl", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Text::RegularExpressions::Match*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexReplacement.ReplacementImplRTL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexReplacement::*)(
    ::System::Collections::Generic::List_1<::StringW>*, ::System::Text::RegularExpressions::Match*)>(&::System::Text::RegularExpressions::RegexReplacement::ReplacementImplRTL)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x638ef90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(),
                            { "ReplacementImplRTL", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Text::RegularExpressions::Match*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexReplacement.Replace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Text::RegularExpressions::RegexReplacement::*)(::System::Text::RegularExpressions::Regex*, ::StringW, int32_t, int32_t)>(
    &::System::Text::RegularExpressions::RegexReplacement::Replace)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x638f1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(),
                            { "Replace", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Regex*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
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
  this->____strings = value;
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
  this->____rules = value;
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
  this->____Pattern_k__BackingField = value;
}
inline void System::Text::RegularExpressions::RegexReplacement::_ctor(::StringW rep, ::System::Text::RegularExpressions::RegexNode* concat, ::System::Collections::Hashtable* _caps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexNode*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rep, concat, _caps);
}
inline ::System::Text::RegularExpressions::RegexReplacement*
System::Text::RegularExpressions::RegexReplacement::GetOrCreate(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* replRef, ::StringW replacement,
                                                                ::System::Collections::Hashtable* caps, int32_t capsize, ::System::Collections::Hashtable* capnames,
                                                                ::System::Text::RegularExpressions::RegexOptions roptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(),
                                                           { "GetOrCreate",
                                                             {},
                                                             { ::i2c::type_of<::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Hashtable*>(),
                                                               ::i2c::type_of<::System::Text::RegularExpressions::RegexOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexReplacement*>(nullptr, ___internal_method, replRef, replacement, caps, capsize, capnames, roptions);
}
inline ::StringW System::Text::RegularExpressions::RegexReplacement::get_Pattern() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(), { "get_Pattern", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::RegexReplacement::ReplacementImpl(::System::Text::StringBuilder* sb, ::System::Text::RegularExpressions::Match* match) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(),
                                              { "ReplacementImpl", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Text::RegularExpressions::Match*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb, match);
}
inline void System::Text::RegularExpressions::RegexReplacement::ReplacementImplRTL(::System::Collections::Generic::List_1<::StringW>* al, ::System::Text::RegularExpressions::Match* match) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(),
                          { "ReplacementImplRTL", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Text::RegularExpressions::Match*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, al, match);
}
inline ::StringW System::Text::RegularExpressions::RegexReplacement::Replace(::System::Text::RegularExpressions::Regex* regex, ::StringW input, int32_t count, int32_t startat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexReplacement*>(),
                          { "Replace", {}, { ::i2c::type_of<::System::Text::RegularExpressions::Regex*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, regex, input, count, startat);
}
inline ::System::Text::RegularExpressions::RegexReplacement* System::Text::RegularExpressions::RegexReplacement::New_ctor(::StringW rep, ::System::Text::RegularExpressions::RegexNode* concat,
                                                                                                                          ::System::Collections::Hashtable* _caps) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::RegexReplacement*>(rep, concat, _caps));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexReplacement::RegexReplacement() {}
