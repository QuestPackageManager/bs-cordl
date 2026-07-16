#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarSDK/SkinColorSetSO.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSO_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSetSO_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSO_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::SkinColorSetSO.get_colors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>> (::BeatSaber::BeatAvatarSDK::SkinColorSetSO::*)()>(
    &::BeatSaber::BeatAvatarSDK::SkinColorSetSO::get_colors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x327d6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>(), { "get_colors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::SkinColorSetSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarSDK::SkinColorSetSO::*)()>(&::BeatSaber::BeatAvatarSDK::SkinColorSetSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x327d6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>& BeatSaber::BeatAvatarSDK::SkinColorSetSO::__cordl_internal_get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>> const& BeatSaber::BeatAvatarSDK::SkinColorSetSO::__cordl_internal_get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colors;
}
constexpr void BeatSaber::BeatAvatarSDK::SkinColorSetSO::__cordl_internal_set__colors(::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colors = value;
}
inline ::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>> BeatSaber::BeatAvatarSDK::SkinColorSetSO::get_colors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>(), { "get_colors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSO>>>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarSDK::SkinColorSetSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarSDK::SkinColorSetSO* BeatSaber::BeatAvatarSDK::SkinColorSetSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarSDK::SkinColorSetSO::SkinColorSetSO() {}
