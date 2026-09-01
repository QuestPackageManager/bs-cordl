#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXOutputEventAbstractHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXOutputEventAbstractHandler_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__ExposedProperty_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXOutputEventArgs_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffect_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler.get_canExecuteInEditor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::*)()>(
    &::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::get_canExecuteInEditor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler.set_m_VisualEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::*)(::UnityEngine::VFX::VisualEffect*)>(
    &::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::set_m_VisualEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69e1e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(),
                                                                                           { "set_m_VisualEffect", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler.get_m_VisualEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::VFX::VisualEffect> (::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::*)()>(
    &::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::get_m_VisualEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69e1e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), { "get_m_VisualEffect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::*)()>(&::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::OnEnable)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x69e1e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::*)()>(
    &::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::OnDisable)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x69e1f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler.OnOutputEventRecieved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::*)(::UnityEngine::VFX::VFXOutputEventArgs)>(
    &::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::OnOutputEventRecieved)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x69e20f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(),
                                                                                           { "OnOutputEventRecieved", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXOutputEventArgs>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler.OnVFXOutputEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::*)(::UnityEngine::VFX::VFXEventAttribute*)>(
    &::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::OnVFXOutputEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::*)()>(&::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x69e21c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::__cordl_internal_get_executeInEditor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___executeInEditor;
}
constexpr bool const& UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::__cordl_internal_get_executeInEditor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___executeInEditor;
}
constexpr void UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::__cordl_internal_set_executeInEditor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___executeInEditor = value;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::__cordl_internal_get_outputEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputEvent;
}
constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::__cordl_internal_get_outputEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outputEvent;
}
constexpr void UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::__cordl_internal_set_outputEvent(::UnityEngine::VFX::Utility::ExposedProperty* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outputEvent = value;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::__cordl_internal_get__m_VisualEffect_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____m_VisualEffect_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::__cordl_internal_get__m_VisualEffect_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____m_VisualEffect_k__BackingField;
}
constexpr void UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::__cordl_internal_set__m_VisualEffect_k__BackingField(::UnityW<::UnityEngine::VFX::VisualEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____m_VisualEffect_k__BackingField = value;
}
inline bool UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::get_canExecuteInEditor() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::set_m_VisualEffect(::UnityEngine::VFX::VisualEffect* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(),
                                                                                         { "set_m_VisualEffect", {}, { ::i2c::type_of<::UnityEngine::VFX::VisualEffect*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::VFX::VisualEffect> UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::get_m_VisualEffect() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), { "get_m_VisualEffect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::VFX::VisualEffect>>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::OnOutputEventRecieved(::UnityEngine::VFX::VFXOutputEventArgs args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(),
                                                                                         { "OnOutputEventRecieved", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXOutputEventArgs>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::OnVFXOutputEvent(::UnityEngine::VFX::VFXEventAttribute* eventAttribute) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventAttribute);
}
inline void UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler* UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::Utility::VFXOutputEventAbstractHandler::VFXOutputEventAbstractHandler() {}
