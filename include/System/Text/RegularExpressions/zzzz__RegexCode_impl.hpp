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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexCode::*)(
    ::ArrayW<int32_t>, ::System::Collections::Generic::List_1<::StringW>*, int32_t, ::System::Collections::Hashtable*, int32_t, ::System::Text::RegularExpressions::RegexBoyerMoore*,
    ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>, int32_t, bool)>(&::System::Text::RegularExpressions::RegexCode::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6384500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCode*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexBoyerMoore*>(),
                                             ::i2c::type_of<::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCode.OpcodeBacktracks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Text::RegularExpressions::RegexCode::OpcodeBacktracks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63845d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCode*>(), { "OpcodeBacktracks", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Codes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Codes;
}
constexpr ::ArrayW<int32_t> const& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Codes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Codes;
}
constexpr void System::Text::RegularExpressions::RegexCode::__cordl_internal_set_Codes(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Codes = value;
}
constexpr ::ArrayW<::StringW>& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Strings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Strings;
}
constexpr ::ArrayW<::StringW> const& System::Text::RegularExpressions::RegexCode::__cordl_internal_get_Strings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Strings;
}
constexpr void System::Text::RegularExpressions::RegexCode::__cordl_internal_set_Strings(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Strings = value;
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
  this->___Caps = value;
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
  this->___BMPrefix = value;
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
inline void System::Text::RegularExpressions::RegexCode::_ctor(::ArrayW<int32_t> codes, ::System::Collections::Generic::List_1<::StringW>* stringlist, int32_t trackcount,
                                                               ::System::Collections::Hashtable* caps, int32_t capsize, ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix,
                                                               ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> fcPrefix, int32_t anchors, bool rightToLeft) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCode*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexBoyerMoore*>(),
                                           ::i2c::type_of<::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codes, stringlist, trackcount, caps, capsize, bmPrefix, fcPrefix, anchors, rightToLeft);
}
inline bool System::Text::RegularExpressions::RegexCode::OpcodeBacktracks(int32_t Op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexCode*>(), { "OpcodeBacktracks", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, Op);
}
inline ::System::Text::RegularExpressions::RegexCode* System::Text::RegularExpressions::RegexCode::New_ctor(::ArrayW<int32_t> codes, ::System::Collections::Generic::List_1<::StringW>* stringlist,
                                                                                                            int32_t trackcount, ::System::Collections::Hashtable* caps, int32_t capsize,
                                                                                                            ::System::Text::RegularExpressions::RegexBoyerMoore* bmPrefix,
                                                                                                            ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> fcPrefix,
                                                                                                            int32_t anchors, bool rightToLeft) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::RegexCode*>(codes, stringlist, trackcount, caps, capsize, bmPrefix, fcPrefix, anchors, rightToLeft));
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexCode::RegexCode() {}
