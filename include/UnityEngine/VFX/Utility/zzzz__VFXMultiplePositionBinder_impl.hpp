#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXMultiplePositionBinder.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXMultiplePositionBinder_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMultiplePositionBinder.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x69e000c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMultiplePositionBinder.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::IsValid)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69e05dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMultiplePositionBinder.UpdateBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::UpdateBinding)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x69e0650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMultiplePositionBinder.UpdateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::UpdateTexture)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x69e0110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), { "UpdateTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMultiplePositionBinder.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x69e0708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXMultiplePositionBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::*)()>(&::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x69e07a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_PositionMapProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PositionMapProperty;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_PositionMapProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PositionMapProperty;
}
constexpr void UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_set_PositionMapProperty(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PositionMapProperty = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_PositionCountProperty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PositionCountProperty;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_PositionCountProperty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PositionCountProperty;
}
constexpr void UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_set_PositionCountProperty(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PositionCountProperty = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_Targets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Targets;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_Targets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Targets;
}
constexpr void UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_set_Targets(::ArrayW<::UnityW<::UnityEngine::GameObject>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Targets = value;
}
constexpr bool& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_EveryFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EveryFrame;
}
constexpr bool const& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_EveryFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EveryFrame;
}
constexpr void UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_set_EveryFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EveryFrame = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_positionMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionMap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_positionMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionMap;
}
constexpr void UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_set_positionMap(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionMap = value;
}
constexpr int32_t& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void UnityEngine::VFX::Utility::VFXMultiplePositionBinder::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
inline void UnityEngine::VFX::Utility::VFXMultiplePositionBinder::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::VFX::Utility::VFXMultiplePositionBinder::IsValid(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, component);
}
inline void UnityEngine::VFX::Utility::VFXMultiplePositionBinder::UpdateBinding(::UnityEngine::VFX::VisualEffect* component) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, component);
}
inline void UnityEngine::VFX::Utility::VFXMultiplePositionBinder::UpdateTexture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), { "UpdateTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::VFX::Utility::VFXMultiplePositionBinder::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXMultiplePositionBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXMultiplePositionBinder* UnityEngine::VFX::Utility::VFXMultiplePositionBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXMultiplePositionBinder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXMultiplePositionBinder::VFXMultiplePositionBinder() {}
