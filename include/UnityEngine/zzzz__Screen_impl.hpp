#pragma once
// IWYU pragma private; include "UnityEngine/Screen.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Screen_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/zzzz__FullScreenMode_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RefreshRate_def.hpp"
#include "UnityEngine/zzzz__Resolution_def.hpp"
#include "UnityEngine/zzzz__ScreenOrientation_def.hpp"
//  Writing Method size for method: ::UnityEngine::Screen.get_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Screen::get_width)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a7fa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Screen::get_height)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a7fa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_dpi
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Screen::get_dpi)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a7fac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_dpi", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.GetScreenOrientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ScreenOrientation (*)()>(&::UnityEngine::Screen::GetScreenOrientation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a7faec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "GetScreenOrientation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_orientation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ScreenOrientation (*)()>(&::UnityEngine::Screen::get_orientation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a7fb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_orientation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_currentResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Resolution (*)()>(&::UnityEngine::Screen::get_currentResolution)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a7fb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_currentResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_fullScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Screen::get_fullScreen)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a7fbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_fullScreen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.set_fullScreen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Screen::set_fullScreen)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a7fbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "set_fullScreen", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_safeArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)()>(&::UnityEngine::Screen::get_safeArea)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a7fc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_safeArea", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.SetResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::UnityEngine::FullScreenMode, ::UnityEngine::RefreshRate)>(&::UnityEngine::Screen::SetResolution)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a7fca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Screen*>(),
            { "SetResolution", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FullScreenMode>(), ::i2c::type_of<::UnityEngine::RefreshRate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.SetResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, bool, int32_t)>(&::UnityEngine::Screen::SetResolution)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a7fd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(),
                                                             { "SetResolution", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.SetResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, bool)>(&::UnityEngine::Screen::SetResolution)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a7fdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "SetResolution", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.SetMSAASamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Screen::SetMSAASamples)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a7fe3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "SetMSAASamples", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.GetMSAASamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Screen::GetMSAASamples)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a7fe78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "GetMSAASamples", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_msaaSamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Screen::get_msaaSamples)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a7fea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_msaaSamples", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_resolutions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Resolution> (*)()>(&::UnityEngine::Screen::get_resolutions)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a7fec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_resolutions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_currentResolution_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Resolution>)>(&::UnityEngine::Screen::get_currentResolution_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a7fb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_currentResolution_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Resolution>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_safeArea_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::Screen::get_safeArea_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a7fc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_safeArea_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.SetResolution_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, ::UnityEngine::FullScreenMode, ::by_ref<::UnityEngine::RefreshRate>)>(
    &::UnityEngine::Screen::SetResolution_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a7fd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "SetResolution_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FullScreenMode>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::RefreshRate>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Screen.get_resolutions_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::Screen::get_resolutions_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a7ffdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_resolutions_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Screen::get_width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Screen::get_height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Screen::get_dpi() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_dpi", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::ScreenOrientation UnityEngine::Screen::GetScreenOrientation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "GetScreenOrientation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ScreenOrientation>(nullptr, ___internal_method);
}
inline ::UnityEngine::ScreenOrientation UnityEngine::Screen::get_orientation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_orientation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ScreenOrientation>(nullptr, ___internal_method);
}
inline ::UnityEngine::Resolution UnityEngine::Screen::get_currentResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_currentResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Resolution>(nullptr, ___internal_method);
}
inline bool UnityEngine::Screen::get_fullScreen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_fullScreen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Screen::set_fullScreen(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "set_fullScreen", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::Screen::get_safeArea() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_safeArea", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method);
}
inline void UnityEngine::Screen::SetResolution(int32_t width, int32_t height, ::UnityEngine::FullScreenMode fullscreenMode, ::UnityEngine::RefreshRate preferredRefreshRate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Screen*>(),
          { "SetResolution", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FullScreenMode>(), ::i2c::type_of<::UnityEngine::RefreshRate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, width, height, fullscreenMode, preferredRefreshRate);
}
inline void UnityEngine::Screen::SetResolution(int32_t width, int32_t height, bool fullscreen, int32_t preferredRefreshRate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(),
                                                           { "SetResolution", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, width, height, fullscreen, preferredRefreshRate);
}
inline void UnityEngine::Screen::SetResolution(int32_t width, int32_t height, bool fullscreen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "SetResolution", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, width, height, fullscreen);
}
inline void UnityEngine::Screen::SetMSAASamples(int32_t numSamples) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "SetMSAASamples", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, numSamples);
}
inline int32_t UnityEngine::Screen::GetMSAASamples() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "GetMSAASamples", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Screen::get_msaaSamples() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_msaaSamples", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Resolution> UnityEngine::Screen::get_resolutions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_resolutions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Resolution>>(nullptr, ___internal_method);
}
inline void UnityEngine::Screen::get_currentResolution_Injected(::by_ref<::UnityEngine::Resolution> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_currentResolution_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Resolution>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Screen::get_safeArea_Injected(::by_ref<::UnityEngine::Rect> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_safeArea_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Screen::SetResolution_Injected(int32_t width, int32_t height, ::UnityEngine::FullScreenMode fullscreenMode, ::by_ref<::UnityEngine::RefreshRate> preferredRefreshRate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "SetResolution_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FullScreenMode>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::RefreshRate>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, width, height, fullscreenMode, preferredRefreshRate);
}
inline void UnityEngine::Screen::get_resolutions_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Screen*>(), { "get_resolutions_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::Screen::Screen() {}
