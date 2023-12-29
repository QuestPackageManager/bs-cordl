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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(953))
// CS Name: ::Org.BouncyCastle.Crypto.Modes.Gcm::GcmUtilities*
class CORDL_TYPE GcmUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field LOOKUP, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LOOKUP, put = setStaticF_LOOKUP))::ArrayW<uint32_t, ::Array<uint32_t>*> LOOKUP;

  static inline void setStaticF_LOOKUP(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_LOOKUP();

  /// @brief Method GenerateLookup addr 0xe9d2d0 size 0xcc virtual false final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> GenerateLookup();

  /// @brief Method OneAsBytes addr 0xe9d39c size 0x64 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> OneAsBytes();

  /// @brief Method OneAsUints addr 0xe9d09c size 0x64 virtual false final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> OneAsUints();

  /// @brief Method OneAsUlongs addr 0xe9d400 size 0x64 virtual false final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> OneAsUlongs();

  /// @brief Method AsBytes addr 0xe9d464 size 0x8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsBytes(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method AsBytes addr 0xe9d1cc size 0xc virtual false final false
  static inline void AsBytes(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method AsBytes addr 0xe9d46c size 0x68 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsBytes(::ArrayW<uint64_t, ::Array<uint64_t>*> x);

  /// @brief Method AsBytes addr 0xe9d4d4 size 0xc virtual false final false
  static inline void AsBytes(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method AsUints addr 0xe9cf24 size 0x68 virtual false final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> AsUints(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  /// @brief Method AsUints addr 0xe9d4e0 size 0x10 virtual false final false
  static inline void AsUints(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, ::ArrayW<uint32_t, ::Array<uint32_t>*> output);

  /// @brief Method AsUlongs addr 0xe9d4f0 size 0x68 virtual false final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> AsUlongs(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  /// @brief Method AsUlongs addr 0xe9d558 size 0x10 virtual false final false
  static inline void AsUlongs(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  /// @brief Method Multiply addr 0xe9d568 size 0x8c virtual false final false
  static inline void Multiply(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y);

  /// @brief Method Multiply addr 0xe9d100 size 0xcc virtual false final false
  static inline void Multiply(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Multiply addr 0xe9d5f4 size 0x94 virtual false final false
  static inline void Multiply(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y);

  /// @brief Method MultiplyP addr 0xe9d688 size 0x84 virtual false final false
  static inline void MultiplyP(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method MultiplyP addr 0xe9d77c size 0x94 virtual false final false
  static inline void MultiplyP(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method MultiplyP8 addr 0xe9d8a0 size 0xa4 virtual false final false
  static inline void MultiplyP8(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method MultiplyP8 addr 0xe9d9d8 size 0xb4 virtual false final false
  static inline void MultiplyP8(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method ShiftRight addr 0xe9d70c size 0x70 virtual false final false
  static inline uint32_t ShiftRight(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method ShiftRight addr 0xe9d810 size 0x90 virtual false final false
  static inline uint32_t ShiftRight(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method ShiftRightN addr 0xe9d944 size 0x94 virtual false final false
  static inline uint32_t ShiftRightN(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t n);

  /// @brief Method ShiftRightN addr 0xe9da8c size 0xb4 virtual false final false
  static inline uint32_t ShiftRightN(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t n, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Xor addr 0xe9db40 size 0xec virtual false final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y);

  /// @brief Method Xor addr 0xe9dc2c size 0x10c virtual false final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y, int32_t yOff);

  /// @brief Method Xor addr 0xe9dd38 size 0x190 virtual false final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, int32_t xOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> y, int32_t yOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> z, int32_t zOff);

  /// @brief Method Xor addr 0xe9dec8 size 0x68 virtual false final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y, int32_t yOff, int32_t yLen);

  /// @brief Method Xor addr 0xe9df30 size 0x64 virtual false final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, int32_t xOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> y, int32_t yOff, int32_t len);

  /// @brief Method Xor addr 0xe9df94 size 0x130 virtual false final false
  static inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y, ::ArrayW<uint8_t, ::Array<uint8_t>*> z);

  /// @brief Method Xor addr 0xe9e0c4 size 0x9c virtual false final false
  static inline void Xor(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method Xor addr 0xe9e160 size 0xc0 virtual false final false
  static inline void Xor(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method Xor addr 0xe9e220 size 0x60 virtual false final false
  static inline void Xor(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y);

  /// @brief Method Xor addr 0xe9e280 size 0x78 virtual false final false
  static inline void Xor(::ArrayW<uint64_t, ::Array<uint64_t>*> x, ::ArrayW<uint64_t, ::Array<uint64_t>*> y, ::ArrayW<uint64_t, ::Array<uint64_t>*> z);

  static inline ::Org::BouncyCastle::Crypto::Modes::Gcm::GcmUtilities* New_ctor();

  /// @brief Method .ctor addr 0xe9e344 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GcmUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GcmUtilities(GcmUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GcmUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GcmUtilities(GcmUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GcmUtilities();

public:
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
