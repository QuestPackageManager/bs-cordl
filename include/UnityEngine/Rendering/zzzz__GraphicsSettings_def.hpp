#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GraphicsSettings)
namespace System {
struct IntPtr;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct BuiltinShaderDefine;
}
namespace UnityEngine::Rendering {
struct DefaultMaterialType;
}
namespace UnityEngine::Rendering {
struct DefaultShaderType;
}
namespace UnityEngine::Rendering {
class GraphicsSettings___c;
}
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine::Rendering {
class RenderPipelineGlobalSettings;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GraphicsSettings;
}
namespace UnityEngine::Rendering {
class GraphicsSettings___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GraphicsSettings*);
MARK_REF_T(::UnityEngine::Rendering::GraphicsSettings___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GraphicsSettings*, "UnityEngine.Rendering", "GraphicsSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GraphicsSettings___c*, "UnityEngine.Rendering", "GraphicsSettings/<>c");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GraphicsSettings/<>c
class CORDL_TYPE GraphicsSettings___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::GraphicsSettings___c* __9;

  static inline ::UnityEngine::Rendering::GraphicsSettings___c* New_ctor();

  /// @brief Method <.cctor>b__93_0, addr 0x6b07e70, size 0x50, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> __cctor_b__93_0();

  /// @brief Method .ctor, addr 0x6b07e6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::GraphicsSettings___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::GraphicsSettings___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsSettings___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicsSettings___c(GraphicsSettings___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicsSettings___c(GraphicsSettings___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10734 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GraphicsSettings___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GraphicsSettings
class CORDL_TYPE GraphicsSettings : public ::UnityEngine::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::GraphicsSettings___c;

  /// @brief Field s_CurrentRenderPipelineGlobalSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentRenderPipelineGlobalSettings,
                      put =
                          setStaticF_s_CurrentRenderPipelineGlobalSettings)) ::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* s_CurrentRenderPipelineGlobalSettings;

  /// @brief Method GetDefaultMaterial, addr 0x6b07aa4, size 0x24c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultMaterial(::UnityEngine::Rendering::DefaultMaterialType type);

  /// @brief Method GetDefaultShader, addr 0x6b0783c, size 0x268, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> GetDefaultShader(::UnityEngine::Rendering::DefaultShaderType type);

  /// @brief Method GetRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetRenderPipelineSettings();

  /// @brief Method GetSettingsForRenderPipeline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> GetSettingsForRenderPipeline();

  /// @brief Method HasShaderDefine, addr 0x6b071ac, size 0xcc, virtual false, abstract: false, final false
  static inline bool HasShaderDefine(::UnityEngine::Rendering::BuiltinShaderDefine defineHash);

  /// @brief Method HasShaderDefine, addr 0x6b07168, size 0x44, virtual false, abstract: false, final false
  static inline bool HasShaderDefine(::UnityEngine::Rendering::GraphicsTier tier, ::UnityEngine::Rendering::BuiltinShaderDefine defineHash);

  /// @brief Method Internal_GetCurrentRenderPipelineGlobalSettings, addr 0x6b06dec, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> Internal_GetCurrentRenderPipelineGlobalSettings();

  /// @brief Method Internal_GetSettingsForRenderPipeline, addr 0x6b06b10, size 0x2a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_GetSettingsForRenderPipeline(::StringW renderpipelineName);

  /// @brief Method Internal_GetSettingsForRenderPipeline_Injected, addr 0x6b06db0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_GetSettingsForRenderPipeline_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> renderpipelineName);

  /// @brief Method TryGetCurrentRenderPipelineGlobalSettings, addr 0x6b06fa8, size 0xe4, virtual false, abstract: false, final false
  static inline bool TryGetCurrentRenderPipelineGlobalSettings(::by_ref<::UnityEngine::Rendering::RenderPipelineGlobalSettings*> asset);

  /// @brief Method TryGetRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryGetRenderPipelineSettings(::by_ref<T> settings);

  static inline ::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* getStaticF_s_CurrentRenderPipelineGlobalSettings();

  /// @brief Method get_INTERNAL_currentRenderPipeline, addr 0x6b07278, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_currentRenderPipeline();

  /// @brief Method get_INTERNAL_currentRenderPipeline_Injected, addr 0x6b073b4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_INTERNAL_currentRenderPipeline_Injected();

  /// @brief Method get_INTERNAL_defaultRenderPipeline, addr 0x6b074f8, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_defaultRenderPipeline();

  /// @brief Method get_INTERNAL_defaultRenderPipeline_Injected, addr 0x6b07634, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_INTERNAL_defaultRenderPipeline_Injected();

  /// @brief Method get_currentRenderPipeline, addr 0x6b06f04, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_currentRenderPipeline();

  /// @brief Method get_currentRenderPipelineAssetType, addr 0x6b0746c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Type* get_currentRenderPipelineAssetType();

  /// @brief Method get_defaultRenderPipeline, addr 0x6b07740, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_defaultRenderPipeline();

  /// @brief Method get_isScriptableRenderPipelineEnabled, addr 0x6b073dc, size 0x90, virtual false, abstract: false, final false
  static inline bool get_isScriptableRenderPipelineEnabled();

  /// @brief Method get_lightsUseLinearIntensity, addr 0x6b0708c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_lightsUseLinearIntensity();

  static inline void setStaticF_s_CurrentRenderPipelineGlobalSettings(::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* value);

  /// @brief Method set_INTERNAL_defaultRenderPipeline, addr 0x6b0765c, size 0xa8, virtual false, abstract: false, final false
  static inline void set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject* value);

  /// @brief Method set_INTERNAL_defaultRenderPipeline_Injected, addr 0x6b07704, size 0x3c, virtual false, abstract: false, final false
  static inline void set_INTERNAL_defaultRenderPipeline_Injected(::System::IntPtr value);

  /// @brief Method set_defaultRenderPipeline, addr 0x6b077e4, size 0x58, virtual false, abstract: false, final false
  static inline void set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* value);

  /// @brief Method set_lightsUseColorTemperature, addr 0x6b070f0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lightsUseColorTemperature(bool value);

  /// @brief Method set_lightsUseLinearIntensity, addr 0x6b070b4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lightsUseLinearIntensity(bool value);

  /// @brief Method set_useScriptableRenderPipelineBatching, addr 0x6b0712c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_useScriptableRenderPipelineBatching(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicsSettings(GraphicsSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicsSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicsSettings(GraphicsSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10735 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GraphicsSettings) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
