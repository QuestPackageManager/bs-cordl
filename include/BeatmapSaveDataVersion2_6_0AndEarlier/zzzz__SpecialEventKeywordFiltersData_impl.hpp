#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/SpecialEventKeywordFiltersData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SpecialEventKeywordFiltersData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SpecialEventsForKeyword_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData.get_keywords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* (
    ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::get_keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270ae10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>::get(),
                                                 "get_keywords", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::*)(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x270ae18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keywords)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::get_keywords() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>::get(), "get_keywords",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*, false>(this, ___internal_method);
}
inline void
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* keywords) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keywords);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>* keywords) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData*>(keywords));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventKeywordFiltersData::SpecialEventKeywordFiltersData() {}
