#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/SpriteUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteUtilities)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class SpriteUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::SpriteUtilities);
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.SpriteUtilities
class CORDL_TYPE SpriteUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateCircleSprite, addr 0x457001c, size 0x1e8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Sprite> CreateCircleSprite(int32_t radius, ::UnityEngine::Color32 colour);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpriteUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpriteUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpriteUtilities(SpriteUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpriteUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpriteUtilities(SpriteUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7116 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::SpriteUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::SpriteUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::SpriteUtilities*, "UnityEngine.InputSystem.Utilities", "SpriteUtilities");
