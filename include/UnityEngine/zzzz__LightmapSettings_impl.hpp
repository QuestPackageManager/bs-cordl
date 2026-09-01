#pragma once
// IWYU pragma private; include "UnityEngine\LightmapSettings.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LightmapSettings_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__LightProbes_def.hpp"
#include "UnityEngine/zzzz__LightmapData_def.hpp"
#include "UnityEngine/zzzz__LightmapsModeLegacy_def.hpp"
#include "UnityEngine/zzzz__LightmapsMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightmapSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightmapSettings::*)()>(&::UnityEngine::LightmapSettings::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a897b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.get_lightmaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::LightmapData*> (*)()>(&::UnityEngine::LightmapSettings::get_lightmaps)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a8980c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_lightmaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.set_lightmaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::LightmapData*>)>(&::UnityEngine::LightmapSettings::set_lightmaps)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a89834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_lightmaps", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::LightmapData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.get_lightmapsMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LightmapsMode (*)()>(&::UnityEngine::LightmapSettings::get_lightmapsMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a89870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_lightmapsMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.set_lightmapsMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LightmapsMode)>(&::UnityEngine::LightmapSettings::set_lightmapsMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a89898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_lightmapsMode", {}, { ::i2c::type_of<::UnityEngine::LightmapsMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.get_lightProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::LightProbes> (*)()>(&::UnityEngine::LightmapSettings::get_lightProbes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a898d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_lightProbes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.set_lightProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LightProbes*)>(&::UnityEngine::LightmapSettings::set_lightProbes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a89a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_lightProbes", {}, { ::i2c::type_of<::UnityEngine::LightProbes*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::LightmapSettings::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a89acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.get_lightmapsModeLegacy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LightmapsModeLegacy (*)()>(&::UnityEngine::LightmapSettings::get_lightmapsModeLegacy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a89af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_lightmapsModeLegacy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.set_lightmapsModeLegacy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::LightmapsModeLegacy)>(&::UnityEngine::LightmapSettings::set_lightmapsModeLegacy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a89afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_lightmapsModeLegacy", {}, { ::i2c::type_of<::UnityEngine::LightmapsModeLegacy>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.get_bakedColorSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorSpace (*)()>(&::UnityEngine::LightmapSettings::get_bakedColorSpace)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a89b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_bakedColorSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.set_bakedColorSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ColorSpace)>(&::UnityEngine::LightmapSettings::set_bakedColorSpace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a89b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_bakedColorSpace", {}, { ::i2c::type_of<::UnityEngine::ColorSpace>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.get_lightProbes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::LightmapSettings::get_lightProbes_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a899e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_lightProbes_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::LightmapSettings.set_lightProbes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::LightmapSettings::set_lightProbes_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a89a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_lightProbes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::LightmapSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::LightmapData*> UnityEngine::LightmapSettings::get_lightmaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_lightmaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::LightmapData*>>(nullptr, ___internal_method);
}
inline void UnityEngine::LightmapSettings::set_lightmaps(::ArrayW<::UnityEngine::LightmapData*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_lightmaps", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::LightmapData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::LightmapsMode UnityEngine::LightmapSettings::get_lightmapsMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_lightmapsMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightmapsMode>(nullptr, ___internal_method);
}
inline void UnityEngine::LightmapSettings::set_lightmapsMode(::UnityEngine::LightmapsMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_lightmapsMode", {}, { ::i2c::type_of<::UnityEngine::LightmapsMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::LightProbes> UnityEngine::LightmapSettings::get_lightProbes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_lightProbes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::LightProbes>>(nullptr, ___internal_method);
}
inline void UnityEngine::LightmapSettings::set_lightProbes(::UnityEngine::LightProbes* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_lightProbes", {}, { ::i2c::type_of<::UnityEngine::LightProbes*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::LightmapSettings::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::LightmapsModeLegacy UnityEngine::LightmapSettings::get_lightmapsModeLegacy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_lightmapsModeLegacy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LightmapsModeLegacy>(nullptr, ___internal_method);
}
inline void UnityEngine::LightmapSettings::set_lightmapsModeLegacy(::UnityEngine::LightmapsModeLegacy value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_lightmapsModeLegacy", {}, { ::i2c::type_of<::UnityEngine::LightmapsModeLegacy>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::ColorSpace UnityEngine::LightmapSettings::get_bakedColorSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_bakedColorSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorSpace>(nullptr, ___internal_method);
}
inline void UnityEngine::LightmapSettings::set_bakedColorSpace(::UnityEngine::ColorSpace value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_bakedColorSpace", {}, { ::i2c::type_of<::UnityEngine::ColorSpace>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::LightmapSettings::get_lightProbes_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "get_lightProbes_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::LightmapSettings::set_lightProbes_Injected(::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LightmapSettings*>(), { "set_lightProbes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::LightmapSettings* UnityEngine::LightmapSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LightmapSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LightmapSettings::LightmapSettings() {}
