#pragma once
// IWYU pragma private; include "BeatSaber\BeatAvatarSDK\IAvatarPart.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__IAvatarPart_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::IAvatarPart.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::BeatAvatarSDK::IAvatarPart::*)()>(&::BeatSaber::BeatAvatarSDK::IAvatarPart::get_id)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::IAvatarPart*>(), { ::i2c::class_of<::BeatSaber::BeatAvatarSDK::IAvatarPart*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarSDK::IAvatarPart.get_localizationKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::BeatAvatarSDK::IAvatarPart::*)()>(&::BeatSaber::BeatAvatarSDK::IAvatarPart::get_localizationKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarSDK::IAvatarPart*>(), { ::i2c::class_of<::BeatSaber::BeatAvatarSDK::IAvatarPart*>(), 1 }));
    return ___internal_method;
  }
};
inline ::StringW BeatSaber::BeatAvatarSDK::IAvatarPart::get_id() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarSDK::IAvatarPart*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW BeatSaber::BeatAvatarSDK::IAvatarPart::get_localizationKey() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarSDK::IAvatarPart*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
