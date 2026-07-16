#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/SpecialEventKeywordFiltersData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SpecialEventKeywordFiltersData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SpecialEventsForKeyword_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData.get_keywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* (
    ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::get_keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>(), { "get_keywords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::*)(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375b5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*&
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::__cordl_internal_get__keywords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keywords;
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* const&
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::__cordl_internal_get__keywords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keywords;
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::__cordl_internal_set__keywords(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keywords = value;
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::get_keywords() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>(), { "get_keywords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*>(this, ___internal_method);
}
inline void
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* keywords) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keywords);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* keywords) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>(keywords));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::SpecialEventKeywordFiltersData() {}
