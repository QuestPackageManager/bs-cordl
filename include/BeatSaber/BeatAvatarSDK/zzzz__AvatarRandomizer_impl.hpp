#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarRandomizer_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarData_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__RandomizeAvatarColorMap_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartsModel_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarRandomizer.RandomizeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BeatSaber::BeatAvatarSDK::AvatarData*, ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeAll)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe19dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>::get(), "RandomizeAll", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarRandomizer.RandomizeModels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BeatSaber::BeatAvatarSDK::AvatarData*, ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeModels)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xe1abc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>::get(), "RandomizeModels", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarRandomizer.RandomizeColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BeatSaber::BeatAvatarSDK::AvatarData*)>(&::BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeColors)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xe1ad1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>::get(), "RandomizeColors", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::BeatAvatarSDK::AvatarRandomizer::setStaticF__randomizeColorsParamsCollection(
    ::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*, ::Array<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*, ::Array<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>*>, "_randomizeColorsParamsCollection",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>::get>(
      std::forward<::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*, ::Array<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>*>>(value));
}
inline ::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*, ::Array<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>*>
BeatSaber::BeatAvatarSDK::AvatarRandomizer::getStaticF__randomizeColorsParamsCollection() {
  return ::cordl_internals::getStaticField<::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*, ::Array<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>*>,
                                           "_randomizeColorsParamsCollection", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>::get>();
}
inline void BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeAll(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* avatarPartsModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>::get(), "RandomizeAll", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, avatarData, avatarPartsModel);
}
inline void BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeModels(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* avatarPartsModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>::get(), "RandomizeModels", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, avatarData, avatarPartsModel);
}
inline void BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeColors(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>::get(), "RandomizeColors", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, avatarData);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::AvatarRandomizer::AvatarRandomizer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
