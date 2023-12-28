#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.get_icon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(
    &::GlobalNamespace::MultiplayerBadgeDataSO::get_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(), "get_icon",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.get_titleLocalizationKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(
    &::GlobalNamespace::MultiplayerBadgeDataSO::get_titleLocalizationKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                                                                               "get_titleLocalizationKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.get_subtitleLocalizationKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(
    &::GlobalNamespace::MultiplayerBadgeDataSO::get_subtitleLocalizationKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                                                                               "get_subtitleLocalizationKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.CalculateBadgeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (
    ::GlobalNamespace::MultiplayerBadgeDataSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::GlobalNamespace::PlayerDataModel*,
                                                  ::GlobalNamespace::IDifficultyBeatmap*, float_t)>(&::GlobalNamespace::MultiplayerBadgeDataSO::CalculateBadgeData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cdc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MultiplayerBadgeDataSO::__get__titleLocalizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerBadgeDataSO::__get__titleLocalizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleLocalizationKey;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataSO::__set__titleLocalizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____titleLocalizationKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::MultiplayerBadgeDataSO::__get__subtitleLocalizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtitleLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerBadgeDataSO::__get__subtitleLocalizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtitleLocalizationKey;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataSO::__set__subtitleLocalizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subtitleLocalizationKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Sprite*& GlobalNamespace::MultiplayerBadgeDataSO::__get__icon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& GlobalNamespace::MultiplayerBadgeDataSO::__get__icon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataSO::__set__icon(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____icon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Sprite* GlobalNamespace::MultiplayerBadgeDataSO::get_icon() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(), "get_icon",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerBadgeDataSO::get_titleLocalizationKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                                                                             "get_titleLocalizationKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerBadgeDataSO::get_subtitleLocalizationKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                                                                             "get_subtitleLocalizationKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData*
GlobalNamespace::MultiplayerBadgeDataSO::CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                            ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, float_t randomMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(), "CalculateBadgeData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*, false>(this, ___internal_method, resultsData, playerDataModel, difficultyBeatmap, randomMultiplier);
}
inline ::GlobalNamespace::MultiplayerBadgeDataSO* GlobalNamespace::MultiplayerBadgeDataSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerBadgeDataSO*>());
}
inline void GlobalNamespace::MultiplayerBadgeDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataSO::MultiplayerBadgeDataSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
