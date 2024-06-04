#pragma once
// IWYU pragma private; include "TMPro/TMP_FontAssetUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_FontAssetUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__FontWeight_def.hpp"
#include "TMPro/zzzz__TMP_Character_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "TMPro/zzzz__TMP_SpriteCharacter_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_FontAssetUtilities* (*)()>(&::TMPro::TMP_FontAssetUtilities::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x336fb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "get_instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.GetCharacterFromFontAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Character* (*)(uint32_t, ::TMPro::TMP_FontAsset*, bool, ::TMPro::FontStyles, ::TMPro::FontWeight,
                                                                                                              ByRef<bool>)>(&::TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x336fb90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "GetCharacterFromFontAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.GetCharacterFromFontAsset_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Character* (*)(uint32_t, ::TMPro::TMP_FontAsset*, bool, ::TMPro::FontStyles, ::TMPro::FontWeight,
                                                                                                              ByRef<bool>)>(&::TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset_Internal)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x336fce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "GetCharacterFromFontAsset_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.GetCharacterFromFontAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::TMPro::TMP_Character* (*)(uint32_t, ::TMPro::TMP_FontAsset*, ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*, bool, ::TMPro::FontStyles,
                                            ::TMPro::FontWeight, ByRef<bool>)>(&::TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAssets)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x33700c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "GetCharacterFromFontAssets", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.GetSpriteCharacterFromSpriteAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_SpriteCharacter* (*)(uint32_t, ::TMPro::TMP_SpriteAsset*, bool)>(
    &::TMPro::TMP_FontAssetUtilities::GetSpriteCharacterFromSpriteAsset)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x337031c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "GetSpriteCharacterFromSpriteAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_SpriteAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities.GetSpriteCharacterFromSpriteAsset_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_SpriteCharacter* (*)(uint32_t, ::TMPro::TMP_SpriteAsset*, bool)>(
    &::TMPro::TMP_FontAssetUtilities::GetSpriteCharacterFromSpriteAsset_Internal)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x3370628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "GetSpriteCharacterFromSpriteAsset_Internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_SpriteAsset*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_FontAssetUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_FontAssetUtilities::*)()>(&::TMPro::TMP_FontAssetUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x336fb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void TMPro::TMP_FontAssetUtilities::setStaticF_s_Instance(::TMPro::TMP_FontAssetUtilities* value) {
  ::cordl_internals::setStaticField<::TMPro::TMP_FontAssetUtilities*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get>(
      std::forward<::TMPro::TMP_FontAssetUtilities*>(value));
}
inline ::TMPro::TMP_FontAssetUtilities* TMPro::TMP_FontAssetUtilities::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::TMPro::TMP_FontAssetUtilities*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get>();
}
inline void TMPro::TMP_FontAssetUtilities::setStaticF_k_SearchedAssets(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedAssets",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* TMPro::TMP_FontAssetUtilities::getStaticF_k_SearchedAssets() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "k_SearchedAssets",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get>();
}
inline void TMPro::TMP_FontAssetUtilities::setStaticF_k_IsFontEngineInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "k_IsFontEngineInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get>(std::forward<bool>(value));
}
inline bool TMPro::TMP_FontAssetUtilities::getStaticF_k_IsFontEngineInitialized() {
  return ::cordl_internals::getStaticField<bool, "k_IsFontEngineInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get>();
}
inline ::TMPro::TMP_FontAssetUtilities* TMPro::TMP_FontAssetUtilities::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "get_instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_FontAssetUtilities*, false>(nullptr, ___internal_method);
}
inline ::TMPro::TMP_Character* TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset(uint32_t unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks, ::TMPro::FontStyles fontStyle,
                                                                                        ::TMPro::FontWeight fontWeight, ByRef<bool> isAlternativeTypeface) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "GetCharacterFromFontAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Character*, false>(nullptr, ___internal_method, unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface);
}
inline ::TMPro::TMP_Character* TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAsset_Internal(uint32_t unicode, ::TMPro::TMP_FontAsset* sourceFontAsset, bool includeFallbacks,
                                                                                                 ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ByRef<bool> isAlternativeTypeface) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "GetCharacterFromFontAsset_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Character*, false>(nullptr, ___internal_method, unicode, sourceFontAsset, includeFallbacks, fontStyle, fontWeight, isAlternativeTypeface);
}
inline ::TMPro::TMP_Character* TMPro::TMP_FontAssetUtilities::GetCharacterFromFontAssets(uint32_t unicode, ::TMPro::TMP_FontAsset* sourceFontAsset,
                                                                                         ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* fontAssets, bool includeFallbacks,
                                                                                         ::TMPro::FontStyles fontStyle, ::TMPro::FontWeight fontWeight, ByRef<bool> isAlternativeTypeface) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "GetCharacterFromFontAssets", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontWeight>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_Character*, false>(nullptr, ___internal_method, unicode, sourceFontAsset, fontAssets, includeFallbacks, fontStyle, fontWeight,
                                                                             isAlternativeTypeface);
}
inline ::TMPro::TMP_SpriteCharacter* TMPro::TMP_FontAssetUtilities::GetSpriteCharacterFromSpriteAsset(uint32_t unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, bool includeFallbacks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "GetSpriteCharacterFromSpriteAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_SpriteAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_SpriteCharacter*, false>(nullptr, ___internal_method, unicode, spriteAsset, includeFallbacks);
}
inline ::TMPro::TMP_SpriteCharacter* TMPro::TMP_FontAssetUtilities::GetSpriteCharacterFromSpriteAsset_Internal(uint32_t unicode, ::TMPro::TMP_SpriteAsset* spriteAsset, bool includeFallbacks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), "GetSpriteCharacterFromSpriteAsset_Internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_SpriteAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TMP_SpriteCharacter*, false>(nullptr, ___internal_method, unicode, spriteAsset, includeFallbacks);
}
inline ::TMPro::TMP_FontAssetUtilities* TMPro::TMP_FontAssetUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_FontAssetUtilities*>());
}
inline void TMPro::TMP_FontAssetUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_FontAssetUtilities*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_FontAssetUtilities::TMP_FontAssetUtilities() {}
