#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventStream)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventStream;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventStream);
// Dependencies UnityEngine.InputSystem.LowLevel.InputEventBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventStream
struct CORDL_TYPE InputEventStream {
public:
  // Declarations
  __declspec(property(get = get_currentEventPtr)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> currentEventPtr;

  __declspec(property(get = get_isOpen)) bool isOpen;

  __declspec(property(get = get_numBytesRetainedInBuffer)) uint32_t numBytesRetainedInBuffer;

  __declspec(property(get = get_numEventsRetainedInBuffer)) int32_t numEventsRetainedInBuffer;

  __declspec(property(get = get_remainingEventCount)) int32_t remainingEventCount;

  /// @brief Method Advance, addr 0x460c4d0, size 0xa4, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> Advance(bool leaveEventInBuffer);

  /// @brief Method CleanUpAfterException, addr 0x460c2d8, size 0x68, virtual false, abstract: false, final false
  inline void CleanUpAfterException();

  /// @brief Method Close, addr 0x460c1bc, size 0x11c, virtual false, abstract: false, final false
  inline void Close(::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer);

  /// @brief Method Peek, addr 0x460c574, size 0x60, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> Peek();

  /// @brief Method Write, addr 0x460c340, size 0x190, virtual false, abstract: false, final false
  inline void Write(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr);

  /// @brief Method .ctor, addr 0x460c130, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> eventBuffer, int32_t maxAppendedEvents);

  /// @brief Method get_currentEventPtr, addr 0x460c0a8, size 0x34, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> get_currentEventPtr();

  /// @brief Method get_isOpen, addr 0x460c088, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOpen();

  /// @brief Method get_numBytesRetainedInBuffer, addr 0x460c0dc, size 0x54, virtual false, abstract: false, final false
  inline uint32_t get_numBytesRetainedInBuffer();

  /// @brief Method get_numEventsRetainedInBuffer, addr 0x460c0a0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_numEventsRetainedInBuffer();

  /// @brief Method get_remainingEventCount, addr 0x460c090, size 0x10, virtual false, abstract: false, final false
  inline int32_t get_remainingEventCount();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventStream();

  // Ctor Parameters [CppParam { name: "m_NativeBuffer", ty: "::UnityEngine::InputSystem::LowLevel::InputEventBuffer", modifiers: "", def_value: None }, CppParam { name: "m_CurrentNativeEventReadPtr",
  // ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentNativeEventWritePtr", ty:
  // "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_RemainingNativeEventCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_MaxAppendedEvents", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_AppendBuffer", ty:
  // "::UnityEngine::InputSystem::LowLevel::InputEventBuffer", modifiers: "", def_value: None }, CppParam { name: "m_CurrentAppendEventReadPtr", ty:
  // "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_CurrentAppendEventWritePtr", ty:
  // "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_RemainingAppendEventCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_NumEventsRetainedInBuffer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IsOpen", ty: "bool", modifiers: "", def_value: None }]
  constexpr InputEventStream(::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_NativeBuffer,
                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentNativeEventReadPtr,
                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentNativeEventWritePtr, int32_t m_RemainingNativeEventCount, int32_t m_MaxAppendedEvents,
                             ::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_AppendBuffer,
                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentAppendEventReadPtr,
                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentAppendEventWritePtr, int32_t m_RemainingAppendEventCount,
                             int32_t m_NumEventsRetainedInBuffer, bool m_IsOpen) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6947 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field m_NativeBuffer, offset: 0x0, size: 0x20, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_NativeBuffer;

  /// @brief Field m_CurrentNativeEventReadPtr, offset: 0x20, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentNativeEventReadPtr;

  /// @brief Field m_CurrentNativeEventWritePtr, offset: 0x28, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentNativeEventWritePtr;

  /// @brief Field m_RemainingNativeEventCount, offset: 0x30, size: 0x4, def value: None
  int32_t m_RemainingNativeEventCount;

  /// @brief Field m_MaxAppendedEvents, offset: 0x34, size: 0x4, def value: None
  int32_t m_MaxAppendedEvents;

  /// @brief Field m_AppendBuffer, offset: 0x38, size: 0x20, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_AppendBuffer;

  /// @brief Field m_CurrentAppendEventReadPtr, offset: 0x58, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentAppendEventReadPtr;

  /// @brief Field m_CurrentAppendEventWritePtr, offset: 0x60, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentAppendEventWritePtr;

  /// @brief Field m_RemainingAppendEventCount, offset: 0x68, size: 0x4, def value: None
  int32_t m_RemainingAppendEventCount;

  /// @brief Field m_NumEventsRetainedInBuffer, offset: 0x6c, size: 0x4, def value: None
  int32_t m_NumEventsRetainedInBuffer;

  /// @brief Field m_IsOpen, offset: 0x70, size: 0x1, def value: None
  bool m_IsOpen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventStream, m_NativeBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventStream, m_CurrentNativeEventReadPtr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventStream, m_CurrentNativeEventWritePtr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventStream, m_RemainingNativeEventCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventStream, m_MaxAppendedEvents) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventStream, m_AppendBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventStream, m_CurrentAppendEventReadPtr) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventStream, m_CurrentAppendEventWritePtr) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventStream, m_RemainingAppendEventCount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventStream, m_NumEventsRetainedInBuffer) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventStream, m_IsOpen) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventStream, 0x78>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventStream, "UnityEngine.InputSystem.LowLevel", "InputEventStream");
