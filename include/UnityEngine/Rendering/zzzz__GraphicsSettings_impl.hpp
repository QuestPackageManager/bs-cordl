#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsSettings.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsSettings_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__BuiltinShaderDefine_def.hpp"
#include "UnityEngine/Rendering/zzzz__DefaultMaterialType_def.hpp"
#include "UnityEngine/Rendering/zzzz__DefaultShaderType_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsTier_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineAsset_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGlobalSettings_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.Internal_GetSettingsForRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)(::StringW)>(&::UnityEngine::Rendering::GraphicsSettings::Internal_GetSettingsForRenderPipeline)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x6f654e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "Internal_GetSettingsForRenderPipeline", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.Internal_GetCurrentRenderPipelineGlobalSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> (*)()>(
    &::UnityEngine::Rendering::GraphicsSettings::Internal_GetCurrentRenderPipelineGlobalSettings)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6f657c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "Internal_GetCurrentRenderPipelineGlobalSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.ValidateSetRenderPipelineAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*)>(&::UnityEngine::Rendering::GraphicsSettings::ValidateSetRenderPipelineAsset)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x6f65980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                             { "ValidateSetRenderPipelineAsset", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.TryGetCurrentRenderPipelineGlobalSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>)>(
    &::UnityEngine::Rendering::GraphicsSettings::TryGetCurrentRenderPipelineGlobalSettings)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6f65c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                { "TryGetCurrentRenderPipelineGlobalSettings", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.get_lightsUseLinearIntensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::GraphicsSettings::get_lightsUseLinearIntensity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f65dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_lightsUseLinearIntensity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.set_lightsUseLinearIntensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::GraphicsSettings::set_lightsUseLinearIntensity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f65e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "set_lightsUseLinearIntensity", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.set_lightsUseColorTemperature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::GraphicsSettings::set_lightsUseColorTemperature)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f65e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "set_lightsUseColorTemperature", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.set_useScriptableRenderPipelineBatching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::GraphicsSettings::set_useScriptableRenderPipelineBatching)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f65e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "set_useScriptableRenderPipelineBatching", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.HasShaderDefine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::GraphicsTier, ::UnityEngine::Rendering::BuiltinShaderDefine)>(
    &::UnityEngine::Rendering::GraphicsSettings::HasShaderDefine)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f65eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                         { "HasShaderDefine", {}, { ::i2c::type_of<::UnityEngine::Rendering::GraphicsTier>(), ::i2c::type_of<::UnityEngine::Rendering::BuiltinShaderDefine>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.HasShaderDefine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::BuiltinShaderDefine)>(&::UnityEngine::Rendering::GraphicsSettings::HasShaderDefine)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6f65ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                                                           { "HasShaderDefine", {}, { ::i2c::type_of<::UnityEngine::Rendering::BuiltinShaderDefine>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.get_INTERNAL_currentRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (*)()>(&::UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_currentRenderPipeline)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6f65fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_INTERNAL_currentRenderPipeline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.get_currentRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> (*)()>(&::UnityEngine::Rendering::GraphicsSettings::get_currentRenderPipeline)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6f658dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_currentRenderPipeline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.get_isScriptableRenderPipelineEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::GraphicsSettings::get_isScriptableRenderPipelineEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6f66128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_isScriptableRenderPipelineEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.get_currentRenderPipelineAssetType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)()>(&::UnityEngine::Rendering::GraphicsSettings::get_currentRenderPipelineAssetType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6f661b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_currentRenderPipelineAssetType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.get_INTERNAL_defaultRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (*)()>(&::UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_defaultRenderPipeline)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6f66244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_INTERNAL_defaultRenderPipeline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.set_INTERNAL_defaultRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::Rendering::GraphicsSettings::set_INTERNAL_defaultRenderPipeline)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6f663a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                                                           { "set_INTERNAL_defaultRenderPipeline", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.get_defaultRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> (*)()>(&::UnityEngine::Rendering::GraphicsSettings::get_defaultRenderPipeline)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6f6648c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_defaultRenderPipeline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.set_defaultRenderPipeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*)>(&::UnityEngine::Rendering::GraphicsSettings::set_defaultRenderPipeline)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6f66530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                                                           { "set_defaultRenderPipeline", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.GetDefaultShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (*)(::UnityEngine::Rendering::DefaultShaderType)>(
    &::UnityEngine::Rendering::GraphicsSettings::GetDefaultShader)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x6f66590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                                                           { "GetDefaultShader", {}, { ::i2c::type_of<::UnityEngine::Rendering::DefaultShaderType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.GetDefaultMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Rendering::DefaultMaterialType)>(
    &::UnityEngine::Rendering::GraphicsSettings::GetDefaultMaterial)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x6f667f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                                                           { "GetDefaultMaterial", {}, { ::i2c::type_of<::UnityEngine::Rendering::DefaultMaterialType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.Internal_GetSettingsForRenderPipeline_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Rendering::GraphicsSettings::Internal_GetSettingsForRenderPipeline_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f65788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                             { "Internal_GetSettingsForRenderPipeline_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.get_INTERNAL_currentRenderPipeline_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_currentRenderPipeline_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f66100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_INTERNAL_currentRenderPipeline_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.get_INTERNAL_defaultRenderPipeline_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_defaultRenderPipeline_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f66380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_INTERNAL_defaultRenderPipeline_Injected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsSettings.set_INTERNAL_defaultRenderPipeline_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Rendering::GraphicsSettings::set_INTERNAL_defaultRenderPipeline_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f66450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                                                           { "set_INTERNAL_defaultRenderPipeline_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::GraphicsSettings::setStaticF_s_CurrentRenderPipelineGlobalSettings(::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* value) {
  ::cordl_internals::setStaticField<::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>*, "s_CurrentRenderPipelineGlobalSettings",
                                    ::UnityEngine::Rendering::GraphicsSettings*>(std::forward<::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>*>(value));
}
inline ::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* UnityEngine::Rendering::GraphicsSettings::getStaticF_s_CurrentRenderPipelineGlobalSettings() {
  return ::cordl_internals::getStaticField<::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>*, "s_CurrentRenderPipelineGlobalSettings",
                                           ::UnityEngine::Rendering::GraphicsSettings*>();
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Rendering::GraphicsSettings::Internal_GetSettingsForRenderPipeline(::StringW renderpipelineName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "Internal_GetSettingsForRenderPipeline", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, renderpipelineName);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::RenderPipeline*>)
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> UnityEngine::Rendering::GraphicsSettings::GetSettingsForRenderPipeline() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "GetSettingsForRenderPipeline", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> UnityEngine::Rendering::GraphicsSettings::Internal_GetCurrentRenderPipelineGlobalSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "Internal_GetCurrentRenderPipelineGlobalSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GraphicsSettings::ValidateSetRenderPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset* newRenderPipelineAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                           { "ValidateSetRenderPipelineAsset", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newRenderPipelineAsset);
}
inline bool UnityEngine::Rendering::GraphicsSettings::TryGetCurrentRenderPipelineGlobalSettings(::by_ref<::UnityEngine::Rendering::RenderPipelineGlobalSettings*> asset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                              { "TryGetCurrentRenderPipelineGlobalSettings", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderPipelineGlobalSettings*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, asset);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*> && ::cordl_internals::reference_type_constraint<T>)
inline T UnityEngine::Rendering::GraphicsSettings::GetRenderPipelineSettings() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "GetRenderPipelineSettings", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*> && ::cordl_internals::reference_type_constraint<T>)
inline bool UnityEngine::Rendering::GraphicsSettings::TryGetRenderPipelineSettings(::by_ref<T> settings) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                                                              { "TryGetRenderPipelineSettings", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, settings);
}
inline bool UnityEngine::Rendering::GraphicsSettings::get_lightsUseLinearIntensity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_lightsUseLinearIntensity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GraphicsSettings::set_lightsUseLinearIntensity(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "set_lightsUseLinearIntensity", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::GraphicsSettings::set_lightsUseColorTemperature(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "set_lightsUseColorTemperature", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Rendering::GraphicsSettings::set_useScriptableRenderPipelineBatching(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "set_useScriptableRenderPipelineBatching", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Rendering::GraphicsSettings::HasShaderDefine(::UnityEngine::Rendering::GraphicsTier tier, ::UnityEngine::Rendering::BuiltinShaderDefine defineHash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                       { "HasShaderDefine", {}, { ::i2c::type_of<::UnityEngine::Rendering::GraphicsTier>(), ::i2c::type_of<::UnityEngine::Rendering::BuiltinShaderDefine>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tier, defineHash);
}
inline bool UnityEngine::Rendering::GraphicsSettings::HasShaderDefine(::UnityEngine::Rendering::BuiltinShaderDefine defineHash) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                                                         { "HasShaderDefine", {}, { ::i2c::type_of<::UnityEngine::Rendering::BuiltinShaderDefine>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, defineHash);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_currentRenderPipeline() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_INTERNAL_currentRenderPipeline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> UnityEngine::Rendering::GraphicsSettings::get_currentRenderPipeline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_currentRenderPipeline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::GraphicsSettings::get_isScriptableRenderPipelineEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_isScriptableRenderPipelineEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Type* UnityEngine::Rendering::GraphicsSettings::get_currentRenderPipelineAssetType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_currentRenderPipelineAssetType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_defaultRenderPipeline() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_INTERNAL_defaultRenderPipeline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GraphicsSettings::set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                                                         { "set_INTERNAL_defaultRenderPipeline", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> UnityEngine::Rendering::GraphicsSettings::get_defaultRenderPipeline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_defaultRenderPipeline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GraphicsSettings::set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                                                         { "set_defaultRenderPipeline", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderPipelineAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::Rendering::GraphicsSettings::GetDefaultShader(::UnityEngine::Rendering::DefaultShaderType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "GetDefaultShader", {}, { ::i2c::type_of<::UnityEngine::Rendering::DefaultShaderType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(nullptr, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::GraphicsSettings::GetDefaultMaterial(::UnityEngine::Rendering::DefaultMaterialType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                                                         { "GetDefaultMaterial", {}, { ::i2c::type_of<::UnityEngine::Rendering::DefaultMaterialType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, type);
}
inline ::System::IntPtr UnityEngine::Rendering::GraphicsSettings::Internal_GetSettingsForRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> renderpipelineName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(),
                                                           { "Internal_GetSettingsForRenderPipeline_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, renderpipelineName);
}
inline ::System::IntPtr UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_currentRenderPipeline_Injected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_INTERNAL_currentRenderPipeline_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_defaultRenderPipeline_Injected() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "get_INTERNAL_defaultRenderPipeline_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::GraphicsSettings::set_INTERNAL_defaultRenderPipeline_Injected(::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GraphicsSettings*>(), { "set_INTERNAL_defaultRenderPipeline_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GraphicsSettings::GraphicsSettings() {}
