#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(UIBehaviour)
// Forward declare root types
namespace UnityEngine::EventSystems {
class UIBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::UIBehaviour);
// Type: UnityEngine.EventSystems::UIBehaviour
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13214))
// CS Name: ::UnityEngine.EventSystems::UIBehaviour*
class CORDL_TYPE UIBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake, addr 0x2da1548, size 0x4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnEnable, addr 0x2d92924, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x2d97cdc, size 0x4, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method OnDisable, addr 0x2d9292c, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x2d97d84, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method IsActive, addr 0x2da154c, size 0x8, virtual true, abstract: false, final false
  inline bool IsActive();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x2da1554, size 0x4, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnBeforeTransformParentChanged, addr 0x2da1558, size 0x4, virtual true, abstract: false, final false
  inline void OnBeforeTransformParentChanged();

  /// @brief Method OnTransformParentChanged, addr 0x2da0424, size 0x4, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x2da155c, size 0x4, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnCanvasGroupChanged, addr 0x2da1560, size 0x4, virtual true, abstract: false, final false
  inline void OnCanvasGroupChanged();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x2da0418, size 0x4, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method IsDestroyed, addr 0x2da1564, size 0x5c, virtual true, abstract: false, final true
  inline bool IsDestroyed();

  static inline ::UnityEngine::EventSystems::UIBehaviour* New_ctor();

  /// @brief Method .ctor, addr 0x2d94a48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UIBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIBehaviour(UIBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIBehaviour(UIBehaviour const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIBehaviour();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::UIBehaviour, 0x18>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::UIBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::UIBehaviour*, "UnityEngine.EventSystems", "UIBehaviour");
