#pragma once
// IWYU pragma private; include "UnityEngine/CustomRenderTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
CORDL_MODULE_EXPORT(CustomRenderTexture)
// Forward declare root types
namespace UnityEngine {
class CustomRenderTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CustomRenderTexture);
// Dependencies UnityEngine.RenderTexture
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CustomRenderTexture
class CORDL_TYPE CustomRenderTexture : public ::UnityEngine::RenderTexture {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomRenderTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomRenderTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomRenderTexture(CustomRenderTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomRenderTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomRenderTexture(CustomRenderTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10799 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CustomRenderTexture, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CustomRenderTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CustomRenderTexture*, "UnityEngine", "CustomRenderTexture");
