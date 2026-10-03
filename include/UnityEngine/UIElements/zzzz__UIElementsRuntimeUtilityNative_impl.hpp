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
  constexpr static std::size_t addrs = 0x726a804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "UpdatePanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.RepaintPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::RepaintPanels)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x726a86c;

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
  constexpr static std::size_t addrs = 0x726a8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "RenderOffscreenPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.SetUpdateCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::SetUpdateCallback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x726a944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "SetUpdateCallback", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.SetRenderingCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*, ::System::Action*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::SetRenderingCallbacks)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x726a994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(),
                                                             { "SetRenderingCallbacks", {}, { ::i2c::type_of<::System::Action_1<bool>*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.UnsetRenderingCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::UnsetRenderingCallbacks)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x726aa34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "UnsetRenderingCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.RegisterRenderingCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::RegisterRenderingCallbacks)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x726aa0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "RegisterRenderingCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.UnregisterRenderingCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::UnregisterRenderingCallbacks)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x726aa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "UnregisterRenderingCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative.VisualElementCreation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::VisualElementCreation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x726aac4;

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
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::SetUpdateCallback(::System::Action* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "SetUpdateCallback", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::SetRenderingCallbacks(::System::Action_1<bool>* repaintPanels, ::System::Action* renderOffscreenPanels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(),
                                                           { "SetRenderingCallbacks", {}, { ::i2c::type_of<::System::Action_1<bool>*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, repaintPanels, renderOffscreenPanels);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::UnsetRenderingCallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "UnsetRenderingCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::RegisterRenderingCallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "RegisterRenderingCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::UnregisterRenderingCallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "UnregisterRenderingCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtilityNative::VisualElementCreation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*>(), { "VisualElementCreation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIElementsRuntimeUtilityNative::UIElementsRuntimeUtilityNative() {}
