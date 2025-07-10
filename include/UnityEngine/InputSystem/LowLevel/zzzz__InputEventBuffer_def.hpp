#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEventBuffer)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer_Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer_Enumerator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEventBuffer_Enumerator);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, UnityEngine.InputSystem.LowLevel.InputEventPtr
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator
struct CORDL_TYPE InputEventBuffer_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x460b0f0, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x460b07c, size 0x68, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x460b0e4, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x460b0fc, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x460ae9c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventBuffer buffer);

  /// @brief Method get_Current, addr 0x460b0f4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
  i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventBuffer_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None }, CppParam { name: "m_EventCount",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentEvent", ty: "::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>", modifiers: "", def_value: None
  // }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputEventBuffer_Enumerator(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_Buffer, int32_t m_EventCount,
                                        ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentEvent, int32_t m_CurrentIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6941 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Buffer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_Buffer;

  /// @brief Field m_EventCount, offset: 0x8, size: 0x4, def value: None
  int32_t m_EventCount;

  /// @brief Field m_CurrentEvent, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> m_CurrentEvent;

  /// @brief Field m_CurrentIndex, offset: 0x18, size: 0x4, def value: None
  int32_t m_CurrentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer_Enumerator, m_Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer_Enumerator, m_EventCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer_Enumerator, m_CurrentEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer_Enumerator, m_CurrentIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventBuffer_Enumerator, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.ICloneable, System.IDisposable, Unity.Collections.NativeArray`1<T>,
// UnityEngine.InputSystem.LowLevel.InputEventPtr
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventBuffer
struct CORDL_TYPE InputEventBuffer {
public:
  // Declarations
  using Enumerator = ::UnityEngine::InputSystem::LowLevel::InputEventBuffer_Enumerator;

  __declspec(property(get = get_bufferPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr bufferPtr;

  __declspec(property(get = get_capacityInBytes)) int64_t capacityInBytes;

  __declspec(property(get = get_data)) ::Unity::Collections::NativeArray_1<uint8_t> data;

  __declspec(property(get = get_eventCount)) int32_t eventCount;

  __declspec(property(get = get_sizeInBytes)) int64_t sizeInBytes;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*();

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*();

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AdvanceToNextEvent, addr 0x460ad70, size 0xb8, virtual false, abstract: false, final false
  inline void AdvanceToNextEvent(::ByRef<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>> currentReadPos,
                                 ::ByRef<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>> currentWritePos, ::ByRef<int32_t> numEventsRetainedInBuffer,
                                 ::ByRef<int32_t> numRemainingEvents, bool leaveEventInBuffer);

  /// @brief Method AllocateEvent, addr 0x460aa7c, size 0x2dc, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> AllocateEvent(int32_t sizeInBytes, int32_t capacityIncrementInBytes, ::Unity::Collections::Allocator allocator);

  /// @brief Method AppendEvent, addr 0x460aa00, size 0x7c, virtual false, abstract: false, final false
  inline void AppendEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr, int32_t capacityIncrementInBytes, ::Unity::Collections::Allocator allocator);

  /// @brief Method Clone, addr 0x460af38, size 0xd8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventBuffer Clone();

  /// @brief Method Contains, addr 0x460a598, size 0x88, virtual false, abstract: false, final false
  inline bool Contains(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr);

  /// @brief Method Dispose, addr 0x460aed8, size 0x60, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x460ae28, size 0x74, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* GetEnumerator();

  /// @brief Method Reset, addr 0x460ad58, size 0x18, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x460aed4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.ICloneable.Clone, addr 0x460b010, size 0x68, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method .ctor, addr 0x460a8e0, size 0x120, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<uint8_t> buffer, int32_t eventCount, int32_t sizeInBytes, bool transferNativeArrayOwnership);

  /// @brief Method .ctor, addr 0x460a728, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> eventPtr, int32_t eventCount, int32_t sizeInBytes, int32_t capacityInBytes);

  /// @brief Method get_bufferPtr, addr 0x460a6dc, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr get_bufferPtr();

  /// @brief Method get_capacityInBytes, addr 0x460a684, size 0x4c, virtual false, abstract: false, final false
  inline int64_t get_capacityInBytes();

  /// @brief Method get_data, addr 0x460a6d0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> get_data();

  /// @brief Method get_eventCount, addr 0x460a674, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_eventCount();

  /// @brief Method get_sizeInBytes, addr 0x460a67c, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_sizeInBytes();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEventBuffer();

  // Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_SizeInBytes", ty: "int64_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_WeOwnTheBuffer", ty: "bool", modifiers: "", def_value: None }]
  constexpr InputEventBuffer(::Unity::Collections::NativeArray_1<uint8_t> m_Buffer, int64_t m_SizeInBytes, int32_t m_EventCount, bool m_WeOwnTheBuffer) noexcept;

  /// @brief Field BufferSizeUnknown offset 0xffffffff size 0x8
  static constexpr int64_t BufferSizeUnknown{ static_cast<int64_t>(0xffffffffffffffff) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6942 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Buffer, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> m_Buffer;

  /// @brief Field m_SizeInBytes, offset: 0x10, size: 0x8, def value: None
  int64_t m_SizeInBytes;

  /// @brief Field m_EventCount, offset: 0x18, size: 0x4, def value: None
  int32_t m_EventCount;

  /// @brief Field m_WeOwnTheBuffer, offset: 0x1c, size: 0x1, def value: None
  bool m_WeOwnTheBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, m_Buffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, m_SizeInBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, m_EventCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, m_WeOwnTheBuffer) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEventBuffer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventBuffer, "UnityEngine.InputSystem.LowLevel", "InputEventBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEventBuffer_Enumerator, "UnityEngine.InputSystem.LowLevel", "InputEventBuffer/Enumerator");
