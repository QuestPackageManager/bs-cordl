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
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionRebindingExtensions)
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
struct InputActionMap_BindingOverrideJson;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions_DeferBindingResolutionWrapper;
}
namespace UnityEngine::InputSystem {
struct InputActionRebindingExtensions_ParameterEnumerable;
}
namespace UnityEngine::InputSystem {
struct InputActionRebindingExtensions_ParameterEnumerator;
}
namespace UnityEngine::InputSystem {
struct InputActionRebindingExtensions_ParameterOverride;
}
namespace UnityEngine::InputSystem {
struct InputActionRebindingExtensions_Parameter;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions_RebindingOperation;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions___c__DisplayClass25_0;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputBinding_DisplayStringOptions;
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
struct RebindingOperation_InputActionRebindingExtensions_Flags;
}
namespace UnityEngine::InputSystem {
class RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct RebindingOperation_InputActionRebindingExtensions_Flags;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions_DeferBindingResolutionWrapper;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions_RebindingOperation;
}
namespace UnityEngine::InputSystem {
class InputActionRebindingExtensions___c__DisplayClass25_0;
}
namespace UnityEngine::InputSystem {
class RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0;
}
namespace UnityEngine::InputSystem {
struct InputActionRebindingExtensions_Parameter;
}
namespace UnityEngine::InputSystem {
struct InputActionRebindingExtensions_ParameterEnumerable;
}
namespace UnityEngine::InputSystem {
struct InputActionRebindingExtensions_ParameterEnumerator;
}
namespace UnityEngine::InputSystem {
struct InputActionRebindingExtensions_ParameterOverride;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionRebindingExtensions);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0);
MARK_REF_PTR_T(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerable);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator);
MARK_VAL_T(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/Parameter
struct CORDL_TYPE InputActionRebindingExtensions_Parameter {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionRebindingExtensions_Parameter();

  // Ctor Parameters [CppParam { name: "instance", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "field", ty: "::System::Reflection::FieldInfo*", modifiers: "",
  // def_value: None }, CppParam { name: "bindingIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputActionRebindingExtensions_Parameter(::System::Object* instance, ::System::Reflection::FieldInfo* field, int32_t bindingIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field instance, offset: 0x0, size: 0x8, def value: None
  ::System::Object* instance;

  /// @brief Field field, offset: 0x8, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* field;

  /// @brief Field bindingIndex, offset: 0x10, size: 0x4, def value: None
  int32_t bindingIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter, instance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter, field) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter, bindingIndex) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputBinding, UnityEngine.InputSystem.Utilities.PrimitiveValue
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride
struct CORDL_TYPE InputActionRebindingExtensions_ParameterOverride {
public:
  // Declarations
  __declspec(property(get = get_objectType)) ::System::Type* objectType;

  /// @brief Method Find, addr 0x6326adc, size 0x184, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>
  Find(::UnityEngine::InputSystem::InputActionMap* actionMap, ::ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::StringW parameterName, ::StringW objectRegistrationName);

  /// @brief Method Find, addr 0x632b4ac, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>
  Find(::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, ::Array<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>*> overrides,
       int32_t overrideCount, ::ByRef<::UnityEngine::InputSystem::InputBinding> binding, ::StringW parameterName, ::StringW objectRegistrationName);

  /// @brief Method PickMoreSpecificOne, addr 0x632b6e8, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>
  PickMoreSpecificOne(::System::Nullable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride> first,
                      ::System::Nullable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride> second);

  /// @brief Method .ctor, addr 0x632b478, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW objectRegistrationName, ::StringW parameterName, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method .ctor, addr 0x6325bb0, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::StringW parameterName, ::UnityEngine::InputSystem::InputBinding bindingMask, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method get_objectType, addr 0x632afd0, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Type* get_objectType();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionRebindingExtensions_ParameterOverride();

  // Ctor Parameters [CppParam { name: "objectRegistrationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "parameter", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "bindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None }, CppParam { name: "value", ty:
  // "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
  constexpr InputActionRebindingExtensions_ParameterOverride(::StringW objectRegistrationName, ::StringW parameter, ::UnityEngine::InputSystem::InputBinding bindingMask,
                                                             ::UnityEngine::InputSystem::Utilities::PrimitiveValue value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8619 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field objectRegistrationName, offset: 0x0, size: 0x8, def value: None
  ::StringW objectRegistrationName;

  /// @brief Field parameter, offset: 0x8, size: 0x8, def value: None
  ::StringW parameter;

  /// @brief Field bindingMask, offset: 0x10, size: 0x58, def value: None
  ::UnityEngine::InputSystem::InputBinding bindingMask;

  /// @brief Field value, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, objectRegistrationName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, parameter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, bindingMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, value) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, 0x78>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputActionRebindingExtensions::ParameterOverride
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerable
struct CORDL_TYPE InputActionRebindingExtensions_ParameterEnumerable {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Method GetEnumerator, addr 0x6325dfc, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputActionRebindingExtensions.Parameter>.GetEnumerator, addr 0x632ae98, size 0x9c, virtual true, abstract: false,
  /// final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter>*
  System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputActionRebindingExtensions_Parameter__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x632af34, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x6325dcc, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionState* state, ::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride parameter, int32_t mapIndex);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputActionRebindingExtensions_Parameter_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionRebindingExtensions_ParameterEnumerable();

  // Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_Parameter", ty:
  // "::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputActionRebindingExtensions_ParameterEnumerable(::UnityEngine::InputSystem::InputActionState* m_State,
                                                               ::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride m_Parameter, int32_t m_MapIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8617 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  /// @brief Field m_State, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionState* m_State;

  /// @brief Field m_Parameter, offset: 0x8, size: 0x78, def value: None
  ::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride m_Parameter;

  /// @brief Field m_MapIndex, offset: 0x80, size: 0x4, def value: None
  int32_t m_MapIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerable, m_State) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerable, m_Parameter) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerable, m_MapIndex) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerable, 0x88>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputBinding
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator
struct CORDL_TYPE InputActionRebindingExtensions_ParameterEnumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x632b474, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FindParameter, addr 0x632b2f8, size 0xa4, virtual false, abstract: false, final false
  inline bool FindParameter(::System::Object* instance);

  /// @brief Method MoveNext, addr 0x6325e70, size 0xbc, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method MoveToNextBinding, addr 0x632b100, size 0x188, virtual false, abstract: false, final false
  inline bool MoveToNextBinding();

  /// @brief Method MoveToNextInteraction, addr 0x632b288, size 0x70, virtual false, abstract: false, final false
  inline bool MoveToNextInteraction();

  /// @brief Method MoveToNextProcessor, addr 0x632b39c, size 0x70, virtual false, abstract: false, final false
  inline bool MoveToNextProcessor();

  /// @brief Method Reset, addr 0x632b090, size 0x70, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x632b40c, size 0x68, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x632ac64, size 0x234, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputActionState* state, ::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride parameter, int32_t mapIndex);

  /// @brief Method get_Current, addr 0x6325e5c, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__InputActionRebindingExtensions_Parameter_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionRebindingExtensions_ParameterEnumerator();

  // Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_BindingCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BindingEndIndex", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "m_InteractionCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionEndIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_ProcessorCurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ProcessorEndIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_BindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None }, CppParam { name: "m_ObjectType", ty: "::System::Type*", modifiers: "", def_value: None },
  // CppParam { name: "m_ParameterName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_MayBeInteraction", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "m_MayBeProcessor", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_MayBeComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "m_CurrentBindingIsComposite", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_CurrentObject", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name:
  // "m_CurrentParameter", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value: None }]
  constexpr InputActionRebindingExtensions_ParameterEnumerator(::UnityEngine::InputSystem::InputActionState* m_State, int32_t m_MapIndex, int32_t m_BindingCurrentIndex, int32_t m_BindingEndIndex,
                                                               int32_t m_InteractionCurrentIndex, int32_t m_InteractionEndIndex, int32_t m_ProcessorCurrentIndex, int32_t m_ProcessorEndIndex,
                                                               ::UnityEngine::InputSystem::InputBinding m_BindingMask, ::System::Type* m_ObjectType, ::StringW m_ParameterName, bool m_MayBeInteraction,
                                                               bool m_MayBeProcessor, bool m_MayBeComposite, bool m_CurrentBindingIsComposite, ::System::Object* m_CurrentObject,
                                                               ::System::Reflection::FieldInfo* m_CurrentParameter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8618 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa8 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_State) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_MapIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_BindingCurrentIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_BindingEndIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_InteractionCurrentIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_InteractionEndIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_ProcessorCurrentIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_ProcessorEndIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_BindingMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_ObjectType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_ParameterName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_MayBeInteraction) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_MayBeProcessor) == 0x91, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_MayBeComposite) == 0x92, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_CurrentBindingIsComposite) == 0x93, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_CurrentObject) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, m_CurrentParameter) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags
struct CORDL_TYPE RebindingOperation_InputActionRebindingExtensions_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RebindingOperation_InputActionRebindingExtensions_Flags_Unwrapped
  enum struct __RebindingOperation_InputActionRebindingExtensions_Flags_Unwrapped : int32_t {
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
  constexpr operator __RebindingOperation_InputActionRebindingExtensions_Flags_Unwrapped() const noexcept {
    return static_cast<__RebindingOperation_InputActionRebindingExtensions_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RebindingOperation_InputActionRebindingExtensions_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RebindingOperation_InputActionRebindingExtensions_Flags(int32_t value__) noexcept;

  /// @brief Field AddNewBinding value: I32(256)
  static ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags const AddNewBinding;

  /// @brief Field Canceled value: I32(4)
  static ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags const Canceled;

  /// @brief Field Completed value: I32(2)
  static ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags const Completed;

  /// @brief Field DontGeneralizePathOfSelectedControl value: I32(128)
  static ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags const DontGeneralizePathOfSelectedControl;

  /// @brief Field DontIgnoreNoisyControls value: I32(64)
  static ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags const DontIgnoreNoisyControls;

  /// @brief Field OnAfterUpdateHooked value: I32(16)
  static ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags const OnAfterUpdateHooked;

  /// @brief Field OnEventHooked value: I32(8)
  static ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags const OnEventHooked;

  /// @brief Field Started value: I32(1)
  static ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags const Started;

  /// @brief Field SuppressMatchingEvents value: I32(512)
  static ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags const SuppressMatchingEvents;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8620 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/<>c__DisplayClass32_0
class CORDL_TYPE RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field group, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_group, put = __cordl_internal_set_group)) ::StringW group;

  static inline ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0* New_ctor();

  /// @brief Method <WithTargetBinding>b__0, addr 0x6331970, size 0x20, virtual false, abstract: false, final false
  inline bool _WithTargetBinding_b__0(::UnityEngine::InputSystem::InputControlScheme x);

  constexpr ::StringW const& __cordl_internal_get_group() const;

  constexpr ::StringW& __cordl_internal_get_group();

  constexpr void __cordl_internal_set_group(::StringW value);

  /// @brief Method .ctor, addr 0x633196c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0(RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0(RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8621 };

  /// @brief Field group, offset: 0x10, size: 0x8, def value: None
  ::StringW ___group;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0, ___group) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.InputSystem.InputActionRebindingExtensions::RebindingOperation::Flags, UnityEngine.InputSystem.InputBinding,
// UnityEngine.InputSystem.InputControlList`1<TControl>, UnityEngine.InputSystem.Layouts.InputControlLayout::Cache, UnityEngine.InputSystem.Utilities.InternedString
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
class CORDL_TYPE InputActionRebindingExtensions_RebindingOperation : public ::System::Object {
public:
  // Declarations
  using Flags = ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags;

  using __c__DisplayClass32_0 = ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0;

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
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags m_Flags;

  /// @brief Field m_IncludePathCount, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IncludePathCount, put = __cordl_internal_set_m_IncludePathCount)) int32_t m_IncludePathCount;

  /// @brief Field m_IncludePaths, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IncludePaths, put = __cordl_internal_set_m_IncludePaths)) ::ArrayW<::StringW, ::Array<::StringW>*> m_IncludePaths;

  /// @brief Field m_LastMatchTime, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastMatchTime, put = __cordl_internal_set_m_LastMatchTime)) double_t m_LastMatchTime;

  /// @brief Field m_LayoutCache, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LayoutCache, put = __cordl_internal_set_m_LayoutCache)) ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache m_LayoutCache;

  /// @brief Field m_MagnitudeThreshold, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MagnitudeThreshold, put = __cordl_internal_set_m_MagnitudeThreshold)) float_t m_MagnitudeThreshold;

  /// @brief Field m_Magnitudes, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Magnitudes, put = __cordl_internal_set_m_Magnitudes)) ::ArrayW<float_t, ::Array<float_t>*> m_Magnitudes;

  /// @brief Field m_OnAfterUpdateDelegate, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnAfterUpdateDelegate, put = __cordl_internal_set_m_OnAfterUpdateDelegate)) ::System::Action* m_OnAfterUpdateDelegate;

  /// @brief Field m_OnApplyBinding, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnApplyBinding,
                      put = __cordl_internal_set_m_OnApplyBinding)) ::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*, ::StringW>* m_OnApplyBinding;

  /// @brief Field m_OnCancel, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnCancel,
                      put = __cordl_internal_set_m_OnCancel)) ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* m_OnCancel;

  /// @brief Field m_OnComplete, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnComplete,
                      put = __cordl_internal_set_m_OnComplete)) ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* m_OnComplete;

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
                      put = __cordl_internal_set_m_OnPotentialMatch)) ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* m_OnPotentialMatch;

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

  /// @brief Method AddCandidate, addr 0x632c5b8, size 0x17c, virtual false, abstract: false, final false
  inline void AddCandidate(::UnityEngine::InputSystem::InputControl* control, float_t score, float_t magnitude);

  /// @brief Method Cancel, addr 0x632c264, size 0x10, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method Complete, addr 0x632c2b0, size 0x10, virtual false, abstract: false, final false
  inline void Complete();

  /// @brief Method Dispose, addr 0x632c99c, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x632caf0, size 0x44, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GeneratePathForControl, addr 0x632d3dc, size 0x110, virtual false, abstract: false, final false
  inline ::StringW GeneratePathForControl(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method HavePathMatch, addr 0x632d2a4, size 0x90, virtual false, abstract: false, final false
  static inline bool HavePathMatch(::UnityEngine::InputSystem::InputControl* control, ::ArrayW<::StringW, ::Array<::StringW>*> paths, int32_t pathCount);

  /// @brief Method HookOnAfterUpdate, addr 0x632c054, size 0x104, virtual false, abstract: false, final false
  inline void HookOnAfterUpdate();

  /// @brief Method HookOnEvent, addr 0x632c158, size 0x10c, virtual false, abstract: false, final false
  inline void HookOnEvent();

  static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* New_ctor();

  /// @brief Method OnAfterUpdate, addr 0x632d334, size 0xa8, virtual false, abstract: false, final false
  inline void OnAfterUpdate();

  /// @brief Method OnApplyBinding, addr 0x632bee8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*
  OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*, ::StringW>* callback);

  /// @brief Method OnCancel, addr 0x632bec8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*
  OnCancel(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* callback);

  /// @brief Method OnCancel, addr 0x632c274, size 0x3c, virtual false, abstract: false, final false
  inline void OnCancel();

  /// @brief Method OnComplete, addr 0x632bec0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*
  OnComplete(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* callback);

  /// @brief Method OnComplete, addr 0x632c2c0, size 0x2f8, virtual false, abstract: false, final false
  inline void OnComplete();

  /// @brief Method OnComputeScore, addr 0x632bee0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*
  OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>* callback);

  /// @brief Method OnEvent, addr 0x632cbd0, size 0x6d4, virtual false, abstract: false, final false
  inline void OnEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method OnGeneratePath, addr 0x632bed8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>* callback);

  /// @brief Method OnMatchWaitForAnother, addr 0x632a5bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* OnMatchWaitForAnother(float_t seconds);

  /// @brief Method OnPotentialMatch, addr 0x632bed0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*
  OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* callback);

  /// @brief Method RemoveCandidate, addr 0x632c874, size 0x128, virtual false, abstract: false, final false
  inline void RemoveCandidate(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method Reset, addr 0x632cb34, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* Reset();

  /// @brief Method ResetAfterMatchCompleted, addr 0x632d4ec, size 0xbc, virtual false, abstract: false, final false
  inline void ResetAfterMatchCompleted();

  /// @brief Method SortCandidatesByScore, addr 0x632c734, size 0x140, virtual false, abstract: false, final false
  inline void SortCandidatesByScore();

  /// @brief Method Start, addr 0x632bef0, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* Start();

  /// @brief Method ThrowIfRebindInProgress, addr 0x632b970, size 0x58, virtual false, abstract: false, final false
  inline void ThrowIfRebindInProgress();

  /// @brief Method UnhookOnAfterUpdate, addr 0x632ca78, size 0x78, virtual false, abstract: false, final false
  inline void UnhookOnAfterUpdate();

  /// @brief Method UnhookOnEvent, addr 0x632ca00, size 0x78, virtual false, abstract: false, final false
  inline void UnhookOnEvent();

  /// @brief Method WithAction, addr 0x632a428, size 0x194, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithAction(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method WithBindingGroup, addr 0x632bd3c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithBindingGroup(::StringW group);

  /// @brief Method WithBindingMask, addr 0x632bd1c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithBindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask);

  /// @brief Method WithCancelingThrough, addr 0x632a748, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithCancelingThrough(::StringW binding);

  /// @brief Method WithCancelingThrough, addr 0x632ba10, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithCancelingThrough(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method WithControlsExcluding, addr 0x632a5c4, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithControlsExcluding(::StringW path);

  /// @brief Method WithControlsHavingToMatchPath, addr 0x632bbf8, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithControlsHavingToMatchPath(::StringW path);

  /// @brief Method WithExpectedControlType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl> inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithExpectedControlType();

  /// @brief Method WithExpectedControlType, addr 0x632b9c8, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithExpectedControlType(::StringW layoutName);

  /// @brief Method WithExpectedControlType, addr 0x632ba9c, size 0x15c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithExpectedControlType(::System::Type* type);

  /// @brief Method WithMagnitudeHavingToBeGreaterThan, addr 0x632bdd4, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithMagnitudeHavingToBeGreaterThan(float_t magnitude);

  /// @brief Method WithMatchingEventsBeingSuppressed, addr 0x632a6e8, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithMatchingEventsBeingSuppressed(bool value);

  /// @brief Method WithRebindAddingNewBinding, addr 0x632bdc0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithRebindAddingNewBinding(::StringW group);

  /// @brief Method WithTargetBinding, addr 0x632a770, size 0x4f4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithTargetBinding(int32_t bindingIndex);

  /// @brief Method WithTimeout, addr 0x632beb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithTimeout(float_t timeInSeconds);

  /// @brief Method WithoutGeneralizingPathOfSelectedControl, addr 0x632bdb0, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithoutGeneralizingPathOfSelectedControl();

  /// @brief Method WithoutIgnoringNoisyControls, addr 0x632be94, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* WithoutIgnoringNoisyControls();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_ActionToRebind() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_ActionToRebind();

  constexpr ::StringW const& __cordl_internal_get_m_BindingGroupForNewBinding() const;

  constexpr ::StringW& __cordl_internal_get_m_BindingGroupForNewBinding();

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& __cordl_internal_get_m_BindingMask() const;

  constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& __cordl_internal_get_m_BindingMask();

  constexpr ::StringW const& __cordl_internal_get_m_CancelBinding() const;

  constexpr ::StringW& __cordl_internal_get_m_CancelBinding();

  constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> const& __cordl_internal_get_m_Candidates() const;

  constexpr ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>& __cordl_internal_get_m_Candidates();

  constexpr ::System::Type* const& __cordl_internal_get_m_ControlType() const;

  constexpr ::System::Type*& __cordl_internal_get_m_ControlType();

  constexpr int32_t const& __cordl_internal_get_m_ExcludePathCount() const;

  constexpr int32_t& __cordl_internal_get_m_ExcludePathCount();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_ExcludePaths() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_ExcludePaths();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_ExpectedLayout() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_ExpectedLayout();

  constexpr ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags const& __cordl_internal_get_m_Flags() const;

  constexpr ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags& __cordl_internal_get_m_Flags();

  constexpr int32_t const& __cordl_internal_get_m_IncludePathCount() const;

  constexpr int32_t& __cordl_internal_get_m_IncludePathCount();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_IncludePaths() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_IncludePaths();

  constexpr double_t const& __cordl_internal_get_m_LastMatchTime() const;

  constexpr double_t& __cordl_internal_get_m_LastMatchTime();

  constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache const& __cordl_internal_get_m_LayoutCache() const;

  constexpr ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache& __cordl_internal_get_m_LayoutCache();

  constexpr float_t const& __cordl_internal_get_m_MagnitudeThreshold() const;

  constexpr float_t& __cordl_internal_get_m_MagnitudeThreshold();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_Magnitudes() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_Magnitudes();

  constexpr ::System::Action* const& __cordl_internal_get_m_OnAfterUpdateDelegate() const;

  constexpr ::System::Action*& __cordl_internal_get_m_OnAfterUpdateDelegate();

  constexpr ::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*, ::StringW>* const& __cordl_internal_get_m_OnApplyBinding() const;

  constexpr ::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*, ::StringW>*& __cordl_internal_get_m_OnApplyBinding();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* const& __cordl_internal_get_m_OnCancel() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*& __cordl_internal_get_m_OnCancel();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* const& __cordl_internal_get_m_OnComplete() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*& __cordl_internal_get_m_OnComplete();

  constexpr ::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>* const& __cordl_internal_get_m_OnComputeScore() const;

  constexpr ::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>*& __cordl_internal_get_m_OnComputeScore();

  constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* const& __cordl_internal_get_m_OnEventDelegate() const;

  constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*& __cordl_internal_get_m_OnEventDelegate();

  constexpr ::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>* const& __cordl_internal_get_m_OnGeneratePath() const;

  constexpr ::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>*& __cordl_internal_get_m_OnGeneratePath();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* const& __cordl_internal_get_m_OnPotentialMatch() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>*& __cordl_internal_get_m_OnPotentialMatch();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_m_PathBuilder() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_m_PathBuilder();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_Scores() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_Scores();

  constexpr double_t const& __cordl_internal_get_m_StartTime() const;

  constexpr double_t& __cordl_internal_get_m_StartTime();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>* const& __cordl_internal_get_m_StartingActuations() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>*& __cordl_internal_get_m_StartingActuations();

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

  constexpr void __cordl_internal_set_m_Flags(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags value);

  constexpr void __cordl_internal_set_m_IncludePathCount(int32_t value);

  constexpr void __cordl_internal_set_m_IncludePaths(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_LastMatchTime(double_t value);

  constexpr void __cordl_internal_set_m_LayoutCache(::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache value);

  constexpr void __cordl_internal_set_m_MagnitudeThreshold(float_t value);

  constexpr void __cordl_internal_set_m_Magnitudes(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_OnAfterUpdateDelegate(::System::Action* value);

  constexpr void __cordl_internal_set_m_OnApplyBinding(::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*, ::StringW>* value);

  constexpr void __cordl_internal_set_m_OnCancel(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* value);

  constexpr void __cordl_internal_set_m_OnComplete(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* value);

  constexpr void __cordl_internal_set_m_OnComputeScore(::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>* value);

  constexpr void __cordl_internal_set_m_OnEventDelegate(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value);

  constexpr void __cordl_internal_set_m_OnGeneratePath(::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>* value);

  constexpr void __cordl_internal_set_m_OnPotentialMatch(::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* value);

  constexpr void __cordl_internal_set_m_PathBuilder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_m_Scores(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_StartTime(double_t value);

  constexpr void __cordl_internal_set_m_StartingActuations(::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>* value);

  constexpr void __cordl_internal_set_m_TargetBindingIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Timeout(float_t value);

  constexpr void __cordl_internal_set_m_WaitSecondsAfterMatch(float_t value);

  /// @brief Method .ctor, addr 0x632a37c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_action, addr 0x632b7d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_action();

  /// @brief Method get_bindingMask, addr 0x632b7dc, size 0x10, virtual false, abstract: false, final false
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask();

  /// @brief Method get_canceled, addr 0x632b954, size 0xc, virtual false, abstract: false, final false
  inline bool get_canceled();

  /// @brief Method get_candidates, addr 0x632b7ec, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> get_candidates();

  /// @brief Method get_completed, addr 0x632b948, size 0xc, virtual false, abstract: false, final false
  inline bool get_completed();

  /// @brief Method get_expectedControlType, addr 0x632a728, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_expectedControlType();

  /// @brief Method get_magnitudes, addr 0x632b860, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> get_magnitudes();

  /// @brief Method get_scores, addr 0x632b800, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<float_t> get_scores();

  /// @brief Method get_selectedControl, addr 0x632b8c0, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_selectedControl();

  /// @brief Method get_startTime, addr 0x632b960, size 0x8, virtual false, abstract: false, final false
  inline double_t get_startTime();

  /// @brief Method get_started, addr 0x632b93c, size 0xc, virtual false, abstract: false, final false
  inline bool get_started();

  /// @brief Method get_timeout, addr 0x632b968, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timeout();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionRebindingExtensions_RebindingOperation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions_RebindingOperation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionRebindingExtensions_RebindingOperation(InputActionRebindingExtensions_RebindingOperation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions_RebindingOperation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionRebindingExtensions_RebindingOperation(InputActionRebindingExtensions_RebindingOperation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8622 };

  /// @brief Field kDefaultMagnitudeThreshold offset 0xffffffff size 0x4
  static constexpr float_t kDefaultMagnitudeThreshold{ static_cast<float_t>(0.2f) };

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
  ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* ___m_OnComplete;

  /// @brief Field m_OnCancel, offset: 0x120, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* ___m_OnCancel;

  /// @brief Field m_OnPotentialMatch, offset: 0x128, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*>* ___m_OnPotentialMatch;

  /// @brief Field m_OnGeneratePath, offset: 0x130, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::StringW>* ___m_OnGeneratePath;

  /// @brief Field m_OnComputeScore, offset: 0x138, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, float_t>* ___m_OnComputeScore;

  /// @brief Field m_OnApplyBinding, offset: 0x140, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*, ::StringW>* ___m_OnApplyBinding;

  /// @brief Field m_OnEventDelegate, offset: 0x148, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* ___m_OnEventDelegate;

  /// @brief Field m_OnAfterUpdateDelegate, offset: 0x150, size: 0x8, def value: None
  ::System::Action* ___m_OnAfterUpdateDelegate;

  /// @brief Field m_LayoutCache, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Layouts::InputControlLayout_Cache ___m_LayoutCache;

  /// @brief Field m_PathBuilder, offset: 0x160, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___m_PathBuilder;

  /// @brief Field m_Flags, offset: 0x168, size: 0x4, def value: None
  ::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags ___m_Flags;

  /// @brief Field m_StartingActuations, offset: 0x170, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::InputControl*, float_t>* ___m_StartingActuations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_ActionToRebind) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_BindingMask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_ControlType) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_ExpectedLayout) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_IncludePathCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_IncludePaths) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_ExcludePathCount) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_ExcludePaths) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_TargetBindingIndex) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_BindingGroupForNewBinding) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_CancelBinding) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_MagnitudeThreshold) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_Scores) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_Magnitudes) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_LastMatchTime) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_StartTime) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_Timeout) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_WaitSecondsAfterMatch) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_Candidates) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnComplete) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnCancel) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnPotentialMatch) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnGeneratePath) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnComputeScore) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnApplyBinding) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnEventDelegate) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_OnAfterUpdateDelegate) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_LayoutCache) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_PathBuilder) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_Flags) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, ___m_StartingActuations) == 0x170, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/DeferBindingResolutionWrapper
class CORDL_TYPE InputActionRebindingExtensions_DeferBindingResolutionWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Acquire, addr 0x6331990, size 0x64, virtual false, abstract: false, final false
  inline void Acquire();

  /// @brief Method Dispose, addr 0x63319f4, size 0xd4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper* New_ctor();

  /// @brief Method .ctor, addr 0x6331dec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionRebindingExtensions_DeferBindingResolutionWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions_DeferBindingResolutionWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionRebindingExtensions_DeferBindingResolutionWrapper(InputActionRebindingExtensions_DeferBindingResolutionWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions_DeferBindingResolutionWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionRebindingExtensions_DeferBindingResolutionWrapper(InputActionRebindingExtensions_DeferBindingResolutionWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8623 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object, UnityEngine.InputSystem.InputBinding, UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/<>c__DisplayClass25_0
class CORDL_TYPE InputActionRebindingExtensions___c__DisplayClass25_0 : public ::System::Object {
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

  static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0* New_ctor();

  /// @brief Method <GetBindingDisplayString>b__0, addr 0x6331df4, size 0x16c, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x6331df0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionRebindingExtensions___c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions___c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputActionRebindingExtensions___c__DisplayClass25_0(InputActionRebindingExtensions___c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputActionRebindingExtensions___c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputActionRebindingExtensions___c__DisplayClass25_0(InputActionRebindingExtensions___c__DisplayClass25_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8624 };

  /// @brief Field bindings, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> ___bindings;

  /// @brief Field firstPartIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___firstPartIndex;

  /// @brief Field partStrings, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___partStrings;

  /// @brief Field partCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___partCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0, ___bindings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0, ___firstPartIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0, ___partStrings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0, ___partCount) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0, 0x38>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions
class CORDL_TYPE InputActionRebindingExtensions : public ::System::Object {
public:
  // Declarations
  using DeferBindingResolutionWrapper = ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper;

  using Parameter = ::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter;

  using ParameterEnumerable = ::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerable;

  using ParameterEnumerator = ::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator;

  using ParameterOverride = ::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride;

  using RebindingOperation = ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation;

  using __c__DisplayClass25_0 = ::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0;

  /// @brief Field s_DeferBindingResolutionWrapper, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DeferBindingResolutionWrapper,
                      put = setStaticF_s_DeferBindingResolutionWrapper)) ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper* s_DeferBindingResolutionWrapper;

  /// @brief Method AddBindingOverrideJsonTo, addr 0x63294f8, size 0x224, virtual false, abstract: false, final false
  static inline void AddBindingOverrideJsonTo(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::UnityEngine::InputSystem::InputBinding binding,
                                              ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputActionMap_BindingOverrideJson>* list,
                                              ::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method ApplyBindingOverride, addr 0x6327c34, size 0x128, virtual false, abstract: false, final false
  static inline int32_t ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputBinding bindingOverride);

  /// @brief Method ApplyBindingOverride, addr 0x6327d5c, size 0xbc, virtual false, abstract: false, final false
  static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex, ::UnityEngine::InputSystem::InputBinding bindingOverride);

  /// @brief Method ApplyBindingOverride, addr 0x6327f70, size 0x98, virtual false, abstract: false, final false
  static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex, ::StringW path);

  /// @brief Method ApplyBindingOverride, addr 0x6327b08, size 0x12c, virtual false, abstract: false, final false
  static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingOverride);

  /// @brief Method ApplyBindingOverride, addr 0x6327a88, size 0x80, virtual false, abstract: false, final false
  static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputAction* action, ::StringW newPath, ::StringW group, ::StringW path);

  /// @brief Method ApplyBindingOverride, addr 0x6327e18, size 0x158, virtual false, abstract: false, final false
  static inline void ApplyBindingOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, int32_t bindingIndex, ::UnityEngine::InputSystem::InputBinding bindingOverride);

  /// @brief Method ApplyBindingOverrides, addr 0x6328740, size 0x350, virtual false, abstract: false, final false
  static inline void ApplyBindingOverrides(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* overrides);

  /// @brief Method ApplyBindingOverridesOnMatchingControls, addr 0x6328e04, size 0x15c, virtual false, abstract: false, final false
  static inline int32_t ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ApplyBindingOverridesOnMatchingControls, addr 0x6328f60, size 0x124, virtual false, abstract: false, final false
  static inline int32_t ApplyBindingOverridesOnMatchingControls(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method ApplyParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TValue>
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction* action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr, TValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x6326904, size 0x1d8, virtual false, abstract: false, final false
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction* action, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value, int32_t bindingIndex);

  /// @brief Method ApplyParameterOverride, addr 0x63267bc, size 0x148, virtual false, abstract: false, final false
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputAction* action, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TValue>
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr, TValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x63260f8, size 0x128, virtual false, abstract: false, final false
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TValue>
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset* asset, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr, TValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x6326640, size 0x17c, virtual false, abstract: false, final false
  static inline void ApplyParameterOverride(::UnityEngine::InputSystem::InputActionAsset* asset, ::StringW name, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value,
                                            ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method ApplyParameterOverride, addr 0x6326220, size 0x420, virtual false, abstract: false, final false
  static inline void ApplyParameterOverride(
      ::UnityEngine::InputSystem::InputActionState* state, int32_t mapIndex,
      ::ByRef<::ArrayW<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, ::Array<::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride>*>>
          parameterOverrides,
      ::ByRef<int32_t> parameterOverridesCount, ::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride parameterOverride);

  /// @brief Method DeferBindingResolution, addr 0x6324d40, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper* DeferBindingResolution();

  /// @brief Method ExtractParameterOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TValue>
  static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride
  ExtractParameterOverride(::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr, ::UnityEngine::InputSystem::InputBinding bindingMask,
                           ::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method GetBindingDisplayString, addr 0x6327560, size 0x528, virtual false, abstract: false, final false
  static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex, ::ByRef<::StringW> deviceLayoutName, ::ByRef<::StringW> controlPath,
                                                  ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options);

  /// @brief Method GetBindingDisplayString, addr 0x63274ec, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options);

  /// @brief Method GetBindingDisplayString, addr 0x6327310, size 0x1dc, virtual false, abstract: false, final false
  static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingMask,
                                                  ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options);

  /// @brief Method GetBindingDisplayString, addr 0x63271a8, size 0x168, virtual false, abstract: false, final false
  static inline ::StringW GetBindingDisplayString(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding_DisplayStringOptions options, ::StringW group);

  /// @brief Method GetBindingForControl, addr 0x6326f04, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> GetBindingForControl(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method GetBindingIndex, addr 0x6326c60, size 0x110, virtual false, abstract: false, final false
  static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method GetBindingIndex, addr 0x6326e80, size 0x84, virtual false, abstract: false, final false
  static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputAction* action, ::StringW group, ::StringW path);

  /// @brief Method GetBindingIndex, addr 0x6326d70, size 0x110, virtual false, abstract: false, final false
  static inline int32_t GetBindingIndex(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method GetBindingIndexForControl, addr 0x632704c, size 0x15c, virtual false, abstract: false, final false
  static inline int32_t GetBindingIndexForControl(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method GetParameterValue, addr 0x6325f2c, size 0x1cc, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction* action, ::StringW name, int32_t bindingIndex);

  /// @brief Method GetParameterValue, addr 0x6325aa8, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue> GetParameterValue(::UnityEngine::InputSystem::InputAction* action, ::StringW name,
                                                                                                              ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method GetParameterValue, addr 0x6325c5c, size 0x170, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::PrimitiveValue>
  GetParameterValue(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride parameterOverride);

  /// @brief Method GetParameterValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject, typename TValue>
  static inline ::System::Nullable_1<TValue> GetParameterValue(::UnityEngine::InputSystem::InputAction* action, ::System::Linq::Expressions::Expression_1<::System::Func_2<TObject, TValue>*>* expr,
                                                               ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method LoadBindingOverridesFromJson, addr 0x6329e60, size 0x19c, virtual false, abstract: false, final false
  static inline void LoadBindingOverridesFromJson(::UnityEngine::InputSystem::InputAction* action, ::StringW json, bool removeExisting);

  /// @brief Method LoadBindingOverridesFromJson, addr 0x6329a08, size 0x188, virtual false, abstract: false, final false
  static inline void LoadBindingOverridesFromJson(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::StringW json, bool removeExisting);

  /// @brief Method LoadBindingOverridesFromJsonInternal, addr 0x6329b90, size 0x2d0, virtual false, abstract: false, final false
  static inline void LoadBindingOverridesFromJsonInternal(::UnityEngine::InputSystem::IInputActionCollection2* actions, ::StringW json);

  /// @brief Method PerformInteractiveRebinding, addr 0x6329ffc, size 0x380, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation* PerformInteractiveRebinding(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex);

  /// @brief Method RemoveAllBindingOverrides, addr 0x6328610, size 0x130, virtual false, abstract: false, final false
  static inline void RemoveAllBindingOverrides(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method RemoveAllBindingOverrides, addr 0x632818c, size 0x484, virtual false, abstract: false, final false
  static inline void RemoveAllBindingOverrides(::UnityEngine::InputSystem::IInputActionCollection2* actions);

  /// @brief Method RemoveBindingOverride, addr 0x6328008, size 0x7c, virtual false, abstract: false, final false
  static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputAction* action, int32_t bindingIndex);

  /// @brief Method RemoveBindingOverride, addr 0x6328084, size 0x84, virtual false, abstract: false, final false
  static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputAction* action, ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method RemoveBindingOverride, addr 0x6328108, size 0x84, virtual false, abstract: false, final false
  static inline void RemoveBindingOverride(::UnityEngine::InputSystem::InputActionMap* actionMap, ::UnityEngine::InputSystem::InputBinding bindingMask);

  /// @brief Method RemoveBindingOverrides, addr 0x6328a90, size 0x374, virtual false, abstract: false, final false
  static inline void RemoveBindingOverrides(::UnityEngine::InputSystem::InputActionMap* actionMap, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* overrides);

  /// @brief Method SaveBindingOverridesAsJson, addr 0x632971c, size 0x2ec, virtual false, abstract: false, final false
  static inline ::StringW SaveBindingOverridesAsJson(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method SaveBindingOverridesAsJson, addr 0x6329084, size 0x474, virtual false, abstract: false, final false
  static inline ::StringW SaveBindingOverridesAsJson(::UnityEngine::InputSystem::IInputActionCollection2* actions);

  static inline ::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper* getStaticF_s_DeferBindingResolutionWrapper();

  static inline void setStaticF_s_DeferBindingResolutionWrapper(::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8625 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionRebindingExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions_Flags, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation/Flags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionRebindingExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions*, "UnityEngine.InputSystem", "InputActionRebindingExtensions");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions_DeferBindingResolutionWrapper*, "UnityEngine.InputSystem",
                       "InputActionRebindingExtensions/DeferBindingResolutionWrapper");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions_RebindingOperation*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/RebindingOperation");
NEED_NO_BOX(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass25_0*, "UnityEngine.InputSystem", "InputActionRebindingExtensions/<>c__DisplayClass25_0");
NEED_NO_BOX(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::RebindingOperation_InputActionRebindingExtensions___c__DisplayClass32_0*, "UnityEngine.InputSystem",
                       "InputActionRebindingExtensions/RebindingOperation/<>c__DisplayClass32_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions_Parameter, "UnityEngine.InputSystem", "InputActionRebindingExtensions/Parameter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerable, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterEnumerable");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterEnumerator, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterEnumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionRebindingExtensions_ParameterOverride, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterOverride");
