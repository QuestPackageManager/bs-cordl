#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Raw/Interleave.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Interleave)
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Interleave;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Interleave);
// Dependencies System.Object
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: Org.BouncyCastle.Math.Raw.Interleave
class CORDL_TYPE Interleave : public ::System::Object {
public:
  // Declarations
  /// @brief Method Expand16to32, addr 0x24dd89c, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t Expand16to32(uint32_t x);

  /// @brief Method Expand32to64, addr 0x24dd8c4, size 0x58, virtual false, abstract: false, final false
  static inline uint64_t Expand32to64(uint32_t x);

  /// @brief Method Expand64To128, addr 0x24dd91c, size 0xa8, virtual false, abstract: false, final false
  static inline void Expand64To128(uint64_t x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Expand64To128Rev, addr 0x24dd9c4, size 0xa8, virtual false, abstract: false, final false
  static inline void Expand64To128Rev(uint64_t x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Expand8to16, addr 0x24dd87c, size 0x20, virtual false, abstract: false, final false
  static inline uint32_t Expand8to16(uint32_t x);

  static inline ::Org::BouncyCastle::Math::Raw::Interleave* New_ctor();

  /// @brief Method Shuffle, addr 0x24dda6c, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t Shuffle(uint32_t x);

  /// @brief Method Shuffle, addr 0x24ddab4, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t Shuffle(uint64_t x);

  /// @brief Method Shuffle2, addr 0x24ddb10, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t Shuffle2(uint32_t x);

  /// @brief Method Unshuffle, addr 0x24ddb64, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t Unshuffle(uint32_t x);

  /// @brief Method Unshuffle, addr 0x24ddbac, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t Unshuffle(uint64_t x);

  /// @brief Method Unshuffle2, addr 0x24ddc08, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t Unshuffle2(uint32_t x);

  /// @brief Method .ctor, addr 0x24ddc5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interleave();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Interleave", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interleave(Interleave&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interleave", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interleave(Interleave const&) = delete;

  /// @brief Field M32 offset 0xffffffff size 0x8
  static constexpr uint64_t M32{ static_cast<uint64_t>(0x55555555u) };

  /// @brief Field M64 offset 0xffffffff size 0x8
  static constexpr uint64_t M64{ static_cast<uint64_t>(0x5555555555555555u) };

  /// @brief Field M64R offset 0xffffffff size 0x8
  static constexpr uint64_t M64R{ static_cast<uint64_t>(0xaaaaaaaaaaaaaaaau) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1588 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Interleave, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Interleave);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Interleave*, "Org.BouncyCastle.Math.Raw", "Interleave");
