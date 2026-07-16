#pragma once
// IWYU pragma private; include "System/ByteMatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ByteMatcher_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__TermInfoStrings_def.hpp"
//  Writing Method size for method: ::System::ByteMatcher.AddMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ByteMatcher::*)(::System::TermInfoStrings, ::ArrayW<uint8_t>)>(&::System::ByteMatcher::AddMapping)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c9ada4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::ByteMatcher*>(), { "AddMapping", {}, { ::i2c::type_of<::System::TermInfoStrings>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher.Sort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ByteMatcher::*)()>(&::System::ByteMatcher::Sort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c9aea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ByteMatcher*>(), { "Sort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher.StartsWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ByteMatcher::*)(int32_t)>(&::System::ByteMatcher::StartsWith)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c98700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ByteMatcher*>(), { "StartsWith", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher.Match
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TermInfoStrings (::System::ByteMatcher::*)(::ArrayW<char16_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::ByteMatcher::Match)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x5c98754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ByteMatcher*>(),
                                                { "Match", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ByteMatcher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ByteMatcher::*)()>(&::System::ByteMatcher::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c9acdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ByteMatcher*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::ByteMatcher::__cordl_internal_get_map() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___map;
}
constexpr ::System::Collections::Hashtable* const& System::ByteMatcher::__cordl_internal_get_map() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___map;
}
constexpr void System::ByteMatcher::__cordl_internal_set_map(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___map = value;
}
constexpr ::System::Collections::Hashtable*& System::ByteMatcher::__cordl_internal_get_starts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___starts;
}
constexpr ::System::Collections::Hashtable* const& System::ByteMatcher::__cordl_internal_get_starts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___starts;
}
constexpr void System::ByteMatcher::__cordl_internal_set_starts(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___starts = value;
}
inline void System::ByteMatcher::AddMapping(::System::TermInfoStrings key, ::ArrayW<uint8_t> val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ByteMatcher*>(), { "AddMapping", {}, { ::i2c::type_of<::System::TermInfoStrings>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, val);
}
inline void System::ByteMatcher::Sort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ByteMatcher*>(), { "Sort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::ByteMatcher::StartsWith(int32_t c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ByteMatcher*>(), { "StartsWith", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::System::TermInfoStrings System::ByteMatcher::Match(::ArrayW<char16_t> buffer, int32_t offset, int32_t length, ::by_ref<int32_t> used) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ByteMatcher*>(),
                                              { "Match", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TermInfoStrings>(this, ___internal_method, buffer, offset, length, used);
}
inline void System::ByteMatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::ByteMatcher*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ByteMatcher* System::ByteMatcher::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ByteMatcher*>());
}
// Ctor Parameters []
constexpr ::System::ByteMatcher::ByteMatcher() {}
