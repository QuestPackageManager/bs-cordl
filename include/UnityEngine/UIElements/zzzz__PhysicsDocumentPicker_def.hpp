#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PhysicsDocumentPicker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsDocumentPicker)
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PhysicsDocumentPicker;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PhysicsDocumentPicker*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PhysicsDocumentPicker*, "UnityEngine.UIElements", "PhysicsDocumentPicker");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PhysicsDocumentPicker
class CORDL_TYPE PhysicsDocumentPicker : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCapturingDocument, addr 0x7242b0c, size 0x1c8, virtual false, abstract: false, final false
  inline bool GetCapturingDocument(int32_t pointerId, ::by_ref<::UnityEngine::UIElements::UIDocument*> capturingDocument);

  static inline ::UnityEngine::UIElements::PhysicsDocumentPicker* New_ctor();

  /// @brief Method Pick, addr 0x72421c0, size 0x70, virtual false, abstract: false, final false
  inline void Pick(::UnityEngine::Ray worldRay, float_t maxDistance, int32_t layerMask, ::by_ref<::UnityEngine::Collider*> collider, ::by_ref<::UnityEngine::UIElements::UIDocument*> document,
                   ::by_ref<::UnityEngine::UIElements::VisualElement*> pickedElement, ::by_ref<float_t> distance);

  /// @brief Method TryPickWithCapture, addr 0x724296c, size 0x1a0, virtual false, abstract: false, final false
  inline bool TryPickWithCapture(int32_t pointerId, ::UnityEngine::Ray worldRay, float_t maxDistance, int32_t layerMask, ::by_ref<::UnityEngine::Collider*> collider,
                                 ::by_ref<::UnityEngine::UIElements::UIDocument*> document, ::by_ref<::UnityEngine::UIElements::VisualElement*> elementUnderPointer, ::by_ref<float_t> distance,
                                 ::by_ref<bool> captured);

  /// @brief Method .ctor, addr 0x7242f44, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsDocumentPicker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsDocumentPicker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsDocumentPicker(PhysicsDocumentPicker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsDocumentPicker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsDocumentPicker(PhysicsDocumentPicker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4608 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::PhysicsDocumentPicker) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
