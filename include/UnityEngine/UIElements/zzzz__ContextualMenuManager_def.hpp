#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContextualMenuManager)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class DropdownMenu;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextualMenuManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextualMenuManager);
// Type: UnityEngine.UIElements::ContextualMenuManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6776))
// CS Name: ::UnityEngine.UIElements::ContextualMenuManager*
class CORDL_TYPE ContextualMenuManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field <displayMenuHandledOSX>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__displayMenuHandledOSX_k__BackingField, put = __set__displayMenuHandledOSX_k__BackingField)) bool _displayMenuHandledOSX_k__BackingField;

  constexpr bool& __get__displayMenuHandledOSX_k__BackingField();

  constexpr bool const& __get__displayMenuHandledOSX_k__BackingField() const;

  constexpr void __set__displayMenuHandledOSX_k__BackingField(bool value);

  /// @brief Method DisplayMenuIfEventMatches, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DisplayMenuIfEventMatches(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IEventHandler* eventHandler);

  /// @brief Method DoDisplayMenu, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DoDisplayMenu(::UnityEngine::UIElements::DropdownMenu* menu, ::UnityEngine::UIElements::EventBase* triggerEvent);

  // Ctor Parameters [CppParam { name: "", ty: "ContextualMenuManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextualMenuManager(ContextualMenuManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextualMenuManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextualMenuManager(ContextualMenuManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextualMenuManager();

public:
  /// @brief Field <displayMenuHandledOSX>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____displayMenuHandledOSX_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextualMenuManager, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuManager, ____displayMenuHandledOSX_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ContextualMenuManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextualMenuManager*, "UnityEngine.UIElements", "ContextualMenuManager");
