#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GraphicsSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Rendering::GraphicsSettings);
MARK_REF_PTR_T(::UnityEngine::Rendering::GraphicsSettings___c);
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

  /// @brief Method <.cctor>b__93_0, addr 0x6940030, size 0x50, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> __cctor_b__93_0();

  /// @brief Method .ctor, addr 0x694002c, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10738 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GraphicsSettings___c, 0x10>, "Size mismatch!");

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

  /// @brief Method GetDefaultMaterial, addr 0x693fc64, size 0x24c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultMaterial(::UnityEngine::Rendering::DefaultMaterialType type);

  /// @brief Method GetDefaultShader, addr 0x693f9fc, size 0x268, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> GetDefaultShader(::UnityEngine::Rendering::DefaultShaderType type);

  /// @brief Method GetRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetRenderPipelineSettings();

  /// @brief Method GetSettingsForRenderPipeline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> GetSettingsForRenderPipeline();

  /// @brief Method HasShaderDefine, addr 0x693f36c, size 0xcc, virtual false, abstract: false, final false
  static inline bool HasShaderDefine(::UnityEngine::Rendering::BuiltinShaderDefine defineHash);

  /// @brief Method HasShaderDefine, addr 0x693f328, size 0x44, virtual false, abstract: false, final false
  static inline bool HasShaderDefine(::UnityEngine::Rendering::GraphicsTier tier, ::UnityEngine::Rendering::BuiltinShaderDefine defineHash);

  /// @brief Method Internal_GetCurrentRenderPipelineGlobalSettings, addr 0x693efac, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> Internal_GetCurrentRenderPipelineGlobalSettings();

  /// @brief Method Internal_GetSettingsForRenderPipeline, addr 0x693ecd0, size 0x2a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> Internal_GetSettingsForRenderPipeline(::StringW renderpipelineName);

  /// @brief Method Internal_GetSettingsForRenderPipeline_Injected, addr 0x693ef70, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_GetSettingsForRenderPipeline_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> renderpipelineName);

  /// @brief Method TryGetCurrentRenderPipelineGlobalSettings, addr 0x693f168, size 0xe4, virtual false, abstract: false, final false
  static inline bool TryGetCurrentRenderPipelineGlobalSettings(::ByRef<::UnityEngine::Rendering::RenderPipelineGlobalSettings*> asset);

  /// @brief Method TryGetRenderPipelineSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryGetRenderPipelineSettings(::ByRef<T> settings);

  static inline ::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* getStaticF_s_CurrentRenderPipelineGlobalSettings();

  /// @brief Method get_INTERNAL_currentRenderPipeline, addr 0x693f438, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_currentRenderPipeline();

  /// @brief Method get_INTERNAL_currentRenderPipeline_Injected, addr 0x693f574, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_INTERNAL_currentRenderPipeline_Injected();

  /// @brief Method get_INTERNAL_defaultRenderPipeline, addr 0x693f6b8, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ScriptableObject> get_INTERNAL_defaultRenderPipeline();

  /// @brief Method get_INTERNAL_defaultRenderPipeline_Injected, addr 0x693f7f4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_INTERNAL_defaultRenderPipeline_Injected();

  /// @brief Method get_currentRenderPipeline, addr 0x693f0c4, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_currentRenderPipeline();

  /// @brief Method get_currentRenderPipelineAssetType, addr 0x693f62c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Type* get_currentRenderPipelineAssetType();

  /// @brief Method get_defaultRenderPipeline, addr 0x693f900, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> get_defaultRenderPipeline();

  /// @brief Method get_isScriptableRenderPipelineEnabled, addr 0x693f59c, size 0x90, virtual false, abstract: false, final false
  static inline bool get_isScriptableRenderPipelineEnabled();

  /// @brief Method get_lightsUseLinearIntensity, addr 0x693f24c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_lightsUseLinearIntensity();

  static inline void setStaticF_s_CurrentRenderPipelineGlobalSettings(::System::Lazy_1<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>* value);

  /// @brief Method set_INTERNAL_defaultRenderPipeline, addr 0x693f81c, size 0xa8, virtual false, abstract: false, final false
  static inline void set_INTERNAL_defaultRenderPipeline(::UnityEngine::ScriptableObject* value);

  /// @brief Method set_INTERNAL_defaultRenderPipeline_Injected, addr 0x693f8c4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_INTERNAL_defaultRenderPipeline_Injected(::System::IntPtr value);

  /// @brief Method set_defaultRenderPipeline, addr 0x693f9a4, size 0x58, virtual false, abstract: false, final false
  static inline void set_defaultRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* value);

  /// @brief Method set_lightsUseColorTemperature, addr 0x693f2b0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lightsUseColorTemperature(bool value);

  /// @brief Method set_lightsUseLinearIntensity, addr 0x693f274, size 0x3c, virtual false, abstract: false, final false
  static inline void set_lightsUseLinearIntensity(bool value);

  /// @brief Method set_useScriptableRenderPipelineBatching, addr 0x693f2ec, size 0x3c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10739 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GraphicsSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::GraphicsSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsSettings*, "UnityEngine.Rendering", "GraphicsSettings");
NEED_NO_BOX(::UnityEngine::Rendering::GraphicsSettings___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsSettings___c*, "UnityEngine.Rendering", "GraphicsSettings/<>c");
