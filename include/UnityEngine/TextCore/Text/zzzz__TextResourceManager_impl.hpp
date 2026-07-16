#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextResourceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextResourceManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef::*)(int32_t, int32_t, int32_t, ::UnityEngine::TextCore::Text::FontAsset*)>(
    &::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c10050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef>(),
                            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef::_ctor(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode,
                                                                                 ::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef>(),
                          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nameHashCode, familyNameHashCode, styleNameHashCode, fontAsset);
}
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "familyNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "styleNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "familyNameAndStyleHashCode", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "fontAsset", ty: "::UnityW<::UnityEngine::TextCore::Text::FontAsset>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef::TextResourceManager_FontAssetRef(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode,
                                                                                                            int64_t familyNameAndStyleHashCode,
                                                                                                            ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset) noexcept {
  this->nameHashCode = nameHashCode;
  this->familyNameHashCode = familyNameHashCode;
  this->styleNameHashCode = styleNameHashCode;
  this->familyNameAndStyleHashCode = familyNameAndStyleHashCode;
  this->fontAsset = fontAsset;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef::TextResourceManager_FontAssetRef() {}
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextResourceManager.AddFontAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TextCore::Text::FontAsset*)>(&::UnityEngine::TextCore::Text::TextResourceManager::AddFontAsset)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x6c0fa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextResourceManager*>(),
                                                                                           { "AddFontAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::TextResourceManager::setStaticF_s_FontAssetReferences(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef>*, "s_FontAssetReferences",
                                    ::UnityEngine::TextCore::Text::TextResourceManager*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef>*
UnityEngine::TextCore::Text::TextResourceManager::getStaticF_s_FontAssetReferences() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::TextCore::Text::TextResourceManager_FontAssetRef>*, "s_FontAssetReferences",
                                           ::UnityEngine::TextCore::Text::TextResourceManager*>();
}
inline void UnityEngine::TextCore::Text::TextResourceManager::setStaticF_s_FontAssetNameReferenceLookup(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FontAssetNameReferenceLookup",
                                    ::UnityEngine::TextCore::Text::TextResourceManager*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*
UnityEngine::TextCore::Text::TextResourceManager::getStaticF_s_FontAssetNameReferenceLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FontAssetNameReferenceLookup",
                                           ::UnityEngine::TextCore::Text::TextResourceManager*>();
}
inline void UnityEngine::TextCore::Text::TextResourceManager::setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup(
    ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FontAssetFamilyNameAndStyleReferenceLookup",
                                    ::UnityEngine::TextCore::Text::TextResourceManager*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*
UnityEngine::TextCore::Text::TextResourceManager::getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::UnityEngine::TextCore::Text::FontAsset>>*, "s_FontAssetFamilyNameAndStyleReferenceLookup",
                                           ::UnityEngine::TextCore::Text::TextResourceManager*>();
}
inline void UnityEngine::TextCore::Text::TextResourceManager::setStaticF_s_FontAssetRemovalList(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_FontAssetRemovalList", ::UnityEngine::TextCore::Text::TextResourceManager*>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::TextCore::Text::TextResourceManager::getStaticF_s_FontAssetRemovalList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_FontAssetRemovalList", ::UnityEngine::TextCore::Text::TextResourceManager*>();
}
inline void UnityEngine::TextCore::Text::TextResourceManager::setStaticF_k_RegularStyleHashCode(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_RegularStyleHashCode", ::UnityEngine::TextCore::Text::TextResourceManager*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::TextCore::Text::TextResourceManager::getStaticF_k_RegularStyleHashCode() {
  return ::cordl_internals::getStaticField<int32_t, "k_RegularStyleHashCode", ::UnityEngine::TextCore::Text::TextResourceManager*>();
}
inline void UnityEngine::TextCore::Text::TextResourceManager::AddFontAsset(::UnityEngine::TextCore::Text::FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::TextResourceManager*>(),
                                                                                         { "AddFontAsset", {}, { ::i2c::type_of<::UnityEngine::TextCore::Text::FontAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fontAsset);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextResourceManager::TextResourceManager() {}
