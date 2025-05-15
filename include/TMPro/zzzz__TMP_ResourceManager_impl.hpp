#pragma once
// IWYU pragma private; include "TMPro/TMP_ResourceManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_ResourceManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_Settings_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.GetTextSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::TMPro::TMP_Settings> (*)()>(&::TMPro::TMP_ResourceManager::GetTextSettings)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x47fdd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "GetTextSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.AddFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::TMPro::TMP_FontAsset*)>(&::TMPro::TMP_ResourceManager::AddFontAsset)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x47fde34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "AddFontAsset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.TryGetFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, ::ByRef<::TMPro::TMP_FontAsset*>)>(&::TMPro::TMP_ResourceManager::TryGetFontAsset)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x47fdf84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "TryGetFontAsset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_FontAsset*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager.RebuildFontAssetCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::TMPro::TMP_ResourceManager::RebuildFontAssetCache)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x47fe018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "RebuildFontAssetCache", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_ResourceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_ResourceManager::*)()>(&::TMPro::TMP_ResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x47fdd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void TMPro::TMP_ResourceManager::setStaticF_s_instance(::TMPro::TMP_ResourceManager* value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_ResourceManager*, "s_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>(
      std::forward<::TMPro::TMP_ResourceManager*>(value));
}
inline ::TMPro::TMP_ResourceManager* TMPro::TMP_ResourceManager::getStaticF_s_instance() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_ResourceManager*, "s_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>();
}
inline void TMPro::TMP_ResourceManager::setStaticF_s_TextSettings(::UnityW<::TMPro::TMP_Settings> value) {
  ::cordl_internals::setStaticField<::UnityW<::TMPro::TMP_Settings>, "s_TextSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>(
      std::forward<::UnityW<::TMPro::TMP_Settings>>(value));
}
inline ::UnityW<::TMPro::TMP_Settings> TMPro::TMP_ResourceManager::getStaticF_s_TextSettings() {
  return ::cordl_internals::getStaticField<::UnityW<::TMPro::TMP_Settings>, "s_TextSettings", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>();
}
inline void TMPro::TMP_ResourceManager::setStaticF_s_FontAssetReferences(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, "s_FontAssetReferences",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* TMPro::TMP_ResourceManager::getStaticF_s_FontAssetReferences() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, "s_FontAssetReferences",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>();
}
inline void TMPro::TMP_ResourceManager::setStaticF_s_FontAssetReferenceLookup(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>*, "s_FontAssetReferenceLookup",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>* TMPro::TMP_ResourceManager::getStaticF_s_FontAssetReferenceLookup() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::TMPro::TMP_FontAsset>>*, "s_FontAssetReferenceLookup",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get>();
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
inline bool TMPro::TMP_ResourceManager::TryGetFontAsset(int32_t hashcode, ::ByRef<::TMPro::TMP_FontAsset*> fontAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "TryGetFontAsset", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::TMPro::TMP_FontAsset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hashcode, fontAsset);
}
inline void TMPro::TMP_ResourceManager::RebuildFontAssetCache(int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_ResourceManager*>::get(), "RebuildFontAssetCache",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instanceID);
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
