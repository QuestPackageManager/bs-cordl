#pragma once
// IWYU pragma private; include "GlobalNamespace\EnableOnVisible.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnableOnVisible_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnableOnVisible.add_VisibilityChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableOnVisible::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::EnableOnVisible::add_VisibilityChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58563bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { "add_VisibilityChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableOnVisible.remove_VisibilityChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableOnVisible::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::EnableOnVisible::remove_VisibilityChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x585647c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { "remove_VisibilityChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableOnVisible.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableOnVisible::*)()>(&::GlobalNamespace::EnableOnVisible::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x585653c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableOnVisible.OnBecameVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableOnVisible::*)()>(&::GlobalNamespace::EnableOnVisible::OnBecameVisible)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5856594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { "OnBecameVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableOnVisible.OnBecameInvisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableOnVisible::*)()>(&::GlobalNamespace::EnableOnVisible::OnBecameInvisible)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5856610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { "OnBecameInvisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableOnVisible._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableOnVisible::*)()>(&::GlobalNamespace::EnableOnVisible::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585668c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<bool>*& GlobalNamespace::EnableOnVisible::__cordl_internal_get_VisibilityChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VisibilityChangedEvent;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::EnableOnVisible::__cordl_internal_get_VisibilityChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VisibilityChangedEvent;
}
constexpr void GlobalNamespace::EnableOnVisible::__cordl_internal_set_VisibilityChangedEvent(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VisibilityChangedEvent = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>>& GlobalNamespace::EnableOnVisible::__cordl_internal_get__components() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____components;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>> const& GlobalNamespace::EnableOnVisible::__cordl_internal_get__components() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____components;
}
constexpr void GlobalNamespace::EnableOnVisible::__cordl_internal_set__components(::ArrayW<::UnityW<::UnityEngine::Behaviour>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____components = value;
}
inline void GlobalNamespace::EnableOnVisible::add_VisibilityChangedEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { "add_VisibilityChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EnableOnVisible::remove_VisibilityChangedEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { "remove_VisibilityChangedEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EnableOnVisible::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnableOnVisible::OnBecameVisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { "OnBecameVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnableOnVisible::OnBecameInvisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { "OnBecameInvisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnableOnVisible::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableOnVisible*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnableOnVisible* GlobalNamespace::EnableOnVisible::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnableOnVisible*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnableOnVisible::EnableOnVisible() {}
