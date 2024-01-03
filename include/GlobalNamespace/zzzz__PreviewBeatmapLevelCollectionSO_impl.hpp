#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__PreviewBeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelCollectionSO.get_beatmapLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (
    ::GlobalNamespace::PreviewBeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::PreviewBeatmapLevelCollectionSO::get_beatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234ba98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*>::get(),
                                                                               "get_beatmapLevels", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewBeatmapLevelCollectionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PreviewBeatmapLevelCollectionSO::*)()>(
    &::GlobalNamespace::PreviewBeatmapLevelCollectionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234baa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelCollection"
constexpr GlobalNamespace::PreviewBeatmapLevelCollectionSO::operator ::GlobalNamespace::IBeatmapLevelCollection*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelCollection*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*, ::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*>& GlobalNamespace::PreviewBeatmapLevelCollectionSO::__get__beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr ::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*, ::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*> const&
GlobalNamespace::PreviewBeatmapLevelCollectionSO::__get__beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr void GlobalNamespace::PreviewBeatmapLevelCollectionSO::__set__beatmapLevels(::ArrayW<::GlobalNamespace::PreviewBeatmapLevelSO*, ::Array<::GlobalNamespace::PreviewBeatmapLevelSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::PreviewBeatmapLevelCollectionSO::get_beatmapLevels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*>::get(),
                                                                             "get_beatmapLevels", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PreviewBeatmapLevelCollectionSO* GlobalNamespace::PreviewBeatmapLevelCollectionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*>());
}
inline void GlobalNamespace::PreviewBeatmapLevelCollectionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewBeatmapLevelCollectionSO*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PreviewBeatmapLevelCollectionSO::PreviewBeatmapLevelCollectionSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
