#pragma once
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataPersonalBestSO_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO.CalculateBadgeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (
    ::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::GlobalNamespace::PlayerDataModel*,
                                                              ::GlobalNamespace::IDifficultyBeatmap*, float_t)>(&::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO::CalculateBadgeData)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x23cf314;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO::*)()>(
    &::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23cf864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MultiplayerBadgeDataPersonalBestSO::__get__weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weight;
}
constexpr float_t const& GlobalNamespace::MultiplayerBadgeDataPersonalBestSO::__get__weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weight;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataPersonalBestSO::__set__weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____weight = value;
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData*
GlobalNamespace::MultiplayerBadgeDataPersonalBestSO::CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                        ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                                                        float_t randomMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO*>::get(), "CalculateBadgeData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*, false>(this, ___internal_method, resultsData, playerDataModel, difficultyBeatmap, randomMultiplier);
}
inline ::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO* GlobalNamespace::MultiplayerBadgeDataPersonalBestSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO*>());
}
inline void GlobalNamespace::MultiplayerBadgeDataPersonalBestSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataPersonalBestSO::MultiplayerBadgeDataPersonalBestSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
