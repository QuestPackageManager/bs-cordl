#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuEnvironmentManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType::MenuEnvironmentManager_MenuEnvironmentType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType::MenuEnvironmentManager_MenuEnvironmentType() {}
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType::Default{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType::Lobby{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects.get_menuEnvironmentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType (::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::*)()>(
    &::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::get_menuEnvironmentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c1dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>(), { "get_menuEnvironmentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects.get_wrapper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::*)()>(
    &::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::get_wrapper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c1e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>(), { "get_wrapper", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::*)()>(
    &::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c1e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType& GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_get__menuEnvironmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuEnvironmentType;
}
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType const& GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_get__menuEnvironmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuEnvironmentType;
}
constexpr void GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_set__menuEnvironmentType(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuEnvironmentType = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_get__wrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapper;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_get__wrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapper;
}
constexpr void GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::__cordl_internal_set__wrapper(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wrapper = value;
}
inline ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::get_menuEnvironmentType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>(), { "get_menuEnvironmentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::get_wrapper() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>(), { "get_wrapper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects* GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects::MenuEnvironmentManager_MenuEnvironmentObjects() {}
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)()>(&::GlobalNamespace::MenuEnvironmentManager::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c1c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager.ShowEnvironmentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType)>(
    &::GlobalNamespace::MenuEnvironmentManager::ShowEnvironmentType)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x58c1c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager*>(),
                                                             { "ShowEnvironmentType", {}, { ::i2c::type_of<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)()>(&::GlobalNamespace::MenuEnvironmentManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c1df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*>& GlobalNamespace::MenuEnvironmentManager::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::ArrayW<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*> const& GlobalNamespace::MenuEnvironmentManager::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::MenuEnvironmentManager::__cordl_internal_set__data(::ArrayW<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentObjects*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType& GlobalNamespace::MenuEnvironmentManager::__cordl_internal_get__prevMenuEnvironmentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMenuEnvironmentType;
}
constexpr ::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType const& GlobalNamespace::MenuEnvironmentManager::__cordl_internal_get__prevMenuEnvironmentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMenuEnvironmentType;
}
constexpr void GlobalNamespace::MenuEnvironmentManager::__cordl_internal_set__prevMenuEnvironmentType(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevMenuEnvironmentType = value;
}
inline void GlobalNamespace::MenuEnvironmentManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuEnvironmentManager::ShowEnvironmentType(::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType menuEnvironmentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager*>(),
                                                           { "ShowEnvironmentType", {}, { ::i2c::type_of<::GlobalNamespace::MenuEnvironmentManager_MenuEnvironmentType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menuEnvironmentType);
}
inline void GlobalNamespace::MenuEnvironmentManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuEnvironmentManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuEnvironmentManager* GlobalNamespace::MenuEnvironmentManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuEnvironmentManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuEnvironmentManager::MenuEnvironmentManager() {}
