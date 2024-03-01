#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SpecialEventsForKeyword_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword.get_keyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::*)()>(
    &::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12fdbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>::get(), "get_keyword",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword.get_specialEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* (
    ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::get_specialEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12fdbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>::get(), "get_specialEvents",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::*)(
    ::StringW, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x12fdc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keyword)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*& BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::__cordl_internal_get__specialEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEvents;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*> const&
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::__cordl_internal_get__specialEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialEvents;
}
constexpr void
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::__cordl_internal_set__specialEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____specialEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::get_keyword() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>::get(), "get_keyword",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::get_specialEvents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>::get(), "get_specialEvents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*
BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::New_ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* specialEvents) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>(keyword, specialEvents));
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::_ctor(::StringW keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* specialEvents) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword, specialEvents);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SpecialEventsForKeyword::SpecialEventsForKeyword() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
