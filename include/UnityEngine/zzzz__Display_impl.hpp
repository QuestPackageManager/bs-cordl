#pragma once
// IWYU pragma private; include "UnityEngine\Display.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Display_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Display_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Display_DisplaysUpdatedDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Display_DisplaysUpdatedDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::Display_DisplaysUpdatedDelegate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a84b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display_DisplaysUpdatedDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display_DisplaysUpdatedDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Display_DisplaysUpdatedDelegate::*)()>(&::UnityEngine::Display_DisplaysUpdatedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a84ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Display_DisplaysUpdatedDelegate*>(), { ::i2c::class_of<::UnityEngine::Display_DisplaysUpdatedDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Display_DisplaysUpdatedDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display_DisplaysUpdatedDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Display_DisplaysUpdatedDelegate::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Display_DisplaysUpdatedDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Display_DisplaysUpdatedDelegate* UnityEngine::Display_DisplaysUpdatedDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Display_DisplaysUpdatedDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Display_DisplaysUpdatedDelegate::Display_DisplaysUpdatedDelegate() {}
//  Writing Method size for method: ::UnityEngine::Display._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Display::*)()>(&::UnityEngine::Display::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a84300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Display::*)(::System::IntPtr)>(&::UnityEngine::Display::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a84308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.get_renderingWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Display::*)()>(&::UnityEngine::Display::get_renderingWidth)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a84310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_renderingWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.get_renderingHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Display::*)()>(&::UnityEngine::Display::get_renderingHeight)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a843fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_renderingHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.get_systemWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Display::*)()>(&::UnityEngine::Display::get_systemWidth)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a84494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_systemWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.get_systemHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Display::*)()>(&::UnityEngine::Display::get_systemHeight)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a84580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_systemHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.get_requiresSrgbBlitToBackbuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Display::*)()>(&::UnityEngine::Display::get_requiresSrgbBlitToBackbuffer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a84618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_requiresSrgbBlitToBackbuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.RelativeMouseAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&::UnityEngine::Display::RelativeMouseAt)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6a846d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "RelativeMouseAt", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.get_main
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Display* (*)()>(&::UnityEngine::Display::get_main)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a847f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_main", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.RecreateDisplayList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::System::IntPtr>)>(&::UnityEngine::Display::RecreateDisplayList)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6a8484c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "RecreateDisplayList", {}, { ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.FireDisplaysUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Display::FireDisplaysUpdated)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a849c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "FireDisplaysUpdated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.GetSystemExtImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::Display::GetSystemExtImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a8452c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(),
                                                { "GetSystemExtImpl", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.GetRenderingExtImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::Display::GetRenderingExtImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a843a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(),
                                                { "GetRenderingExtImpl", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.RelativeMouseAtImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::Display::RelativeMouseAtImpl)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a84794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(),
                            { "RelativeMouseAtImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Display.RequiresSrgbBlitToBackbufferImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Display::RequiresSrgbBlitToBackbufferImpl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a84694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "RequiresSrgbBlitToBackbufferImpl", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Display::__cordl_internal_get_nativeDisplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeDisplay;
}
constexpr ::System::IntPtr const& UnityEngine::Display::__cordl_internal_get_nativeDisplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeDisplay;
}
constexpr void UnityEngine::Display::__cordl_internal_set_nativeDisplay(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nativeDisplay = value;
}
inline void UnityEngine::Display::setStaticF_displays(::ArrayW<::UnityEngine::Display*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Display*>, "displays", ::UnityEngine::Display*>(std::forward<::ArrayW<::UnityEngine::Display*>>(value));
}
inline ::ArrayW<::UnityEngine::Display*> UnityEngine::Display::getStaticF_displays() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Display*>, "displays", ::UnityEngine::Display*>();
}
inline void UnityEngine::Display::setStaticF__mainDisplay(::UnityEngine::Display* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Display*, "_mainDisplay", ::UnityEngine::Display*>(std::forward<::UnityEngine::Display*>(value));
}
inline ::UnityEngine::Display* UnityEngine::Display::getStaticF__mainDisplay() {
  return ::cordl_internals::getStaticField<::UnityEngine::Display*, "_mainDisplay", ::UnityEngine::Display*>();
}
inline void UnityEngine::Display::setStaticF_m_ActiveEditorGameViewTarget(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_ActiveEditorGameViewTarget", ::UnityEngine::Display*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Display::getStaticF_m_ActiveEditorGameViewTarget() {
  return ::cordl_internals::getStaticField<int32_t, "m_ActiveEditorGameViewTarget", ::UnityEngine::Display*>();
}
inline void UnityEngine::Display::setStaticF_onDisplaysUpdated(::UnityEngine::Display_DisplaysUpdatedDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Display_DisplaysUpdatedDelegate*, "onDisplaysUpdated", ::UnityEngine::Display*>(
      std::forward<::UnityEngine::Display_DisplaysUpdatedDelegate*>(value));
}
inline ::UnityEngine::Display_DisplaysUpdatedDelegate* UnityEngine::Display::getStaticF_onDisplaysUpdated() {
  return ::cordl_internals::getStaticField<::UnityEngine::Display_DisplaysUpdatedDelegate*, "onDisplaysUpdated", ::UnityEngine::Display*>();
}
inline void UnityEngine::Display::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Display::_ctor(::System::IntPtr nativeDisplay) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativeDisplay);
}
inline int32_t UnityEngine::Display::get_renderingWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_renderingWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Display::get_renderingHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_renderingHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Display::get_systemWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_systemWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Display::get_systemHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_systemHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Display::get_requiresSrgbBlitToBackbuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_requiresSrgbBlitToBackbuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Display::RelativeMouseAt(::UnityEngine::Vector3 inputMouseCoordinates) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "RelativeMouseAt", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, inputMouseCoordinates);
}
inline ::UnityEngine::Display* UnityEngine::Display::get_main() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "get_main", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Display*>(nullptr, ___internal_method);
}
inline void UnityEngine::Display::RecreateDisplayList(::ArrayW<::System::IntPtr> nativeDisplay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "RecreateDisplayList", {}, { ::i2c::type_of<::ArrayW<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeDisplay);
}
inline void UnityEngine::Display::FireDisplaysUpdated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "FireDisplaysUpdated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Display::GetSystemExtImpl(::System::IntPtr nativeDisplay, ::by_ref<int32_t> w, ::by_ref<int32_t> h) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(),
                                              { "GetSystemExtImpl", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeDisplay, w, h);
}
inline void UnityEngine::Display::GetRenderingExtImpl(::System::IntPtr nativeDisplay, ::by_ref<int32_t> w, ::by_ref<int32_t> h) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(),
                                              { "GetRenderingExtImpl", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nativeDisplay, w, h);
}
inline int32_t UnityEngine::Display::RelativeMouseAtImpl(int32_t x, int32_t y, ::by_ref<int32_t> rx, ::by_ref<int32_t> ry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(),
                          { "RelativeMouseAtImpl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y, rx, ry);
}
inline bool UnityEngine::Display::RequiresSrgbBlitToBackbufferImpl(::System::IntPtr nativeDisplay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Display*>(), { "RequiresSrgbBlitToBackbufferImpl", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nativeDisplay);
}
inline ::UnityEngine::Display* UnityEngine::Display::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Display*>());
}
inline ::UnityEngine::Display* UnityEngine::Display::New_ctor(::System::IntPtr nativeDisplay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Display*>(nativeDisplay));
}
// Ctor Parameters []
constexpr ::UnityEngine::Display::Display() {}
