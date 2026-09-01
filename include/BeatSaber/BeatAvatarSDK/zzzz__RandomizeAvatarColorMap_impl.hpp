#pragma once
// IWYU pragma private; include "BeatSaber\BeatAvatarSDK\RandomizeAvatarColorMap.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__RandomizeAvatarColorMap_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap.get_totalIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::*)()>(&::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::get_totalIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x327d04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>(), { "get_totalIndices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap.get_colorIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::*)()>(
    &::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::get_colorIndices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x327d054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>(), { "get_colorIndices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x327ca60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_get__totalIndices_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalIndices_k__BackingField;
}
constexpr int32_t const& BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_get__totalIndices_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalIndices_k__BackingField;
}
constexpr void BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_set__totalIndices_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalIndices_k__BackingField = value;
}
constexpr ::ArrayW<int32_t>& BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_get__colorIndices_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorIndices_k__BackingField;
}
constexpr ::ArrayW<int32_t> const& BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_get__colorIndices_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorIndices_k__BackingField;
}
constexpr void BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::__cordl_internal_set__colorIndices_k__BackingField(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorIndices_k__BackingField = value;
}
inline int32_t BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::get_totalIndices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>(), { "get_totalIndices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<int32_t> BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::get_colorIndices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>(), { "get_colorIndices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::_ctor(int32_t headTopPrimaryColorIndex, int32_t headTopSecondaryColorIndex, int32_t glassesColorIndex, int32_t facialHairColorIndex,
                                                                     int32_t handsColorIndex, int32_t clothesPrimaryColorIndex, int32_t clothesSecondaryColorIndex, int32_t clothesDetailColorIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headTopPrimaryColorIndex, headTopSecondaryColorIndex, glassesColorIndex, facialHairColorIndex, handsColorIndex,
                                                   clothesPrimaryColorIndex, clothesSecondaryColorIndex, clothesDetailColorIndex);
}
inline ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap* BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::New_ctor(int32_t headTopPrimaryColorIndex, int32_t headTopSecondaryColorIndex,
                                                                                                                        int32_t glassesColorIndex, int32_t facialHairColorIndex,
                                                                                                                        int32_t handsColorIndex, int32_t clothesPrimaryColorIndex,
                                                                                                                        int32_t clothesSecondaryColorIndex, int32_t clothesDetailColorIndex) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap*>(headTopPrimaryColorIndex, headTopSecondaryColorIndex, glassesColorIndex, facialHairColorIndex,
                                                                                            handsColorIndex, clothesPrimaryColorIndex, clothesSecondaryColorIndex, clothesDetailColorIndex));
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::RandomizeAvatarColorMap::RandomizeAvatarColorMap() {}
