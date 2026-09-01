#pragma once
// IWYU pragma private; include "UnityEngine\ImageEffectAllowedInSceneView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ImageEffectAllowedInSceneView)
// Forward declare root types
namespace UnityEngine {
class ImageEffectAllowedInSceneView;
}
// Write type traits
MARK_REF_T(::UnityEngine::ImageEffectAllowedInSceneView*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ImageEffectAllowedInSceneView*, "UnityEngine", "ImageEffectAllowedInSceneView");
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ImageEffectAllowedInSceneView
class CORDL_TYPE ImageEffectAllowedInSceneView : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::ImageEffectAllowedInSceneView* New_ctor();

  /// @brief Method .ctor, addr 0x6a8c7ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageEffectAllowedInSceneView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ImageEffectAllowedInSceneView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageEffectAllowedInSceneView(ImageEffectAllowedInSceneView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageEffectAllowedInSceneView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageEffectAllowedInSceneView(ImageEffectAllowedInSceneView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10153 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ImageEffectAllowedInSceneView) == 0x10, "Size mismatch!");

} // namespace UnityEngine
