#pragma once
// IWYU pragma private; include "System/Buffers/Binary/BinaryPrimitives.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryPrimitives)
// Forward declare root types
namespace System::Buffers::Binary {
class BinaryPrimitives;
}
// Write type traits
MARK_REF_PTR_T(::System::Buffers::Binary::BinaryPrimitives);
// Type: System.Buffers.Binary::BinaryPrimitives
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Buffers::Binary {
// Is value type: false
// CS Name: ::System.Buffers.Binary::BinaryPrimitives*
class CORDL_TYPE BinaryPrimitives : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReverseEndianness, addr 0x3d686c4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ReverseEndianness(int32_t value);

  /// @brief Method ReverseEndianness, addr 0x3d686cc, size 0x8, virtual false, abstract: false, final false
  static inline int64_t ReverseEndianness(int64_t value);

  /// @brief Method ReverseEndianness, addr 0x3d686d4, size 0xc, virtual false, abstract: false, final false
  static inline uint16_t ReverseEndianness(uint16_t value);

  /// @brief Method ReverseEndianness, addr 0x3d686e0, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t ReverseEndianness(uint32_t value);

  /// @brief Method ReverseEndianness, addr 0x3d686e8, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t ReverseEndianness(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryPrimitives();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinaryPrimitives", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryPrimitives(BinaryPrimitives&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryPrimitives", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryPrimitives(BinaryPrimitives const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3906 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Buffers::Binary::BinaryPrimitives, 0x10>, "Size mismatch!");

} // namespace System::Buffers::Binary
NEED_NO_BOX(::System::Buffers::Binary::BinaryPrimitives);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::Binary::BinaryPrimitives*, "System.Buffers.Binary", "BinaryPrimitives");
