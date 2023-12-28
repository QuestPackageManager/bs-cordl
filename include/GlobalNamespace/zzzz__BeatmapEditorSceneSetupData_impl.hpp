#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEditorSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorSceneSetupData.get_levelDirPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapEditorSceneSetupData::*)()>(
    &::GlobalNamespace::BeatmapEditorSceneSetupData::get_levelDirPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231c394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorSceneSetupData*>::get(),
                                                                               "get_levelDirPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorSceneSetupData.get_levelAssetPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::BeatmapEditorSceneSetupData::*)()>(
    &::GlobalNamespace::BeatmapEditorSceneSetupData::get_levelAssetPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231c39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorSceneSetupData*>::get(),
                                                                               "get_levelAssetPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEditorSceneSetupData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEditorSceneSetupData::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::BeatmapEditorSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x231c3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorSceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapEditorSceneSetupData::__get__levelDirPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDirPath;
}
constexpr ::StringW const& GlobalNamespace::BeatmapEditorSceneSetupData::__get__levelDirPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelDirPath;
}
constexpr void GlobalNamespace::BeatmapEditorSceneSetupData::__set__levelDirPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelDirPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BeatmapEditorSceneSetupData::__get__levelAssetPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAssetPath;
}
constexpr ::StringW const& GlobalNamespace::BeatmapEditorSceneSetupData::__get__levelAssetPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAssetPath;
}
constexpr void GlobalNamespace::BeatmapEditorSceneSetupData::__set__levelAssetPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelAssetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::BeatmapEditorSceneSetupData::get_levelDirPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorSceneSetupData*>::get(),
                                                                             "get_levelDirPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapEditorSceneSetupData::get_levelAssetPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorSceneSetupData*>::get(),
                                                                             "get_levelAssetPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEditorSceneSetupData* GlobalNamespace::BeatmapEditorSceneSetupData::New_ctor(::StringW levelDirPath, ::StringW levelAssetPath) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapEditorSceneSetupData*>(levelDirPath, levelAssetPath));
}
inline void GlobalNamespace::BeatmapEditorSceneSetupData::_ctor(::StringW levelDirPath, ::StringW levelAssetPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEditorSceneSetupData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelDirPath, levelAssetPath);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEditorSceneSetupData::BeatmapEditorSceneSetupData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
