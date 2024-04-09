#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: UnityEngine.InputSystem::InputControl`1
// SizeInfo { instance_size: 240, native_size: 240, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1 : public ::UnityEngine::InputSystem::InputControl {
public:
  // Declarations
  /// @brief Field m_ProcessorStack, offset 0xd8, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ProcessorStack,
                      put = __cordl_internal_set_m_ProcessorStack))::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> m_ProcessorStack;

  __declspec(property(get = get_processors))::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*, ::Array<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>*> processors;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_valueType))::System::Type* valueType;

  /// @brief Method AddProcessor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddProcessor(::System::Object* processor);

  /// @brief Method CompareValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CompareValue(::cordl_internals::Ptr<void> firstStatePtr, ::cordl_internals::Ptr<void> secondStatePtr);

  static inline ::UnityEngine::InputSystem::InputControl_1<TValue>* New_ctor();

  /// @brief Method ProcessValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ProcessValue(TValue value);

  /// @brief Method ReadDefaultValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadDefaultValue();

  /// @brief Method ReadUnprocessedValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadUnprocessedValue();

  /// @brief Method ReadUnprocessedValueFromState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TValue ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadValue();

  /// @brief Method ReadValueFromBufferAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadValueFromPreviousFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadValueFromPreviousFrame();

  /// @brief Method ReadValueFromState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ReadValueFromState(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadValueFromStateAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadValueFromStateIntoBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void> statePtr, ::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize);

  /// @brief Method TryGetProcessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TProcessor> inline TProcessor TryGetProcessor();

  /// @brief Method WriteValueFromBufferIntoState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueFromObjectIntoState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteValueFromObjectIntoState(::System::Object* value, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueIntoState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void WriteValueIntoState(TValue value, ::cordl_internals::Ptr<void> statePtr);

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> const& __cordl_internal_get_m_ProcessorStack() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>& __cordl_internal_get_m_ProcessorStack();

  constexpr void __cordl_internal_set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_processors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*, ::Array<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>*> get_processors();

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

  /// @brief Field m_ProcessorStack, offset: 0xd8, size: 0x18, def value: None
  ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> ___m_ProcessorStack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::InputControl_1, "UnityEngine.InputSystem", "InputControl`1");
