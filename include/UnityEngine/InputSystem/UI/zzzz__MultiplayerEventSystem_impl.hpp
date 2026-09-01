#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\UI\MultiplayerEventSystem.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__MultiplayerEventSystem_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::MultiplayerEventSystem.get_playerRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::InputSystem::UI::MultiplayerEventSystem::*)()>(
    &::UnityEngine::InputSystem::UI::MultiplayerEventSystem::get_playerRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), { "get_playerRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::MultiplayerEventSystem.set_playerRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::MultiplayerEventSystem::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::InputSystem::UI::MultiplayerEventSystem::set_playerRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), { "set_playerRoot", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::MultiplayerEventSystem.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::MultiplayerEventSystem::*)()>(&::UnityEngine::InputSystem::UI::MultiplayerEventSystem::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x659a28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::MultiplayerEventSystem.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::MultiplayerEventSystem::*)()>(&::UnityEngine::InputSystem::UI::MultiplayerEventSystem::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::MultiplayerEventSystem.InitializePlayerRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::MultiplayerEventSystem::*)()>(
    &::UnityEngine::InputSystem::UI::MultiplayerEventSystem::InitializePlayerRoot)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x659a1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), { "InitializePlayerRoot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::MultiplayerEventSystem.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::MultiplayerEventSystem::*)()>(&::UnityEngine::InputSystem::UI::MultiplayerEventSystem::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x659a2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::MultiplayerEventSystem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::MultiplayerEventSystem::*)()>(&::UnityEngine::InputSystem::UI::MultiplayerEventSystem::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x659a3a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::InputSystem::UI::MultiplayerEventSystem::__cordl_internal_get_m_PlayerRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerRoot;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::InputSystem::UI::MultiplayerEventSystem::__cordl_internal_get_m_PlayerRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PlayerRoot;
}
constexpr void UnityEngine::InputSystem::UI::MultiplayerEventSystem::__cordl_internal_set_m_PlayerRoot(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PlayerRoot = value;
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::InputSystem::UI::MultiplayerEventSystem::get_playerRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), { "get_playerRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::MultiplayerEventSystem::set_playerRoot(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), { "set_playerRoot", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::MultiplayerEventSystem::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::MultiplayerEventSystem::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::MultiplayerEventSystem::InitializePlayerRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), { "InitializePlayerRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::MultiplayerEventSystem::Update() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::MultiplayerEventSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::UI::MultiplayerEventSystem* UnityEngine::InputSystem::UI::MultiplayerEventSystem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::UI::MultiplayerEventSystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::MultiplayerEventSystem::MultiplayerEventSystem() {}
