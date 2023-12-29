#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "DataModels/PlayerAvatar/zzzz__AvatarRandomizer_def.hpp"
#include "GlobalNamespace/zzzz__AvatarData_def.hpp"
#include "DataModels/PlayerAvatar/zzzz__RandomizeAvatarColorMap_def.hpp"
#include "GlobalNamespace/zzzz__AvatarPartsModel_def.hpp"
//  Writing Method size for method: ::DataModels::PlayerAvatar::AvatarRandomizer.RandomizeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::AvatarData*, ::GlobalNamespace::AvatarPartsModel*)>(
    &::DataModels::PlayerAvatar::AvatarRandomizer::RandomizeAll)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21e691c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::PlayerAvatar::AvatarRandomizer*>::get(), "RandomizeAll", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarPartsModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DataModels::PlayerAvatar::AvatarRandomizer.RandomizeModels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::AvatarData*, ::GlobalNamespace::AvatarPartsModel*)>(
    &::DataModels::PlayerAvatar::AvatarRandomizer::RandomizeModels)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21e6988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::PlayerAvatar::AvatarRandomizer*>::get(), "RandomizeModels", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarPartsModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DataModels::PlayerAvatar::AvatarRandomizer.RandomizeColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::AvatarData*)>(&::DataModels::PlayerAvatar::AvatarRandomizer::RandomizeColors)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x21e6ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::PlayerAvatar::AvatarRandomizer*>::get(), "RandomizeColors", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarData*>::get() })));
    return ___internal_method;
  }
};
inline void DataModels::PlayerAvatar::AvatarRandomizer::setStaticF__randomizeColorsParamsCollection(
    ::ArrayW<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*, ::Array<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*, ::Array<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*>*>, "_randomizeColorsParamsCollection",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::PlayerAvatar::AvatarRandomizer*>::get>(
      std::forward<::ArrayW<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*, ::Array<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*>*>>(value));
}
inline ::ArrayW<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*, ::Array<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*>*>
DataModels::PlayerAvatar::AvatarRandomizer::getStaticF__randomizeColorsParamsCollection() {
  return ::cordl_internals::getStaticField<::ArrayW<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*, ::Array<::DataModels::PlayerAvatar::RandomizeAvatarColorMap*>*>,
                                           "_randomizeColorsParamsCollection", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::PlayerAvatar::AvatarRandomizer*>::get>();
}
inline void DataModels::PlayerAvatar::AvatarRandomizer::RandomizeAll(::GlobalNamespace::AvatarData* avatarData, ::GlobalNamespace::AvatarPartsModel* avatarPartsModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::PlayerAvatar::AvatarRandomizer*>::get(), "RandomizeAll", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarPartsModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, avatarData, avatarPartsModel);
}
inline void DataModels::PlayerAvatar::AvatarRandomizer::RandomizeModels(::GlobalNamespace::AvatarData* avatarData, ::GlobalNamespace::AvatarPartsModel* avatarPartsModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::PlayerAvatar::AvatarRandomizer*>::get(), "RandomizeModels", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarPartsModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, avatarData, avatarPartsModel);
}
inline void DataModels::PlayerAvatar::AvatarRandomizer::RandomizeColors(::GlobalNamespace::AvatarData* avatarData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::PlayerAvatar::AvatarRandomizer*>::get(), "RandomizeColors", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AvatarData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, avatarData);
}
// Ctor Parameters []
constexpr ::DataModels::PlayerAvatar::AvatarRandomizer::AvatarRandomizer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
