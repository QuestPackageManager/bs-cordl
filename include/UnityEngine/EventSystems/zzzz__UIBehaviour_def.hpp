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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13112))
// CS Name: ::UnityEngine.EventSystems::UIBehaviour*
class CORDL_TYPE UIBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake, addr 0x2dbf930, size 0x4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnEnable, addr 0x2db0d0c, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x2db60c4, size 0x4, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method OnDisable, addr 0x2db0d14, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDestroy, addr 0x2db616c, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method IsActive, addr 0x2dbf934, size 0x8, virtual true, abstract: false, final false
  inline bool IsActive();

  /// @brief Method OnRectTransformDimensionsChange, addr 0x2dbf93c, size 0x4, virtual true, abstract: false, final false
  inline void OnRectTransformDimensionsChange();

  /// @brief Method OnBeforeTransformParentChanged, addr 0x2dbf940, size 0x4, virtual true, abstract: false, final false
  inline void OnBeforeTransformParentChanged();

  /// @brief Method OnTransformParentChanged, addr 0x2dbe80c, size 0x4, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x2dbf944, size 0x4, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnCanvasGroupChanged, addr 0x2dbf948, size 0x4, virtual true, abstract: false, final false
  inline void OnCanvasGroupChanged();

  /// @brief Method OnCanvasHierarchyChanged, addr 0x2dbe800, size 0x4, virtual true, abstract: false, final false
  inline void OnCanvasHierarchyChanged();

  /// @brief Method IsDestroyed, addr 0x2dbf94c, size 0x5c, virtual true, abstract: false, final true
  inline bool IsDestroyed();

  static inline ::UnityEngine::EventSystems::UIBehaviour* New_ctor();

  /// @brief Method .ctor, addr 0x2db2e30, size 0x8, virtual false, abstract: false, final false
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
