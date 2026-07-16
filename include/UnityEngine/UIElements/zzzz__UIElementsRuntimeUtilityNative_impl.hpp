#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsRuntimeUtilityNative.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIElementsRuntimeUtilityNative_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.UpdatePanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::UpdatePanels)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6db3ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "UpdatePanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.RepaintPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::RepaintPanels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6db3f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "RepaintPanels", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.RenderOffscreenPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::RenderOffscreenPanels)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6db3f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "RenderOffscreenPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.RegisterPlayerloopCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::RegisterPlayerloopCallback)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6db4000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "RegisterPlayerloopCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.UnregisterPlayerloopCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::UnregisterPlayerloopCallback)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6db4028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "UnregisterPlayerloopCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.VisualElementCreation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::VisualElementCreation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6db4050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "VisualElementCreation", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::setStaticF_UpdatePanelsCallback(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "UpdatePanelsCallback", ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::UIElements::UIElementsRuntimeUtilityNative::getStaticF_UpdatePanelsCallback() {
  return ::cordl_internals::getStaticField<::System::Action*, "UpdatePanelsCallback", ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::setStaticF_RepaintPanelsCallback(::System::Action_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<bool>*, "RepaintPanelsCallback", ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::UIElements::UIElementsRuntimeUtilityNative::getStaticF_RepaintPanelsCallback() {
  return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "RepaintPanelsCallback", ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::setStaticF_RenderOffscreenPanelsCallback(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "RenderOffscreenPanelsCallback", ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::UIElements::UIElementsRuntimeUtilityNative::getStaticF_RenderOffscreenPanelsCallback() {
  return ::cordl_internals::getStaticField<::System::Action*, "RenderOffscreenPanelsCallback", ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::UpdatePanels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "UpdatePanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::RepaintPanels(bool onlyOffscreen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "RepaintPanels", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, onlyOffscreen);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::RenderOffscreenPanels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "RenderOffscreenPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::RegisterPlayerloopCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "RegisterPlayerloopCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::UnregisterPlayerloopCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "UnregisterPlayerloopCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::VisualElementCreation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "VisualElementCreation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::UIElementsRuntimeUtilityNative() {}
