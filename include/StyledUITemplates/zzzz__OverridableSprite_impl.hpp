#pragma once
// IWYU pragma private; include "StyledUITemplates\OverridableSprite.hpp"
#include "StyledUITemplates/zzzz__OverridableData_1_impl.hpp"
#include "StyledUITemplates/zzzz__OverridableSprite_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::StyledUITemplates::OverridableSprite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::StyledUITemplates::OverridableSprite::*)()>(&::StyledUITemplates::OverridableSprite::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5f3f68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::OverridableSprite*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void StyledUITemplates::OverridableSprite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::OverridableSprite*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StyledUITemplates::OverridableSprite* StyledUITemplates::OverridableSprite::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::StyledUITemplates::OverridableSprite*>());
}
// Ctor Parameters []
constexpr ::StyledUITemplates::OverridableSprite::OverridableSprite() {}
