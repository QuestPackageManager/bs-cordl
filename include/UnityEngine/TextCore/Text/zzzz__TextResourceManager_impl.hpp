#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextResourceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextResourceManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef::*)(
    int32_t, int32_t, int32_t, ::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x48e9bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef::_ctor(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode,
                                                                                    ::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameHashCode, familyNameHashCode, styleNameHashCode, fontAsset);
}
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "familyNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "styleNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "familyNameAndStyleHashCode", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef::__TextResourceManager__FontAssetRef(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode,
                                                                                                                  int64_t familyNameAndStyleHashCode,
                                                                                                                  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset) noexcept {
  this->nameHashCode = nameHashCode;
  this->familyNameHashCode = familyNameHashCode;
  this->styleNameHashCode = styleNameHashCode;
  this->familyNameAndStyleHashCode = familyNameAndStyleHashCode;
  this->fontAsset = fontAsset;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef::__TextResourceManager__FontAssetRef() {}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextResourceManager.AddFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::TextResourceManager::AddFontAsset)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x48e96a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get(), "AddFontAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextResourceManager::setStaticF_s_FontAssetReferences(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>*, "s_FontAssetReferences",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>*
UnityEngine::TextCore::Text::TextResourceManager::getStaticF_s_FontAssetReferences() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::__TextResourceManager__FontAssetRef>*, "s_FontAssetReferences",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get>();
}
inline void UnityEngine::TextCore::Text::TextResourceManager::setStaticF_s_FontAssetNameReferenceLookup(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FontAssetNameReferenceLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*
UnityEngine::TextCore::Text::TextResourceManager::getStaticF_s_FontAssetNameReferenceLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FontAssetNameReferenceLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get>();
}
inline void UnityEngine::TextCore::Text::TextResourceManager::setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup(
    ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FontAssetFamilyNameAndStyleReferenceLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*
UnityEngine::TextCore::Text::TextResourceManager::getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FontAssetFamilyNameAndStyleReferenceLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get>();
}
inline void UnityEngine::TextCore::Text::TextResourceManager::setStaticF_s_FontAssetRemovalList(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_FontAssetRemovalList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::TextCore::Text::TextResourceManager::getStaticF_s_FontAssetRemovalList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_FontAssetRemovalList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get>();
}
inline void UnityEngine::TextCore::Text::TextResourceManager::setStaticF_k_RegularStyleHashCode(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_RegularStyleHashCode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TextCore::Text::TextResourceManager::getStaticF_k_RegularStyleHashCode() {
  return ::cordl_internals::getStaticField<int32_t, "k_RegularStyleHashCode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get>();
}
inline void UnityEngine::TextCore::Text::TextResourceManager::AddFontAsset(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextResourceManager*>::get(), "AddFontAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Text::FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fontAsset);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextResourceManager::TextResourceManager() {}
