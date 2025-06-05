#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_AssetPresetUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AssetPresetUtility_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetPresetUtility.SaveAssetPresetToFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW)>(
    &::HoudiniEngineUnity::HEU_AssetPresetUtility::SaveAssetPresetToFile)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x3a0659c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPresetUtility*>::get(), "SaveAssetPresetToFile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_AssetPresetUtility.LoadPresetFileIntoAssetAndCook
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::StringW)>(
    &::HoudiniEngineUnity::HEU_AssetPresetUtility::LoadPresetFileIntoAssetAndCook)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x3a0738c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPresetUtility*>::get(), "LoadPresetFileIntoAssetAndCook", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HEU_AssetPresetUtility::setStaticF_PRESET_IDENTIFIER(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "PRESET_IDENTIFIER",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPresetUtility*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> HoudiniEngineUnity::HEU_AssetPresetUtility::getStaticF_PRESET_IDENTIFIER() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "PRESET_IDENTIFIER",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPresetUtility*>::get>();
}
inline void HoudiniEngineUnity::HEU_AssetPresetUtility::setStaticF_PRESET_VERSION(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "PRESET_VERSION", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPresetUtility*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t HoudiniEngineUnity::HEU_AssetPresetUtility::getStaticF_PRESET_VERSION() {
  return ::cordl_internals::getStaticField<int32_t, "PRESET_VERSION", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPresetUtility*>::get>();
}
inline void HoudiniEngineUnity::HEU_AssetPresetUtility::SaveAssetPresetToFile(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPresetUtility*>::get(), "SaveAssetPresetToFile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, filePath);
}
inline void HoudiniEngineUnity::HEU_AssetPresetUtility::LoadPresetFileIntoAssetAndCook(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, ::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_AssetPresetUtility*>::get(), "LoadPresetFileIntoAssetAndCook", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset, filePath);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_AssetPresetUtility::HEU_AssetPresetUtility() {}
