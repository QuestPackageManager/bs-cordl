#pragma once
// IWYU pragma private; include "UnityEngine/HDROutputSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__HDROutputSettings_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
//  Writing Method size for method: ::UnityEngine::HDROutputSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::HDROutputSettings::*)()>(&::UnityEngine::HDROutputSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a85f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::HDROutputSettings::*)(int32_t)>(&::UnityEngine::HDROutputSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a85f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.get_main
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::HDROutputSettings* (*)()>(&::UnityEngine::HDROutputSettings::get_main)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a85f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_main", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.get_active
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::HDROutputSettings::*)()>(&::UnityEngine::HDROutputSettings::get_active)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a85f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_active", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.get_available
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::HDROutputSettings::*)()>(&::UnityEngine::HDROutputSettings::get_available)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a86024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_available", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.get_automaticHDRTonemapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::HDROutputSettings::*)()>(&::UnityEngine::HDROutputSettings::get_automaticHDRTonemapping)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a860dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_automaticHDRTonemapping", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.set_automaticHDRTonemapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::HDROutputSettings::*)(bool)>(&::UnityEngine::HDROutputSettings::set_automaticHDRTonemapping)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6a86194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "set_automaticHDRTonemapping", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.get_displayColorGamut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorGamut (::UnityEngine::HDROutputSettings::*)()>(&::UnityEngine::HDROutputSettings::get_displayColorGamut)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a86264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_displayColorGamut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.get_graphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::HDROutputSettings::*)()>(
    &::UnityEngine::HDROutputSettings::get_graphicsFormat)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a8631c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_graphicsFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.get_paperWhiteNits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::HDROutputSettings::*)()>(&::UnityEngine::HDROutputSettings::get_paperWhiteNits)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a863d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_paperWhiteNits", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.get_maxFullFrameToneMapLuminance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::HDROutputSettings::*)()>(&::UnityEngine::HDROutputSettings::get_maxFullFrameToneMapLuminance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a8648c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_maxFullFrameToneMapLuminance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.get_maxToneMapLuminance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::HDROutputSettings::*)()>(&::UnityEngine::HDROutputSettings::get_maxToneMapLuminance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a86544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_maxToneMapLuminance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.get_minToneMapLuminance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::HDROutputSettings::*)()>(&::UnityEngine::HDROutputSettings::get_minToneMapLuminance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a865fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_minToneMapLuminance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.get_HDRModeChangeRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::HDROutputSettings::*)()>(&::UnityEngine::HDROutputSettings::get_HDRModeChangeRequested)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a866b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_HDRModeChangeRequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.RequestHDRModeChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::HDROutputSettings::*)(bool)>(&::UnityEngine::HDROutputSettings::RequestHDRModeChange)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6a8676c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "RequestHDRModeChange", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.GetActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::HDROutputSettings::GetActive)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a85fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetActive", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.GetAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::HDROutputSettings::GetAvailable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a860a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetAvailable", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.GetAutomaticHDRTonemapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::HDROutputSettings::GetAutomaticHDRTonemapping)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a86158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetAutomaticHDRTonemapping", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.SetAutomaticHDRTonemapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::HDROutputSettings::SetAutomaticHDRTonemapping)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a86220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "SetAutomaticHDRTonemapping", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.GetDisplayColorGamut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorGamut (*)(int32_t)>(&::UnityEngine::HDROutputSettings::GetDisplayColorGamut)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a862e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetDisplayColorGamut", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.GetGraphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(int32_t)>(&::UnityEngine::HDROutputSettings::GetGraphicsFormat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a86398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetGraphicsFormat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.GetPaperWhiteNits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::UnityEngine::HDROutputSettings::GetPaperWhiteNits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a86450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetPaperWhiteNits", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.GetMaxFullFrameToneMapLuminance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::HDROutputSettings::GetMaxFullFrameToneMapLuminance)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a86508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetMaxFullFrameToneMapLuminance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.GetMaxToneMapLuminance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::HDROutputSettings::GetMaxToneMapLuminance)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a865c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetMaxToneMapLuminance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.GetMinToneMapLuminance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::HDROutputSettings::GetMinToneMapLuminance)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a86678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetMinToneMapLuminance", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.GetHDRModeChangeRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::HDROutputSettings::GetHDRModeChangeRequested)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a86730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetHDRModeChangeRequested", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::HDROutputSettings.RequestHDRModeChangeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::HDROutputSettings::RequestHDRModeChangeInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a867f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "RequestHDRModeChangeInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::HDROutputSettings::__cordl_internal_get_m_DisplayIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayIndex;
}
constexpr int32_t const& UnityEngine::HDROutputSettings::__cordl_internal_get_m_DisplayIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayIndex;
}
constexpr void UnityEngine::HDROutputSettings::__cordl_internal_set_m_DisplayIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisplayIndex = value;
}
inline void UnityEngine::HDROutputSettings::setStaticF_displays(::ArrayW<::UnityEngine::HDROutputSettings*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::HDROutputSettings*>, "displays", ::UnityEngine::HDROutputSettings*>(std::forward<::ArrayW<::UnityEngine::HDROutputSettings*>>(value));
}
inline ::ArrayW<::UnityEngine::HDROutputSettings*> UnityEngine::HDROutputSettings::getStaticF_displays() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::HDROutputSettings*>, "displays", ::UnityEngine::HDROutputSettings*>();
}
inline void UnityEngine::HDROutputSettings::setStaticF__mainDisplay(::UnityEngine::HDROutputSettings* value) {
  ::cordl_internals::setStaticField<::UnityEngine::HDROutputSettings*, "_mainDisplay", ::UnityEngine::HDROutputSettings*>(std::forward<::UnityEngine::HDROutputSettings*>(value));
}
inline ::UnityEngine::HDROutputSettings* UnityEngine::HDROutputSettings::getStaticF__mainDisplay() {
  return ::cordl_internals::getStaticField<::UnityEngine::HDROutputSettings*, "_mainDisplay", ::UnityEngine::HDROutputSettings*>();
}
inline void UnityEngine::HDROutputSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::HDROutputSettings::_ctor(int32_t displayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayIndex);
}
inline ::UnityEngine::HDROutputSettings* UnityEngine::HDROutputSettings::get_main() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_main", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::HDROutputSettings*>(nullptr, ___internal_method);
}
inline bool UnityEngine::HDROutputSettings::get_active() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_active", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::HDROutputSettings::get_available() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_available", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::HDROutputSettings::get_automaticHDRTonemapping() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_automaticHDRTonemapping", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::HDROutputSettings::set_automaticHDRTonemapping(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "set_automaticHDRTonemapping", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ColorGamut UnityEngine::HDROutputSettings::get_displayColorGamut() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_displayColorGamut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorGamut>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::HDROutputSettings::get_graphicsFormat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_graphicsFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline float_t UnityEngine::HDROutputSettings::get_paperWhiteNits() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_paperWhiteNits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::HDROutputSettings::get_maxFullFrameToneMapLuminance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_maxFullFrameToneMapLuminance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::HDROutputSettings::get_maxToneMapLuminance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_maxToneMapLuminance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::HDROutputSettings::get_minToneMapLuminance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_minToneMapLuminance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::HDROutputSettings::get_HDRModeChangeRequested() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "get_HDRModeChangeRequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::HDROutputSettings::RequestHDRModeChange(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "RequestHDRModeChange", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline bool UnityEngine::HDROutputSettings::GetActive(int32_t displayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetActive", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, displayIndex);
}
inline bool UnityEngine::HDROutputSettings::GetAvailable(int32_t displayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetAvailable", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, displayIndex);
}
inline bool UnityEngine::HDROutputSettings::GetAutomaticHDRTonemapping(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetAutomaticHDRTonemapping", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, displayIndex);
}
inline void UnityEngine::HDROutputSettings::SetAutomaticHDRTonemapping(int32_t displayIndex, bool scripted) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "SetAutomaticHDRTonemapping", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex, scripted);
}
inline ::UnityEngine::ColorGamut UnityEngine::HDROutputSettings::GetDisplayColorGamut(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetDisplayColorGamut", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorGamut>(nullptr, ___internal_method, displayIndex);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::HDROutputSettings::GetGraphicsFormat(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetGraphicsFormat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, displayIndex);
}
inline float_t UnityEngine::HDROutputSettings::GetPaperWhiteNits(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetPaperWhiteNits", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, displayIndex);
}
inline int32_t UnityEngine::HDROutputSettings::GetMaxFullFrameToneMapLuminance(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetMaxFullFrameToneMapLuminance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, displayIndex);
}
inline int32_t UnityEngine::HDROutputSettings::GetMaxToneMapLuminance(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetMaxToneMapLuminance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, displayIndex);
}
inline int32_t UnityEngine::HDROutputSettings::GetMinToneMapLuminance(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetMinToneMapLuminance", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, displayIndex);
}
inline bool UnityEngine::HDROutputSettings::GetHDRModeChangeRequested(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "GetHDRModeChangeRequested", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, displayIndex);
}
inline void UnityEngine::HDROutputSettings::RequestHDRModeChangeInternal(int32_t displayIndex, bool enabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HDROutputSettings*>(), { "RequestHDRModeChangeInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex, enabled);
}
inline ::UnityEngine::HDROutputSettings* UnityEngine::HDROutputSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::HDROutputSettings*>());
}
inline ::UnityEngine::HDROutputSettings* UnityEngine::HDROutputSettings::New_ctor(int32_t displayIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::HDROutputSettings*>(displayIndex));
}
// Ctor Parameters []
constexpr ::UnityEngine::HDROutputSettings::HDROutputSettings() {}
