#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/FontAssetFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAssetFactory_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetFactory.CreateDefaultEditorFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextCore::Text::FontAsset> (*)(::UnityEngine::Font*, ::UnityEngine::Shader*)>(
    &::UnityEngine::TextCore::Text::FontAssetFactory::CreateDefaultEditorFontAsset)> {
  constexpr static std::size_t size = 0x834;
  constexpr static std::size_t addrs = 0x6a327b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAssetFactory*>::get(), "CreateDefaultEditorFontAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetFactory.SetupFontAssetSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TextCore::Text::FontAsset*, ::UnityEngine::Shader*)>(
    &::UnityEngine::TextCore::Text::FontAssetFactory::SetupFontAssetSettings)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6a32fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAssetFactory*>::get(), "SetupFontAssetSettings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::FontAssetFactory.SetHideFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::FontAssetFactory::SetHideFlags)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a330b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAssetFactory*>::get(), "SetHideFlags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::FontAssetFactory::setStaticF_visitedFontAssets(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "visitedFontAssets",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAssetFactory*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* UnityEngine::TextCore::Text::FontAssetFactory::getStaticF_visitedFontAssets() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "visitedFontAssets",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAssetFactory*>::get>();
}
inline void UnityEngine::TextCore::Text::FontAssetFactory::setStaticF_k_SystemFontName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_SystemFontName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAssetFactory*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::TextCore::Text::FontAssetFactory::getStaticF_k_SystemFontName() {
  return ::cordl_internals::getStaticField<::StringW, "k_SystemFontName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAssetFactory*>::get>();
}
inline ::UnityW<::UnityEngine::TextCore::Text::FontAsset> UnityEngine::TextCore::Text::FontAssetFactory::CreateDefaultEditorFontAsset(::UnityEngine::Font* font, ::UnityEngine::Shader* shader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAssetFactory*>::get(), "CreateDefaultEditorFontAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextCore::Text::FontAsset>, false>(nullptr, ___internal_method, font, shader);
}
inline void UnityEngine::TextCore::Text::FontAssetFactory::SetupFontAssetSettings(::UnityEngine::TextCore::Text::FontAsset* fontAsset, ::UnityEngine::Shader* shader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAssetFactory*>::get(), "SetupFontAssetSettings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Shader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fontAsset, shader);
}
inline void UnityEngine::TextCore::Text::FontAssetFactory::SetHideFlags(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::FontAssetFactory*>::get(), "SetHideFlags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fontAsset);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::FontAssetFactory::FontAssetFactory() {}
