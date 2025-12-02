#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TileSizeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TileSizeExtensions)
namespace UnityEngine::Rendering::Universal {
struct TileSize;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class TileSizeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::TileSizeExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TileSizeExtensions
class CORDL_TYPE TileSizeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x66a22f8, size 0x20, virtual false, abstract: false, final false
  static inline bool IsValid(::UnityEngine::Rendering::Universal::TileSize tileSize);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TileSizeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TileSizeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TileSizeExtensions(TileSizeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TileSizeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TileSizeExtensions(TileSizeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12949 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TileSizeExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TileSizeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TileSizeExtensions*, "UnityEngine.Rendering.Universal", "TileSizeExtensions");
