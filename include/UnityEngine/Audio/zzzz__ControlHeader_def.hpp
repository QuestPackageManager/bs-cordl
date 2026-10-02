#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ControlHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ControlHeader)
// Forward declare root types
namespace UnityEngine::Audio {
struct ControlHeader;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ControlHeader);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ControlHeader, "UnityEngine.Audio", "ControlHeader");
// [RequiredByNativeCode]
// [NativeHeader("Modules/Audio/Public/ScriptableProcessors/ControlHeader.h")]
// Dependencies System.IntPtr, Unity.Audio.Handle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ControlHeader
struct CORDL_TYPE ControlHeader {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlHeader();

  // Ctor Parameters [CppParam { name: "Handle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: None, comment: None }, CppParam { name: "ManagedTransport", ty: "::System::IntPtr", modifiers:
  // "", def_value: None, comment: None }]
  constexpr ControlHeader(::Unity::Audio::Handle Handle, ::System::IntPtr ManagedTransport) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20337 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Handle, offset: 0x0, size: 0x10, def value: None
  ::Unity::Audio::Handle Handle;

  /// @brief Field ManagedTransport, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ManagedTransport;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ControlHeader, Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ControlHeader, ManagedTransport) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ControlHeader) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Audio
