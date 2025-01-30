#pragma once
// IWYU pragma private; include "UnityEngine/LowerResBlitTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LowerResBlitTexture)
// Forward declare root types
namespace UnityEngine {
class LowerResBlitTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LowerResBlitTexture);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LowerResBlitTexture
class CORDL_TYPE LowerResBlitTexture : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method LowerResBlitTextureDontStripMe, addr 0x48b4208, size 0x4, virtual false, abstract: false, final false
  inline void LowerResBlitTextureDontStripMe();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LowerResBlitTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LowerResBlitTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LowerResBlitTexture(LowerResBlitTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LowerResBlitTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LowerResBlitTexture(LowerResBlitTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10935 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LowerResBlitTexture, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LowerResBlitTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowerResBlitTexture*, "UnityEngine", "LowerResBlitTexture");
