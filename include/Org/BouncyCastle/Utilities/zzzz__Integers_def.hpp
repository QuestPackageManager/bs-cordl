#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Integers)
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Integers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Integers);
// Type: Org.BouncyCastle.Utilities::Integers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities::Integers*
class CORDL_TYPE Integers : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Utilities::Integers* New_ctor();

  /// @brief Method NumberOfLeadingZeros, addr 0x12dec1c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t NumberOfLeadingZeros(int32_t i);

  /// @brief Method NumberOfTrailingZeros, addr 0x12dec98, size 0x34, virtual false, abstract: false, final false
  static inline int32_t NumberOfTrailingZeros(int32_t i);

  /// @brief Method RotateLeft, addr 0x12deccc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t RotateLeft(int32_t i, int32_t distance);

  /// @brief Method RotateLeft, addr 0x12dece0, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t RotateLeft(uint32_t i, int32_t distance);

  /// @brief Method RotateRight, addr 0x12decf4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t RotateRight(int32_t i, int32_t distance);

  /// @brief Method RotateRight, addr 0x12ded08, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t RotateRight(uint32_t i, int32_t distance);

  /// @brief Method .ctor, addr 0x12ded1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Integers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Integers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Integers(Integers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Integers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Integers(Integers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Integers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Integers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Integers*, "Org.BouncyCastle.Utilities", "Integers");
