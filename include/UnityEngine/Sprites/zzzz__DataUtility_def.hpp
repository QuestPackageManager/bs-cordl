#pragma once
// IWYU pragma private; include "UnityEngine/Sprites/DataUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataUtility)
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Sprites {
class DataUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Sprites::DataUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Sprites::DataUtility*, "UnityEngine.Sprites", "DataUtility");
// Dependencies System.Object
namespace UnityEngine::Sprites {
// Is value type: false
// CS Name: UnityEngine.Sprites.DataUtility
class CORDL_TYPE DataUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetInnerUV, addr 0x6b2e734, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetInnerUV(::UnityEngine::Sprite* sprite);

  /// @brief Method GetMinSize, addr 0x6b2e770, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetMinSize(::UnityEngine::Sprite* sprite);

  /// @brief Method GetOuterUV, addr 0x6b2e748, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetOuterUV(::UnityEngine::Sprite* sprite);

  /// @brief Method GetPadding, addr 0x6b2e75c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetPadding(::UnityEngine::Sprite* sprite);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataUtility(DataUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataUtility(DataUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10903 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Sprites::DataUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Sprites
