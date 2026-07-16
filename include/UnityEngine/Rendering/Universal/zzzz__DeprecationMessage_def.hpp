#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DeprecationMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DeprecationMessage)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DeprecationMessage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DeprecationMessage);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::DeprecationMessage, "UnityEngine.Rendering.Universal", "DeprecationMessage");
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DeprecationMessage
#pragma pack(push, 0)
struct CORDL_TYPE DeprecationMessage {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeprecationMessage();

  /// @brief Field CompatibilityScriptingAPIConsoleWarning offset 0xffffffff size 0x8
  static constexpr ::ConstString CompatibilityScriptingAPIConsoleWarning{
    u"The project currently uses the compatibility mode where the Render Graph API is disabled. Support for this mode will be removed in future Unity versions. Migrate existing "
    u"ScriptableRenderPasses to the new RenderGraph API. After the migration, disable the compatibility mode in Edit > Projects Settings > Graphics > Render Graph."
  };

  /// @brief Field CompatibilityScriptingAPIObsolete offset 0xffffffff size 0x8
  static constexpr ::ConstString CompatibilityScriptingAPIObsolete{ u"This rendering path is for compatibility mode only (when Render Graph is disabled). Use Render Graph API instead." };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12570 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::DeprecationMessage) == 0x1, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
