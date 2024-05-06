#pragma once
// IWYU pragma private; include "BeatmapSaveDataCommon/BasicEventTypesWithKeywords.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__BasicEventTypesWithKeywords_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BasicEventTypesWithKeywords_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__BeatmapEventType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword.get_keyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::*)()>(
    &::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14f4548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                                                 "get_keyword", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword.get_eventTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* (
    ::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::*)()>(&::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_eventTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14f4550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                                                 "get_eventTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::*)(
    ::StringW, ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*)>(&::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x14f4558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_get_k() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k;
}
constexpr ::StringW const& BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_get_k() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k;
}
constexpr void BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_set_k(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*&
BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*> const&
BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void
BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__cordl_internal_set_e(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___e)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_keyword() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                                               "get_keyword", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_eventTypes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                                               "get_eventTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*
BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::New_ctor(::StringW keyword,
                                                                                          ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* eventTypes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>(keyword, eventTypes));
}
inline void BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::_ctor(::StringW keyword,
                                                                                                   ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>* eventTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::BeatmapEventType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword, eventTypes);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword() {}
//  Writing Method size for method: ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords.get_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* (::BeatmapSaveDataCommon::BasicEventTypesWithKeywords::*)()>(
    &::BeatmapSaveDataCommon::BasicEventTypesWithKeywords::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14f4518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>::get(),
                                                                               "get_data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataCommon::BasicEventTypesWithKeywords::*)(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*)>(&::BeatmapSaveDataCommon::BasicEventTypesWithKeywords::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x14f4520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*&
BeatmapSaveDataCommon::BasicEventTypesWithKeywords::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*> const&
BeatmapSaveDataCommon::BasicEventTypesWithKeywords::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void BeatmapSaveDataCommon::BasicEventTypesWithKeywords::__cordl_internal_set_d(
    ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___d)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* BeatmapSaveDataCommon::BasicEventTypesWithKeywords::get_data() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>::get(),
                                                                             "get_data", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*, false>(this,
                                                                                                                                                                                 ___internal_method);
}
inline ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*
BeatmapSaveDataCommon::BasicEventTypesWithKeywords::New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>(data));
}
inline void
BeatmapSaveDataCommon::BasicEventTypesWithKeywords::_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataCommon::BasicEventTypesWithKeywords*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::System::Collections::Generic::List_1<::BeatmapSaveDataCommon::__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::BasicEventTypesWithKeywords::BasicEventTypesWithKeywords() {}
