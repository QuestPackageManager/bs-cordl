#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GcmUtilities)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class GcmUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities);
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::GcmUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Modes.Gcm::GcmUtilities*
class CORDL_TYPE GcmUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field LOOKUP, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LOOKUP, put = setStaticF_LOOKUP))::ArrayW<uint32_t, ::Array<uint32_t>*> LOOKUP;

  /// @brief Method AsBytes, addr 0xf834a4, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsBytes(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method AsBytes, addr 0xf834ac, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsBytes(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method AsBytes, addr 0xf8320c, size 0xc, virtual false, abstract: false, final false
  static inline void AsBytes(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method AsBytes, addr 0xf83514, size 0xc, virtual false, abstract: false, final false
  static inline void AsBytes(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method AsUints, addr 0xf82f64, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> AsUints(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method AsUints, addr 0xf83520, size 0x10, virtual false, abstract: false, final false
  static inline void AsUints(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, ::ArrayW<uint32_t, ::Array<uint32_t>*> output);

  /// @brief Method AsUlongs, addr 0xf83530, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> AsUlongs(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  /// @brief Method AsUlongs, addr 0xf83598, size 0x10, virtual false, abstract: false, final false
  static inline void AsUlongs(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method GenerateLookup, addr 0xf83310, size 0xcc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> GenerateLookup();

  /// @brief Method Multiply, addr 0xf83140, size 0xcc, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Multiply, addr 0xf83634, size 0x94, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y);

  /// @brief Method Multiply, addr 0xf835a8, size 0x8c, virtual false, abstract: false, final false
  static inline void Multiply(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y);

  /// @brief Method MultiplyP, addr 0xf836c8, size 0x84, virtual false, abstract: false, final false
  static inline void MultiplyP(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method MultiplyP, addr 0xf837bc, size 0x94, virtual false, abstract: false, final false
  static inline void MultiplyP(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method MultiplyP8, addr 0xf838e0, size 0xa4, virtual false, abstract: false, final false
  static inline void MultiplyP8(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method MultiplyP8, addr 0xf83a18, size 0xb4, virtual false, abstract: false, final false
  static inline void MultiplyP8(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  static inline ::Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities* New_ctor();

  /// @brief Method OneAsBytes, addr 0xf833dc, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> OneAsBytes();

  /// @brief Method OneAsUints, addr 0xf830dc, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> OneAsUints();

  /// @brief Method OneAsUlongs, addr 0xf83440, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> OneAsUlongs();

  /// @brief Method ShiftRight, addr 0xf8374c, size 0x70, virtual false, abstract: false, final false
  static inline uint32_t ShiftRight(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method ShiftRight, addr 0xf83850, size 0x90, virtual false, abstract: false, final false
  static inline uint32_t ShiftRight(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ShiftRightN, addr 0xf83984, size 0x94, virtual false, abstract: false, final false
  static inline uint32_t ShiftRightN(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t n);

  /// @brief Method ShiftRightN, addr 0xf83acc, size 0xb4, virtual false, abstract: false, final false
  static inline uint32_t ShiftRightN(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t n, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Xor, addr 0xf84104, size 0x9c, virtual false, abstract: false, final false
  static inline void Xor(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Xor, addr 0xf841a0, size 0xc0, virtual false, abstract: false, final false
  static inline void Xor(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Xor, addr 0xf84260, size 0x60, virtual false, abstract: false, final false
  static inline void Xor(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y);

  /// @brief Method Xor, addr 0xf842c0, size 0x78, virtual false, abstract: false, final false
  static inline void Xor(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Xor, addr 0xf83f70, size 0x64, virtual false, abstract: false, final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, int32_t xOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> y, int32_t yOff, int32_t len);

  /// @brief Method Xor, addr 0xf83d78, size 0x190, virtual false, abstract: false, final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, int32_t xOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> y, int32_t yOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> z, int32_t zOff);

  /// @brief Method Xor, addr 0xf83b80, size 0xec, virtual false, abstract: false, final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y);

  /// @brief Method Xor, addr 0xf83c6c, size 0x10c, virtual false, abstract: false, final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y, int32_t yOff);

  /// @brief Method Xor, addr 0xf83f08, size 0x68, virtual false, abstract: false, final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y, int32_t yOff, int32_t yLen);

  /// @brief Method Xor, addr 0xf83fd4, size 0x130, virtual false, abstract: false, final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method .ctor, addr 0xf84384, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_LOOKUP();

  static inline void setStaticF_LOOKUP(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GcmUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GcmUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GcmUtilities(GcmUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GcmUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GcmUtilities(GcmUtilities const&) = delete;

  /// @brief Field E1 offset 0xffffffff size 0x4
  static constexpr uint32_t E1{ static_cast<uint32_t>(0xf0u) };

  /// @brief Field E1L offset 0xffffffff size 0x8
  static constexpr uint64_t E1L{ static_cast<uint64_t>(0xe100000000000000u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities*, "Org.BouncyCastle.Crypto.Modes.Gcm", "GcmUtilities");
