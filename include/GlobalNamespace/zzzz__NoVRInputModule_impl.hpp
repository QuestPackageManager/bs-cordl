#pragma once
// IWYU pragma private; include "GlobalNamespace/NoVRInputModule.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NoVRInputModule_def.hpp"
#include "GlobalNamespace/zzzz__IVRInputModule_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoVRInputModule.add_onProcessMousePressEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoVRInputModule::*)(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*)>(
    &::GlobalNamespace::NoVRInputModule::add_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e36c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoVRInputModule*>(),
                                                             { "add_onProcessMousePressEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoVRInputModule.remove_onProcessMousePressEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoVRInputModule::*)(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*)>(
    &::GlobalNamespace::NoVRInputModule::remove_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e36d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoVRInputModule*>(),
                                                             { "remove_onProcessMousePressEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoVRInputModule.add_pointerDidClickEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoVRInputModule::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::GlobalNamespace::NoVRInputModule::add_pointerDidClickEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e36dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoVRInputModule*>(),
                                                             { "add_pointerDidClickEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoVRInputModule.remove_pointerDidClickEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoVRInputModule::*)(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*)>(
    &::GlobalNamespace::NoVRInputModule::remove_pointerDidClickEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e36e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoVRInputModule*>(),
                                                             { "remove_pointerDidClickEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoVRInputModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoVRInputModule::*)()>(&::GlobalNamespace::NoVRInputModule::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e36f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoVRInputModule*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::NoVRInputModule::__cordl_internal_get_onProcessMousePressEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onProcessMousePressEvent;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::NoVRInputModule::__cordl_internal_get_onProcessMousePressEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onProcessMousePressEvent;
}
constexpr void GlobalNamespace::NoVRInputModule::__cordl_internal_set_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onProcessMousePressEvent = value;
}
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*& GlobalNamespace::NoVRInputModule::__cordl_internal_get_pointerDidClickEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidClickEvent;
}
constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* const& GlobalNamespace::NoVRInputModule::__cordl_internal_get_pointerDidClickEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidClickEvent;
}
constexpr void GlobalNamespace::NoVRInputModule::__cordl_internal_set_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pointerDidClickEvent = value;
}
inline void GlobalNamespace::NoVRInputModule::add_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoVRInputModule*>(),
                                                           { "add_onProcessMousePressEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoVRInputModule::remove_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoVRInputModule*>(),
                                                           { "remove_onProcessMousePressEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoVRInputModule::add_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoVRInputModule*>(),
                                                           { "add_pointerDidClickEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoVRInputModule::remove_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoVRInputModule*>(),
                                                           { "remove_pointerDidClickEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NoVRInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoVRInputModule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoVRInputModule* GlobalNamespace::NoVRInputModule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoVRInputModule*>());
}
/// @brief Convert operator to "::GlobalNamespace::IVRInputModule"
constexpr GlobalNamespace::NoVRInputModule::operator ::GlobalNamespace::IVRInputModule*() noexcept {
  return static_cast<::GlobalNamespace::IVRInputModule*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVRInputModule"
constexpr ::GlobalNamespace::IVRInputModule* GlobalNamespace::NoVRInputModule::i___GlobalNamespace__IVRInputModule() noexcept {
  return static_cast<::GlobalNamespace::IVRInputModule*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoVRInputModule::NoVRInputModule() {}
