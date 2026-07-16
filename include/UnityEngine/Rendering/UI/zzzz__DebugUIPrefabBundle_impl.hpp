#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIPrefabBundle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIPrefabBundle_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIPrefabBundle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIPrefabBundle::*)()>(&::UnityEngine::Rendering::UI::DebugUIPrefabBundle::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67f99c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::StringW const& UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_set_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_get_prefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_get_prefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prefab;
}
constexpr void UnityEngine::Rendering::UI::DebugUIPrefabBundle::__cordl_internal_set_prefab(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prefab = value;
}
inline void UnityEngine::Rendering::UI::DebugUIPrefabBundle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIPrefabBundle* UnityEngine::Rendering::UI::DebugUIPrefabBundle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIPrefabBundle*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIPrefabBundle::DebugUIPrefabBundle() {}
