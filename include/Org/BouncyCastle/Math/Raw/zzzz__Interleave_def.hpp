#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Interleave)
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Interleave;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Interleave);
// Type: Org.BouncyCastle.Math.Raw::Interleave
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.Raw::Interleave*
class CORDL_TYPE Interleave : public ::System::Object {
public:
  // Declarations
  /// @brief Method Expand16to32, addr 0x11cbcec, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t Expand16to32(uint32_t x);

  /// @brief Method Expand32to64, addr 0x11cbd14, size 0x58, virtual false, abstract: false, final false
  static inline uint64_t Expand32to64(uint32_t x);

  /// @brief Method Expand64To128, addr 0x11cbd6c, size 0xa8, virtual false, abstract: false, final false
  static inline void Expand64To128(uint64_t x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Expand64To128Rev, addr 0x11cbe14, size 0xa8, virtual false, abstract: false, final false
  static inline void Expand64To128Rev(uint64_t x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z, int32_t zOff);

  /// @brief Method Expand8to16, addr 0x11cbccc, size 0x20, virtual false, abstract: false, final false
  static inline uint32_t Expand8to16(uint32_t x);

  static inline ::Org::BouncyCastle::Math::Raw::Interleave* New_ctor();

  /// @brief Method Shuffle, addr 0x11cbebc, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t Shuffle(uint32_t x);

  /// @brief Method Shuffle, addr 0x11cbf04, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t Shuffle(uint64_t x);

  /// @brief Method Shuffle2, addr 0x11cbf60, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t Shuffle2(uint32_t x);

  /// @brief Method Unshuffle, addr 0x11cbfb4, size 0x48, virtual false, abstract: false, final false
  static inline uint32_t Unshuffle(uint32_t x);

  /// @brief Method Unshuffle, addr 0x11cbffc, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t Unshuffle(uint64_t x);

  /// @brief Method Unshuffle2, addr 0x11cc058, size 0x54, virtual false, abstract: false, final false
  static inline uint32_t Unshuffle2(uint32_t x);

  /// @brief Method .ctor, addr 0x11cc0ac, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Interleave, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Interleave);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Interleave*, "Org.BouncyCastle.Math.Raw", "Interleave");
