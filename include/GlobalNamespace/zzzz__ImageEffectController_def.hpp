#pragma once
// IWYU pragma private; include "GlobalNamespace/ImageEffectController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ImageEffectController)
// Forward declare root types
namespace GlobalNamespace {
class ImageEffectController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ImageEffectController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ImageEffectController*, "", "ImageEffectController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ImageEffectController
class CORDL_TYPE ImageEffectController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::GlobalNamespace::ImageEffectController* New_ctor();

  /// @brief Method .ctor, addr 0x586c2a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageEffectController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageEffectController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageEffectController(ImageEffectController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageEffectController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageEffectController(ImageEffectController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19466 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ImageEffectController) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
