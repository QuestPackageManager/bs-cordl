#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IShaderVariantSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IShaderVariantSettings)
namespace UnityEngine::Rendering {
struct ShaderVariantLogLevel;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IShaderVariantSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IShaderVariantSettings);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IShaderVariantSettings
class CORDL_TYPE IShaderVariantSettings {
public:
  // Declarations
  __declspec(property(get = get_exportShaderVariants, put = set_exportShaderVariants)) bool exportShaderVariants;

  __declspec(property(get = get_shaderVariantLogLevel, put = set_shaderVariantLogLevel)) ::UnityEngine::Rendering::ShaderVariantLogLevel shaderVariantLogLevel;

  __declspec(property(get = get_stripDebugVariants, put = set_stripDebugVariants)) bool stripDebugVariants;

  /// @brief Method get_exportShaderVariants, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_exportShaderVariants();

  /// @brief Method get_shaderVariantLogLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderVariantLogLevel get_shaderVariantLogLevel();

  /// @brief Method get_stripDebugVariants, addr 0x65b8cc8, size 0x8, virtual true, abstract: false, final false
  inline bool get_stripDebugVariants();

  /// @brief Method set_exportShaderVariants, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_exportShaderVariants(bool value);

  /// @brief Method set_shaderVariantLogLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_shaderVariantLogLevel(::UnityEngine::Rendering::ShaderVariantLogLevel value);

  /// @brief Method set_stripDebugVariants, addr 0x65b8cd0, size 0x4, virtual true, abstract: false, final false
  inline void set_stripDebugVariants(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IShaderVariantSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IShaderVariantSettings(IShaderVariantSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12037 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IShaderVariantSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IShaderVariantSettings*, "UnityEngine.Rendering", "IShaderVariantSettings");
