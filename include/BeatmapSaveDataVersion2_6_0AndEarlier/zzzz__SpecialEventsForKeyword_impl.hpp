#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/SpecialEventsForKeyword.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SpecialEventsForKeyword_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword.get_keyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>(), { "get_keyword", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword.get_specialEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* (
    ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::get_specialEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>(), { "get_specialEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::*)(
    ::StringW, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::__cordl_internal_get__keyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyword;
}
constexpr ::StringW const& BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::__cordl_internal_get__keyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyword;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::__cordl_internal_set__keyword(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyword = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*& BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::__cordl_internal_get__specialEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEvents;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* const&
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::__cordl_internal_get__specialEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEvents;
}
constexpr void
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::__cordl_internal_set__specialEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____specialEvents = value;
}
inline ::StringW BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::get_keyword() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>(), { "get_keyword", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::get_specialEvents() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>(), { "get_specialEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*>(this, ___internal_method);
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::_ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* specialEvents) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyword, specialEvents);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::New_ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* specialEvents) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>(keyword, specialEvents));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::SpecialEventsForKeyword() {}
