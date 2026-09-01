#pragma once
// IWYU pragma private; include "UnityEngine\AddComponentMenu.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__AddComponentMenu_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddComponentMenu._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddComponentMenu::*)(::StringW)>(&::UnityEngine::AddComponentMenu::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6adaab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddComponentMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddComponentMenu._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AddComponentMenu::*)(::StringW, int32_t)>(&::UnityEngine::AddComponentMenu::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6adaabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddComponentMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::AddComponentMenu::__cordl_internal_get_m_AddComponentMenu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddComponentMenu;
}
constexpr ::StringW const& UnityEngine::AddComponentMenu::__cordl_internal_get_m_AddComponentMenu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AddComponentMenu;
}
constexpr void UnityEngine::AddComponentMenu::__cordl_internal_set_m_AddComponentMenu(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AddComponentMenu = value;
}
constexpr int32_t& UnityEngine::AddComponentMenu::__cordl_internal_get_m_Ordering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ordering;
}
constexpr int32_t const& UnityEngine::AddComponentMenu::__cordl_internal_get_m_Ordering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ordering;
}
constexpr void UnityEngine::AddComponentMenu::__cordl_internal_set_m_Ordering(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ordering = value;
}
inline void UnityEngine::AddComponentMenu::_ctor(::StringW menuName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddComponentMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menuName);
}
inline void UnityEngine::AddComponentMenu::_ctor(::StringW menuName, int32_t order) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AddComponentMenu*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menuName, order);
}
inline ::UnityEngine::AddComponentMenu* UnityEngine::AddComponentMenu::New_ctor(::StringW menuName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddComponentMenu*>(menuName));
}
inline ::UnityEngine::AddComponentMenu* UnityEngine::AddComponentMenu::New_ctor(::StringW menuName, int32_t order) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AddComponentMenu*>(menuName, order));
}
// Ctor Parameters []
constexpr ::UnityEngine::AddComponentMenu::AddComponentMenu() {}
