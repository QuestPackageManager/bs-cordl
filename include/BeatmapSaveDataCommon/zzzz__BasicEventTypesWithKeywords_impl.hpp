#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon\BasicEventTypesWithKeywords.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__BasicEventTypesWithKeywords_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BasicEventTypesWithKeywords_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword.get_keyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::*)()>(
    &::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375fe78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>(), { "get_keyword", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword.get_eventTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* (
    ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::*)()>(&::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::get_eventTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375fe80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>(), { "get_eventTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::*)(
    ::StringW, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*)>(&::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375fe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::__cordl_internal_get_k() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k;
}
constexpr ::StringW const& BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::__cordl_internal_get_k() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k;
}
constexpr void BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::__cordl_internal_set_k(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*& BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* const&
BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void
BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::__cordl_internal_set_e(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
inline ::StringW BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::get_keyword() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>(), { "get_keyword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::get_eventTypes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>(), { "get_eventTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*>(this, ___internal_method);
}
inline void BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::_ctor(::StringW keyword,
                                                                                                ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* eventTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword, eventTypes);
}
inline ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*
BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::New_ctor(::StringW keyword,
                                                                                       ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* eventTypes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>(keyword, eventTypes));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword::BasicEventTypesWithKeywords_BasicEventTypesForKeyword() {}
//  Writing Method size for method: ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords.get_data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* (
    ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords::*)()>(&::BeatmapSaveDataCommon::BasicEventTypesWithKeywords::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375fe70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>(), { "get_data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataCommon::BasicEventTypesWithKeywords::*)(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>*)>(&::BeatmapSaveDataCommon::BasicEventTypesWithKeywords::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375e6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>*&
BeatmapSaveDataCommon::BasicEventTypesWithKeywords::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* const&
BeatmapSaveDataCommon::BasicEventTypesWithKeywords::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataCommon::BasicEventTypesWithKeywords::__cordl_internal_set_d(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* BeatmapSaveDataCommon::BasicEventTypesWithKeywords::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>*>(this, ___internal_method);
}
inline void BeatmapSaveDataCommon::BasicEventTypesWithKeywords::_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*
BeatmapSaveDataCommon::BasicEventTypesWithKeywords::New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords_BasicEventTypesForKeyword*>* data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>(data));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords::BasicEventTypesWithKeywords() {}
