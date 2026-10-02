#pragma once
// IWYU pragma private; include "UnityEngine/QualitySettings.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__QualitySettings_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineAsset_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__ShadowmaskMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::QualitySettings.OnActiveQualityLevelChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::QualitySettings::OnActiveQualityLevelChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6ee06fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "OnActiveQualityLevelChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_shadowmaskMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ShadowmaskMode (*)()>(&::UnityEngine::QualitySettings::get_shadowmaskMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ee0780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_shadowmaskMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_lodBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::QualitySettings::get_lodBias)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ee07a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_lodBias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_meshLodThreshold
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::QualitySettings::get_meshLodThreshold)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ee07d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_meshLodThreshold", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_maximumLODLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::QualitySettings::get_maximumLODLevel)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ee07f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_maximumLODLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_enableLODCrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::QualitySettings::get_enableLODCrossFade)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ee0820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_enableLODCrossFade", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_enableLODCrossFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::QualitySettings::set_enableLODCrossFade)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee0848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_enableLODCrossFade", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_vSyncCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::QualitySettings::set_vSyncCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee0884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_vSyncCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_antiAliasing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::QualitySettings::get_antiAliasing)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ee08c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_antiAliasing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_antiAliasing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::QualitySettings::set_antiAliasing)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee08e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_antiAliasing", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_billboardsFaceCameraPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::QualitySettings::get_billboardsFaceCameraPosition)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ee0924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_billboardsFaceCameraPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_INTERNAL_renderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (*)()>(&::UnityEngine::QualitySettings::get_INTERNAL_renderPipeline)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6ee094c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_INTERNAL_renderPipeline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_INTERNAL_renderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::QualitySettings::set_INTERNAL_renderPipeline)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee0a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_INTERNAL_renderPipeline", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_renderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> (*)()>(&::UnityEngine::QualitySettings::get_renderPipeline)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6ee0b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_renderPipeline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_renderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*)>(&::UnityEngine::QualitySettings::set_renderPipeline)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6ee0bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_renderPipeline", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_maxQueuedFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::QualitySettings::set_maxQueuedFrames)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee0c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_maxQueuedFrames", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_desiredColorSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorSpace (*)()>(&::UnityEngine::QualitySettings::get_desiredColorSpace)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6edcc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_desiredColorSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_activeColorSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorSpace (*)()>(&::UnityEngine::QualitySettings::get_activeColorSpace)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ee0c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_activeColorSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_INTERNAL_renderPipeline_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::QualitySettings::get_INTERNAL_renderPipeline_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6ee0a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_INTERNAL_renderPipeline_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_INTERNAL_renderPipeline_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::QualitySettings::set_INTERNAL_renderPipeline_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee0b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_INTERNAL_renderPipeline_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::QualitySettings::setStaticF_activeQualityLevelChanged(::System::Action_2<int32_t, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Action_2<int32_t, int32_t>*, "activeQualityLevelChanged", ::UnityEngine::QualitySettings*>(std::forward<::System::Action_2<int32_t, int32_t>*>(value));
}
inline ::System::Action_2<int32_t, int32_t>* UnityEngine::QualitySettings::getStaticF_activeQualityLevelChanged() {
  return ::cordl_internals::getStaticField<::System::Action_2<int32_t, int32_t>*, "activeQualityLevelChanged", ::UnityEngine::QualitySettings*>();
}
inline void UnityEngine::QualitySettings::OnActiveQualityLevelChanged(int32_t previousQualityLevel, int32_t currentQualityLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "OnActiveQualityLevelChanged", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, previousQualityLevel, currentQualityLevel);
}
inline ::UnityEngine::ShadowmaskMode UnityEngine::QualitySettings::get_shadowmaskMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_shadowmaskMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ShadowmaskMode>(nullptr, ___internal_method);
}
inline float_t UnityEngine::QualitySettings::get_lodBias() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_lodBias", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::QualitySettings::get_meshLodThreshold() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_meshLodThreshold", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::QualitySettings::get_maximumLODLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_maximumLODLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::QualitySettings::get_enableLODCrossFade() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_enableLODCrossFade", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_enableLODCrossFade(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_enableLODCrossFade", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::QualitySettings::set_vSyncCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_vSyncCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::QualitySettings::get_antiAliasing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_antiAliasing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_antiAliasing(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_antiAliasing", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::QualitySettings::get_billboardsFaceCameraPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_billboardsFaceCameraPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::QualitySettings::get_INTERNAL_renderPipeline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_INTERNAL_renderPipeline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_INTERNAL_renderPipeline(::UnityEngine::ScriptableObject* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_INTERNAL_renderPipeline", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> UnityEngine::QualitySettings::get_renderPipeline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_renderPipeline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_renderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_renderPipeline", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::QualitySettings::set_maxQueuedFrames(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_maxQueuedFrames", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::ColorSpace UnityEngine::QualitySettings::get_desiredColorSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_desiredColorSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorSpace>(nullptr, ___internal_method);
}
inline ::UnityEngine::ColorSpace UnityEngine::QualitySettings::get_activeColorSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_activeColorSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorSpace>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::QualitySettings::get_INTERNAL_renderPipeline_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "get_INTERNAL_renderPipeline_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_INTERNAL_renderPipeline_Injected(::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::QualitySettings*>(), { "set_INTERNAL_renderPipeline_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::QualitySettings::QualitySettings() {}
