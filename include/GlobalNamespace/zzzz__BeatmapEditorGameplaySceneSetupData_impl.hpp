#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEditorGameplaySceneSetupData.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_impl.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorGameplaySceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorStartTestLevelData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEditorGameplaySceneSetupData::*)(
    ::ByRef<::GlobalNamespace::BeatmapEditorStartTestLevelData>)>(&::GlobalNamespace::BeatmapEditorGameplaySceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x571d51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapEditorStartTestLevelData>>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::GlobalNamespace::BeatmapEditorStartTestLevelData const& GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::__cordl_internal_set_data(::GlobalNamespace::BeatmapEditorStartTestLevelData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
inline void GlobalNamespace::BeatmapEditorGameplaySceneSetupData::_ctor(::ByRef<::GlobalNamespace::BeatmapEditorStartTestLevelData> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::BeatmapEditorStartTestLevelData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData* GlobalNamespace::BeatmapEditorGameplaySceneSetupData::New_ctor(::ByRef<::GlobalNamespace::BeatmapEditorStartTestLevelData> data) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapEditorGameplaySceneSetupData*>(data));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorGameplaySceneSetupData::BeatmapEditorGameplaySceneSetupData() {}
