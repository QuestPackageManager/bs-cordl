#pragma once
// IWYU pragma private; include "BeatSaber\BeatAvatarSDK\AvatarRandomizer.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__RandomizeAvatarColorMap_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarRandomizer_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarData_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartsModel_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarRandomizer.RandomizeAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BeatSaber::BeatAvatarSDK::AvatarData*, ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeAll)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x327b3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>(),
                                         { "RandomizeAll", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>(), ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarRandomizer.RandomizeModels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BeatSaber::BeatAvatarSDK::AvatarData*, ::BeatSaber::BeatAvatarSDK::AvatarPartsModel*)>(
    &::BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeModels)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x327cbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>(),
                                         { "RandomizeModels", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>(), ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::AvatarRandomizer.RandomizeColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BeatSaber::BeatAvatarSDK::AvatarData*)>(&::BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeColors)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x327cd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>(), { "RandomizeColors", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::BeatAvatarSDK::AvatarRandomizer::setStaticF__randomizeColorsParamsCollection(::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>, "_randomizeColorsParamsCollection", ::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>(
      std::forward<::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>>(value));
}
inline ::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*> BeatSaber::BeatAvatarSDK::AvatarRandomizer::getStaticF__randomizeColorsParamsCollection() {
  return ::cordl_internals::getStaticField<::ArrayW<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>, "_randomizeColorsParamsCollection", ::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>();
}
inline void BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeAll(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* avatarPartsModel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>(),
                                              { "RandomizeAll", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>(), ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, avatarData, avatarPartsModel);
}
inline void BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeModels(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPartsModel* avatarPartsModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>(),
                                       { "RandomizeModels", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>(), ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPartsModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, avatarData, avatarPartsModel);
}
inline void BeatSaber::BeatAvatarSDK::AvatarRandomizer::RandomizeColors(::BeatSaber::BeatAvatarSDK::AvatarData* avatarData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::AvatarRandomizer*>(), { "RandomizeColors", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, avatarData);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::AvatarRandomizer::AvatarRandomizer() {}
