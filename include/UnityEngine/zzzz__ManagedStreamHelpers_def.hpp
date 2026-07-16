#pragma once
// IWYU pragma private; include "UnityEngine/ManagedStreamHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedStreamHelpers)
namespace System::IO {
class Stream;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class ManagedStreamHelpers;
}
// Write type traits
MARK_REF_T(::UnityEngine::ManagedStreamHelpers*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ManagedStreamHelpers*, "UnityEngine", "ManagedStreamHelpers");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ManagedStreamHelpers
class CORDL_TYPE ManagedStreamHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method ManagedStreamLength, addr 0x6ae0e50, size 0x9c, virtual false, abstract: false, final false
  static inline void ManagedStreamLength(::System::IO::Stream* stream, ::System::IntPtr returnValueAddress);

  /// @brief Method ManagedStreamRead, addr 0x6ae0cd0, size 0xc4, virtual false, abstract: false, final false
  static inline void ManagedStreamRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::IO::Stream* stream, ::System::IntPtr returnValueAddress);

  /// @brief Method ManagedStreamSeek, addr 0x6ae0d94, size 0xbc, virtual false, abstract: false, final false
  static inline void ManagedStreamSeek(int64_t offset, uint32_t origin, ::System::IO::Stream* stream, ::System::IntPtr returnValueAddress);

  /// @brief Method ValidateLoadFromStream, addr 0x6ae0bcc, size 0x104, virtual false, abstract: false, final false
  static inline void ValidateLoadFromStream(::System::IO::Stream* stream);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManagedStreamHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManagedStreamHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManagedStreamHelpers(ManagedStreamHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManagedStreamHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManagedStreamHelpers(ManagedStreamHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10325 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ManagedStreamHelpers) == 0x10, "Size mismatch!");

} // namespace UnityEngine
