#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionRebindingExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionRebindingExtensions)
namespace GlobalNamespace {
struct __InputActionRebindingExtensions__RebindingOperation__Flags;
}
namespace GlobalNamespace {
class __InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0;
}
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
namespace System::Linq::Expressions {
template <typename TDelegate> class Expression_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
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
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
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
template <typename TControl> struct InputControlList_1;
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
struct __InputActionMap__BindingOverrideJson;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions__DeferBindingResolutionWrapper;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterEnumerable;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterEnumerator;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterOverride;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__Parameter;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions__RebindingOperation;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions____c__DisplayClass25_0;
}
namespace UnityEngine::InputSystem {
struct __InputBinding__DisplayStringOptions;
}
// Forward declare root types
namespace GlobalNamespace {
struct __InputActionRebindingExtensions__RebindingOperation__Flags;
}
namespace GlobalNamespace {
class __InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions__DeferBindingResolutionWrapper;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions__RebindingOperation;
}
namespace UnityEngine::InputSystem {
class __InputActionRebindingExtensions____c__DisplayClass25_0;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__Parameter;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterEnumerable;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterEnumerator;
}
namespace UnityEngine::InputSystem {
struct __InputActionRebindingExtensions__ParameterOverride;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags);
MARK_REF_PTR_T(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionRebindingExtensions);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator);
MARK_VAL_T(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride);
// Type: ::Parameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionRebindingExtensions::Parameter
struct CORDL_TYPE __InputActionRebindingExtensions__Parameter {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionRebindingExtensions__Parameter();

  // Ctor Parameters [CppParam { name: "instance", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "field", ty: "::System::Reflection::FieldInfo*", modifiers: "",
  // def_value: None }, CppParam { name: "bindingIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionRebindingExtensions__Parameter(::System::Object* instance, ::System::Reflection::FieldInfo* field, int32_t bindingIndex) noexcept;

  /// @brief Field instance, offset: 0x0, size: 0x8, def value: None
  ::System::Object* instance;

  /// @brief Field field, offset: 0x8, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* field;

  /// @brief Field bindingIndex, offset: 0x10, size: 0x4, def value: None
  int32_t bindingIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6524 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter, instance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter, field) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter, bindingIndex) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::ParameterOverride
// SizeInfo { instance_size: 120, native_size: 120, calculated_instance_size: 120, calculated_native_size: 136, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionRebindingExtensions::ParameterOverride
struct CORDL_TYPE __InputActionRebindingExtensions__ParameterOverride {
public:
  // Declarations
  __declspec(property(get = get_objectType)) ::System::Type* objectType;

  /// @brief Method Find, addr 0x44cfd90, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>
  Find(::UnityEngine::InputSystem::InputActionMap* actionMap, ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::StringW parameterName, ::StringW objectRegistrationName);

  /// @brief Method Find, addr 0x44d4c2c, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>
  Find(::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> overrides,
       int32_t overrideCount, ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::StringW parameterName, ::StringW objectRegistrationName);

  /// @brief Method PickMoreSpecificOne, addr 0x44d4e48, size 0x280, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>
  PickMoreSpecificOne(::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> first,
                      ::System::Nullable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride> second);

  /// @brief Method .ctor, addr 0x44d4bf8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectRegistrationName, ::StringW parameterName, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method .ctor, addr 0x44cedf4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW parameterName, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method get_objectType, addr 0x44d468c, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Type* get_objectType();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionRebindingExtensions__ParameterOverride();

  // Ctor Parameters [CppParam { name: "objectRegistrationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "parameter", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "bindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None }, CppParam { name: "value", ty:
  // "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
  constexpr __InputActionRebindingExtensions__ParameterOverride(::StringW objectRegistrationName, ::StringW parameter, ::UnityEngine::InputSystem::InputBinding bindingMask,
                                                                ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) noexcept;

  /// @brief Field objectRegistrationName, offset: 0x0, size: 0x8, def value: None
  ::StringW objectRegistrationName;

  /// @brief Field parameter, offset: 0x8, size: 0x8, def value: None
  ::StringW parameter;

  /// @brief Field bindingMask, offset: 0x10, size: 0x58, def value: None
  ::UnityEngine::InputSystem::InputBinding bindingMask;

  /// @brief Field value, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6527 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, 0x78>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, objectRegistrationName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, parameter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, bindingMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, value) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::ParameterEnumerable
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 148, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionRebindingExtensions::ParameterEnumerable
struct CORDL_TYPE __InputActionRebindingExtensions__ParameterEnumerable {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method GetEnumerator, addr 0x44cf088, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator, addr 0x44d451c, size 0xb8, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*
  System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x44d45d4, size 0xb8, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x44cf054, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionState* state, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride parameter, int32_t mapIndex);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem____InputActionRebindingExtensions__Parameter_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionRebindingExtensions__ParameterEnumerable();

  // Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_Parameter", ty:
  // "::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr __InputActionRebindingExtensions__ParameterEnumerable(::UnityEngine::InputSystem::InputActionState* m_State,
                                                                  ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride m_Parameter, int32_t m_MapIndex) noexcept;

  /// @brief Field m_State, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionState* m_State;

  /// @brief Field m_Parameter, offset: 0x8, size: 0x78, def value: None
  ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride m_Parameter;

  /// @brief Field m_MapIndex, offset: 0x80, size: 0x4, def value: None
  int32_t m_MapIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6525 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable, m_State) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable, m_Parameter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable, m_MapIndex) == 0x80, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::ParameterEnumerator
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 184, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputActionRebindingExtensions::ParameterEnumerator
struct CORDL_TYPE __InputActionRebindingExtensions__ParameterEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x44d4bf4, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FindParameter, addr 0x44d4a38, size 0xe8, virtual false, abstract: false, final false
  inline bool FindParameter(::System::Object* instance);

  /// @brief Method MoveNext, addr 0x44cf0fc, size 0xb4, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method MoveToNextBinding, addr 0x44d480c, size 0x1bc, virtual false, abstract: false, final false
  inline bool MoveToNextBinding();

  /// @brief Method MoveToNextInteraction, addr 0x44d49c8, size 0x70, virtual false, abstract: false, final false
  inline bool MoveToNextInteraction();

  /// @brief Method MoveToNextProcessor, addr 0x44d4b20, size 0x70, virtual false, abstract: false, final false
  inline bool MoveToNextProcessor();

  /// @brief Method Reset, addr 0x44d4740, size 0xcc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x44d4b90, size 0x64, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x44d42d4, size 0x248, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionState* state, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride parameter, int32_t mapIndex);

  /// @brief Method get_Current, addr 0x44cf0e8, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem____InputActionRebindingExtensions__Parameter_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionRebindingExtensions__ParameterEnumerator();

  // Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_BindingCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingEndIndex", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "m_InteractionCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionEndIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_ProcessorCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ProcessorEndIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_BindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None }, CppParam { name: "m_ObjectType", ty: "::System::Type*", modifiers: "", def_value: None },
  // CppParam { name: "m_ParameterName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_MayBeInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "m_MayBeProcessor", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MayBeComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "m_CurrentBindingIsComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_CurrentObject", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name:
  // "m_CurrentParameter", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value: None }]
  constexpr __InputActionRebindingExtensions__ParameterEnumerator(::UnityEngine::InputSystem::InputActionState* m_State, int32_t m_MapIndex, int32_t m_BindingCurrentIndex, int32_t m_BindingEndIndex,
                                                                  int32_t m_InteractionCurrentIndex, int32_t m_InteractionEndIndex, int32_t m_ProcessorCurrentIndex, int32_t m_ProcessorEndIndex,
                                                                  ::UnityEngine::InputSystem::InputBinding m_BindingMask, ::System::Type* m_ObjectType, ::StringW m_ParameterName,
                                                                  bool m_MayBeInteraction, bool m_MayBeProcessor, bool m_MayBeComposite, bool m_CurrentBindingIsComposite,
                                                                  ::System::Object* m_CurrentObject, ::System::Reflection::FieldInfo* m_CurrentParameter) noexcept;

  /// @brief Field m_State, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionState* m_State;

  /// @brief Field m_MapIndex, offset: 0x8, size: 0x4, def value: None
  int32_t m_MapIndex;

  /// @brief Field m_BindingCurrentIndex, offset: 0xc, size: 0x4, def value: None
  int32_t m_BindingCurrentIndex;

  /// @brief Field m_BindingEndIndex, offset: 0x10, size: 0x4, def value: None
  int32_t m_BindingEndIndex;

  /// @brief Field m_InteractionCurrentIndex, offset: 0x14, size: 0x4, def value: None
  int32_t m_InteractionCurrentIndex;

  /// @brief Field m_InteractionEndIndex, offset: 0x18, size: 0x4, def value: None
  int32_t m_InteractionEndIndex;

  /// @brief Field m_ProcessorCurrentIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t m_ProcessorCurrentIndex;

  /// @brief Field m_ProcessorEndIndex, offset: 0x20, size: 0x4, def value: None
  int32_t m_ProcessorEndIndex;

  /// @brief Field m_BindingMask, offset: 0x28, size: 0x58, def value: None
  ::UnityEngine::InputSystem::InputBinding m_BindingMask;

  /// @brief Field m_ObjectType, offset: 0x80, size: 0x8, def value: None
  ::System::Type* m_ObjectType;

  /// @brief Field m_ParameterName, offset: 0x88, size: 0x8, def value: None
  ::StringW m_ParameterName;

  /// @brief Field m_MayBeInteraction, offset: 0x90, size: 0x1, def value: None
  bool m_MayBeInteraction;

  /// @brief Field m_MayBeProcessor, offset: 0x91, size: 0x1, def value: None
  bool m_MayBeProcessor;

  /// @brief Field m_MayBeComposite, offset: 0x92, size: 0x1, def value: None
  bool m_MayBeComposite;

  /// @brief Field m_CurrentBindingIsComposite, offset: 0x93, size: 0x1, def value: None
  bool m_CurrentBindingIsComposite;

  /// @brief Field m_CurrentObject, offset: 0x98, size: 0x8, def value: None
  ::System::Object* m_CurrentObject;

  /// @brief Field m_CurrentParameter, offset: 0xa0, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* m_CurrentParameter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6526 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, 0xa8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_State) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_MapIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_BindingCurrentIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_BindingEndIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_InteractionCurrentIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_InteractionEndIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_ProcessorCurrentIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_ProcessorEndIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_BindingMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_ObjectType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_ParameterName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_MayBeInteraction) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_MayBeProcessor) == 0x91, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_MayBeComposite) == 0x92, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_CurrentBindingIsComposite) == 0x93, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_CurrentObject) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, m_CurrentParameter) == 0xa0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::Flags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InputActionRebindingExtensions::RebindingOperation::Flags
struct CORDL_TYPE __InputActionRebindingExtensions__RebindingOperation__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputActionRebindingExtensions__RebindingOperation__Flags_Unwrapped
  enum struct ____InputActionRebindingExtensions__RebindingOperation__Flags_Unwrapped : int32_t {
    __E_Started = static_cast<int32_t>(0x1),
    __E_Completed = static_cast<int32_t>(0x2),
    __E_Canceled = static_cast<int32_t>(0x4),
    __E_OnEventHooked = static_cast<int32_t>(0x8),
    __E_OnAfterUpdateHooked = static_cast<int32_t>(0x10),
    __E_DontIgnoreNoisyControls = static_cast<int32_t>(0x40),
    __E_DontGeneralizePathOfSelectedControl = static_cast<int32_t>(0x80),
    __E_AddNewBinding = static_cast<int32_t>(0x100),
    __E_SuppressMatchingEvents = static_cast<int32_t>(0x200),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputActionRebindingExtensions__RebindingOperation__Flags_Unwrapped() const noexcept {
    return static_cast<____InputActionRebindingExtensions__RebindingOperation__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionRebindingExtensions__RebindingOperation__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputActionRebindingExtensions__RebindingOperation__Flags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AddNewBinding value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const AddNewBinding;

  /// @brief Field Canceled value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const Canceled;

  /// @brief Field Completed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const Completed;

  /// @brief Field DontGeneralizePathOfSelectedControl value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const DontGeneralizePathOfSelectedControl;

  /// @brief Field DontIgnoreNoisyControls value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const DontIgnoreNoisyControls;

  /// @brief Field OnAfterUpdateHooked value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const OnAfterUpdateHooked;

  /// @brief Field OnEventHooked value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const OnEventHooked;

  /// @brief Field Started value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const Started;

  /// @brief Field SuppressMatchingEvents value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const SuppressMatchingEvents;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6528 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass32_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::InputActionRebindingExtensions::RebindingOperation::<>c__DisplayClass32_0*
class CORDL_TYPE __InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field group, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_group, put = __cordl_internal_set_group)) ::StringW group;

  static inline ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0* New_ctor();

  /// @brief Method <WithTargetBinding>b__0, addr 0x44d6eec, size 0x24, virtual false, abstract: false, final false
  inline bool _WithTargetBinding_b__0(::UnityEngine::InputSystem::InputControlScheme x);

  constexpr ::StringW const& __cordl_internal_get_group() const;

  constexpr ::StringW& __cordl_internal_get_group();

  constexpr void __cordl_internal_set_group(::StringW value);

  /// @brief Method .ctor, addr 0x44d5520, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0(__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0(__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0 const&) = delete;

  /// @brief Field group, offset: 0x10, size: 0x8, def value: None
  ::StringW ___group;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6529 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0, ___group) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RebindingOperation
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputActionRebindingExtensions::RebindingOperation*
class CORDL_TYPE __InputActionRebindingExtensions__RebindingOperation : public ::System::Object {
public:
  // Declarations
  using Flags = ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags;

  using __c__DisplayClass32_0 = ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0;

  __declspec(property(get = get_action)) ::UnityEngine::InputSystem::InputAction* action;

  __declspec(property(get = get_bindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask;

  __declspec(property(get = get_canceled)) bool canceled;

  __declspec(property(get = get_candidates)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> candidates;

  __declspec(property(get = get_completed)) bool completed;

  __declspec(property(get = get_expectedControlType)) ::StringW expectedControlType;

  /// @brief Field m_ActionToRebind, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionToRebind, put = __cordl_internal_set_m_ActionToRebind)) ::UnityEngine::InputSystem::InputAction* m_ActionToRebind;

  /// @brief Field m_BindingGroupForNewBinding, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindingGroupForNewBinding, put = __cordl_internal_set_m_BindingGroupForNewBinding)) ::StringW m_BindingGroupForNewBinding;

  /// @brief Field m_BindingMask, offset 0x18, size 0x60
  __declspec(property(get = __cordl_internal_get_m_BindingMask, put = __cordl_internal_set_m_BindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> m_BindingMask;

  /// @brief Field m_CancelBinding, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CancelBinding, put = __cordl_internal_set_m_CancelBinding)) ::StringW m_CancelBinding;

  /// @brief Field m_Candidates, offset 0xf8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_Candidates, put = __cordl_internal_set_m_Candidates)) ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>
      m_Candidates;

  /// @brief Field m_ControlType, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlType, put = __cordl_internal_set_m_ControlType)) ::System::Type* m_ControlType;

  /// @brief Field m_ExcludePathCount, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ExcludePathCount, put = __cordl_internal_set_m_ExcludePathCount)) int32_t m_ExcludePathCount;

  /// @brief Field m_ExcludePaths, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExcludePaths, put = __cordl_internal_set_m_ExcludePaths)) ::ArrayW<::StringW, ::Array<::StringW>*> m_ExcludePaths;

  /// @brief Field m_ExpectedLayout, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ExpectedLayout, put = __cordl_internal_set_m_ExpectedLayout)) ::UnityEngine::InputSystem::Utilities::InternedString m_ExpectedLayout;

  /// @brief Field m_Flags, offset 0x168, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags m_Flags;

  /// @brief Field m_IncludePathCount, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IncludePathCount, put = __cordl_internal_set_m_IncludePathCount)) int32_t m_IncludePathCount;

  /// @brief Field m_IncludePaths, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IncludePaths, put = __cordl_internal_set_m_IncludePaths)) ::ArrayW<::StringW, ::Array<::StringW>*> m_IncludePaths;

  /// @brief Field m_LastMatchTime, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMatchTime, put = __cordl_internal_set_m_LastMatchTime)) double_t m_LastMatchTime;

  /// @brief Field m_LayoutCache, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LayoutCache, put = __cordl_internal_set_m_LayoutCache)) ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache m_LayoutCache;

  /// @brief Field m_MagnitudeThreshold, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MagnitudeThreshold, put = __cordl_internal_set_m_MagnitudeThreshold)) float_t m_MagnitudeThreshold;

  /// @brief Field m_Magnitudes, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Magnitudes, put = __cordl_internal_set_m_Magnitudes)) ::ArrayW<float_t, ::Array<float_t>*> m_Magnitudes;

  /// @brief Field m_OnAfterUpdateDelegate, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnAfterUpdateDelegate, put = __cordl_internal_set_m_OnAfterUpdateDelegate)) ::System::Action* m_OnAfterUpdateDelegate;

  /// @brief Field m_OnApplyBinding, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnApplyBinding,
                      put = __cordl_internal_set_m_OnApplyBinding)) ::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>* m_OnApplyBinding;

  /// @brief Field m_OnCancel, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnCancel,
                      put = __cordl_internal_set_m_OnCancel)) ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* m_OnCancel;

  /// @brief Field m_OnComplete, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnComplete,
                      put = __cordl_internal_set_m_OnComplete)) ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* m_OnComplete;

  /// @brief Field m_OnComputeScore, offset 0x138, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_OnComputeScore,
      put = __cordl_internal_set_m_OnComputeScore)) ::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>* m_OnComputeScore;

  /// @brief Field m_OnEventDelegate, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnEventDelegate,
                      put =
                          __cordl_internal_set_m_OnEventDelegate)) ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* m_OnEventDelegate;

  /// @brief Field m_OnGeneratePath, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnGeneratePath,
                      put = __cordl_internal_set_m_OnGeneratePath)) ::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>* m_OnGeneratePath;

  /// @brief Field m_OnPotentialMatch, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnPotentialMatch,
                      put = __cordl_internal_set_m_OnPotentialMatch)) ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* m_OnPotentialMatch;

  /// @brief Field m_PathBuilder, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PathBuilder, put = __cordl_internal_set_m_PathBuilder)) ::System::Text::StringBuilder* m_PathBuilder;

  /// @brief Field m_Scores, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Scores, put = __cordl_internal_set_m_Scores)) ::ArrayW<float_t, ::Array<float_t>*> m_Scores;

  /// @brief Field m_StartTime, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartTime, put = __cordl_internal_set_m_StartTime)) double_t m_StartTime;

  /// @brief Field m_StartingActuations, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StartingActuations,
                      put = __cordl_internal_set_m_StartingActuations)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>* m_StartingActuations;

  /// @brief Field m_TargetBindingIndex, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TargetBindingIndex, put = __cordl_internal_set_m_TargetBindingIndex)) int32_t m_TargetBindingIndex;

  /// @brief Field m_Timeout, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timeout, put = __cordl_internal_set_m_Timeout)) float_t m_Timeout;

  /// @brief Field m_WaitSecondsAfterMatch, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WaitSecondsAfterMatch, put = __cordl_internal_set_m_WaitSecondsAfterMatch)) float_t m_WaitSecondsAfterMatch;

  __declspec(property(get = get_magnitudes)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> magnitudes;

  __declspec(property(get = get_scores)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> scores;

  __declspec(property(get = get_selectedControl)) ::UnityEngine::InputSystem::InputControl* selectedControl;

  __declspec(property(get = get_startTime)) double_t startTime;

  __declspec(property(get = get_started)) bool started;

  __declspec(property(get = get_timeout)) float_t timeout;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddCandidate, addr 0x44d5e90, size 0x174, virtual false, abstract: false, final false
  inline void AddCandidate(::UnityEngine::InputSystem::InputControl* control, float_t score, float_t magnitude);

  /// @brief Method Cancel, addr 0x44d5b40, size 0x10, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method Complete, addr 0x44d5b8c, size 0x10, virtual false, abstract: false, final false
  inline void Complete();

  /// @brief Method Dispose, addr 0x44d624c, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x44d63ac, size 0x94, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GeneratePathForControl, addr 0x44d6d28, size 0x100, virtual false, abstract: false, final false
  inline ::StringW GeneratePathForControl(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method HavePathMatch, addr 0x44d6bf0, size 0x90, virtual false, abstract: false, final false
  static inline bool HavePathMatch(::UnityEngine::InputSystem::InputControl* control, ::ArrayW<::StringW, ::Array<::StringW>*> paths, int32_t pathCount);

  /// @brief Method HookOnAfterUpdate, addr 0x44d59a8, size 0xc0, virtual false, abstract: false, final false
  inline void HookOnAfterUpdate();

  /// @brief Method HookOnEvent, addr 0x44d5a68, size 0xd8, virtual false, abstract: false, final false
  inline void HookOnEvent();

  static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* New_ctor();

  /// @brief Method OnAfterUpdate, addr 0x44d6c80, size 0xa8, virtual false, abstract: false, final false
  inline void OnAfterUpdate();

  /// @brief Method OnApplyBinding, addr 0x44d5844, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
  OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>* callback);

  /// @brief Method OnCancel, addr 0x44d5824, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
  OnCancel(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* callback);

  /// @brief Method OnCancel, addr 0x44d5b50, size 0x3c, virtual false, abstract: false, final false
  inline void OnCancel();

  /// @brief Method OnComplete, addr 0x44d581c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
  OnComplete(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* callback);

  /// @brief Method OnComplete, addr 0x44d5b9c, size 0x2f4, virtual false, abstract: false, final false
  inline void OnComplete();

  /// @brief Method OnComputeScore, addr 0x44d583c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
  OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>* callback);

  /// @brief Method OnEvent, addr 0x44d64d8, size 0x718, virtual false, abstract: false, final false
  inline void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method OnGeneratePath, addr 0x44d5834, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>* callback);

  /// @brief Method OnMatchWaitForAnother, addr 0x44d3ba8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* OnMatchWaitForAnother(float_t seconds);

  /// @brief Method OnPotentialMatch, addr 0x44d582c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*
  OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* callback);

  /// @brief Method RemoveCandidate, addr 0x44d6134, size 0x118, virtual false, abstract: false, final false
  inline void RemoveCandidate(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method Reset, addr 0x44d6440, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* Reset();

  /// @brief Method ResetAfterMatchCompleted, addr 0x44d6e28, size 0xc4, virtual false, abstract: false, final false
  inline void ResetAfterMatchCompleted();

  /// @brief Method SortCandidatesByScore, addr 0x44d6004, size 0x130, virtual false, abstract: false, final false
  inline void SortCandidatesByScore();

  /// @brief Method Start, addr 0x44d584c, size 0x15c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* Start();

  /// @brief Method ThrowIfRebindInProgress, addr 0x44d5280, size 0x5c, virtual false, abstract: false, final false
  inline void ThrowIfRebindInProgress();

  /// @brief Method UnhookOnAfterUpdate, addr 0x44d6338, size 0x74, virtual false, abstract: false, final false
  inline void UnhookOnAfterUpdate();

  /// @brief Method UnhookOnEvent, addr 0x44d62b0, size 0x88, virtual false, abstract: false, final false
  inline void UnhookOnEvent();

  /// @brief Method WithAction, addr 0x44d3a24, size 0x184, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method WithBindingGroup, addr 0x44d5670, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithBindingGroup(::StringW group);

  /// @brief Method WithBindingMask, addr 0x44d5650, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithBindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask);

  /// @brief Method WithCancelingThrough, addr 0x44d3d28, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithCancelingThrough(::StringW binding);

  /// @brief Method WithCancelingThrough, addr 0x44d5324, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithCancelingThrough(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method WithControlsExcluding, addr 0x44d3bb0, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithControlsExcluding(::StringW path);

  /// @brief Method WithControlsHavingToMatchPath, addr 0x44d5528, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithControlsHavingToMatchPath(::StringW path);

  /// @brief Method WithExpectedControlType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl> inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithExpectedControlType();

  /// @brief Method WithExpectedControlType, addr 0x44d52dc, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithExpectedControlType(::StringW layoutName);

  /// @brief Method WithExpectedControlType, addr 0x44d53b0, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithExpectedControlType(::System::Type* type);

  /// @brief Method WithMagnitudeHavingToBeGreaterThan, addr 0x44d572c, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithMagnitudeHavingToBeGreaterThan(float_t magnitude);

  /// @brief Method WithMatchingEventsBeingSuppressed, addr 0x44d3cd8, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithMatchingEventsBeingSuppressed(bool value);

  /// @brief Method WithRebindAddingNewBinding, addr 0x44d5718, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithRebindAddingNewBinding(::StringW group);

  /// @brief Method WithTargetBinding, addr 0x44d3d50, size 0x52c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithTargetBinding(int32_t bindingIndex);

  /// @brief Method WithTimeout, addr 0x44d5814, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithTimeout(float_t timeInSeconds);

  /// @brief Method WithoutGeneralizingPathOfSelectedControl, addr 0x44d5708, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithoutGeneralizingPathOfSelectedControl();

  /// @brief Method WithoutIgnoringNoisyControls, addr 0x44d57f0, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* WithoutIgnoringNoisyControls();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_ActionToRebind();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get_m_ActionToRebind() const;

  constexpr ::StringW const& __cordl_internal_get_m_BindingGroupForNewBinding() const;

  constexpr ::StringW& __cordl_internal_get_m_BindingGroupForNewBinding();

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_m_BindingMask() const;

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_m_BindingMask();

  constexpr ::StringW const& __cordl_internal_get_m_CancelBinding() const;

  constexpr ::StringW& __cordl_internal_get_m_CancelBinding();

  constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> const& __cordl_internal_get_m_Candidates() const;

  constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>& __cordl_internal_get_m_Candidates();

  constexpr ::System::Type*& __cordl_internal_get_m_ControlType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_m_ControlType() const;

  constexpr int32_t const& __cordl_internal_get_m_ExcludePathCount() const;

  constexpr int32_t& __cordl_internal_get_m_ExcludePathCount();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_ExcludePaths() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_ExcludePaths();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_ExpectedLayout() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_ExpectedLayout();

  constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags const& __cordl_internal_get_m_Flags() const;

  constexpr ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags& __cordl_internal_get_m_Flags();

  constexpr int32_t const& __cordl_internal_get_m_IncludePathCount() const;

  constexpr int32_t& __cordl_internal_get_m_IncludePathCount();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_IncludePaths() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_IncludePaths();

  constexpr double_t const& __cordl_internal_get_m_LastMatchTime() const;

  constexpr double_t& __cordl_internal_get_m_LastMatchTime();

  constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache const& __cordl_internal_get_m_LayoutCache() const;

  constexpr ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache& __cordl_internal_get_m_LayoutCache();

  constexpr float_t const& __cordl_internal_get_m_MagnitudeThreshold() const;

  constexpr float_t& __cordl_internal_get_m_MagnitudeThreshold();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_Magnitudes() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_Magnitudes();

  constexpr ::System::Action*& __cordl_internal_get_m_OnAfterUpdateDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_m_OnAfterUpdateDelegate() const;

  constexpr ::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>*& __cordl_internal_get_m_OnApplyBinding();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>*> const&
  __cordl_internal_get_m_OnApplyBinding() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*& __cordl_internal_get_m_OnCancel();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*> const& __cordl_internal_get_m_OnCancel() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*& __cordl_internal_get_m_OnComplete();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*> const&
  __cordl_internal_get_m_OnComplete() const;

  constexpr ::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>*& __cordl_internal_get_m_OnComputeScore();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>*> const&
  __cordl_internal_get_m_OnComputeScore() const;

  constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*& __cordl_internal_get_m_OnEventDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> const&
  __cordl_internal_get_m_OnEventDelegate() const;

  constexpr ::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>*& __cordl_internal_get_m_OnGeneratePath();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>*> const& __cordl_internal_get_m_OnGeneratePath() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*& __cordl_internal_get_m_OnPotentialMatch();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>*> const&
  __cordl_internal_get_m_OnPotentialMatch() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_m_PathBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_m_PathBuilder() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_Scores() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_Scores();

  constexpr double_t const& __cordl_internal_get_m_StartTime() const;

  constexpr double_t& __cordl_internal_get_m_StartTime();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>*& __cordl_internal_get_m_StartingActuations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>*> const&
  __cordl_internal_get_m_StartingActuations() const;

  constexpr int32_t const& __cordl_internal_get_m_TargetBindingIndex() const;

  constexpr int32_t& __cordl_internal_get_m_TargetBindingIndex();

  constexpr float_t const& __cordl_internal_get_m_Timeout() const;

  constexpr float_t& __cordl_internal_get_m_Timeout();

  constexpr float_t const& __cordl_internal_get_m_WaitSecondsAfterMatch() const;

  constexpr float_t& __cordl_internal_get_m_WaitSecondsAfterMatch();

  constexpr void __cordl_internal_set_m_ActionToRebind(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_BindingGroupForNewBinding(::StringW value);

  constexpr void __cordl_internal_set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  constexpr void __cordl_internal_set_m_CancelBinding(::StringW value);

  constexpr void __cordl_internal_set_m_Candidates(::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> value);

  constexpr void __cordl_internal_set_m_ControlType(::System::Type* value);

  constexpr void __cordl_internal_set_m_ExcludePathCount(int32_t value);

  constexpr void __cordl_internal_set_m_ExcludePaths(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_ExpectedLayout(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr void __cordl_internal_set_m_Flags(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags value);

  constexpr void __cordl_internal_set_m_IncludePathCount(int32_t value);

  constexpr void __cordl_internal_set_m_IncludePaths(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_LastMatchTime(double_t value);

  constexpr void __cordl_internal_set_m_LayoutCache(::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache value);

  constexpr void __cordl_internal_set_m_MagnitudeThreshold(float_t value);

  constexpr void __cordl_internal_set_m_Magnitudes(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_OnAfterUpdateDelegate(::System::Action* value);

  constexpr void __cordl_internal_set_m_OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>* value);

  constexpr void __cordl_internal_set_m_OnCancel(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* value);

  constexpr void __cordl_internal_set_m_OnComplete(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* value);

  constexpr void __cordl_internal_set_m_OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>* value);

  constexpr void __cordl_internal_set_m_OnEventDelegate(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value);

  constexpr void __cordl_internal_set_m_OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>* value);

  constexpr void __cordl_internal_set_m_OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* value);

  constexpr void __cordl_internal_set_m_PathBuilder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_m_Scores(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_StartTime(double_t value);

  constexpr void __cordl_internal_set_m_StartingActuations(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>* value);

  constexpr void __cordl_internal_set_m_TargetBindingIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Timeout(float_t value);

  constexpr void __cordl_internal_set_m_WaitSecondsAfterMatch(float_t value);

  /// @brief Method .ctor, addr 0x44d3994, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_action, addr 0x44d50c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_action();

  /// @brief Method get_bindingMask, addr 0x44d50d0, size 0x10, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask();

  /// @brief Method get_canceled, addr 0x44d5264, size 0xc, virtual false, abstract: false, final false
  inline bool get_canceled();

  /// @brief Method get_candidates, addr 0x44d50e0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> get_candidates();

  /// @brief Method get_completed, addr 0x44d5258, size 0xc, virtual false, abstract: false, final false
  inline bool get_completed();

  /// @brief Method get_expectedControlType, addr 0x44d3d18, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_expectedControlType();

  /// @brief Method get_magnitudes, addr 0x44d5168, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> get_magnitudes();

  /// @brief Method get_scores, addr 0x44d50f4, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> get_scores();

  /// @brief Method get_selectedControl, addr 0x44d51dc, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_selectedControl();

  /// @brief Method get_startTime, addr 0x44d5270, size 0x8, virtual false, abstract: false, final false
  inline double_t get_startTime();

  /// @brief Method get_started, addr 0x44d524c, size 0xc, virtual false, abstract: false, final false
  inline bool get_started();

  /// @brief Method get_timeout, addr 0x44d5278, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timeout();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionRebindingExtensions__RebindingOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__RebindingOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputActionRebindingExtensions__RebindingOperation(__InputActionRebindingExtensions__RebindingOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__RebindingOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputActionRebindingExtensions__RebindingOperation(__InputActionRebindingExtensions__RebindingOperation const&) = delete;

  /// @brief Field m_ActionToRebind, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_ActionToRebind;

  /// @brief Field m_BindingMask, offset: 0x18, size: 0x60, def value: None
  ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> ___m_BindingMask;

  /// @brief Field m_ControlType, offset: 0x78, size: 0x8, def value: None
  ::System::Type* ___m_ControlType;

  /// @brief Field m_ExpectedLayout, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString ___m_ExpectedLayout;

  /// @brief Field m_IncludePathCount, offset: 0x90, size: 0x4, def value: None
  int32_t ___m_IncludePathCount;

  /// @brief Field m_IncludePaths, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_IncludePaths;

  /// @brief Field m_ExcludePathCount, offset: 0xa0, size: 0x4, def value: None
  int32_t ___m_ExcludePathCount;

  /// @brief Field m_ExcludePaths, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_ExcludePaths;

  /// @brief Field m_TargetBindingIndex, offset: 0xb0, size: 0x4, def value: None
  int32_t ___m_TargetBindingIndex;

  /// @brief Field m_BindingGroupForNewBinding, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___m_BindingGroupForNewBinding;

  /// @brief Field m_CancelBinding, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___m_CancelBinding;

  /// @brief Field m_MagnitudeThreshold, offset: 0xc8, size: 0x4, def value: None
  float_t ___m_MagnitudeThreshold;

  /// @brief Field m_Scores, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_Scores;

  /// @brief Field m_Magnitudes, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_Magnitudes;

  /// @brief Field m_LastMatchTime, offset: 0xe0, size: 0x8, def value: None
  double_t ___m_LastMatchTime;

  /// @brief Field m_StartTime, offset: 0xe8, size: 0x8, def value: None
  double_t ___m_StartTime;

  /// @brief Field m_Timeout, offset: 0xf0, size: 0x4, def value: None
  float_t ___m_Timeout;

  /// @brief Field m_WaitSecondsAfterMatch, offset: 0xf4, size: 0x4, def value: None
  float_t ___m_WaitSecondsAfterMatch;

  /// @brief Field m_Candidates, offset: 0xf8, size: 0x20, def value: None
  ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> ___m_Candidates;

  /// @brief Field m_OnComplete, offset: 0x118, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* ___m_OnComplete;

  /// @brief Field m_OnCancel, offset: 0x120, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* ___m_OnCancel;

  /// @brief Field m_OnPotentialMatch, offset: 0x128, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*>* ___m_OnPotentialMatch;

  /// @brief Field m_OnGeneratePath, offset: 0x130, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>* ___m_OnGeneratePath;

  /// @brief Field m_OnComputeScore, offset: 0x138, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>* ___m_OnComputeScore;

  /// @brief Field m_OnApplyBinding, offset: 0x140, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, ::StringW>* ___m_OnApplyBinding;

  /// @brief Field m_OnEventDelegate, offset: 0x148, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* ___m_OnEventDelegate;

  /// @brief Field m_OnAfterUpdateDelegate, offset: 0x150, size: 0x8, def value: None
  ::System::Action* ___m_OnAfterUpdateDelegate;

  /// @brief Field m_LayoutCache, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Layouts::__InputControlLayout__Cache ___m_LayoutCache;

  /// @brief Field m_PathBuilder, offset: 0x160, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___m_PathBuilder;

  /// @brief Field m_Flags, offset: 0x168, size: 0x4, def value: None
  ::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags ___m_Flags;

  /// @brief Field m_StartingActuations, offset: 0x170, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>* ___m_StartingActuations;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6530 };

  /// @brief Field kDefaultMagnitudeThreshold offset 0xffffffff size 0x4
  static constexpr float_t kDefaultMagnitudeThreshold{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, 0x178>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_ActionToRebind) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_BindingMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_ControlType) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_ExpectedLayout) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_IncludePathCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_IncludePaths) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_ExcludePathCount) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_ExcludePaths) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_TargetBindingIndex) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_BindingGroupForNewBinding) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_CancelBinding) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_MagnitudeThreshold) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_Scores) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_Magnitudes) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_LastMatchTime) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_StartTime) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_Timeout) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_WaitSecondsAfterMatch) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_Candidates) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_OnComplete) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_OnCancel) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_OnPotentialMatch) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_OnGeneratePath) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_OnComputeScore) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_OnApplyBinding) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_OnEventDelegate) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_OnAfterUpdateDelegate) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_LayoutCache) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_PathBuilder) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_Flags) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation, ___m_StartingActuations) == 0x170, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::DeferBindingResolutionWrapper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputActionRebindingExtensions::DeferBindingResolutionWrapper*
class CORDL_TYPE __InputActionRebindingExtensions__DeferBindingResolutionWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Acquire, addr 0x44d4284, size 0x50, virtual false, abstract: false, final false
  inline void Acquire();

  /// @brief Method Dispose, addr 0x44d6f10, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper* New_ctor();

  /// @brief Method .ctor, addr 0x44d427c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionRebindingExtensions__DeferBindingResolutionWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__DeferBindingResolutionWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputActionRebindingExtensions__DeferBindingResolutionWrapper(__InputActionRebindingExtensions__DeferBindingResolutionWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions__DeferBindingResolutionWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputActionRebindingExtensions__DeferBindingResolutionWrapper(__InputActionRebindingExtensions__DeferBindingResolutionWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6531 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::InputActionRebindingExtensions::<>c__DisplayClass25_0*
class CORDL_TYPE __InputActionRebindingExtensions____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field bindings, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_bindings, put = __cordl_internal_set_bindings)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>
      bindings;

  /// @brief Field firstPartIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_firstPartIndex, put = __cordl_internal_set_firstPartIndex)) int32_t firstPartIndex;

  /// @brief Field partCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_partCount, put = __cordl_internal_set_partCount)) int32_t partCount;

  /// @brief Field partStrings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_partStrings, put = __cordl_internal_set_partStrings)) ::ArrayW<::StringW, ::Array<::StringW>*> partStrings;

  static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0* New_ctor();

  /// @brief Method <GetBindingDisplayString>b__0, addr 0x44d6f7c, size 0x160, virtual false, abstract: false, final false
  inline ::StringW _GetBindingDisplayString_b__0(::StringW fragment);

  constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_bindings() const;

  constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_bindings();

  constexpr int32_t const& __cordl_internal_get_firstPartIndex() const;

  constexpr int32_t& __cordl_internal_get_firstPartIndex();

  constexpr int32_t const& __cordl_internal_get_partCount() const;

  constexpr int32_t& __cordl_internal_get_partCount();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_partStrings() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_partStrings();

  constexpr void __cordl_internal_set_bindings(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> value);

  constexpr void __cordl_internal_set_firstPartIndex(int32_t value);

  constexpr void __cordl_internal_set_partCount(int32_t value);

  constexpr void __cordl_internal_set_partStrings(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x44d0e34, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputActionRebindingExtensions____c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InputActionRebindingExtensions____c__DisplayClass25_0(__InputActionRebindingExtensions____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InputActionRebindingExtensions____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InputActionRebindingExtensions____c__DisplayClass25_0(__InputActionRebindingExtensions____c__DisplayClass25_0 const&) = delete;

  /// @brief Field bindings, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> ___bindings;

  /// @brief Field firstPartIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___firstPartIndex;

  /// @brief Field partStrings, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___partStrings;

  /// @brief Field partCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___partCount;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0, ___bindings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0, ___firstPartIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0, ___partStrings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0, ___partCount) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputActionRebindingExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputActionRebindingExtensions*
class CORDL_TYPE InputActionRebindingExtensions : public ::System::Object {
public:
  // Declarations
  using DeferBindingResolutionWrapper = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper;

  using Parameter = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter;

  using ParameterEnumerable = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable;

  using ParameterEnumerator = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator;

  using ParameterOverride = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride;

  using RebindingOperation = ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation;

  using __c__DisplayClass25_0 = ::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0;

  /// @brief Field s_DeferBindingResolutionWrapper, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_DeferBindingResolutionWrapper,
      put = setStaticF_s_DeferBindingResolutionWrapper)) ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper* s_DeferBindingResolutionWrapper;

  /// @brief Method AddBindingOverrideJsonTo, addr 0x44d296c, size 0x224, virtual false, abstract: false, final false
  static inline void AddBindingOverrideJsonTo(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::UnityEngine::InputSystem::InputBinding binding,
                                              ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>* list,
                                              ::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method ApplyBindingOverride, addr 0x44d0fb8, size 0x130, virtual false, abstract: false, final false
  static inline int32_t ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputBinding bindingOverride);

  /// @brief Method ApplyBindingOverride, addr 0x44d10e8, size 0xbc, virtual false, abstract: false, final false
  static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex, ::UnityEngine::InputSystem::InputBinding bindingOverride);

  /// @brief Method ApplyBindingOverride, addr 0x44d1318, size 0x98, virtual false, abstract: false, final false
  static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex, ::StringW path);

  /// @brief Method ApplyBindingOverride, addr 0x44d0ebc, size 0xfc, virtual false, abstract: false, final false
  static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingOverride);

  /// @brief Method ApplyBindingOverride, addr 0x44d0e3c, size 0x80, virtual false, abstract: false, final false
  static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, ::StringW newPath, ::StringW group, ::StringW path);

  /// @brief Method ApplyBindingOverride, addr 0x44d11a4, size 0x174, virtual false, abstract: false, final false
  static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, int32_t bindingIndex, ::UnityEngine::InputSystem::InputBinding bindingOverride);

  /// @brief Method ApplyBindingOverrides, addr 0x44d1ba4, size 0x368, virtual false, abstract: false, final false
  static inline void ApplyBindingOverrides(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* overrides);

  /// @brief Method ApplyBindingOverridesOnMatchingControls, addr 0x44d2274, size 0x150, virtual false, abstract: false, final false
  static inline int32_t ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ApplyBindingOverridesOnMatchingControls, addr 0x44d23c4, size 0x118, virtual false, abstract: false, final false
  static inline int32_t ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ApplyParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TValue>
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction* action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr, TValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x44cfba0, size 0x1f0, virtual false, abstract: false, final false
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction* action, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value, int32_t bindingIndex);

  /// @brief Method ApplyParameterOverride, addr 0x44cfa44, size 0x15c, virtual false, abstract: false, final false
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction* action, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TValue>
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr, TValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x44cf3a8, size 0x144, virtual false, abstract: false, final false
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TValue>
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset* asset, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr, TValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x44cf8b4, size 0x190, virtual false, abstract: false, final false
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x44cf4ec, size 0x3c8, virtual false, abstract: false, final false
  static inline void ApplyParameterOverride(
      ::UnityEngine::InputSystem::InputActionState* state, int32_t mapIndex,
      ByRef<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, ::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>>
          parameterOverrides,
      ByRef<int32_t> parameterOverridesCount, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride parameterOverride);

  /// @brief Method DeferBindingResolution, addr 0x44cdf3c, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper* DeferBindingResolution();

  /// @brief Method ExtractParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TValue>
  static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride
  ExtractParameterOverride(::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr, ::UnityEngine::InputSystem::InputBinding bindingMask,
                           ::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method GetBindingDisplayString, addr 0x44d08c4, size 0x570, virtual false, abstract: false, final false
  static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex, ByRef<::StringW> deviceLayoutName, ByRef<::StringW> controlPath,
                                                  ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options);

  /// @brief Method GetBindingDisplayString, addr 0x44d0850, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options);

  /// @brief Method GetBindingDisplayString, addr 0x44d0644, size 0x20c, virtual false, abstract: false, final false
  static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingMask,
                                                  ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options);

  /// @brief Method GetBindingDisplayString, addr 0x44d04f4, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::__InputBinding__DisplayStringOptions options, ::StringW group);

  /// @brief Method GetBindingForControl, addr 0x44d01e4, size 0x16c, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> GetBindingForControl(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method GetBindingIndex, addr 0x44cff08, size 0x110, virtual false, abstract: false, final false
  static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method GetBindingIndex, addr 0x44d0128, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputAction* action, ::StringW group, ::StringW path);

  /// @brief Method GetBindingIndex, addr 0x44d0018, size 0x110, virtual false, abstract: false, final false
  static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method GetBindingIndexForControl, addr 0x44d0350, size 0x1a4, virtual false, abstract: false, final false
  static inline int32_t GetBindingIndexForControl(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method GetParameterValue, addr 0x44cf1b0, size 0x1f8, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction* action, ::StringW name, int32_t bindingIndex);

  /// @brief Method GetParameterValue, addr 0x44cecc8, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction* action, ::StringW name,
                                                                                                              ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method GetParameterValue, addr 0x44cee98, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>
  GetParameterValue(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride parameterOverride);

  /// @brief Method GetParameterValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TValue>
  static inline ::System::Nullable_1<TValue> GetParameterValue(::UnityEngine::InputSystem::InputAction* action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr,
                                                               ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method LoadBindingOverridesFromJson, addr 0x44d33f4, size 0x1e0, virtual false, abstract: false, final false
  static inline void LoadBindingOverridesFromJson(::UnityEngine::InputSystem::InputAction* action, ::StringW json, bool removeExisting);

  /// @brief Method LoadBindingOverridesFromJson, addr 0x44d2eb0, size 0x1cc, virtual false, abstract: false, final false
  static inline void LoadBindingOverridesFromJson(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::StringW json, bool removeExisting);

  /// @brief Method LoadBindingOverridesFromJsonInternal, addr 0x44d307c, size 0x378, virtual false, abstract: false, final false
  static inline void LoadBindingOverridesFromJsonInternal(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::StringW json);

  /// @brief Method PerformInteractiveRebinding, addr 0x44d35d4, size 0x3c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation* PerformInteractiveRebinding(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex);

  /// @brief Method RemoveAllBindingOverrides, addr 0x44d1a6c, size 0x138, virtual false, abstract: false, final false
  static inline void RemoveAllBindingOverrides(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method RemoveAllBindingOverrides, addr 0x44d1534, size 0x538, virtual false, abstract: false, final false
  static inline void RemoveAllBindingOverrides(::UnityEngine::InputSystem::IInputActionCollection2* actions);

  /// @brief Method RemoveBindingOverride, addr 0x44d13b0, size 0x7c, virtual false, abstract: false, final false
  static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex);

  /// @brief Method RemoveBindingOverride, addr 0x44d142c, size 0x84, virtual false, abstract: false, final false
  static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method RemoveBindingOverride, addr 0x44d14b0, size 0x84, virtual false, abstract: false, final false
  static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method RemoveBindingOverrides, addr 0x44d1f0c, size 0x368, virtual false, abstract: false, final false
  static inline void RemoveBindingOverrides(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* overrides);

  /// @brief Method SaveBindingOverridesAsJson, addr 0x44d2b90, size 0x320, virtual false, abstract: false, final false
  static inline ::StringW SaveBindingOverridesAsJson(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method SaveBindingOverridesAsJson, addr 0x44d24dc, size 0x490, virtual false, abstract: false, final false
  static inline ::StringW SaveBindingOverridesAsJson(::UnityEngine::InputSystem::IInputActionCollection2* actions);

  static inline ::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper* getStaticF_s_DeferBindingResolutionWrapper();

  static inline void setStaticF_s_DeferBindingResolutionWrapper(::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionRebindingExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionRebindingExtensions(InputActionRebindingExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionRebindingExtensions(InputActionRebindingExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6533 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionRebindingExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation__Flags, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation/Flags");
NEED_NO_BOX(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputActionRebindingExtensions__RebindingOperation____c__DisplayClass32_0*, "UnityEngine.InputSystem",
                       "InputActionRebindingExtensions/RebindingOperation/<>c__DisplayClass32_0");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionRebindingExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions*, "UnityEngine.InputSystem", "InputActionRebindingExtensions");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__DeferBindingResolutionWrapper*, "UnityEngine.InputSystem",
                       "InputActionRebindingExtensions/DeferBindingResolutionWrapper");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__RebindingOperation*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation");
NEED_NO_BOX(::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions____c__DisplayClass25_0*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/<>c__DisplayClass25_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__Parameter, "UnityEngine.InputSystem", "InputActionRebindingExtensions/Parameter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerable, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterEnumerable");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterEnumerator, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterEnumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterOverride");
