#pragma once
// IWYU pragma private; include "HMUI/Interactable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Interactable)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace HMUI {
class Interactable;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::Interactable);
// Dependencies UnityEngine.EventSystems.UIBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.Interactable
class CORDL_TYPE Interactable : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  /// @brief Field _canvasGroupCache, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroupCache,
                      put = __cordl_internal_set__canvasGroupCache)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* _canvasGroupCache;

  /// @brief Field _groupsAllowInteraction, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__groupsAllowInteraction, put = __cordl_internal_set__groupsAllowInteraction)) bool _groupsAllowInteraction;

  /// @brief Field _interactable, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__interactable, put = __cordl_internal_set__interactable)) bool _interactable;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  /// @brief Field interactableChangeEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_interactableChangeEvent,
                      put = __cordl_internal_set_interactableChangeEvent)) ::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* interactableChangeEvent;

  static inline ::HMUI::Interactable* New_ctor();

  /// @brief Method OnCanvasGroupChanged, addr 0x56e4b20, size 0xb0, virtual true, abstract: false, final false
  inline void OnCanvasGroupChanged();

  /// @brief Method ParentGroupAllowsInteraction, addr 0x56e4bd0, size 0x1e0, virtual false, abstract: false, final false
  inline bool ParentGroupAllowsInteraction();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* const& __cordl_internal_get__canvasGroupCache() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& __cordl_internal_get__canvasGroupCache();

  constexpr bool const& __cordl_internal_get__groupsAllowInteraction() const;

  constexpr bool& __cordl_internal_get__groupsAllowInteraction();

  constexpr bool const& __cordl_internal_get__interactable() const;

  constexpr bool& __cordl_internal_get__interactable();

  constexpr ::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* const& __cordl_internal_get_interactableChangeEvent() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::Interactable>, bool>*& __cordl_internal_get_interactableChangeEvent();

  constexpr void __cordl_internal_set__canvasGroupCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* value);

  constexpr void __cordl_internal_set__groupsAllowInteraction(bool value);

  constexpr void __cordl_internal_set__interactable(bool value);

  constexpr void __cordl_internal_set_interactableChangeEvent(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* value);

  /// @brief Method .ctor, addr 0x56e4db0, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_interactableChangeEvent, addr 0x56e4920, size 0xc0, virtual false, abstract: false, final false
  inline void add_interactableChangeEvent(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* value);

  /// @brief Method get_interactable, addr 0x56e4aa0, size 0x20, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method remove_interactableChangeEvent, addr 0x56e49e0, size 0xc0, virtual false, abstract: false, final false
  inline void remove_interactableChangeEvent(::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* value);

  /// @brief Method set_interactable, addr 0x56e4ac0, size 0x60, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interactable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Interactable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interactable(Interactable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interactable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interactable(Interactable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23329 };

  /// @brief Field _interactable, offset: 0x20, size: 0x1, def value: None
  bool ____interactable;

  /// @brief Field interactableChangeEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::Interactable>, bool>* ___interactableChangeEvent;

  /// @brief Field _groupsAllowInteraction, offset: 0x30, size: 0x1, def value: None
  bool ____groupsAllowInteraction;

  /// @brief Field _canvasGroupCache, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* ____canvasGroupCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::Interactable, ____interactable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::Interactable, ___interactableChangeEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::Interactable, ____groupsAllowInteraction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::Interactable, ____canvasGroupCache) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::Interactable, 0x40>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::Interactable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Interactable*, "HMUI", "Interactable");
