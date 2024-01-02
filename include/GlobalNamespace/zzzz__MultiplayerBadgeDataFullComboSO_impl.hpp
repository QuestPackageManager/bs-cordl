#pragma once
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataFullComboSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataFullComboSO.CalculateBadgeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (
    ::GlobalNamespace::MultiplayerBadgeDataFullComboSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::GlobalNamespace::PlayerDataModel*,
                                                           ::GlobalNamespace::IDifficultyBeatmap*, float_t)>(&::GlobalNamespace::MultiplayerBadgeDataFullComboSO::CalculateBadgeData)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x23cd798;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataFullComboSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataFullComboSO::*)()>(
    &::GlobalNamespace::MultiplayerBadgeDataFullComboSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23cdc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MultiplayerBadgeDataFullComboSO::__get__weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weight;
}
constexpr float_t const& GlobalNamespace::MultiplayerBadgeDataFullComboSO::__get__weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weight;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataFullComboSO::__set__weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____weight = value;
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData*
GlobalNamespace::MultiplayerBadgeDataFullComboSO::CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                     ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap,
                                                                     float_t randomMultiplier) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*, false>(this, ___internal_method, resultsData, playerDataModel, difficultyBeatmap, randomMultiplier);
}
inline ::GlobalNamespace::MultiplayerBadgeDataFullComboSO* GlobalNamespace::MultiplayerBadgeDataFullComboSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>());
}
inline void GlobalNamespace::MultiplayerBadgeDataFullComboSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataFullComboSO*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataFullComboSO::MultiplayerBadgeDataFullComboSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
