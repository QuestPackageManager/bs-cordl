#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoDataSO_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsPromoModel::*)(::GlobalNamespace::BeatmapLevelsPromoDataSO*)>(
    &::GlobalNamespace::BeatmapLevelsPromoModel::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x14eac3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsPromoModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsPromoDataSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoModel.IsBeatmapLevelPackPromoted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelsPromoModel::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPackPromoted)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x14ead68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsPromoModel*>::get(), "IsBeatmapLevelPackPromoted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoModel.IsBeatmapLevelPackUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelsPromoModel::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPackUpdated)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x14eadc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsPromoModel*>::get(), "IsBeatmapLevelPackUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoModel.IsBeatmapLevelPromoted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelsPromoModel::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPromoted)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x14eae20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsPromoModel*>::get(), "IsBeatmapLevelPromoted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoModel.IsBeatmapLevelUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapLevelsPromoModel::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelUpdated)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x14eae7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsPromoModel*>::get(), "IsBeatmapLevelUpdated", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__promotedBeatmapLevelPacksSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevelPacksSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__promotedBeatmapLevelPacksSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevelPacksSet;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_set__promotedBeatmapLevelPacksSet(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promotedBeatmapLevelPacksSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__updatedBeatmapLevelPacksSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevelPacksSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__updatedBeatmapLevelPacksSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevelPacksSet;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_set__updatedBeatmapLevelPacksSet(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updatedBeatmapLevelPacksSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__promotedBeatmapLevelsSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevelsSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__promotedBeatmapLevelsSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevelsSet;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_set__promotedBeatmapLevelsSet(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____promotedBeatmapLevelsSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__updatedBeatmapLevelsSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevelsSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__updatedBeatmapLevelsSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevelsSet;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_set__updatedBeatmapLevelsSet(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updatedBeatmapLevelsSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapLevelsPromoModel* GlobalNamespace::BeatmapLevelsPromoModel::New_ctor(::GlobalNamespace::BeatmapLevelsPromoDataSO* promoDataSO) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelsPromoModel*>(promoDataSO));
}
inline void GlobalNamespace::BeatmapLevelsPromoModel::_ctor(::GlobalNamespace::BeatmapLevelsPromoDataSO* promoDataSO) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsPromoModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsPromoDataSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, promoDataSO);
}
inline bool GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPackPromoted(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsPromoModel*>::get(), "IsBeatmapLevelPackPromoted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapLevelPack);
}
inline bool GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPackUpdated(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsPromoModel*>::get(), "IsBeatmapLevelPackUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapLevelPack);
}
inline bool GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPromoted(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsPromoModel*>::get(), "IsBeatmapLevelPromoted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapLevel);
}
inline bool GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelUpdated(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsPromoModel*>::get(), "IsBeatmapLevelUpdated", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, beatmapLevel);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsPromoModel::BeatmapLevelsPromoModel() {}
