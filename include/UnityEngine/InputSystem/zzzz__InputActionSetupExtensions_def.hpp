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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5425))
// CS Name: ::InputActionSetupExtensions::BindingSyntax
struct CORDL_TYPE __InputActionSetupExtensions__BindingSyntax {
public:
  // Declarations
  __declspec(property(get = get_valid)) bool valid;

  __declspec(property(get = get_bindingIndex)) int32_t bindingIndex;

  __declspec(property(get = get_binding))::UnityEngine::InputSystem::InputBinding binding;

  /// @brief Method get_valid, addr 0x2a4df2c, size 0x6c, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Method get_bindingIndex, addr 0x2a4df98, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_bindingIndex();

  /// @brief Method get_binding, addr 0x2a4dfd0, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputBinding get_binding();

  /// @brief Method .ctor, addr 0x2a4e07c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionMap* map, int32_t bindingIndexInMap, ::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method WithName, addr 0x2a4e088, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithName(::StringW name);

  /// @brief Method WithPath, addr 0x2a4e148, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithPath(::StringW path);

  /// @brief Method WithGroup, addr 0x2a4e208, size 0x1a8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithGroup(::StringW group);

  /// @brief Method WithGroups, addr 0x2a4e3b0, size 0x1d4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithGroups(::StringW groups);

  /// @brief Method WithInteraction, addr 0x2a4e584, size 0x1a8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithInteraction(::StringW interaction);

  /// @brief Method WithInteractions, addr 0x2a4e72c, size 0x1d4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithInteractions(::StringW interactions);

  /// @brief Method WithInteraction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInteraction> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithInteraction();

  /// @brief Method WithProcessor, addr 0x2a4e900, size 0x1a8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithProcessor(::StringW processor);

  /// @brief Method WithProcessors, addr 0x2a4eaa8, size 0x1d4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithProcessors(::StringW processors);

  /// @brief Method WithProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TProcessor> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax WithProcessor();

  /// @brief Method Triggering, addr 0x2a4ec7c, size 0x17c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax Triggering(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method To, addr 0x2a4edf8, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax To(::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method NextBinding, addr 0x2a4ef2c, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax NextBinding();

  /// @brief Method PreviousBinding, addr 0x2a4f010, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax PreviousBinding();

  /// @brief Method NextPartBinding, addr 0x2a4f044, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax NextPartBinding(::StringW partName);

  /// @brief Method PreviousPartBinding, addr 0x2a4f1fc, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax PreviousPartBinding(::StringW partName);

  /// @brief Method NextCompositeBinding, addr 0x2a4f2a4, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax NextCompositeBinding(::StringW compositeName);

  /// @brief Method PreviousCompositeBinding, addr 0x2a4f3d0, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax PreviousCompositeBinding(::StringW compositeName);

  /// @brief Method Iterate, addr 0x2a4ef60, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax Iterate(bool next);

  /// @brief Method IterateCompositeBinding, addr 0x2a4f2dc, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax IterateCompositeBinding(bool next, ::StringW compositeName);

  /// @brief Method IteratePartBinding, addr 0x2a4f0ec, size 0x110, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax IteratePartBinding(bool next, ::StringW partName);

  /// @brief Method Erase, addr 0x2a4f478, size 0x17c, virtual false, abstract: false, final false
  inline void Erase();

  /// @brief Method InsertPartBinding, addr 0x2a4f5f4, size 0x16c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax InsertPartBinding(::StringW partName, ::StringW path);

  // Ctor Parameters [CppParam { name: "m_ActionMap", ty: "::UnityEngine::InputSystem::InputActionMap*", modifiers: "", def_value: None }, CppParam { name: "m_Action", ty:
  // "::UnityEngine::InputSystem::InputAction*", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndexInMap", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionSetupExtensions__BindingSyntax(::UnityEngine::InputSystem::InputActionMap* m_ActionMap, ::UnityEngine::InputSystem::InputAction* m_Action,
                                                        int32_t m_BindingIndexInMap) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionSetupExtensions__BindingSyntax();

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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5426))
// CS Name: ::InputActionSetupExtensions::CompositeSyntax
struct CORDL_TYPE __InputActionSetupExtensions__CompositeSyntax {
public:
  // Declarations
  __declspec(property(get = get_bindingIndex)) int32_t bindingIndex;

  /// @brief Method get_bindingIndex, addr 0x2a4f77c, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_bindingIndex();

  /// @brief Method .ctor, addr 0x2a4f7a8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionMap* map, ::UnityEngine::InputSystem::InputAction* action, int32_t compositeIndex);

  /// @brief Method With, addr 0x2a4f7b4, size 0x24c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax With(::StringW name, ::StringW binding, ::StringW groups, ::StringW processors);

  // Ctor Parameters [CppParam { name: "m_Action", ty: "::UnityEngine::InputSystem::InputAction*", modifiers: "", def_value: None }, CppParam { name: "m_ActionMap", ty:
  // "::UnityEngine::InputSystem::InputActionMap*", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndexInMap", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionSetupExtensions__CompositeSyntax(::UnityEngine::InputSystem::InputAction* m_Action, ::UnityEngine::InputSystem::InputActionMap* m_ActionMap,
                                                          int32_t m_BindingIndexInMap) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionSetupExtensions__CompositeSyntax();

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5463))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5427))
// CS Name: ::InputActionSetupExtensions::ControlSchemeSyntax
struct CORDL_TYPE __InputActionSetupExtensions__ControlSchemeSyntax {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2a4fa00, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionAsset* asset, int32_t index);

  /// @brief Method .ctor, addr 0x2a4fa14, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputControlScheme controlScheme);

  /// @brief Method WithBindingGroup, addr 0x2a4fa34, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax WithBindingGroup(::StringW bindingGroup);

  /// @brief Method WithRequiredDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax WithRequiredDevice();

  /// @brief Method WithOptionalDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax WithOptionalDevice();

  /// @brief Method OrWithRequiredDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax OrWithRequiredDevice();

  /// @brief Method OrWithOptionalDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax OrWithOptionalDevice();

  /// @brief Method WithRequiredDevice, addr 0x2a4fb58, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax WithRequiredDevice(::StringW controlPath);

  /// @brief Method WithOptionalDevice, addr 0x2a4fd98, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax WithOptionalDevice(::StringW controlPath);

  /// @brief Method OrWithRequiredDevice, addr 0x2a4fdcc, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax OrWithRequiredDevice(::StringW controlPath);

  /// @brief Method OrWithOptionalDevice, addr 0x2a4fe00, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax OrWithOptionalDevice(::StringW controlPath);

  /// @brief Method DeviceTypeToControlPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline ::StringW DeviceTypeToControlPath();

  /// @brief Method Done, addr 0x2a4fe34, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme Done();

  /// @brief Method AddDeviceEntry, addr 0x2a4fb8c, size 0x20c, virtual false, abstract: false, final false
  inline void AddDeviceEntry(::StringW controlPath, ::GlobalNamespace::__InputControlScheme__DeviceRequirement__Flags flags);

  // Ctor Parameters [CppParam { name: "m_Asset", ty: "::UnityW<::UnityEngine::InputSystem::InputActionAsset>", modifiers: "", def_value: None }, CppParam { name: "m_ControlSchemeIndex", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ControlScheme", ty: "::UnityEngine::InputSystem::InputControlScheme", modifiers: "", def_value: None }]
  constexpr __InputActionSetupExtensions__ControlSchemeSyntax(::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_Asset, int32_t m_ControlSchemeIndex,
                                                              ::UnityEngine::InputSystem::InputControlScheme m_ControlScheme) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionSetupExtensions__ControlSchemeSyntax();

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(5446))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5428))
// CS Name: ::InputActionSetupExtensions::<>c__DisplayClass5_0*
class CORDL_TYPE __InputActionSetupExtensions____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field binding, offset 0x10, size 0x58
  __declspec(property(get = __cordl_internal_get_binding, put = __cordl_internal_set_binding))::UnityEngine::InputSystem::InputBinding binding;

  constexpr ::UnityEngine::InputSystem::InputBinding& __cordl_internal_get_binding();

  constexpr ::UnityEngine::InputSystem::InputBinding const& __cordl_internal_get_binding() const;

  constexpr void __cordl_internal_set_binding(::UnityEngine::InputSystem::InputBinding value);

  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor, addr 0x2a4fef8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <RemoveAction>b__0, addr 0x2a4ff00, size 0x44, virtual false, abstract: false, final false
  inline bool _RemoveAction_b__0(::UnityEngine::InputSystem::InputBinding b);

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionSetupExtensions____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputActionSetupExtensions____c__DisplayClass5_0(__InputActionSetupExtensions____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionSetupExtensions____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputActionSetupExtensions____c__DisplayClass5_0(__InputActionSetupExtensions____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionSetupExtensions____c__DisplayClass5_0();

public:
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5429))
// CS Name: ::UnityEngine.InputSystem::InputActionSetupExtensions*
class CORDL_TYPE InputActionSetupExtensions : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::UnityEngine::InputSystem::__InputActionSetupExtensions____c__DisplayClass5_0;

  using ControlSchemeSyntax = ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax;

  using CompositeSyntax = ::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax;

  using BindingSyntax = ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax;

  /// @brief Method AddActionMap, addr 0x2a4a2e4, size 0x1ec, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap* AddActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name);

  /// @brief Method AddActionMap, addr 0x2a4a4d0, size 0x24c, virtual false, abstract: false, final false
  static inline void AddActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method RemoveActionMap, addr 0x2a4a71c, size 0x160, virtual false, abstract: false, final false
  static inline void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method RemoveActionMap, addr 0x2a4a87c, size 0x118, virtual false, abstract: false, final false
  static inline void RemoveActionMap(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW nameOrId);

  /// @brief Method AddAction, addr 0x2a4a994, size 0x3e8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputAction* AddAction(::UnityEngine::InputSystem::InputActionMap* map, ::StringW name, ::UnityEngine::InputSystem::InputActionType type, ::StringW binding,
                                                                   ::StringW interactions, ::StringW processors, ::StringW groups, ::StringW expectedControlLayout);

  /// @brief Method RemoveAction, addr 0x2a4ad7c, size 0x364, virtual false, abstract: false, final false
  static inline void RemoveAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method RemoveAction, addr 0x2a4b0e0, size 0x110, virtual false, abstract: false, final false
  static inline void RemoveAction(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW nameOrId);

  /// @brief Method AddBinding, addr 0x2a49230, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW path, ::StringW interactions,
                                                                                                   ::StringW processors, ::StringW groups);

  /// @brief Method AddBinding, addr 0x2a4b2cc, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method AddBinding, addr 0x2a4b1f0, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method AddBinding, addr 0x2a4b510, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW path, ::StringW interactions,
                                                                                                   ::StringW groups, ::StringW action, ::StringW processors);

  /// @brief Method AddBinding, addr 0x2a4b6cc, size 0x138, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW path,
                                                                                                   ::UnityEngine::InputSystem::InputAction* action, ::StringW interactions, ::StringW groups);

  /// @brief Method AddBinding, addr 0x2a4b804, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW path, ::System::Guid action,
                                                                                                   ::StringW interactions, ::StringW groups);

  /// @brief Method AddBinding, addr 0x2a4b5c8, size 0x104, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax AddBinding(::UnityEngine::InputSystem::InputActionMap* actionMap,
                                                                                                   ::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method AddCompositeBinding, addr 0x2a4b900, size 0x1a8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__CompositeSyntax AddCompositeBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW composite,
                                                                                                              ::StringW interactions, ::StringW processors);

  /// @brief Method AddBindingInternal, addr 0x2a4b384, size 0x18c, virtual false, abstract: false, final false
  static inline int32_t AddBindingInternal(::UnityEngine::InputSystem::InputActionMap* map, ::UnityEngine::InputSystem::InputBinding binding, int32_t bindingIndex);

  /// @brief Method ChangeBinding, addr 0x2a47828, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction* action, int32_t index);

  /// @brief Method ChangeBinding, addr 0x2a4baa8, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW name);

  /// @brief Method ChangeBinding, addr 0x2a4bc4c, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputActionMap* actionMap, int32_t index);

  /// @brief Method ChangeBindingWithId, addr 0x2a4bd58, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBindingWithId(::UnityEngine::InputSystem::InputAction* action, ::StringW id);

  /// @brief Method ChangeBindingWithId, addr 0x2a4bdf0, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBindingWithId(::UnityEngine::InputSystem::InputAction* action, ::System::Guid id);

  /// @brief Method ChangeBindingWithGroup, addr 0x2a4bec4, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBindingWithGroup(::UnityEngine::InputSystem::InputAction* action, ::StringW group);

  /// @brief Method ChangeBindingWithPath, addr 0x2a4bf5c, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBindingWithPath(::UnityEngine::InputSystem::InputAction* action, ::StringW path);

  /// @brief Method ChangeBinding, addr 0x2a4baf8, size 0x154, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeBinding(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding match);

  /// @brief Method ChangeCompositeBinding, addr 0x2a4bffc, size 0x1e8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__BindingSyntax ChangeCompositeBinding(::UnityEngine::InputSystem::InputAction* action, ::StringW compositeName);

  /// @brief Method Rename, addr 0x2a4c1e4, size 0x27c, virtual false, abstract: false, final false
  static inline void Rename(::UnityEngine::InputSystem::InputAction* action, ::StringW newName);

  /// @brief Method AddControlScheme, addr 0x2a4c460, size 0x32c, virtual false, abstract: false, final false
  static inline void AddControlScheme(::UnityEngine::InputSystem::InputActionAsset* asset, ::UnityEngine::InputSystem::InputControlScheme controlScheme);

  /// @brief Method AddControlScheme, addr 0x2a4c78c, size 0x178, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionSetupExtensions__ControlSchemeSyntax AddControlScheme(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name);

  /// @brief Method RemoveControlScheme, addr 0x2a4c904, size 0x13c, virtual false, abstract: false, final false
  static inline void RemoveControlScheme(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name);

  /// @brief Method WithBindingGroup, addr 0x2a4ca40, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme WithBindingGroup(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW bindingGroup);

  /// @brief Method WithDevice, addr 0x2a4cb00, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme WithDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath, bool required);

  /// @brief Method WithRequiredDevice, addr 0x2a4cc2c, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme WithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath);

  /// @brief Method WithOptionalDevice, addr 0x2a4ccec, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme WithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath);

  /// @brief Method OrWithRequiredDevice, addr 0x2a4cdac, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme OrWithRequiredDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath);

  /// @brief Method OrWithOptionalDevice, addr 0x2a4ce6c, size 0x10c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputControlScheme OrWithOptionalDevice(::UnityEngine::InputSystem::InputControlScheme scheme, ::StringW controlPath);

  // Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionSetupExtensions(InputActionSetupExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionSetupExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionSetupExtensions(InputActionSetupExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionSetupExtensions();

public:
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
