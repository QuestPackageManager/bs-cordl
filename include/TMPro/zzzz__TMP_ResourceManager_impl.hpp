#pragma once
// IWYU pragma private; include "TMPro/TMP_ResourceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_ResourceManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_ResourceManager_def.hpp"
#include "TMPro/zzzz__TMP_Settings_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_ResourceManager_FontAssetRef._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ResourceManager_FontAssetRef::*)(int32_t, int32_t, int32_t, ::TMPro::TMP_FontAsset*)>(
    &::TMPro::TMP_ResourceManager_FontAssetRef::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67e2ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager_FontAssetRef>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::TMP_ResourceManager_FontAssetRef::_ctor(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode, ::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager_FontAssetRef>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameHashCode, familyNameHashCode, styleNameHashCode, fontAsset);
}
// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "familyNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "styleNameHashCode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "familyNameAndStyleHashCode", ty: "int64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_ResourceManager_FontAssetRef::TMP_ResourceManager_FontAssetRef(int32_t nameHashCode, int32_t familyNameHashCode, int32_t styleNameHashCode, int64_t familyNameAndStyleHashCode,
                                                                                      ::UnityW<::TMPro::TMP_FontAsset> fontAsset) noexcept {
  this->nameHashCode = nameHashCode;
  this->familyNameHashCode = familyNameHashCode;
  this->styleNameHashCode = styleNameHashCode;
  this->familyNameAndStyleHashCode = familyNameAndStyleHashCode;
  this->fontAsset = fontAsset;
}
// Ctor Parameters []
constexpr ::TMPro::TMP_ResourceManager_FontAssetRef::TMP_ResourceManager_FontAssetRef() {}
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.GetTextSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_Settings> (*)()>(&::TMPro::TMP_ResourceManager::GetTextSettings)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x67e25f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "GetTextSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.AddFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_ResourceManager::AddFontAsset)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x67e2708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "AddFontAsset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.RemoveFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_ResourceManager::RemoveFontAsset)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x67e2d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "RemoveFontAsset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.TryGetFontAssetByName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, ::ByRef<::TMPro::TMP_FontAsset*>)>(&::TMPro::TMP_ResourceManager::TryGetFontAssetByName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x67e2e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "TryGetFontAssetByName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_FontAsset*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.TryGetFontAssetByFamilyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, ::ByRef<::TMPro::TMP_FontAsset*>)>(
    &::TMPro::TMP_ResourceManager::TryGetFontAssetByFamilyName)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x67e2f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "TryGetFontAssetByFamilyName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_FontAsset*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.ClearFontAssetGlyphCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_ResourceManager::ClearFontAssetGlyphCache)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x67e2fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "ClearFontAssetGlyphCache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.RebuildFontAssetCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::TMPro::TMP_ResourceManager::RebuildFontAssetCache)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x67e3030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "RebuildFontAssetCache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ResourceManager::*)()>(&::TMPro::TMP_ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67e351c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void TMPro::TMP_ResourceManager::setStaticF_s_TextSettings(::UnityW<::TMPro::TMP_Settings> value) {
  ::cordl_internals::setStaticField<::UnityW<::TMPro::TMP_Settings>, "s_TextSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>(
      std::forward<::UnityW<::TMPro::TMP_Settings>>(value));
}
inline ::UnityW<::TMPro::TMP_Settings> TMPro::TMP_ResourceManager::getStaticF_s_TextSettings() {
  return ::cordl_internals::getStaticField<::UnityW<::TMPro::TMP_Settings>, "s_TextSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>();
}
inline void TMPro::TMP_ResourceManager::setStaticF_s_FontAssetReferences(::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ResourceManager_FontAssetRef>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ResourceManager_FontAssetRef>*, "s_FontAssetReferences",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ResourceManager_FontAssetRef>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ResourceManager_FontAssetRef>* TMPro::TMP_ResourceManager::getStaticF_s_FontAssetReferences() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::TMPro::TMP_ResourceManager_FontAssetRef>*, "s_FontAssetReferences",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>();
}
inline void TMPro::TMP_ResourceManager::setStaticF_s_FontAssetNameReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>*, "s_FontAssetNameReferenceLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* TMPro::TMP_ResourceManager::getStaticF_s_FontAssetNameReferenceLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>*, "s_FontAssetNameReferenceLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>();
}
inline void TMPro::TMP_ResourceManager::setStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup(::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::TMPro::TMP_FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::TMPro::TMP_FontAsset>>*, "s_FontAssetFamilyNameAndStyleReferenceLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::TMPro::TMP_FontAsset>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::TMPro::TMP_FontAsset>>* TMPro::TMP_ResourceManager::getStaticF_s_FontAssetFamilyNameAndStyleReferenceLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int64_t, ::UnityW<::TMPro::TMP_FontAsset>>*, "s_FontAssetFamilyNameAndStyleReferenceLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>();
}
inline void TMPro::TMP_ResourceManager::setStaticF_s_FontAssetRemovalList(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_FontAssetRemovalList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* TMPro::TMP_ResourceManager::getStaticF_s_FontAssetRemovalList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "s_FontAssetRemovalList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>();
}
inline void TMPro::TMP_ResourceManager::setStaticF_k_RegularStyleHashCode(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_RegularStyleHashCode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>(std::forward<int32_t>(value));
}
inline int32_t TMPro::TMP_ResourceManager::getStaticF_k_RegularStyleHashCode() {
  return ::cordl_internals::getStaticField<int32_t, "k_RegularStyleHashCode", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>();
}
inline ::UnityW<::TMPro::TMP_Settings> TMPro::TMP_ResourceManager::GetTextSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "GetTextSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TMP_Settings>, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_ResourceManager::AddFontAsset(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "AddFontAsset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fontAsset);
}
inline void TMPro::TMP_ResourceManager::RemoveFontAsset(::TMPro::TMP_FontAsset* fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "RemoveFontAsset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fontAsset);
}
inline bool TMPro::TMP_ResourceManager::TryGetFontAssetByName(int32_t nameHashcode, ::ByRef<::TMPro::TMP_FontAsset*> fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "TryGetFontAssetByName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_FontAsset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, nameHashcode, fontAsset);
}
inline bool TMPro::TMP_ResourceManager::TryGetFontAssetByFamilyName(int32_t familyNameHashCode, int32_t styleNameHashCode, ::ByRef<::TMPro::TMP_FontAsset*> fontAsset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "TryGetFontAssetByFamilyName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_FontAsset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, familyNameHashCode, styleNameHashCode, fontAsset);
}
inline void TMPro::TMP_ResourceManager::ClearFontAssetGlyphCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "ClearFontAssetGlyphCache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_ResourceManager::RebuildFontAssetCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "RebuildFontAssetCache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void TMPro::TMP_ResourceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_ResourceManager* TMPro::TMP_ResourceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_ResourceManager*>());
}
// Ctor Parameters []
constexpr ::TMPro::TMP_ResourceManager::TMP_ResourceManager() {}
