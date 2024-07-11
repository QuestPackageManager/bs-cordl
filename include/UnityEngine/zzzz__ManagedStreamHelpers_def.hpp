#pragma once
// IWYU pragma private; include "UnityEngine/ManagedStreamHelpers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::UnityEngine::ManagedStreamHelpers);
// Type: UnityEngine::ManagedStreamHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ManagedStreamHelpers*
class CORDL_TYPE ManagedStreamHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method ManagedStreamLength, addr 0x3449e5c, size 0xfc, virtual false, abstract: false, final false
  static inline void ManagedStreamLength(::System::IO::Stream* stream, ::System::IntPtr returnValueAddress);

  /// @brief Method ManagedStreamRead, addr 0x3449c24, size 0x120, virtual false, abstract: false, final false
  static inline void ManagedStreamRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::System::IO::Stream* stream, ::System::IntPtr returnValueAddress);

  /// @brief Method ManagedStreamSeek, addr 0x3449d44, size 0x118, virtual false, abstract: false, final false
  static inline void ManagedStreamSeek(int64_t offset, uint32_t origin, ::System::IO::Stream* stream, ::System::IntPtr returnValueAddress);

  /// @brief Method ValidateLoadFromStream, addr 0x3449b14, size 0x110, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ManagedStreamHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ManagedStreamHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ManagedStreamHelpers*, "UnityEngine", "ManagedStreamHelpers");
