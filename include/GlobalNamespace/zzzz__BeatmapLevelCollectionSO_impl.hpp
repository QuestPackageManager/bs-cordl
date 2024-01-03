#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO.get_beatmapLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (
    ::GlobalNamespace::BeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::BeatmapLevelCollectionSO::get_beatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2342000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(),
                                                                               "get_beatmapLevels", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::BeatmapLevelCollectionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2342008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelCollection"
constexpr GlobalNamespace::BeatmapLevelCollectionSO::operator ::GlobalNamespace::IBeatmapLevelCollection*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapLevelCollection"
constexpr ::GlobalNamespace::IBeatmapLevelCollection* GlobalNamespace::BeatmapLevelCollectionSO::i___GlobalNamespace__IBeatmapLevelCollection() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelCollection*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*>& GlobalNamespace::BeatmapLevelCollectionSO::__get__beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> const& GlobalNamespace::BeatmapLevelCollectionSO::__get__beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr void GlobalNamespace::BeatmapLevelCollectionSO::__set__beatmapLevels(::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::BeatmapLevelCollectionSO::get_beatmapLevels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(),
                                                                             "get_beatmapLevels", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelCollectionSO* GlobalNamespace::BeatmapLevelCollectionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLevelCollectionSO*>());
}
inline void GlobalNamespace::BeatmapLevelCollectionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelCollectionSO::BeatmapLevelCollectionSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
