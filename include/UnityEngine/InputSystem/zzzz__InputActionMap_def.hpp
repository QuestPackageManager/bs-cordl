#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class IEnumerable;
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
class ICloneable;
}
namespace System {
class IDisposable;
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
class IInputActionCollection2;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionState;
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
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingOverrideJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingOverrideListJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__DeviceArray;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__Flags;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadActionJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadFileJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadMapJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteActionJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteFileJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteMapJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterOverride;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputActionMap__Flags;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingOverrideJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__BindingOverrideListJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__DeviceArray;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadActionJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadFileJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__ReadMapJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteActionJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteFileJson;
}
namespace UnityEngine::InputSystem {
struct __InputActionMap__WriteMapJson;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__Flags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionMap);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__BindingJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__DeviceArray);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__ReadFileJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__ReadMapJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__WriteActionJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__WriteFileJson);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionMap__WriteMapJson);
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionMap::Flags
struct CORDL_TYPE __InputActionMap__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputActionMap__Flags_Unwrapped
  enum struct ____InputActionMap__Flags_Unwrapped : int32_t {
    __E_NeedToResolveBindings = static_cast<int32_t>(0x1),
    __E_BindingResolutionNeedsFullReResolve = static_cast<int32_t>(0x2),
    __E_ControlsForEachActionInitialized = static_cast<int32_t>(0x4),
    __E_BindingsForEachActionInitialized = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputActionMap__Flags_Unwrapped() const noexcept {
    return static_cast<____InputActionMap__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionMap__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionMap__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BindingResolutionNeedsFullReResolve value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputActionMap__Flags const BindingResolutionNeedsFullReResolve;

  /// @brief Field BindingsForEachActionInitialized value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::__InputActionMap__Flags const BindingsForEachActionInitialized;

  /// @brief Field ControlsForEachActionInitialized value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::__InputActionMap__Flags const ControlsForEachActionInitialized;

  /// @brief Field NeedToResolveBindings value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputActionMap__Flags const NeedToResolveBindings;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::DeviceArray
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionMap::DeviceArray
struct CORDL_TYPE __InputActionMap__DeviceArray {
public:
  // Declarations
  /// @brief Method Get, addr 0x2b22d14, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> Get();

  /// @brief Method IndexOf, addr 0x2b28778, size 0x5c, virtual false, abstract: false, final false
  inline int32_t IndexOf(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Remove, addr 0x2b287d4, size 0x74, virtual false, abstract: false, final false
  inline bool Remove(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Set, addr 0x2b22e00, size 0x17c, virtual false, abstract: false, final false
  inline bool Set(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> devices);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionMap__DeviceArray();

  // Ctor Parameters [CppParam { name: "m_HaveValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_DeviceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_DeviceArray", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: None }]
  constexpr __InputActionMap__DeviceArray(bool m_HaveValue, int32_t m_DeviceCount,
                                          ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> m_DeviceArray) noexcept;

  /// @brief Field m_HaveValue, offset: 0x0, size: 0x1, def value: None
  bool m_HaveValue;

  /// @brief Field m_DeviceCount, offset: 0x4, size: 0x4, def value: None
  int32_t m_DeviceCount;

  /// @brief Field m_DeviceArray, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> m_DeviceArray;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__DeviceArray, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__DeviceArray, m_HaveValue) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__DeviceArray, m_DeviceCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__DeviceArray, m_DeviceArray) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::BindingOverrideListJson
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionMap::BindingOverrideListJson
struct CORDL_TYPE __InputActionMap__BindingOverrideListJson {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionMap__BindingOverrideListJson();

  // Ctor Parameters [CppParam { name: "bindings", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*", modifiers: "", def_value: None }]
  constexpr __InputActionMap__BindingOverrideListJson(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>* bindings) noexcept;

  /// @brief Field bindings, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>* bindings;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson, bindings) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::BindingOverrideJson
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionMap::BindingOverrideJson
struct CORDL_TYPE __InputActionMap__BindingOverrideJson {
public:
  // Declarations
  /// @brief Method FromBinding, addr 0x2b28848, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson FromBinding(::UnityEngine::InputSystem::InputBinding binding);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionMap__BindingOverrideJson();

  // Ctor Parameters [CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path",
  // ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers:
  // "", def_value: None }]
  constexpr __InputActionMap__BindingOverrideJson(::StringW action, ::StringW id, ::StringW path, ::StringW interactions, ::StringW processors) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson, action) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson, path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson, interactions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson, processors) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::BindingJson
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 74, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionMap::BindingJson
struct CORDL_TYPE __InputActionMap__BindingJson {
public:
  // Declarations
  /// @brief Method FromBinding, addr 0x2b28980, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionMap__BindingJson FromBinding(ByRef<::UnityEngine::InputSystem::InputBinding> binding);

  /// @brief Method ToBinding, addr 0x2b28868, size 0x118, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputBinding ToBinding();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionMap__BindingJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "path", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "groups", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "isComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPartOfComposite", ty: "bool", modifiers: "", def_value: None }]
  constexpr __InputActionMap__BindingJson(::StringW name, ::StringW id, ::StringW path, ::StringW interactions, ::StringW processors, ::StringW groups, ::StringW action, bool isComposite,
                                          bool isPartOfComposite) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__BindingJson, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingJson, path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingJson, interactions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingJson, processors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingJson, groups) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingJson, action) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingJson, isComposite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__BindingJson, isPartOfComposite) == 0x39, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::ReadActionJson
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionMap::ReadActionJson
struct CORDL_TYPE __InputActionMap__ReadActionJson {
public:
  // Declarations
  /// @brief Method ToAction, addr 0x2b28a10, size 0x25c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* ToAction(::StringW actionName);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionMap__ReadActionJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlLayout", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "passThrough", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>", modifiers: "", def_value: None }]
  constexpr __InputActionMap__ReadActionJson(
      ::StringW name, ::StringW type, ::StringW id, ::StringW expectedControlType, ::StringW expectedControlLayout, ::StringW processors, ::StringW interactions, bool passThrough,
      bool initialStateCheck, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> bindings) noexcept;

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
  ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> bindings;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, expectedControlType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, expectedControlLayout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, processors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, interactions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, passThrough) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, initialStateCheck) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, bindings) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::WriteActionJson
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionMap::WriteActionJson
struct CORDL_TYPE __InputActionMap__WriteActionJson {
public:
  // Declarations
  /// @brief Method FromAction, addr 0x2b28c6c, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionMap__WriteActionJson FromAction(::UnityEngine::InputSystem::InputAction* action);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionMap__WriteActionJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "processors", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value:
  // None }]
  constexpr __InputActionMap__WriteActionJson(::StringW name, ::StringW type, ::StringW id, ::StringW expectedControlType, ::StringW processors, ::StringW interactions,
                                              bool initialStateCheck) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, expectedControlType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, processors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, interactions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, initialStateCheck) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::ReadMapJson
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionMap::ReadMapJson
struct CORDL_TYPE __InputActionMap__ReadMapJson {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionMap__ReadMapJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "actions",
  // ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>", modifiers: "", def_value: None }, CppParam {
  // name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>", modifiers: "", def_value: None }]
  constexpr __InputActionMap__ReadMapJson(::StringW name, ::StringW id,
                                          ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*> actions,
                                          ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> bindings) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field id, offset: 0x8, size: 0x8, def value: None
  ::StringW id;

  /// @brief Field actions, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*> actions;

  /// @brief Field bindings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> bindings;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, actions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, bindings) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::WriteMapJson
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionMap::WriteMapJson
struct CORDL_TYPE __InputActionMap__WriteMapJson {
public:
  // Declarations
  /// @brief Method FromMap, addr 0x2b28d28, size 0x1f0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionMap__WriteMapJson FromMap(::UnityEngine::InputSystem::InputActionMap* map);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionMap__WriteMapJson();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "actions",
  // ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>", modifiers: "", def_value: None }, CppParam {
  // name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>", modifiers: "", def_value: None }]
  constexpr __InputActionMap__WriteMapJson(::StringW name, ::StringW id,
                                           ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*> actions,
                                           ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> bindings) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field id, offset: 0x8, size: 0x8, def value: None
  ::StringW id;

  /// @brief Field actions, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*> actions;

  /// @brief Field bindings, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> bindings;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, id) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, actions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, bindings) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::WriteFileJson
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionMap::WriteFileJson
struct CORDL_TYPE __InputActionMap__WriteFileJson {
public:
  // Declarations
  /// @brief Method FromMap, addr 0x2b28684, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson FromMap(::UnityEngine::InputSystem::InputActionMap* map);

  /// @brief Method FromMaps, addr 0x2b233d0, size 0x388, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson FromMaps(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>* maps);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionMap__WriteFileJson();

  // Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>",
  // modifiers: "", def_value: None }]
  constexpr __InputActionMap__WriteFileJson(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*> maps) noexcept;

  /// @brief Field maps, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*> maps;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__WriteFileJson, maps) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::ReadFileJson
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionMap::ReadFileJson
struct CORDL_TYPE __InputActionMap__ReadFileJson {
public:
  // Declarations
  /// @brief Method ToMaps, addr 0x2b24f24, size 0xfb0, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> ToMaps();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionMap__ReadFileJson();

  // Ctor Parameters [CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>",
  // modifiers: "", def_value: None }, CppParam { name: "maps", ty:
  // "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>", modifiers: "", def_value: None }]
  constexpr __InputActionMap__ReadFileJson(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*> actions,
                                           ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*> maps) noexcept;

  /// @brief Field actions, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*> actions;

  /// @brief Field maps, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, ::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*> maps;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionMap__ReadFileJson, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadFileJson, actions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionMap__ReadFileJson, maps) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionMap
// SizeInfo { instance_size: 320, native_size: -1, calculated_instance_size: 320, calculated_native_size: 320, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputActionMap*
class CORDL_TYPE InputActionMap : public ::System::Object {
public:
  // Declarations
  using BindingJson = ::UnityEngine::InputSystem::__InputActionMap__BindingJson;

  using BindingOverrideJson = ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson;

  using BindingOverrideListJson = ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson;

  using DeviceArray = ::UnityEngine::InputSystem::__InputActionMap__DeviceArray;

  using Flags = ::UnityEngine::InputSystem::__InputActionMap__Flags;

  using ReadActionJson = ::UnityEngine::InputSystem::__InputActionMap__ReadActionJson;

  using ReadFileJson = ::UnityEngine::InputSystem::__InputActionMap__ReadFileJson;

  using ReadMapJson = ::UnityEngine::InputSystem::__InputActionMap__ReadMapJson;

  using WriteActionJson = ::UnityEngine::InputSystem::__InputActionMap__WriteActionJson;

  using WriteFileJson = ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson;

  using WriteMapJson = ::UnityEngine::InputSystem::__InputActionMap__WriteMapJson;

  __declspec(property(get = get_Item))::UnityEngine::InputSystem::InputAction* Item[];

  __declspec(property(get = UnityEngine_InputSystem_IInputActionCollection2_get_bindings))::System::Collections::Generic::IEnumerable_1<
      ::UnityEngine::InputSystem::InputBinding>* UnityEngine_InputSystem_IInputActionCollection2_bindings;

  __declspec(property(get = get_actions))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> actions;

  __declspec(property(get = get_asset))::UnityW<::UnityEngine::InputSystem::InputActionAsset> asset;

  __declspec(property(get = get_bindingMask, put = set_bindingMask))::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask;

  __declspec(property(get = get_bindingResolutionNeedsFullReResolve, put = set_bindingResolutionNeedsFullReResolve)) bool bindingResolutionNeedsFullReResolve;

  __declspec(property(get = get_bindings))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> bindings;

  __declspec(property(get = get_bindingsForEachActionInitialized, put = set_bindingsForEachActionInitialized)) bool bindingsForEachActionInitialized;

  __declspec(property(get = get_controlSchemes))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> controlSchemes;

  __declspec(property(get = get_controlsForEachActionInitialized, put = set_controlsForEachActionInitialized)) bool controlsForEachActionInitialized;

  __declspec(property(get = get_devices, put = set_devices))::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> devices;

  __declspec(property(get = get_enabled)) bool enabled;

  __declspec(property(get = get_id))::System::Guid id;

  __declspec(property(get = get_idDontGenerate))::System::Guid idDontGenerate;

  /// @brief Field m_ActionCallbacks, offset 0xe8, size 0x50
  __declspec(property(get = __cordl_internal_get_m_ActionCallbacks, put = __cordl_internal_set_m_ActionCallbacks))::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> m_ActionCallbacks;

  /// @brief Field m_ActionIndexByNameOrId, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionIndexByNameOrId,
                      put = __cordl_internal_set_m_ActionIndexByNameOrId))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* m_ActionIndexByNameOrId;

  /// @brief Field m_Actions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Actions,
                      put = __cordl_internal_set_m_Actions))::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> m_Actions;

  /// @brief Field m_Asset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Asset, put = __cordl_internal_set_m_Asset))::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_Asset;

  /// @brief Field m_BindingMask, offset 0x68, size 0x60
  __declspec(property(get = __cordl_internal_get_m_BindingMask, put = __cordl_internal_set_m_BindingMask))::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask;

  /// @brief Field m_Bindings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Bindings,
                      put = __cordl_internal_set_m_Bindings))::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> m_Bindings;

  /// @brief Field m_BindingsForEachAction, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_BindingsForEachAction,
               put = __cordl_internal_set_m_BindingsForEachAction))::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> m_BindingsForEachAction;

  /// @brief Field m_ControlsForEachAction, offset 0x40, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_ControlsForEachAction,
               put = __cordl_internal_set_m_ControlsForEachAction))::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> m_ControlsForEachAction;

  /// @brief Field m_Devices, offset 0xd8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Devices, put = __cordl_internal_set_m_Devices))::UnityEngine::InputSystem::__InputActionMap__DeviceArray m_Devices;

  /// @brief Field m_EnabledActionsCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EnabledActionsCount, put = __cordl_internal_set_m_EnabledActionsCount)) int32_t m_EnabledActionsCount;

  /// @brief Field m_Flags, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags))::UnityEngine::InputSystem::__InputActionMap__Flags m_Flags;

  /// @brief Field m_Id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Id, put = __cordl_internal_set_m_Id))::StringW m_Id;

  /// @brief Field m_MapIndexInState, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MapIndexInState, put = __cordl_internal_set_m_MapIndexInState)) int32_t m_MapIndexInState;

  /// @brief Field m_Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name))::StringW m_Name;

  /// @brief Field m_ParameterOverrides, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParameterOverrides,
                      put = __cordl_internal_set_m_ParameterOverrides))::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,
                                                                                ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> m_ParameterOverrides;

  /// @brief Field m_ParameterOverridesCount, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ParameterOverridesCount, put = __cordl_internal_set_m_ParameterOverridesCount)) int32_t m_ParameterOverridesCount;

  /// @brief Field m_SingletonAction, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SingletonAction, put = __cordl_internal_set_m_SingletonAction))::UnityEngine::InputSystem::InputAction* m_SingletonAction;

  /// @brief Field m_State, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_State, put = __cordl_internal_set_m_State))::UnityEngine::InputSystem::InputActionState* m_State;

  __declspec(property(get = get_name))::StringW name;

  __declspec(property(get = get_needToResolveBindings, put = set_needToResolveBindings)) bool needToResolveBindings;

  /// @brief Field s_DeferBindingResolution, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_DeferBindingResolution, put = setStaticF_s_DeferBindingResolution)) int32_t s_DeferBindingResolution;

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

  /// @brief Method ClearActionLookupTable, addr 0x2b26bd0, size 0x58, virtual false, abstract: false, final false
  inline void ClearActionLookupTable();

  /// @brief Method ClearCachedActionData, addr 0x2b27704, size 0x28, virtual false, abstract: false, final false
  inline void ClearCachedActionData(bool onlyControls);

  /// @brief Method Clone, addr 0x2b26cbc, size 0x21c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* Clone();

  /// @brief Method Contains, addr 0x2b26edc, size 0x2c, virtual true, abstract: false, final true
  inline bool Contains(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method Disable, addr 0x2b24784, size 0x34, virtual true, abstract: false, final true
  inline void Disable();

  /// @brief Method Dispose, addr 0x2b26898, size 0x14, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enable, addr 0x2b245d8, size 0x4c, virtual true, abstract: false, final true
  inline void Enable();

  /// @brief Method FindAction, addr 0x2b23994, size 0x11c, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW actionNameOrId, bool throwIfNotFound);

  /// @brief Method FindAction, addr 0x2b23f98, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::System::Guid id);

  /// @brief Method FindActionIndex, addr 0x2b26c28, size 0x94, virtual false, abstract: false, final false
  inline int32_t FindActionIndex(::System::Guid id);

  /// @brief Method FindActionIndex, addr 0x2b268ac, size 0x204, virtual false, abstract: false, final false
  inline int32_t FindActionIndex(::StringW nameOrId);

  /// @brief Method FindBinding, addr 0x2b23b9c, size 0xe0, virtual true, abstract: false, final true
  inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding mask, ByRef<::UnityEngine::InputSystem::InputAction*> action);

  /// @brief Method FindBindingRelativeToMap, addr 0x2b283f0, size 0xb8, virtual false, abstract: false, final false
  inline int32_t FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding mask);

  /// @brief Method FromJson, addr 0x2b284a8, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*, ::Array<::UnityEngine::InputSystem::InputActionMap*>*> FromJson(::StringW json);

  /// @brief Method GenerateId, addr 0x2b263c4, size 0x34, virtual false, abstract: false, final false
  inline void GenerateId();

  /// @brief Method GetBindingsForSingleAction, addr 0x2b208cc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method GetControlsForSingleAction, addr 0x2b209c4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method GetEnumerator, addr 0x2b26fd0, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator();

  /// @brief Method IsUsableWithDevice, addr 0x2b24360, size 0x118, virtual false, abstract: false, final false
  inline bool IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method LazyResolveBindings, addr 0x2b207f8, size 0xa4, virtual false, abstract: false, final false
  inline bool LazyResolveBindings(bool fullResolve);

  static inline ::UnityEngine::InputSystem::InputActionMap* New_ctor();

  static inline ::UnityEngine::InputSystem::InputActionMap* New_ctor(::StringW name);

  /// @brief Method OnAfterDeserialize, addr 0x2b28714, size 0x64, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x2b28710, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnBindingModified, addr 0x2b2772c, size 0x1c, virtual false, abstract: false, final false
  inline void OnBindingModified();

  /// @brief Method OnSetupChanged, addr 0x2b24c7c, size 0x1d8, virtual false, abstract: false, final false
  inline void OnSetupChanged();

  /// @brief Method OnWantToChangeSetup, addr 0x2b2495c, size 0x29c, virtual false, abstract: false, final false
  inline void OnWantToChangeSetup();

  /// @brief Method ResolveBindings, addr 0x2b27748, size 0xbc8, virtual false, abstract: false, final false
  inline void ResolveBindings();

  /// @brief Method ResolveBindingsIfNecessary, addr 0x2b20990, size 0x34, virtual false, abstract: false, final false
  inline bool ResolveBindingsIfNecessary();

  /// @brief Method SetUpActionLookupTable, addr 0x2b26ab0, size 0x120, virtual false, abstract: false, final false
  inline void SetUpActionLookupTable();

  /// @brief Method SetUpPerActionControlAndBindingArrays, addr 0x2b27114, size 0x5f0, virtual false, abstract: false, final false
  inline void SetUpPerActionControlAndBindingArrays();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2b27070, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.ICloneable.Clone, addr 0x2b26ed8, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToJson, addr 0x2b28614, size 0x70, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method ToJson, addr 0x2b2855c, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW ToJson(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>* maps);

  /// @brief Method ToString, addr 0x2b26f08, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UnityEngine.InputSystem.IInputActionCollection2.get_bindings, addr 0x2b26458, size 0x64, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine_InputSystem_IInputActionCollection2_get_bindings();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
  __cordl_internal_get_m_ActionCallbacks() const;

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>& __cordl_internal_get_m_ActionCallbacks();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get_m_ActionIndexByNameOrId();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __cordl_internal_get_m_ActionIndexByNameOrId() const;

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

  constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray const& __cordl_internal_get_m_Devices() const;

  constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray& __cordl_internal_get_m_Devices();

  constexpr int32_t const& __cordl_internal_get_m_EnabledActionsCount() const;

  constexpr int32_t& __cordl_internal_get_m_EnabledActionsCount();

  constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags& __cordl_internal_get_m_Flags();

  constexpr ::StringW const& __cordl_internal_get_m_Id() const;

  constexpr ::StringW& __cordl_internal_get_m_Id();

  constexpr int32_t const& __cordl_internal_get_m_MapIndexInState() const;

  constexpr int32_t& __cordl_internal_get_m_MapIndexInState();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> const&
  __cordl_internal_get_m_ParameterOverrides() const;

  constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>&
  __cordl_internal_get_m_ParameterOverrides();

  constexpr int32_t const& __cordl_internal_get_m_ParameterOverridesCount() const;

  constexpr int32_t& __cordl_internal_get_m_ParameterOverridesCount();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_SingletonAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get_m_SingletonAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionState*& __cordl_internal_get_m_State();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> const& __cordl_internal_get_m_State() const;

  constexpr void __cordl_internal_set_m_ActionCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> value);

  constexpr void __cordl_internal_set_m_ActionIndexByNameOrId(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set_m_Actions(::ArrayW<::UnityEngine::InputSystem::InputAction*, ::Array<::UnityEngine::InputSystem::InputAction*>*> value);

  constexpr void __cordl_internal_set_m_Asset(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value);

  constexpr void __cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  constexpr void __cordl_internal_set_m_Bindings(::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> value);

  constexpr void __cordl_internal_set_m_BindingsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputBinding, ::Array<::UnityEngine::InputSystem::InputBinding>*> value);

  constexpr void __cordl_internal_set_m_ControlsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> value);

  constexpr void __cordl_internal_set_m_Devices(::UnityEngine::InputSystem::__InputActionMap__DeviceArray value);

  constexpr void __cordl_internal_set_m_EnabledActionsCount(int32_t value);

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::InputSystem::__InputActionMap__Flags value);

  constexpr void __cordl_internal_set_m_Id(::StringW value);

  constexpr void __cordl_internal_set_m_MapIndexInState(int32_t value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_ParameterOverrides(
      ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> value);

  constexpr void __cordl_internal_set_m_ParameterOverridesCount(int32_t value);

  constexpr void __cordl_internal_set_m_SingletonAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_State(::UnityEngine::InputSystem::InputActionState* value);

  /// @brief Method .ctor, addr 0x2b21a40, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2b26868, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method add_actionTriggered, addr 0x2b267b8, size 0x58, virtual false, abstract: false, final false
  inline void add_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value);

  static inline int32_t getStaticF_s_DeferBindingResolution();

  /// @brief Method get_Item, addr 0x2b266d0, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Item(::StringW actionNameOrId);

  /// @brief Method get_actions, addr 0x2b262a0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> get_actions();

  /// @brief Method get_asset, addr 0x2b26358, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_asset();

  /// @brief Method get_bindingMask, addr 0x2b26540, size 0x10, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask();

  /// @brief Method get_bindingResolutionNeedsFullReResolve, addr 0x2b2709c, size 0xc, virtual false, abstract: false, final false
  inline bool get_bindingResolutionNeedsFullReResolve();

  /// @brief Method get_bindings, addr 0x2b263f8, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> get_bindings();

  /// @brief Method get_bindingsForEachActionInitialized, addr 0x2b270ec, size 0xc, virtual false, abstract: false, final false
  inline bool get_bindingsForEachActionInitialized();

  /// @brief Method get_controlSchemes, addr 0x2b264bc, size 0x84, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes();

  /// @brief Method get_controlsForEachActionInitialized, addr 0x2b270c4, size 0xc, virtual false, abstract: false, final false
  inline bool get_controlsForEachActionInitialized();

  /// @brief Method get_devices, addr 0x2b21b84, size 0xe0, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices();

  /// @brief Method get_enabled, addr 0x2b22a38, size 0x10, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_id, addr 0x2b26360, size 0x64, virtual false, abstract: false, final false
  inline ::System::Guid get_id();

  /// @brief Method get_idDontGenerate, addr 0x2b23e48, size 0x48, virtual false, abstract: false, final false
  inline ::System::Guid get_idDontGenerate();

  /// @brief Method get_name, addr 0x2b26350, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_needToResolveBindings, addr 0x2b27074, size 0xc, virtual false, abstract: false, final false
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

  /// @brief Method remove_actionTriggered, addr 0x2b26810, size 0x58, virtual false, abstract: false, final false
  inline void remove_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value);

  static inline void setStaticF_s_DeferBindingResolution(int32_t value);

  /// @brief Method set_bindingMask, addr 0x2b26550, size 0x13c, virtual true, abstract: false, final true
  inline void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  /// @brief Method set_bindingResolutionNeedsFullReResolve, addr 0x2b270a8, size 0x1c, virtual false, abstract: false, final false
  inline void set_bindingResolutionNeedsFullReResolve(bool value);

  /// @brief Method set_bindingsForEachActionInitialized, addr 0x2b270f8, size 0x1c, virtual false, abstract: false, final false
  inline void set_bindingsForEachActionInitialized(bool value);

  /// @brief Method set_controlsForEachActionInitialized, addr 0x2b270d0, size 0x1c, virtual false, abstract: false, final false
  inline void set_controlsForEachActionInitialized(bool value);

  /// @brief Method set_devices, addr 0x2b2668c, size 0x44, virtual true, abstract: false, final true
  inline void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value);

  /// @brief Method set_needToResolveBindings, addr 0x2b27080, size 0x1c, virtual false, abstract: false, final false
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
  ::UnityEngine::InputSystem::__InputActionMap__Flags ___m_Flags;

  /// @brief Field m_ParameterOverridesCount, offset: 0xcc, size: 0x4, def value: None
  int32_t ___m_ParameterOverridesCount;

  /// @brief Field m_ParameterOverrides, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>
      ___m_ParameterOverrides;

  /// @brief Field m_Devices, offset: 0xd8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::__InputActionMap__DeviceArray ___m_Devices;

  /// @brief Field m_ActionCallbacks, offset: 0xe8, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> ___m_ActionCallbacks;

  /// @brief Field m_ActionIndexByNameOrId, offset: 0x138, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___m_ActionIndexByNameOrId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionMap, 0x140>, "Size mismatch!");

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

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__Flags, "UnityEngine.InputSystem", "InputActionMap/Flags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionMap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionMap*, "UnityEngine.InputSystem", "InputActionMap");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__BindingJson, "UnityEngine.InputSystem", "InputActionMap/BindingJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson, "UnityEngine.InputSystem", "InputActionMap/BindingOverrideJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson, "UnityEngine.InputSystem", "InputActionMap/BindingOverrideListJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__DeviceArray, "UnityEngine.InputSystem", "InputActionMap/DeviceArray");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__ReadActionJson, "UnityEngine.InputSystem", "InputActionMap/ReadActionJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__ReadFileJson, "UnityEngine.InputSystem", "InputActionMap/ReadFileJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__ReadMapJson, "UnityEngine.InputSystem", "InputActionMap/ReadMapJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, "UnityEngine.InputSystem", "InputActionMap/WriteActionJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__WriteFileJson, "UnityEngine.InputSystem", "InputActionMap/WriteFileJson");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, "UnityEngine.InputSystem", "InputActionMap/WriteMapJson");
