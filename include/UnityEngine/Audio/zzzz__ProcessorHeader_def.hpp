#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProcessorHeader)
namespace UnityEngine::Audio {
struct ControlHeader;
}
namespace UnityEngine::Audio {
struct ProcessorFunction;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct ProcessorHeader;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ProcessorHeader);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ProcessorHeader, "UnityEngine.Audio", "ProcessorHeader");
// [RequiredByNativeCode]
// [NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptableProcessor.h")]
// Dependencies System.IntPtr, Unity.Audio.Handle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ProcessorHeader
struct CORDL_TYPE ProcessorHeader {
public:
  // Declarations
  /// @brief Method InvokeProcessor, addr 0x6eabed0, size 0x8c, virtual false, abstract: false, final false
  inline void InvokeProcessor(::UnityEngine::Audio::ProcessorFunction fn, void* args);

  /// @brief Method IsSameControl, addr 0x6eac978, size 0x10, virtual false, abstract: false, final false
  inline bool IsSameControl(::UnityEngine::Audio::ControlHeader* other);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProcessorHeader();

  // Ctor Parameters [CppParam { name: "m_Control", ty: "void*", modifiers: "", def_value: None, comment: None }, CppParam { name: "DualThreadHandle", ty: "::Unity::Audio::Handle", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "NativeProcessorFunction", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "NativeControlFunction",
  // ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "ProcessorReflectionData", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "ControlReflectionData", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
  constexpr ProcessorHeader(void* m_Control, ::Unity::Audio::Handle DualThreadHandle, ::System::IntPtr NativeProcessorFunction, ::System::IntPtr NativeControlFunction,
                            ::System::IntPtr ProcessorReflectionData, ::System::IntPtr ControlReflectionData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20399 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field m_Control, offset: 0x0, size: 0x8, def value: None
  void* m_Control;

  /// @brief Field DualThreadHandle, offset: 0x8, size: 0x10, def value: None
  ::Unity::Audio::Handle DualThreadHandle;

  /// @brief Field NativeProcessorFunction, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr NativeProcessorFunction;

  /// @brief Field NativeControlFunction, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr NativeControlFunction;

  /// @brief Field ProcessorReflectionData, offset: 0x28, size: 0x8, def value: None
  ::System::IntPtr ProcessorReflectionData;

  /// @brief Field ControlReflectionData, offset: 0x30, size: 0x8, def value: None
  ::System::IntPtr ControlReflectionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ProcessorHeader, m_Control) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorHeader, DualThreadHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorHeader, NativeProcessorFunction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorHeader, NativeControlFunction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorHeader, ProcessorReflectionData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ProcessorHeader, ControlReflectionData) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ProcessorHeader) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Audio
