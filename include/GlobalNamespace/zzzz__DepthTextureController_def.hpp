#pragma once
// IWYU pragma private; include "GlobalNamespace/DepthTextureController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DepthTextureController)
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class DepthTextureController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DepthTextureController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DepthTextureController
class CORDL_TYPE DepthTextureController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Init, addr 0x3b33c10, size 0xb8, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::SettingsManager* settingsManager);

  static inline ::GlobalNamespace::DepthTextureController* New_ctor();

  /// @brief Method .ctor, addr 0x3b33cc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthTextureController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthTextureController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthTextureController(DepthTextureController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthTextureController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthTextureController(DepthTextureController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5171 };

  /// @brief Field kDepthTextureEnabledKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kDepthTextureEnabledKeyword{ u"DEPTH_TEXTURE_ENABLED" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DepthTextureController, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DepthTextureController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DepthTextureController*, "", "DepthTextureController");
