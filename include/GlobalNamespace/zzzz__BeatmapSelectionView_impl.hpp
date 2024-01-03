#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmap_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapSelectionView.SetBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapSelectionView::*)(::GlobalNamespace::PreviewDifficultyBeatmap*)>(
    &::GlobalNamespace::BeatmapSelectionView::SetBeatmap)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22df98c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSelectionView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSelectionView*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapSelectionView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapSelectionView::*)()>(&::GlobalNamespace::BeatmapSelectionView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22dfa58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSelectionView*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LevelBar*& GlobalNamespace::BeatmapSelectionView::__get__levelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> const& GlobalNamespace::BeatmapSelectionView::__get__levelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr void GlobalNamespace::BeatmapSelectionView::__set__levelBar(::GlobalNamespace::LevelBar* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::BeatmapSelectionView::__get__noLevelText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noLevelText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::BeatmapSelectionView::__get__noLevelText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noLevelText;
}
constexpr void GlobalNamespace::BeatmapSelectionView::__set__noLevelText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noLevelText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatmapSelectionView::SetBeatmap(::GlobalNamespace::PreviewDifficultyBeatmap* beatmapLevel) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSelectionView*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevel);
}
inline ::GlobalNamespace::BeatmapSelectionView* GlobalNamespace::BeatmapSelectionView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapSelectionView*>());
}
inline void GlobalNamespace::BeatmapSelectionView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSelectionView*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapSelectionView::BeatmapSelectionView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
