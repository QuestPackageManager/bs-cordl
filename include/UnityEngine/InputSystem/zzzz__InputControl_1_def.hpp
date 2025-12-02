#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControl_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputControl_1)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
template <typename TValue> class InputProcessor_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template <typename TValue> class InputControl_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::InputControl_1);
// Dependencies UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue>
namespace UnityEngine::InputSystem {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputControl`1<TValue>
class CORDL_TYPE InputControl_1 : public ::UnityEngine::InputSystem::InputControl {
public:
  // Declarations
  /// @brief Field evaluateProcessorsEveryRead, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_evaluateProcessorsEveryRead, put = __cordl_internal_set_evaluateProcessorsEveryRead)) bool evaluateProcessorsEveryRead;

  /// @brief Field m_CachedValue, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedValue, put = __cordl_internal_set_m_CachedValue)) TValue m_CachedValue;

  /// @brief Field m_ProcessorStack, offset 0xe0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ProcessorStack,
                      put = __cordl_internal_set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>
      m_ProcessorStack;

  /// @brief Field m_UnprocessedCachedValue, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnprocessedCachedValue, put = __cordl_internal_set_m_UnprocessedCachedValue)) TValue m_UnprocessedCachedValue;

  __declspec(property(get = get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*, ::Array<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>*> processors;

  __declspec(property(get = get_unprocessedValue)) TValue unprocessedValue;

  __declspec(property(get = get_value)) TValue value;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_valueType)) ::System::Type* valueType;

  /// @brief Method AddProcessor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddProcessor(::System::Object* processor);

  /// @brief Method CompareValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CompareValue(void* firstStatePtr, void* secondStatePtr);

  /// @brief Method CompareValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool CompareValue(::ByRef<TValue> firstValue, ::ByRef<TValue> secondValue);

  /// @brief Method FinishSetup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::InputSystem::InputControl_1<TValue>* New_ctor();

  /// @brief Method ProcessValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ProcessValue(TValue value);

  /// @brief Method ProcessValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessValue(::ByRef<TValue> value);

  /// @brief Method ReadDefaultValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadDefaultValue();

  /// @brief Method ReadUnprocessedValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadUnprocessedValue();

  /// @brief Method ReadUnprocessedValueFromState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue ReadUnprocessedValueFromState(void* statePtr);

  /// @brief Method ReadUnprocessedValueFromStateWithCaching, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadUnprocessedValueFromStateWithCaching(void* statePtr);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadValue();

  /// @brief Method ReadValueFromBufferAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueFromBufferAsObject(void* buffer, int32_t bufferSize);

  /// @brief Method ReadValueFromPreviousFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadValueFromPreviousFrame();

  /// @brief Method ReadValueFromState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadValueFromState(void* statePtr);

  /// @brief Method ReadValueFromStateAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueFromStateAsObject(void* statePtr);

  /// @brief Method ReadValueFromStateIntoBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadValueFromStateIntoBuffer(void* statePtr, void* bufferPtr, int32_t bufferSize);

  /// @brief Method ReadValueFromStateWithCaching, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadValueFromStateWithCaching(void* statePtr);

  /// @brief Method TryGetProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TProcessor> inline TProcessor TryGetProcessor();

  /// @brief Method WriteValueFromBufferIntoState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteValueFromBufferIntoState(void* bufferPtr, int32_t bufferSize, void* statePtr);

  /// @brief Method WriteValueFromObjectIntoState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteValueFromObjectIntoState(::System::Object* value, void* statePtr);

  /// @brief Method WriteValueIntoState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteValueIntoState(TValue value, void* statePtr);

  constexpr bool const& __cordl_internal_get_evaluateProcessorsEveryRead() const;

  constexpr bool& __cordl_internal_get_evaluateProcessorsEveryRead();

  constexpr TValue const& __cordl_internal_get_m_CachedValue() const;

  constexpr TValue& __cordl_internal_get_m_CachedValue();

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> const& __cordl_internal_get_m_ProcessorStack() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>& __cordl_internal_get_m_ProcessorStack();

  constexpr TValue const& __cordl_internal_get_m_UnprocessedCachedValue() const;

  constexpr TValue& __cordl_internal_get_m_UnprocessedCachedValue();

  constexpr void __cordl_internal_set_evaluateProcessorsEveryRead(bool value);

  constexpr void __cordl_internal_set_m_CachedValue(TValue value);

  constexpr void __cordl_internal_set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> value);

  constexpr void __cordl_internal_set_m_UnprocessedCachedValue(TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_processors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*, ::Array<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>*> get_processors();

  /// @brief Method get_unprocessedValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<TValue> get_unprocessedValue();

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<TValue> get_value();

  /// @brief Method get_valueSizeInBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method get_valueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_valueType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControl_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControl_1(InputControl_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControl_1(InputControl_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8675 };

  /// @brief Field m_ProcessorStack, offset: 0xe0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> ___m_ProcessorStack;

  /// @brief Field m_CachedValue, offset: 0xf8, size: 0x8, def value: None
  TValue ___m_CachedValue;

  /// @brief Field m_UnprocessedCachedValue, offset: 0x100, size: 0x8, def value: None
  TValue ___m_UnprocessedCachedValue;

  /// @brief Field evaluateProcessorsEveryRead, offset: 0x108, size: 0x1, def value: None
  bool ___evaluateProcessorsEveryRead;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::InputControl_1, "UnityEngine.InputSystem", "InputControl`1");
