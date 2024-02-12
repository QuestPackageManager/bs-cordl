#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRBinaryChunk)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRBinaryChunk;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRBinaryChunk);
// Type: ::OVRBinaryChunk
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7641))
// CS Name: ::OVRBinaryChunk
struct CORDL_TYPE OVRBinaryChunk {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "chunkStream", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "chunkLength", ty: "uint32_t", modifiers: "", def_value: None },
  // CppParam { name: "chunkStart", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr OVRBinaryChunk(::System::IO::Stream* chunkStream, uint32_t chunkLength, int64_t chunkStart) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRBinaryChunk();

  /// @brief Field chunkStream, offset: 0x0, size: 0x8, def value: None
  ::System::IO::Stream* chunkStream;

  /// @brief Field chunkLength, offset: 0x8, size: 0x4, def value: None
  uint32_t chunkLength;

  /// @brief Field chunkStart, offset: 0x10, size: 0x8, def value: None
  int64_t chunkStart;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRBinaryChunk, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBinaryChunk, chunkStream) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBinaryChunk, chunkLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRBinaryChunk, chunkStart) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRBinaryChunk, "", "OVRBinaryChunk");
