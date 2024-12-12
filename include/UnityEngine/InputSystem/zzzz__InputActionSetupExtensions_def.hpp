#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionSetupExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionSetupExtensions)
namespace System {
struct Guid;
}
namespace UnityEngine::InputSystem {
struct DeviceRequirement_InputControlScheme_Flags;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
struct InputActionSetupExtensions_BindingSyntax;
}
namespace UnityEngine::InputSystem {
struct InputActionSetupExtensions_CompositeSyntax;
}
namespace UnityEngine::InputSystem {
struct InputActionSetupExtensions_ControlSchemeSyntax;
}
namespace UnityEngine::InputSystem {
class InputActionSetupExtensions___c__DisplayClass5_0;
}
namespace UnityEngine::InputSystem {
struct InputActionType;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionSetupExtensions;
}
namespace UnityEngine::InputSystem {
class InputActionSetupExtensions___c__DisplayClass5_0;
}
namespace UnityEngine::InputSystem {
struct InputActionSetupExtensions_BindingSyntax;
}
namespace UnityEngine::InputSystem {
struct InputActionSetupExtensions_CompositeSyntax;
}
namespace UnityEngine::InputSystem {
struct InputActionSetupExtensions_ControlSchemeSyntax;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionSetupExtensions);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct CORDL_TYPE InputActionSetupExtensions_BindingSyntax {
public:
  // Declarations
  __declspec(property(get = get_binding)) ::UnityEngine::InputSystem::InputBinding binding;

  __declspec(property(get = get_bindingIndex)) int32_t bindingIndex;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Method Erase, addr 0x455199c, size 0x198, virtual false, abstract: false, final false
  inline void Erase();

  /// @brief Method InsertPartBinding, addr 0x4551b34, size 0x15c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax InsertPartBinding(::StringW partName, ::StringW path);

  /// @brief Method Iterate, addr 0x45514e8, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax Iterate(bool next);

  /// @brief Method IterateCompositeBinding, addr 0x4551864, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax IterateCompositeBinding(bool next, ::StringW compositeName);

  /// @brief Method IteratePartBinding, addr 0x4551678, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax IteratePartBinding(bool next, ::StringW partName);

  /// @brief Method NextBinding, addr 0x45514b4, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax NextBinding();

  /// @brief Method NextCompositeBinding, addr 0x455182c, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax NextCompositeBinding(::StringW compositeName);

  /// @brief Method NextPartBinding, addr 0x45515d4, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax NextPartBinding(::StringW partName);

  /// @brief Method PreviousBinding, addr 0x45515a0, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax PreviousBinding();

  /// @brief Method PreviousCompositeBinding, addr 0x4551958, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax PreviousCompositeBinding(::StringW compositeName);

  /// @brief Method PreviousPartBinding, addr 0x4551788, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax PreviousPartBinding(::StringW partName);

  /// @brief Method To, addr 0x4551384, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax To(::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method Triggering, addr 0x4551214, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax Triggering(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method WithGroup, addr 0x455089c, size 0x19c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithGroup(::StringW group);

  /// @brief Method WithGroups, addr 0x4550a38, size 0x18c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithGroups(::StringW groups);

  /// @brief Method WithInteraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInteraction> inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithInteraction();

  /// @brief Method WithInteraction, addr 0x4550bc4, size 0x19c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithInteraction(::StringW interaction);

  /// @brief Method WithInteractions, addr 0x4550d60, size 0x18c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithInteractions(::StringW interactions);

  /// @brief Method WithName, addr 0x4550724, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithName(::StringW name);

  /// @brief Method WithPath, addr 0x45507e0, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithPath(::StringW path);

  /// @brief Method WithProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TProcessor> inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithProcessor();

  /// @brief Method WithProcessor, addr 0x4550eec, size 0x19c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithProcessor(::StringW processor);

  /// @brief Method WithProcessors, addr 0x4551088, size 0x18c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax WithProcessors(::StringW processors);

  /// @brief Method .ctor, addr 0x454ea1c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionMap* map, int32_t bindingIndexInMap, ::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method get_binding, addr 0x455067c, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputBinding get_binding();

  /// @brief Method get_bindingIndex, addr 0x4550644, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_bindingIndex();

  /// @brief Method get_valid, addr 0x45505d8, size 0x6c, virtual false, abstract: false, final false
  inline bool get_valid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionSetupExtensions_BindingSyntax();

  // Ctor Parameters [CppParam { name: "m_ActionMap", ty: "::UnityEngine::InputSystem::InputActionMap*", modifiers: "", def_value: None }, CppParam { name: "m_Action", ty:
  // "::UnityEngine::InputSystem::InputAction*", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndexInMap", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputActionSetupExtensions_BindingSyntax(::UnityEngine::InputSystem::InputActionMap* m_ActionMap, ::UnityEngine::InputSystem::InputAction* m_Action, int32_t m_BindingIndexInMap) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6567 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_ActionMap, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* m_ActionMap;

  /// @brief Field m_Action, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* m_Action;

  /// @brief Field m_BindingIndexInMap, offset: 0x10, size: 0x4, def value: None
  int32_t m_BindingIndexInMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax, m_ActionMap) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax, m_Action) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax, m_BindingIndexInMap) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions/CompositeSyntax
struct CORDL_TYPE InputActionSetupExtensions_CompositeSyntax {
public:
  // Declarations
  __declspec(property(get = get_bindingIndex)) int32_t bindingIndex;

  /// @brief Method With, addr 0x4551cdc, size 0x248, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax With(::StringW name, ::StringW binding, ::StringW groups, ::StringW processors);

  /// @brief Method .ctor, addr 0x454ef44, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionMap* map, ::UnityEngine::InputSystem::InputAction* action, int32_t compositeIndex);

  /// @brief Method get_bindingIndex, addr 0x4551cb0, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_bindingIndex();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionSetupExtensions_CompositeSyntax();

  // Ctor Parameters [CppParam { name: "m_Action", ty: "::UnityEngine::InputSystem::InputAction*", modifiers: "", def_value: None }, CppParam { name: "m_ActionMap", ty:
  // "::UnityEngine::InputSystem::InputActionMap*", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndexInMap", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputActionSetupExtensions_CompositeSyntax(::UnityEngine::InputSystem::InputAction* m_Action, ::UnityEngine::InputSystem::InputActionMap* m_ActionMap,
                                                       int32_t m_BindingIndexInMap) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6568 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Action, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* m_Action;

  /// @brief Field m_ActionMap, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* m_ActionMap;

  /// @brief Field m_BindingIndexInMap, offset: 0x10, size: 0x4, def value: None
  int32_t m_BindingIndexInMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax, m_Action) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax, m_ActionMap) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax, m_BindingIndexInMap) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputControlScheme
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct CORDL_TYPE InputActionSetupExtensions_ControlSchemeSyntax {
public:
  // Declarations
  /// @brief Method AddDeviceEntry, addr 0x4551f24, size 0x1f4, virtual false, abstract: false, final false
  inline void AddDeviceEntry(::StringW controlPath, ::UnityEngine::InputSystem::DeviceRequirement_InputControlScheme_Flags flags);

  /// @brief Method DeviceTypeToControlPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::StringW DeviceTypeToControlPath();

  /// @brief Method Done, addr 0x4550104, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme Done();

  /// @brief Method OrWithOptionalDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax OrWithOptionalDevice();

  /// @brief Method OrWithOptionalDevice, addr 0x45505a4, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax OrWithOptionalDevice(::StringW controlPath);

  /// @brief Method OrWithRequiredDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax OrWithRequiredDevice();

  /// @brief Method OrWithRequiredDevice, addr 0x45504d8, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax OrWithRequiredDevice(::StringW controlPath);

  /// @brief Method WithBindingGroup, addr 0x454ffe4, size 0x120, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax WithBindingGroup(::StringW bindingGroup);

  /// @brief Method WithOptionalDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax WithOptionalDevice();

  /// @brief Method WithOptionalDevice, addr 0x45502dc, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax WithOptionalDevice(::StringW controlPath);

  /// @brief Method WithRequiredDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax WithRequiredDevice();

  /// @brief Method WithRequiredDevice, addr 0x45502a8, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax WithRequiredDevice(::StringW controlPath);

  /// @brief Method .ctor, addr 0x454fdd0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionAsset* asset, int32_t index);

  /// @brief Method .ctor, addr 0x454ffc4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputControlScheme controlScheme);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionSetupExtensions_ControlSchemeSyntax();

  // Ctor Parameters [CppParam { name: "m_Asset", ty: "::UnityW<::UnityEngine::InputSystem::InputActionAsset>", modifiers: "", def_value: None }, CppParam { name: "m_ControlSchemeIndex", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ControlScheme", ty: "::UnityEngine::InputSystem::InputControlScheme", modifiers: "", def_value: None }]
  constexpr InputActionSetupExtensions_ControlSchemeSyntax(::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_Asset, int32_t m_ControlSchemeIndex,
                                                           ::UnityEngine::InputSystem::InputControlScheme m_ControlScheme) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6569 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_Asset, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_Asset;

  /// @brief Field m_ControlSchemeIndex, offset: 0x8, size: 0x4, def value: None
  int32_t m_ControlSchemeIndex;

  /// @brief Field m_ControlScheme, offset: 0x10, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputControlScheme m_ControlScheme;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax, m_Asset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax, m_ControlSchemeIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax, m_ControlScheme) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object, UnityEngine.InputSystem.InputBinding
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions/<>c__DisplayClass5_0
class CORDL_TYPE InputActionSetupExtensions___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field binding, offset 0x10, size 0x58
  __declspec(property(get = __cordl_internal_get_binding, put = __cordl_internal_set_binding)) ::UnityEngine::InputSystem::InputBinding binding;

  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0* New_ctor();

  /// @brief Method <RemoveAction>b__0, addr 0x4552118, size 0x44, virtual false, abstract: false, final false
  inline bool _RemoveAction_b__0(::UnityEngine::InputSystem::InputBinding b);

  constexpr ::UnityEngine::InputSystem::InputBinding const& __cordl_internal_get_binding() const;

  constexpr ::UnityEngine::InputSystem::InputBinding& __cordl_internal_get_binding();

  constexpr void __cordl_internal_set_binding(::UnityEngine::InputSystem::InputBinding value);

  /// @brief Method .ctor, addr 0x454e610, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionSetupExtensions___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionSetupExtensions___c__DisplayClass5_0(InputActionSetupExtensions___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionSetupExtensions___c__DisplayClass5_0(InputActionSetupExtensions___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6570 };

  /// @brief Field binding, offset: 0x10, size: 0x58, def value: None
  ::UnityEngine::InputSystem::InputBinding ___binding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0, ___binding) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0, 0x68>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionSetupExtensions
class CORDL_TYPE InputActionSetupExtensions : public ::System::Object {
public:
  // Declarations
  using BindingSyntax = ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax;

  using CompositeSyntax = ::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax;

  using ControlSchemeSyntax = ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax;

  using __c__DisplayClass5_0 = ::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0;

  /// @brief Method AddAction, addr 0x454deec, size 0x36c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputAction* AddAction(::UnityEngine::InputSystem::InputActionMap* map, ::StringW name, ::UnityEngine::InputSystem::InputActionType type, ::StringW binding,
                                                                   ::StringW interactions, ::StringW processors, ::StringW groups, ::StringW expectedControlLayout);

  /// @brief Method AddActionMap, addr 0x454d86c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap* AddActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name);

  /// @brief Method AddActionMap, addr 0x454da2c, size 0x248, virtual false, abstract: false, final false
  static inline void AddActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method AddBinding, addr 0x454e724, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method AddBinding, addr 0x454e7d4, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method AddBinding, addr 0x454e258, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW path, ::StringW interactions,
                                                                                                ::StringW processors, ::StringW groups);

  /// @brief Method AddBinding, addr 0x454eadc, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap,
                                                                                                ::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method AddBinding, addr 0x454ece8, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW path, ::System::Guid action,
                                                                                                ::StringW interactions, ::StringW groups);

  /// @brief Method AddBinding, addr 0x454ebc4, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW path,
                                                                                                ::UnityEngine::InputSystem::InputAction* action, ::StringW interactions, ::StringW groups);

  /// @brief Method AddBinding, addr 0x454ea28, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW path, ::StringW interactions,
                                                                                                ::StringW groups, ::StringW action, ::StringW processors);

  /// @brief Method AddBindingInternal, addr 0x454e88c, size 0x190, virtual false, abstract: false, final false
  static inline int32_t AddBindingInternal(::UnityEngine::InputSystem::InputActionMap* map, ::UnityEngine::InputSystem::InputBinding binding, int32_t bindingIndex);

  /// @brief Method AddCompositeBinding, addr 0x454eddc, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax AddCompositeBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW composite, ::StringW interactions,
                                                                                                           ::StringW processors);

  /// @brief Method AddControlScheme, addr 0x454fc6c, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax AddControlScheme(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name);

  /// @brief Method AddControlScheme, addr 0x454f9a4, size 0x2c8, virtual false, abstract: false, final false
  static inline void AddControlScheme(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputControlScheme controlScheme);

  /// @brief Method ChangeBinding, addr 0x454ef84, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction* action, int32_t index);

  /// @brief Method ChangeBinding, addr 0x454f060, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding match);

  /// @brief Method ChangeBinding, addr 0x454f010, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW name);

  /// @brief Method ChangeBinding, addr 0x454f19c, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, int32_t index);

  /// @brief Method ChangeBindingWithGroup, addr 0x454f400, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBindingWithGroup(::UnityEngine::InputSystem::InputAction* action, ::StringW group);

  /// @brief Method ChangeBindingWithId, addr 0x454f290, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBindingWithId(::UnityEngine::InputSystem::InputAction* action, ::StringW id);

  /// @brief Method ChangeBindingWithId, addr 0x454f324, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBindingWithId(::UnityEngine::InputSystem::InputAction* action, ::System::Guid id);

  /// @brief Method ChangeBindingWithPath, addr 0x454f494, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeBindingWithPath(::UnityEngine::InputSystem::InputAction* action, ::StringW path);

  /// @brief Method ChangeCompositeBinding, addr 0x454f530, size 0x1ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax ChangeCompositeBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW compositeName);

  /// @brief Method OrWithOptionalDevice, addr 0x455050c, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme OrWithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath);

  /// @brief Method OrWithRequiredDevice, addr 0x4550440, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme OrWithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath);

  /// @brief Method RemoveAction, addr 0x454e2a4, size 0x36c, virtual false, abstract: false, final false
  static inline void RemoveAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method RemoveAction, addr 0x454e618, size 0x10c, virtual false, abstract: false, final false
  static inline void RemoveAction(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW nameOrId);

  /// @brief Method RemoveActionMap, addr 0x454dc74, size 0x164, virtual false, abstract: false, final false
  static inline void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method RemoveActionMap, addr 0x454ddd8, size 0x114, virtual false, abstract: false, final false
  static inline void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW nameOrId);

  /// @brief Method RemoveControlScheme, addr 0x454fde4, size 0x134, virtual false, abstract: false, final false
  static inline void RemoveControlScheme(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name);

  /// @brief Method Rename, addr 0x454f740, size 0x264, virtual false, abstract: false, final false
  static inline void Rename(::UnityEngine::InputSystem::InputAction* action, ::StringW newName);

  /// @brief Method WithBindingGroup, addr 0x454ff18, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme WithBindingGroup(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW bindingGroup);

  /// @brief Method WithDevice, addr 0x45501c4, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme WithDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath, bool required);

  /// @brief Method WithOptionalDevice, addr 0x45503a8, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme WithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath);

  /// @brief Method WithRequiredDevice, addr 0x4550310, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme WithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionSetupExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionSetupExtensions(InputActionSetupExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionSetupExtensions(InputActionSetupExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6571 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionSetupExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionSetupExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionSetupExtensions*, "UnityEngine.InputSystem", "InputActionSetupExtensions");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionSetupExtensions___c__DisplayClass5_0*, "UnityEngine.InputSystem", "InputActionSetupExtensions/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionSetupExtensions_BindingSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/BindingSyntax");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionSetupExtensions_CompositeSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/CompositeSyntax");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionSetupExtensions_ControlSchemeSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/ControlSchemeSyntax");
