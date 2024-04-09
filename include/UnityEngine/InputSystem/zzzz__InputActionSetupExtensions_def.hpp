#pragma once
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
namespace GlobalNamespace {
struct __InputControlScheme__DeviceRequirement__Flags;
}
namespace System {
struct Guid;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
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
namespace UnityEngine::InputSystem {
struct __InputActionSetupExtensions__BindingSyntax;
}
namespace UnityEngine::InputSystem {
struct __InputActionSetupExtensions__CompositeSyntax;
}
namespace UnityEngine::InputSystem {
struct __InputActionSetupExtensions__ControlSchemeSyntax;
}
namespace UnityEngine::InputSystem {
class __InputActionSetupExtensions____c__DisplayClass5_0;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionSetupExtensions;
}
namespace UnityEngine::InputSystem {
class __InputActionSetupExtensions____c__DisplayClass5_0;
}
namespace UnityEngine::InputSystem {
struct __InputActionSetupExtensions__BindingSyntax;
}
namespace UnityEngine::InputSystem {
struct __InputActionSetupExtensions__CompositeSyntax;
}
namespace UnityEngine::InputSystem {
struct __InputActionSetupExtensions__ControlSchemeSyntax;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionSetupExtensions);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputActionSetupExtensions____c__DisplayClass5_0);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax);
// Type: ::BindingSyntax
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionSetupExtensions::BindingSyntax
struct CORDL_TYPE __InputActionSetupExtensions__BindingSyntax {
public:
  // Declarations
  __declspec(property(get = get_binding))::UnityEngine::InputSystem::InputBinding binding;

  __declspec(property(get = get_bindingIndex)) int32_t bindingIndex;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Method Erase, addr 0x2f7c234, size 0x17c, virtual false, abstract: false, final false
  inline void Erase();

  /// @brief Method InsertPartBinding, addr 0x2f7c3b0, size 0x16c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax InsertPartBinding(::StringW partName, ::StringW path);

  /// @brief Method Iterate, addr 0x2f7bd1c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax Iterate(bool next);

  /// @brief Method IterateCompositeBinding, addr 0x2f7c098, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax IterateCompositeBinding(bool next, ::StringW compositeName);

  /// @brief Method IteratePartBinding, addr 0x2f7bea8, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax IteratePartBinding(bool next, ::StringW partName);

  /// @brief Method NextBinding, addr 0x2f7bce8, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax NextBinding();

  /// @brief Method NextCompositeBinding, addr 0x2f7c060, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax NextCompositeBinding(::StringW compositeName);

  /// @brief Method NextPartBinding, addr 0x2f7be00, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax NextPartBinding(::StringW partName);

  /// @brief Method PreviousBinding, addr 0x2f7bdcc, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax PreviousBinding();

  /// @brief Method PreviousCompositeBinding, addr 0x2f7c18c, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax PreviousCompositeBinding(::StringW compositeName);

  /// @brief Method PreviousPartBinding, addr 0x2f7bfb8, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax PreviousPartBinding(::StringW partName);

  /// @brief Method To, addr 0x2f7bbb4, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax To(::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method Triggering, addr 0x2f7ba38, size 0x17c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax Triggering(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method WithGroup, addr 0x2f7afc4, size 0x1a8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithGroup(::StringW group);

  /// @brief Method WithGroups, addr 0x2f7b16c, size 0x1d4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithGroups(::StringW groups);

  /// @brief Method WithInteraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInteraction> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithInteraction();

  /// @brief Method WithInteraction, addr 0x2f7b340, size 0x1a8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithInteraction(::StringW interaction);

  /// @brief Method WithInteractions, addr 0x2f7b4e8, size 0x1d4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithInteractions(::StringW interactions);

  /// @brief Method WithName, addr 0x2f7ae44, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithName(::StringW name);

  /// @brief Method WithPath, addr 0x2f7af04, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithPath(::StringW path);

  /// @brief Method WithProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TProcessor> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithProcessor();

  /// @brief Method WithProcessor, addr 0x2f7b6bc, size 0x1a8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithProcessor(::StringW processor);

  /// @brief Method WithProcessors, addr 0x2f7b864, size 0x1d4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithProcessors(::StringW processors);

  /// @brief Method .ctor, addr 0x2f7ae38, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionMap* map, int32_t bindingIndexInMap, ::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method get_binding, addr 0x2f7ad8c, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputBinding get_binding();

  /// @brief Method get_bindingIndex, addr 0x2f7ad54, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_bindingIndex();

  /// @brief Method get_valid, addr 0x2f7ace8, size 0x6c, virtual false, abstract: false, final false
  inline bool get_valid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionSetupExtensions__BindingSyntax();

  // Ctor Parameters [CppParam { name: "m_ActionMap", ty: "::UnityEngine::InputSystem::InputActionMap*", modifiers: "", def_value: None }, CppParam { name: "m_Action", ty:
  // "::UnityEngine::InputSystem::InputAction*", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndexInMap", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionSetupExtensions__BindingSyntax(::UnityEngine::InputSystem::InputActionMap* m_ActionMap, ::UnityEngine::InputSystem::InputAction* m_Action,
                                                        int32_t m_BindingIndexInMap) noexcept;

  /// @brief Field m_ActionMap, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* m_ActionMap;

  /// @brief Field m_Action, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* m_Action;

  /// @brief Field m_BindingIndexInMap, offset: 0x10, size: 0x4, def value: None
  int32_t m_BindingIndexInMap;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax, m_ActionMap) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax, m_Action) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax, m_BindingIndexInMap) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::CompositeSyntax
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionSetupExtensions::CompositeSyntax
struct CORDL_TYPE __InputActionSetupExtensions__CompositeSyntax {
public:
  // Declarations
  __declspec(property(get = get_bindingIndex)) int32_t bindingIndex;

  /// @brief Method With, addr 0x2f7c570, size 0x24c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax With(::StringW name, ::StringW binding, ::StringW groups, ::StringW processors);

  /// @brief Method .ctor, addr 0x2f7c564, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionMap* map, ::UnityEngine::InputSystem::InputAction* action, int32_t compositeIndex);

  /// @brief Method get_bindingIndex, addr 0x2f7c538, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_bindingIndex();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionSetupExtensions__CompositeSyntax();

  // Ctor Parameters [CppParam { name: "m_Action", ty: "::UnityEngine::InputSystem::InputAction*", modifiers: "", def_value: None }, CppParam { name: "m_ActionMap", ty:
  // "::UnityEngine::InputSystem::InputActionMap*", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndexInMap", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionSetupExtensions__CompositeSyntax(::UnityEngine::InputSystem::InputAction* m_Action, ::UnityEngine::InputSystem::InputActionMap* m_ActionMap,
                                                          int32_t m_BindingIndexInMap) noexcept;

  /// @brief Field m_Action, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* m_Action;

  /// @brief Field m_ActionMap, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* m_ActionMap;

  /// @brief Field m_BindingIndexInMap, offset: 0x10, size: 0x4, def value: None
  int32_t m_BindingIndexInMap;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax, m_Action) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax, m_ActionMap) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax, m_BindingIndexInMap) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::ControlSchemeSyntax
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionSetupExtensions::ControlSchemeSyntax
struct CORDL_TYPE __InputActionSetupExtensions__ControlSchemeSyntax {
public:
  // Declarations
  /// @brief Method AddDeviceEntry, addr 0x2f7c948, size 0x20c, virtual false, abstract: false, final false
  inline void AddDeviceEntry(::StringW controlPath, ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags flags);

  /// @brief Method DeviceTypeToControlPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::StringW DeviceTypeToControlPath();

  /// @brief Method Done, addr 0x2f7cbf0, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme Done();

  /// @brief Method OrWithOptionalDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax OrWithOptionalDevice();

  /// @brief Method OrWithOptionalDevice, addr 0x2f7cbbc, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax OrWithOptionalDevice(::StringW controlPath);

  /// @brief Method OrWithRequiredDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax OrWithRequiredDevice();

  /// @brief Method OrWithRequiredDevice, addr 0x2f7cb88, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax OrWithRequiredDevice(::StringW controlPath);

  /// @brief Method WithBindingGroup, addr 0x2f7c7f0, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax WithBindingGroup(::StringW bindingGroup);

  /// @brief Method WithOptionalDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax WithOptionalDevice();

  /// @brief Method WithOptionalDevice, addr 0x2f7cb54, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax WithOptionalDevice(::StringW controlPath);

  /// @brief Method WithRequiredDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax WithRequiredDevice();

  /// @brief Method WithRequiredDevice, addr 0x2f7c914, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax WithRequiredDevice(::StringW controlPath);

  /// @brief Method .ctor, addr 0x2f7c7bc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionAsset* asset, int32_t index);

  /// @brief Method .ctor, addr 0x2f7c7d0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputControlScheme controlScheme);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionSetupExtensions__ControlSchemeSyntax();

  // Ctor Parameters [CppParam { name: "m_Asset", ty: "::UnityW<::UnityEngine::InputSystem::InputActionAsset>", modifiers: "", def_value: None }, CppParam { name: "m_ControlSchemeIndex", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ControlScheme", ty: "::UnityEngine::InputSystem::InputControlScheme", modifiers: "", def_value: None }]
  constexpr __InputActionSetupExtensions__ControlSchemeSyntax(::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_Asset, int32_t m_ControlSchemeIndex,
                                                              ::UnityEngine::InputSystem::InputControlScheme m_ControlScheme) noexcept;

  /// @brief Field m_Asset, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_Asset;

  /// @brief Field m_ControlSchemeIndex, offset: 0x8, size: 0x4, def value: None
  int32_t m_ControlSchemeIndex;

  /// @brief Field m_ControlScheme, offset: 0x10, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputControlScheme m_ControlScheme;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax, m_Asset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax, m_ControlSchemeIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax, m_ControlScheme) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputActionSetupExtensions::<>c__DisplayClass5_0*
class CORDL_TYPE __InputActionSetupExtensions____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field binding, offset 0x10, size 0x58
  __declspec(property(get = __cordl_internal_get_binding, put = __cordl_internal_set_binding))::UnityEngine::InputSystem::InputBinding binding;

  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions____c__DisplayClass5_0* New_ctor();

  /// @brief Method <RemoveAction>b__0, addr 0x2f7ccbc, size 0x44, virtual false, abstract: false, final false
  inline bool _RemoveAction_b__0(::UnityEngine::InputSystem::InputBinding b);

  constexpr ::UnityEngine::InputSystem::InputBinding const& __cordl_internal_get_binding() const;

  constexpr ::UnityEngine::InputSystem::InputBinding& __cordl_internal_get_binding();

  constexpr void __cordl_internal_set_binding(::UnityEngine::InputSystem::InputBinding value);

  /// @brief Method .ctor, addr 0x2f7ccb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionSetupExtensions____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputActionSetupExtensions____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputActionSetupExtensions____c__DisplayClass5_0(__InputActionSetupExtensions____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionSetupExtensions____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputActionSetupExtensions____c__DisplayClass5_0(__InputActionSetupExtensions____c__DisplayClass5_0 const&) = delete;

  /// @brief Field binding, offset: 0x10, size: 0x58, def value: None
  ::UnityEngine::InputSystem::InputBinding ___binding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionSetupExtensions____c__DisplayClass5_0, 0x68>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionSetupExtensions____c__DisplayClass5_0, ___binding) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionSetupExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputActionSetupExtensions*
class CORDL_TYPE InputActionSetupExtensions : public ::System::Object {
public:
  // Declarations
  using BindingSyntax = ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax;

  using CompositeSyntax = ::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax;

  using ControlSchemeSyntax = ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax;

  using __c__DisplayClass5_0 = ::UnityEngine::InputSystem::__InputActionSetupExtensions____c__DisplayClass5_0;

  /// @brief Method AddAction, addr 0x2f77750, size 0x3e8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputAction* AddAction(::UnityEngine::InputSystem::InputActionMap* map, ::StringW name, ::UnityEngine::InputSystem::InputActionType type, ::StringW binding,
                                                                   ::StringW interactions, ::StringW processors, ::StringW groups, ::StringW expectedControlLayout);

  /// @brief Method AddActionMap, addr 0x2f770a0, size 0x1ec, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap* AddActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name);

  /// @brief Method AddActionMap, addr 0x2f7728c, size 0x24c, virtual false, abstract: false, final false
  static inline void AddActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method AddBinding, addr 0x2f77fac, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method AddBinding, addr 0x2f78088, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method AddBinding, addr 0x2f75fec, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW path, ::StringW interactions,
                                                                                                   ::StringW processors, ::StringW groups);

  /// @brief Method AddBinding, addr 0x2f78384, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap,
                                                                                                   ::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method AddBinding, addr 0x2f785c0, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW path, ::System::Guid action,
                                                                                                   ::StringW interactions, ::StringW groups);

  /// @brief Method AddBinding, addr 0x2f78488, size 0x138, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW path,
                                                                                                   ::UnityEngine::InputSystem::InputAction* action, ::StringW interactions, ::StringW groups);

  /// @brief Method AddBinding, addr 0x2f782cc, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW path, ::StringW interactions,
                                                                                                   ::StringW groups, ::StringW action, ::StringW processors);

  /// @brief Method AddBindingInternal, addr 0x2f78140, size 0x18c, virtual false, abstract: false, final false
  static inline int32_t AddBindingInternal(::UnityEngine::InputSystem::InputActionMap* map, ::UnityEngine::InputSystem::InputBinding binding, int32_t bindingIndex);

  /// @brief Method AddCompositeBinding, addr 0x2f786bc, size 0x1a8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax AddCompositeBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW composite,
                                                                                                              ::StringW interactions, ::StringW processors);

  /// @brief Method AddControlScheme, addr 0x2f79548, size 0x178, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax AddControlScheme(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name);

  /// @brief Method AddControlScheme, addr 0x2f7921c, size 0x32c, virtual false, abstract: false, final false
  static inline void AddControlScheme(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputControlScheme controlScheme);

  /// @brief Method ChangeBinding, addr 0x2f745e4, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction* action, int32_t index);

  /// @brief Method ChangeBinding, addr 0x2f788b4, size 0x154, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding match);

  /// @brief Method ChangeBinding, addr 0x2f78864, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW name);

  /// @brief Method ChangeBinding, addr 0x2f78a08, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, int32_t index);

  /// @brief Method ChangeBindingWithGroup, addr 0x2f78c80, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBindingWithGroup(::UnityEngine::InputSystem::InputAction* action, ::StringW group);

  /// @brief Method ChangeBindingWithId, addr 0x2f78b14, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBindingWithId(::UnityEngine::InputSystem::InputAction* action, ::StringW id);

  /// @brief Method ChangeBindingWithId, addr 0x2f78bac, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBindingWithId(::UnityEngine::InputSystem::InputAction* action, ::System::Guid id);

  /// @brief Method ChangeBindingWithPath, addr 0x2f78d18, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBindingWithPath(::UnityEngine::InputSystem::InputAction* action, ::StringW path);

  /// @brief Method ChangeCompositeBinding, addr 0x2f78db8, size 0x1e8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeCompositeBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW compositeName);

  /// @brief Method OrWithOptionalDevice, addr 0x2f79c28, size 0x10c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme OrWithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath);

  /// @brief Method OrWithRequiredDevice, addr 0x2f79b68, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme OrWithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath);

  /// @brief Method RemoveAction, addr 0x2f77b38, size 0x364, virtual false, abstract: false, final false
  static inline void RemoveAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method RemoveAction, addr 0x2f77e9c, size 0x110, virtual false, abstract: false, final false
  static inline void RemoveAction(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW nameOrId);

  /// @brief Method RemoveActionMap, addr 0x2f774d8, size 0x160, virtual false, abstract: false, final false
  static inline void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method RemoveActionMap, addr 0x2f77638, size 0x118, virtual false, abstract: false, final false
  static inline void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW nameOrId);

  /// @brief Method RemoveControlScheme, addr 0x2f796c0, size 0x13c, virtual false, abstract: false, final false
  static inline void RemoveControlScheme(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name);

  /// @brief Method Rename, addr 0x2f78fa0, size 0x27c, virtual false, abstract: false, final false
  static inline void Rename(::UnityEngine::InputSystem::InputAction* action, ::StringW newName);

  /// @brief Method WithBindingGroup, addr 0x2f797fc, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme WithBindingGroup(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW bindingGroup);

  /// @brief Method WithDevice, addr 0x2f798bc, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme WithDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath, bool required);

  /// @brief Method WithOptionalDevice, addr 0x2f79aa8, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme WithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath);

  /// @brief Method WithRequiredDevice, addr 0x2f799e8, size 0xc0, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionSetupExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionSetupExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionSetupExtensions*, "UnityEngine.InputSystem", "InputActionSetupExtensions");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputActionSetupExtensions____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionSetupExtensions____c__DisplayClass5_0*, "UnityEngine.InputSystem", "InputActionSetupExtensions/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/BindingSyntax");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/CompositeSyntax");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax, "UnityEngine.InputSystem", "InputActionSetupExtensions/ControlSchemeSyntax");
