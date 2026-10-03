#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/UIBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UIBehaviour)
// Forward declare root types
namespace UnityEngine::EventSystems {
class UIBehaviour;
}
// Write type traits
MARK_REF_T(::UnityEngine::EventSystems::UIBehaviour*);
DEFINE_IL2CPP_CLASS(::UnityEngine::EventSystems::UIBehaviour*, "UnityEngine.EventSystems", "UIBehaviour");
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.UIBehaviour
class CORDL_TYPE UIBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake, addr 0x72bf900, size 0x4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method IsActive, addr 0x72bf908, size 0x8, virtual true, abstract: false, final false
  inline bool IsActive();

  /// @brief Method IsDestroyed, addr 0x72bf920, size 0x60, virtual true, abstract: false, final true
  inline bool IsDestroyed();

  static inline ::UnityEngine::EventSystems::UIBehaviour* New_ctor();

  /// @brief Method OnBeforeTransformParentChanged, addr 0x72bf914, size 0x4, virtual true, abstract: false, final false
  inline void OnBeforeTransformParentChanged();

  /// @brief Method OnCanvasGroupChanged, addr 0x72bf91c, size 0x4, virtual true, abstract: false, final false
  inline void OnCanvasGroupChanged();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x72be7f0, size 0x4, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method OnDestroy, addr 0x72bf904, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x72bf918, size 0x4, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x72adbac, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x72adba4, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x72bf910, size 0x4, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnTransformParentChanged, addr 0x72be7fc, size 0x4, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method Start, addr 0x72b56d0, size 0x4, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method .ctor, addr 0x72b0534, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIBehaviour", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIBehaviour(UIBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIBehaviour", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIBehaviour(UIBehaviour const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18094 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::EventSystems::UIBehaviour) == 0x20, "Size mismatch!");

} // namespace UnityEngine::EventSystems
