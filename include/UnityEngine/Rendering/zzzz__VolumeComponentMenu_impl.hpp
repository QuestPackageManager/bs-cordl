#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeComponentMenu.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponentMenu_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponentMenu._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::VolumeComponentMenu::*)(::StringW)>(&::UnityEngine::Rendering::VolumeComponentMenu::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67c5974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponentMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::VolumeComponentMenu::__cordl_internal_get_menu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menu;
}
constexpr ::StringW const& UnityEngine::Rendering::VolumeComponentMenu::__cordl_internal_get_menu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menu;
}
constexpr void UnityEngine::Rendering::VolumeComponentMenu::__cordl_internal_set_menu(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___menu = value;
}
inline void UnityEngine::Rendering::VolumeComponentMenu::_ctor(::StringW menu) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::VolumeComponentMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menu);
}
inline ::UnityEngine::Rendering::VolumeComponentMenu* UnityEngine::Rendering::VolumeComponentMenu::New_ctor(::StringW menu) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::VolumeComponentMenu*>(menu));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeComponentMenu::VolumeComponentMenu() {}
