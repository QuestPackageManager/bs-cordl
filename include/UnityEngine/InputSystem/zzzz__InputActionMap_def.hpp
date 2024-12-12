#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionMap)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_BindingJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_BindingOverrideJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_BindingOverrideListJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_DeviceArray;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_Flags;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_ReadActionJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_ReadFileJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_ReadMapJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_WriteActionJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_WriteFileJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_WriteMapJson;
}
namespace UnityEngine::InputSystem {
struct InputActionRebindingExtensions_ParameterOverride;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
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
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionMap_Flags;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_BindingJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_BindingOverrideJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_BindingOverrideListJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_DeviceArray;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_ReadActionJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_ReadFileJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_ReadMapJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_WriteActionJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_WriteFileJson;
}
namespace UnityEngine::InputSystem {
struct InputActionMap_WriteMapJson;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputActionMap_Flags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionMap);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionMap_BindingJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionMap_BindingOverrideListJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionMap_DeviceArray);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionMap_ReadActionJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionMap_ReadFileJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionMap_ReadMapJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionMap_WriteActionJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionMap_WriteFileJson);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionMap_WriteMapJson);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/Flags
struct CORDL_TYPE InputActionMap_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputActionMap_Flags_Unwrapped
  enum struct __InputActionMap_Flags_Unwrapped : int32_t {
    __E_NeedToResolveBindings = static_cast<int32_t>(0x1),
    __E_BindingResolutionNeedsFullReResolve = static_cast<int32_t>(0x2),
    __E_ControlsForEachActionInitialized = static_cast<int32_t>(0x4),
    __E_BindingsForEachActionInitialized = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputActionMap_Flags_Unwrapped() const noexcept {
    return static_cast<__InputActionMap_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputActionMap_Flags(int32_t value__) noexcept;

  /// @brief Field BindingResolutionNeedsFullReResolve value: I32(2)
  static ::UnityEngine::InputSystem::InputActionMap_Flags const BindingResolutionNeedsFullReResolve;

  /// @brief Field BindingsForEachActionInitialized value: I32(8)
  static ::UnityEngine::InputSystem::InputActionMap_Flags const BindingsForEachActionInitialized;

  /// @brief Field ControlsForEachActionInitialized value: I32(4)
  static ::UnityEngine::InputSystem::InputActionMap_Flags const ControlsForEachActionInitialized;

  /// @brief Field NeedToResolveBindings value: I32(1)
  static ::UnityEngine::InputSystem::InputActionMap_Flags const NeedToResolveBindings;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6542 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/DeviceArray
struct CORDL_TYPE InputActionMap_DeviceArray {
public:
  // Declarations
  /// @brief Method Get, addr 0x453e458, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> Get();

  /// @brief Method IndexOf, addr 0x4543dc0, size 0x5c, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Remove, addr 0x4543e1c, size 0x74, virtual false, abstract: false, final false
  inline bool Remove(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Set, addr 0x453e544, size 0x17c, virtual false, abstract: false, final false
  inline bool Set(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> devices);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap_DeviceArray();

  // Ctor Parameters [CppParam { name: "m_HaveValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_DeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_DeviceArray", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: None }]
  constexpr InputActionMap_DeviceArray(bool m_HaveValue, int32_t m_DeviceCount,
                                       ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> m_DeviceArray) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6543 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_HaveValue, offset: 0x0, size: 0x1, def value: None
  bool m_HaveValue;

  /// @brief Field m_DeviceCount, offset: 0x4, size: 0x4, def value: None
  int32_t m_DeviceCount;

  /// @brief Field m_DeviceArray, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> m_DeviceArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_DeviceArray, m_HaveValue) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_DeviceArray, m_DeviceCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_DeviceArray, m_DeviceArray) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap_DeviceArray, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/BindingOverrideListJson
struct CORDL_TYPE InputActionMap_BindingOverrideListJson {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap_BindingOverrideListJson();

  // Ctor Parameters [CppParam { name: "bindings", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson>*", modifiers: "", def_value: None }]
  constexpr InputActionMap_BindingOverrideListJson(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson>* bindings) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6544 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field bindings, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson>* bindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingOverrideListJson, bindings) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap_BindingOverrideListJson, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/BindingOverrideJson
struct CORDL_TYPE InputActionMap_BindingOverrideJson {
public:
  // Declarations
  /// @brief Method FromBinding, addr 0x4543f44, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson FromBinding(::UnityEngine::InputSystem::InputBinding binding);

  /// @brief Method FromBinding, addr 0x4543e90, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson FromBinding(::UnityEngine::InputSystem::InputBinding binding, ::StringW actionName);

  /// @brief Method ToBinding, addr 0x4543f98, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputBinding ToBinding(::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson bindingOverride);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap_BindingOverrideJson();

  // Ctor Parameters [CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path",
  // ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers:
  // "", def_value: None }]
  constexpr InputActionMap_BindingOverrideJson(::StringW action, ::StringW id, ::StringW path, ::StringW interactions, ::StringW processors) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6545 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field action, offset: 0x0, size: 0x8, def value: None
  ::StringW action;

  /// @brief Field id, offset: 0x8, size: 0x8, def value: None
  ::StringW id;

  /// @brief Field path, offset: 0x10, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field interactions, offset: 0x18, size: 0x8, def value: None
  ::StringW interactions;

  /// @brief Field processors, offset: 0x20, size: 0x8, def value: None
  ::StringW processors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson, action) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson, path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson, interactions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson, processors) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/BindingJson
struct CORDL_TYPE InputActionMap_BindingJson {
public:
  // Declarations
  /// @brief Method FromBinding, addr 0x4544174, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap_BindingJson FromBinding(::ByRef<::UnityEngine::InputSystem::InputBinding> binding);

  /// @brief Method ToBinding, addr 0x4544068, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputBinding ToBinding();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap_BindingJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "groups", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "isComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPartOfComposite", ty: "bool", modifiers: "", def_value: None }]
  constexpr InputActionMap_BindingJson(::StringW name, ::StringW id, ::StringW path, ::StringW interactions, ::StringW processors, ::StringW groups, ::StringW action, bool isComposite,
                                       bool isPartOfComposite) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6546 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field id, offset: 0x8, size: 0x8, def value: None
  ::StringW id;

  /// @brief Field path, offset: 0x10, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field interactions, offset: 0x18, size: 0x8, def value: None
  ::StringW interactions;

  /// @brief Field processors, offset: 0x20, size: 0x8, def value: None
  ::StringW processors;

  /// @brief Field groups, offset: 0x28, size: 0x8, def value: None
  ::StringW groups;

  /// @brief Field action, offset: 0x30, size: 0x8, def value: None
  ::StringW action;

  /// @brief Field isComposite, offset: 0x38, size: 0x1, def value: None
  bool isComposite;

  /// @brief Field isPartOfComposite, offset: 0x39, size: 0x1, def value: None
  bool isPartOfComposite;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingJson, path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingJson, interactions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingJson, processors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingJson, groups) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingJson, action) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingJson, isComposite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_BindingJson, isPartOfComposite) == 0x39, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap_BindingJson, 0x40>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/ReadActionJson
struct CORDL_TYPE InputActionMap_ReadActionJson {
public:
  // Declarations
  /// @brief Method ToAction, addr 0x45441fc, size 0x254, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* ToAction(::StringW actionName);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap_ReadActionJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlLayout", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "passThrough", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_BindingJson,::Array<::UnityEngine::InputSystem::InputActionMap_BindingJson>*>", modifiers: "", def_value: None }]
  constexpr InputActionMap_ReadActionJson(::StringW name, ::StringW type, ::StringW id, ::StringW expectedControlType, ::StringW expectedControlLayout, ::StringW processors, ::StringW interactions,
                                          bool passThrough, bool initialStateCheck,
                                          ::ArrayW<::UnityEngine::InputSystem::InputActionMap_BindingJson, ::Array<::UnityEngine::InputSystem::InputActionMap_BindingJson>*> bindings) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6547 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field type, offset: 0x8, size: 0x8, def value: None
  ::StringW type;

  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::StringW id;

  /// @brief Field expectedControlType, offset: 0x18, size: 0x8, def value: None
  ::StringW expectedControlType;

  /// @brief Field expectedControlLayout, offset: 0x20, size: 0x8, def value: None
  ::StringW expectedControlLayout;

  /// @brief Field processors, offset: 0x28, size: 0x8, def value: None
  ::StringW processors;

  /// @brief Field interactions, offset: 0x30, size: 0x8, def value: None
  ::StringW interactions;

  /// @brief Field passThrough, offset: 0x38, size: 0x1, def value: None
  bool passThrough;

  /// @brief Field initialStateCheck, offset: 0x39, size: 0x1, def value: None
  bool initialStateCheck;

  /// @brief Field bindings, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap_BindingJson, ::Array<::UnityEngine::InputSystem::InputActionMap_BindingJson>*> bindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadActionJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadActionJson, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadActionJson, id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadActionJson, expectedControlType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadActionJson, expectedControlLayout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadActionJson, processors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadActionJson, interactions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadActionJson, passThrough) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadActionJson, initialStateCheck) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadActionJson, bindings) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap_ReadActionJson, 0x48>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/WriteActionJson
struct CORDL_TYPE InputActionMap_WriteActionJson {
public:
  // Declarations
  /// @brief Method FromAction, addr 0x4544450, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap_WriteActionJson FromAction(::UnityEngine::InputSystem::InputAction* action);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap_WriteActionJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value:
  // None }]
  constexpr InputActionMap_WriteActionJson(::StringW name, ::StringW type, ::StringW id, ::StringW expectedControlType, ::StringW processors, ::StringW interactions, bool initialStateCheck) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6548 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field type, offset: 0x8, size: 0x8, def value: None
  ::StringW type;

  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::StringW id;

  /// @brief Field expectedControlType, offset: 0x18, size: 0x8, def value: None
  ::StringW expectedControlType;

  /// @brief Field processors, offset: 0x20, size: 0x8, def value: None
  ::StringW processors;

  /// @brief Field interactions, offset: 0x28, size: 0x8, def value: None
  ::StringW interactions;

  /// @brief Field initialStateCheck, offset: 0x30, size: 0x1, def value: None
  bool initialStateCheck;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteActionJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteActionJson, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteActionJson, id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteActionJson, expectedControlType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteActionJson, processors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteActionJson, interactions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteActionJson, initialStateCheck) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap_WriteActionJson, 0x38>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/ReadMapJson
struct CORDL_TYPE InputActionMap_ReadMapJson {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap_ReadMapJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "actions",
  // ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadActionJson,::Array<::UnityEngine::InputSystem::InputActionMap_ReadActionJson>*>", modifiers: "", def_value: None }, CppParam { name:
  // "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_BindingJson,::Array<::UnityEngine::InputSystem::InputActionMap_BindingJson>*>", modifiers: "", def_value: None }]
  constexpr InputActionMap_ReadMapJson(::StringW name, ::StringW id,
                                       ::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadActionJson, ::Array<::UnityEngine::InputSystem::InputActionMap_ReadActionJson>*> actions,
                                       ::ArrayW<::UnityEngine::InputSystem::InputActionMap_BindingJson, ::Array<::UnityEngine::InputSystem::InputActionMap_BindingJson>*> bindings) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6549 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field id, offset: 0x8, size: 0x8, def value: None
  ::StringW id;

  /// @brief Field actions, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadActionJson, ::Array<::UnityEngine::InputSystem::InputActionMap_ReadActionJson>*> actions;

  /// @brief Field bindings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap_BindingJson, ::Array<::UnityEngine::InputSystem::InputActionMap_BindingJson>*> bindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadMapJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadMapJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadMapJson, actions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadMapJson, bindings) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap_ReadMapJson, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/WriteMapJson
struct CORDL_TYPE InputActionMap_WriteMapJson {
public:
  // Declarations
  /// @brief Method FromMap, addr 0x454450c, size 0x1e8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap_WriteMapJson FromMap(::UnityEngine::InputSystem::InputActionMap* map);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap_WriteMapJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "actions",
  // ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteActionJson,::Array<::UnityEngine::InputSystem::InputActionMap_WriteActionJson>*>", modifiers: "", def_value: None }, CppParam { name:
  // "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_BindingJson,::Array<::UnityEngine::InputSystem::InputActionMap_BindingJson>*>", modifiers: "", def_value: None }]
  constexpr InputActionMap_WriteMapJson(::StringW name, ::StringW id,
                                        ::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteActionJson, ::Array<::UnityEngine::InputSystem::InputActionMap_WriteActionJson>*> actions,
                                        ::ArrayW<::UnityEngine::InputSystem::InputActionMap_BindingJson, ::Array<::UnityEngine::InputSystem::InputActionMap_BindingJson>*> bindings) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6550 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field id, offset: 0x8, size: 0x8, def value: None
  ::StringW id;

  /// @brief Field actions, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteActionJson, ::Array<::UnityEngine::InputSystem::InputActionMap_WriteActionJson>*> actions;

  /// @brief Field bindings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap_BindingJson, ::Array<::UnityEngine::InputSystem::InputActionMap_BindingJson>*> bindings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteMapJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteMapJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteMapJson, actions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteMapJson, bindings) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap_WriteMapJson, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/WriteFileJson
struct CORDL_TYPE InputActionMap_WriteFileJson {
public:
  // Declarations
  /// @brief Method FromMap, addr 0x4543ccc, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap_WriteFileJson FromMap(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method FromMaps, addr 0x453eaf8, size 0x374, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap_WriteFileJson FromMaps(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>* maps);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap_WriteFileJson();

  // Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson,::Array<::UnityEngine::InputSystem::InputActionMap_WriteMapJson>*>", modifiers: "",
  // def_value: None }]
  constexpr InputActionMap_WriteFileJson(::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson, ::Array<::UnityEngine::InputSystem::InputActionMap_WriteMapJson>*> maps) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6551 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field maps, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap_WriteMapJson, ::Array<::UnityEngine::InputSystem::InputActionMap_WriteMapJson>*> maps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_WriteFileJson, maps) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap_WriteFileJson, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionMap/ReadFileJson
struct CORDL_TYPE InputActionMap_ReadFileJson {
public:
  // Declarations
  /// @brief Method ToMaps, addr 0x45405d4, size 0xfb4, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> ToMaps();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap_ReadFileJson();

  // Ctor Parameters [CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadActionJson,::Array<::UnityEngine::InputSystem::InputActionMap_ReadActionJson>*>",
  // modifiers: "", def_value: None }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadMapJson,::Array<::UnityEngine::InputSystem::InputActionMap_ReadMapJson>*>",
  // modifiers: "", def_value: None }]
  constexpr InputActionMap_ReadFileJson(::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadActionJson, ::Array<::UnityEngine::InputSystem::InputActionMap_ReadActionJson>*> actions,
                                        ::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadMapJson, ::Array<::UnityEngine::InputSystem::InputActionMap_ReadMapJson>*> maps) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6552 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field actions, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadActionJson, ::Array<::UnityEngine::InputSystem::InputActionMap_ReadActionJson>*> actions;

  /// @brief Field maps, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionMap_ReadMapJson, ::Array<::UnityEngine::InputSystem::InputActionMap_ReadMapJson>*> maps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadFileJson, actions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap_ReadFileJson, maps) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap_ReadFileJson, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.ICloneable, System.IDisposable, System.Nullable`1<T>, System.Object,
// UnityEngine.ISerializationCallbackReceiver, UnityEngine.InputSystem.IInputActionCollection, UnityEngine.InputSystem.IInputActionCollection2, UnityEngine.InputSystem.InputActionMap::DeviceArray,
// UnityEngine.InputSystem.InputActionMap::Flags, UnityEngine.InputSystem.InputBinding, UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionMap
class CORDL_TYPE InputActionMap : public ::System::Object {
public:
  // Declarations
  using BindingJson = ::UnityEngine::InputSystem::InputActionMap_BindingJson;

  using BindingOverrideJson = ::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson;

  using BindingOverrideListJson = ::UnityEngine::InputSystem::InputActionMap_BindingOverrideListJson;

  using DeviceArray = ::UnityEngine::InputSystem::InputActionMap_DeviceArray;

  using Flags = ::UnityEngine::InputSystem::InputActionMap_Flags;

  using ReadActionJson = ::UnityEngine::InputSystem::InputActionMap_ReadActionJson;

  using ReadFileJson = ::UnityEngine::InputSystem::InputActionMap_ReadFileJson;

  using ReadMapJson = ::UnityEngine::InputSystem::InputActionMap_ReadMapJson;

  using WriteActionJson = ::UnityEngine::InputSystem::InputActionMap_WriteActionJson;

  using WriteFileJson = ::UnityEngine::InputSystem::InputActionMap_WriteFileJson;

  using WriteMapJson = ::UnityEngine::InputSystem::InputActionMap_WriteMapJson;

  __declspec(property(get = get_Item)) ::UnityEngine::InputSystem::InputAction* Item[];

  __declspec(property(get = UnityEngine_InputSystem_IInputActionCollection2_get_bindings)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*
      UnityEngine_InputSystem_IInputActionCollection2_bindings;

  __declspec(property(get = get_actions)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> actions;

  __declspec(property(get = get_asset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset> asset;

  __declspec(property(get = get_bindingMask, put = set_bindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask;

  __declspec(property(get = get_bindingResolutionNeedsFullReResolve, put = set_bindingResolutionNeedsFullReResolve)) bool bindingResolutionNeedsFullReResolve;

  __declspec(property(get = get_bindings)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> bindings;

  __declspec(property(get = get_bindingsForEachActionInitialized, put = set_bindingsForEachActionInitialized)) bool bindingsForEachActionInitialized;

  __declspec(property(get = get_controlSchemes)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> controlSchemes;

  __declspec(property(get = get_controlsForEachActionInitialized, put = set_controlsForEachActionInitialized)) bool controlsForEachActionInitialized;

  __declspec(property(get = get_devices, put = set_devices)) ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> devices;

  __declspec(property(get = get_enabled)) bool enabled;

  __declspec(property(get = get_id)) ::System::Guid id;

  __declspec(property(get = get_idDontGenerate)) ::System::Guid idDontGenerate;

  /// @brief Field m_ActionCallbacks, offset 0xe8, size 0x50
  __declspec(property(get = __cordl_internal_get_m_ActionCallbacks,
                      put =
                          __cordl_internal_set_m_ActionCallbacks)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>
      m_ActionCallbacks;

  /// @brief Field m_ActionIndexByNameOrId, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionIndexByNameOrId,
                      put = __cordl_internal_set_m_ActionIndexByNameOrId)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* m_ActionIndexByNameOrId;

  /// @brief Field m_Actions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Actions,
                      put = __cordl_internal_set_m_Actions)) ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*>
      m_Actions;

  /// @brief Field m_Asset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Asset, put = __cordl_internal_set_m_Asset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_Asset;

  /// @brief Field m_BindingMask, offset 0x68, size 0x60
  __declspec(property(get = __cordl_internal_get_m_BindingMask, put = __cordl_internal_set_m_BindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask;

  /// @brief Field m_Bindings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Bindings,
                      put = __cordl_internal_set_m_Bindings)) ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*>
      m_Bindings;

  /// @brief Field m_BindingsForEachAction, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindingsForEachAction,
                      put = __cordl_internal_set_m_BindingsForEachAction)) ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*>
      m_BindingsForEachAction;

  /// @brief Field m_ControlsForEachAction, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlsForEachAction,
                      put = __cordl_internal_set_m_ControlsForEachAction)) ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>
      m_ControlsForEachAction;

  /// @brief Field m_Devices, offset 0xd8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Devices, put = __cordl_internal_set_m_Devices)) ::UnityEngine::InputSystem::InputActionMap_DeviceArray m_Devices;

  /// @brief Field m_EnabledActionsCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EnabledActionsCount, put = __cordl_internal_set_m_EnabledActionsCount)) int32_t m_EnabledActionsCount;

  /// @brief Field m_Flags, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::UnityEngine::InputSystem::InputActionMap_Flags m_Flags;

  /// @brief Field m_Id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Id, put = __cordl_internal_set_m_Id)) ::StringW m_Id;

  /// @brief Field m_MapIndexInState, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MapIndexInState, put = __cordl_internal_set_m_MapIndexInState)) int32_t m_MapIndexInState;

  /// @brief Field m_Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::StringW m_Name;

  /// @brief Field m_ParameterOverrides, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParameterOverrides,
                      put = __cordl_internal_set_m_ParameterOverrides)) ::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride,
                                                                                 ::Array<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>*>
      m_ParameterOverrides;

  /// @brief Field m_ParameterOverridesCount, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ParameterOverridesCount, put = __cordl_internal_set_m_ParameterOverridesCount)) int32_t m_ParameterOverridesCount;

  /// @brief Field m_SingletonAction, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SingletonAction, put = __cordl_internal_set_m_SingletonAction)) ::UnityEngine::InputSystem::InputAction* m_SingletonAction;

  /// @brief Field m_State, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_State, put = __cordl_internal_set_m_State)) ::UnityEngine::InputSystem::InputActionState* m_State;

  __declspec(property(get = get_name)) ::StringW name;

  __declspec(property(get = get_needToResolveBindings, put = set_needToResolveBindings)) bool needToResolveBindings;

  /// @brief Field s_DeferBindingResolution, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_DeferBindingResolution, put = setStaticF_s_DeferBindingResolution)) int32_t s_DeferBindingResolution;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept;

  /// @brief Method ClearActionLookupTable, addr 0x4542244, size 0x58, virtual false, abstract: false, final false
  inline void ClearActionLookupTable();

  /// @brief Method ClearCachedActionData, addr 0x4542d50, size 0x24, virtual false, abstract: false, final false
  inline void ClearCachedActionData(bool onlyControls);

  /// @brief Method Clone, addr 0x4542330, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* Clone();

  /// @brief Method Contains, addr 0x4542520, size 0x2c, virtual true, abstract: false, final true
  inline bool Contains(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method Disable, addr 0x453fe60, size 0x34, virtual true, abstract: false, final true
  inline void Disable();

  /// @brief Method Dispose, addr 0x4541f10, size 0x14, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enable, addr 0x453fcb4, size 0x4c, virtual true, abstract: false, final true
  inline void Enable();

  /// @brief Method FindAction, addr 0x453f094, size 0x114, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW actionNameOrId, bool throwIfNotFound);

  /// @brief Method FindAction, addr 0x453f684, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::System::Guid id);

  /// @brief Method FindActionIndex, addr 0x454229c, size 0x94, virtual false, abstract: false, final false
  inline int32_t FindActionIndex(::System::Guid id);

  /// @brief Method FindActionIndex, addr 0x4541f24, size 0x204, virtual false, abstract: false, final false
  inline int32_t FindActionIndex(::StringW nameOrId);

  /// @brief Method FindBinding, addr 0x453f294, size 0xe0, virtual true, abstract: false, final true
  inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding mask, ::ByRef<::UnityEngine::InputSystem::InputAction*> action);

  /// @brief Method FindBindingRelativeToMap, addr 0x4543a44, size 0xb8, virtual false, abstract: false, final false
  inline int32_t FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding mask);

  /// @brief Method FromJson, addr 0x4543afc, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> FromJson(::StringW json);

  /// @brief Method GenerateId, addr 0x4541a5c, size 0x34, virtual false, abstract: false, final false
  inline void GenerateId();

  /// @brief Method GetBindingsForSingleAction, addr 0x453bfe4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method GetControlsForSingleAction, addr 0x453c0dc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method GetEnumerator, addr 0x4542614, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator();

  /// @brief Method IsUsableWithDevice, addr 0x453fa40, size 0x114, virtual false, abstract: false, final false
  inline bool IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method LazyResolveBindings, addr 0x453bf08, size 0xac, virtual false, abstract: false, final false
  inline bool LazyResolveBindings(bool fullResolve);

  static inline ::UnityEngine::InputSystem::InputActionMap* New_ctor();

  static inline ::UnityEngine::InputSystem::InputActionMap* New_ctor(::StringW name);

  /// @brief Method OnAfterDeserialize, addr 0x4543d5c, size 0x64, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x4543d58, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnBindingModified, addr 0x4542d74, size 0x1c, virtual false, abstract: false, final false
  inline void OnBindingModified();

  /// @brief Method OnSetupChanged, addr 0x4540334, size 0x1d0, virtual false, abstract: false, final false
  inline void OnSetupChanged();

  /// @brief Method OnWantToChangeSetup, addr 0x4540030, size 0x280, virtual false, abstract: false, final false
  inline void OnWantToChangeSetup();

  /// @brief Method ResolveBindings, addr 0x4542d90, size 0xbd8, virtual false, abstract: false, final false
  inline void ResolveBindings();

  /// @brief Method ResolveBindingsIfNecessary, addr 0x453c0a8, size 0x34, virtual false, abstract: false, final false
  inline bool ResolveBindingsIfNecessary();

  /// @brief Method SetUpActionLookupTable, addr 0x4542128, size 0x11c, virtual false, abstract: false, final false
  inline void SetUpActionLookupTable();

  /// @brief Method SetUpPerActionControlAndBindingArrays, addr 0x4542758, size 0x5f8, virtual false, abstract: false, final false
  inline void SetUpPerActionControlAndBindingArrays();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x45426b4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.ICloneable.Clone, addr 0x454251c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToJson, addr 0x4543c5c, size 0x70, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method ToJson, addr 0x4543ba8, size 0xb4, virtual false, abstract: false, final false
  static inline ::StringW ToJson(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>* maps);

  /// @brief Method ToString, addr 0x454254c, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UnityEngine.InputSystem.IInputActionCollection2.get_bindings, addr 0x4541af0, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine_InputSystem_IInputActionCollection2_get_bindings();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> const& __cordl_internal_get_m_ActionCallbacks() const;

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*>& __cordl_internal_get_m_ActionCallbacks();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& __cordl_internal_get_m_ActionIndexByNameOrId() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get_m_ActionIndexByNameOrId();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> const& __cordl_internal_get_m_Actions() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*>& __cordl_internal_get_m_Actions();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_Asset() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_Asset();

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_m_BindingMask() const;

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_m_BindingMask();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> const& __cordl_internal_get_m_Bindings() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*>& __cordl_internal_get_m_Bindings();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> const& __cordl_internal_get_m_BindingsForEachAction() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*>& __cordl_internal_get_m_BindingsForEachAction();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> const& __cordl_internal_get_m_ControlsForEachAction() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*>& __cordl_internal_get_m_ControlsForEachAction();

  constexpr ::UnityEngine::InputSystem::InputActionMap_DeviceArray const& __cordl_internal_get_m_Devices() const;

  constexpr ::UnityEngine::InputSystem::InputActionMap_DeviceArray& __cordl_internal_get_m_Devices();

  constexpr int32_t const& __cordl_internal_get_m_EnabledActionsCount() const;

  constexpr int32_t& __cordl_internal_get_m_EnabledActionsCount();

  constexpr ::UnityEngine::InputSystem::InputActionMap_Flags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::InputSystem::InputActionMap_Flags& __cordl_internal_get_m_Flags();

  constexpr ::StringW const& __cordl_internal_get_m_Id() const;

  constexpr ::StringW& __cordl_internal_get_m_Id();

  constexpr int32_t const& __cordl_internal_get_m_MapIndexInState() const;

  constexpr int32_t& __cordl_internal_get_m_MapIndexInState();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, ::Array<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>*> const&
  __cordl_internal_get_m_ParameterOverrides() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, ::Array<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>*>&
  __cordl_internal_get_m_ParameterOverrides();

  constexpr int32_t const& __cordl_internal_get_m_ParameterOverridesCount() const;

  constexpr int32_t& __cordl_internal_get_m_ParameterOverridesCount();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_SingletonAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_SingletonAction();

  constexpr ::UnityEngine::InputSystem::InputActionState* const& __cordl_internal_get_m_State() const;

  constexpr ::UnityEngine::InputSystem::InputActionState*& __cordl_internal_get_m_State();

  constexpr void __cordl_internal_set_m_ActionCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> value);

  constexpr void __cordl_internal_set_m_ActionIndexByNameOrId(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set_m_Actions(::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> value);

  constexpr void __cordl_internal_set_m_Asset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value);

  constexpr void __cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  constexpr void __cordl_internal_set_m_Bindings(::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> value);

  constexpr void __cordl_internal_set_m_BindingsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> value);

  constexpr void __cordl_internal_set_m_ControlsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value);

  constexpr void __cordl_internal_set_m_Devices(::UnityEngine::InputSystem::InputActionMap_DeviceArray value);

  constexpr void __cordl_internal_set_m_EnabledActionsCount(int32_t value);

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::InputSystem::InputActionMap_Flags value);

  constexpr void __cordl_internal_set_m_Id(::StringW value);

  constexpr void __cordl_internal_set_m_MapIndexInState(int32_t value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_ParameterOverrides(
      ::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, ::Array<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>*> value);

  constexpr void __cordl_internal_set_m_ParameterOverridesCount(int32_t value);

  constexpr void __cordl_internal_set_m_SingletonAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_State(::UnityEngine::InputSystem::InputActionState* value);

  /// @brief Method .ctor, addr 0x453d1c4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4541ee0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method add_actionTriggered, addr 0x4541e30, size 0x58, virtual false, abstract: false, final false
  inline void add_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  static inline int32_t getStaticF_s_DeferBindingResolution();

  /// @brief Method get_Item, addr 0x4541d54, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Item(::StringW actionNameOrId);

  /// @brief Method get_actions, addr 0x45416a4, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> get_actions();

  /// @brief Method get_asset, addr 0x45419f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_asset();

  /// @brief Method get_bindingMask, addr 0x4541bd8, size 0x10, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask();

  /// @brief Method get_bindingResolutionNeedsFullReResolve, addr 0x45426d4, size 0xc, virtual false, abstract: false, final false
  inline bool get_bindingResolutionNeedsFullReResolve();

  /// @brief Method get_bindings, addr 0x4541a90, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> get_bindings();

  /// @brief Method get_bindingsForEachActionInitialized, addr 0x454272c, size 0xc, virtual false, abstract: false, final false
  inline bool get_bindingsForEachActionInitialized();

  /// @brief Method get_controlSchemes, addr 0x4541b54, size 0x84, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes();

  /// @brief Method get_controlsForEachActionInitialized, addr 0x4542700, size 0xc, virtual false, abstract: false, final false
  inline bool get_controlsForEachActionInitialized();

  /// @brief Method get_devices, addr 0x453d308, size 0xd8, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices();

  /// @brief Method get_enabled, addr 0x453e198, size 0x10, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_id, addr 0x45419f8, size 0x64, virtual false, abstract: false, final false
  inline ::System::Guid get_id();

  /// @brief Method get_idDontGenerate, addr 0x453f534, size 0x48, virtual false, abstract: false, final false
  inline ::System::Guid get_idDontGenerate();

  /// @brief Method get_name, addr 0x45419e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_needToResolveBindings, addr 0x45426b8, size 0xc, virtual false, abstract: false, final false
  inline bool get_needToResolveBindings();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputAction__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr ::UnityEngine::InputSystem::IInputActionCollection* i___UnityEngine__InputSystem__IInputActionCollection() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection2"
  constexpr ::UnityEngine::InputSystem::IInputActionCollection2* i___UnityEngine__InputSystem__IInputActionCollection2() noexcept;

  /// @brief Method remove_actionTriggered, addr 0x4541e88, size 0x58, virtual false, abstract: false, final false
  inline void remove_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  static inline void setStaticF_s_DeferBindingResolution(int32_t value);

  /// @brief Method set_bindingMask, addr 0x4541be8, size 0x128, virtual true, abstract: false, final true
  inline void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  /// @brief Method set_bindingResolutionNeedsFullReResolve, addr 0x45426e0, size 0x20, virtual false, abstract: false, final false
  inline void set_bindingResolutionNeedsFullReResolve(bool value);

  /// @brief Method set_bindingsForEachActionInitialized, addr 0x4542738, size 0x20, virtual false, abstract: false, final false
  inline void set_bindingsForEachActionInitialized(bool value);

  /// @brief Method set_controlsForEachActionInitialized, addr 0x454270c, size 0x20, virtual false, abstract: false, final false
  inline void set_controlsForEachActionInitialized(bool value);

  /// @brief Method set_devices, addr 0x4541d10, size 0x44, virtual true, abstract: false, final true
  inline void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value);

  /// @brief Method set_needToResolveBindings, addr 0x45426c4, size 0x10, virtual false, abstract: false, final false
  inline void set_needToResolveBindings(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionMap(InputActionMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionMap(InputActionMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6553 };

  /// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_Id, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_Id;

  /// @brief Field m_Asset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> ___m_Asset;

  /// @brief Field m_Actions, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> ___m_Actions;

  /// @brief Field m_Bindings, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> ___m_Bindings;

  /// @brief Field m_BindingsForEachAction, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> ___m_BindingsForEachAction;

  /// @brief Field m_ControlsForEachAction, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> ___m_ControlsForEachAction;

  /// @brief Field m_EnabledActionsCount, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_EnabledActionsCount;

  /// @brief Field m_SingletonAction, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_SingletonAction;

  /// @brief Field m_MapIndexInState, offset: 0x58, size: 0x4, def value: None
  int32_t ___m_MapIndexInState;

  /// @brief Field m_State, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionState* ___m_State;

  /// @brief Field m_BindingMask, offset: 0x68, size: 0x60, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ___m_BindingMask;

  /// @brief Field m_Flags, offset: 0xc8, size: 0x4, def value: None
  ::UnityEngine::InputSystem::InputActionMap_Flags ___m_Flags;

  /// @brief Field m_ParameterOverridesCount, offset: 0xcc, size: 0x4, def value: None
  int32_t ___m_ParameterOverridesCount;

  /// @brief Field m_ParameterOverrides, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, ::Array<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>*>
      ___m_ParameterOverrides;

  /// @brief Field m_Devices, offset: 0xd8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::InputActionMap_DeviceArray ___m_Devices;

  /// @brief Field m_ActionCallbacks, offset: 0xe8, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*> ___m_ActionCallbacks;

  /// @brief Field m_ActionIndexByNameOrId, offset: 0x138, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___m_ActionIndexByNameOrId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Asset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Actions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Bindings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_BindingsForEachAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_ControlsForEachAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_EnabledActionsCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_SingletonAction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_MapIndexInState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_State) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_BindingMask) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Flags) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_ParameterOverridesCount) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_ParameterOverrides) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_Devices) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_ActionCallbacks) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionMap, ___m_ActionIndexByNameOrId) == 0x138, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap, 0x140>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap_Flags, "UnityEngine.InputSystem", "InputActionMap/Flags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionMap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap*, "UnityEngine.InputSystem", "InputActionMap");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap_BindingJson, "UnityEngine.InputSystem", "InputActionMap/BindingJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson, "UnityEngine.InputSystem", "InputActionMap/BindingOverrideJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap_BindingOverrideListJson, "UnityEngine.InputSystem", "InputActionMap/BindingOverrideListJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap_DeviceArray, "UnityEngine.InputSystem", "InputActionMap/DeviceArray");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap_ReadActionJson, "UnityEngine.InputSystem", "InputActionMap/ReadActionJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap_ReadFileJson, "UnityEngine.InputSystem", "InputActionMap/ReadFileJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap_ReadMapJson, "UnityEngine.InputSystem", "InputActionMap/ReadMapJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap_WriteActionJson, "UnityEngine.InputSystem", "InputActionMap/WriteActionJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap_WriteFileJson, "UnityEngine.InputSystem", "InputActionMap/WriteFileJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap_WriteMapJson, "UnityEngine.InputSystem", "InputActionMap/WriteMapJson");
