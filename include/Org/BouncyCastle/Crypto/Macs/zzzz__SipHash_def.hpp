#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Macs/SipHash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SipHash)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class SipHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::SipHash);
// Dependencies Org.BouncyCastle.Crypto.IMac, System.Object
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Macs.SipHash
class CORDL_TYPE SipHash : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field c, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) int32_t c;

  /// @brief Field d, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d)) int32_t d;

  /// @brief Field k0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_k0, put = __cordl_internal_set_k0)) int64_t k0;

  /// @brief Field k1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_k1, put = __cordl_internal_set_k1)) int64_t k1;

  /// @brief Field m, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m, put = __cordl_internal_set_m)) int64_t m;

  /// @brief Field v0, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_v0, put = __cordl_internal_set_v0)) int64_t v0;

  /// @brief Field v1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_v1, put = __cordl_internal_set_v1)) int64_t v1;

  /// @brief Field v2, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_v2, put = __cordl_internal_set_v2)) int64_t v2;

  /// @brief Field v3, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_v3, put = __cordl_internal_set_v3)) int64_t v3;

  /// @brief Field wordCount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_wordCount, put = __cordl_internal_set_wordCount)) int32_t wordCount;

  /// @brief Field wordPos, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_wordPos, put = __cordl_internal_set_wordPos)) int32_t wordPos;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  /// @brief Method ApplySipRounds, addr 0x239f62c, size 0x4c, virtual true, abstract: false, final false
  inline void ApplySipRounds(int32_t n);

  /// @brief Method BlockUpdate, addr 0x239f2f0, size 0x1ac, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t offset, int32_t length);

  /// @brief Method DoFinal, addr 0x239f538, size 0x44, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method DoFinal, addr 0x239f49c, size 0x9c, virtual true, abstract: false, final false
  inline int64_t DoFinal();

  /// @brief Method GetMacSize, addr 0x239f158, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetMacSize();

  /// @brief Method Init, addr 0x239f160, size 0x14c, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Macs::SipHash* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Macs::SipHash* New_ctor(int32_t c, int32_t d);

  /// @brief Method ProcessMessageWord, addr 0x239f5e0, size 0x4c, virtual true, abstract: false, final false
  inline void ProcessMessageWord();

  /// @brief Method Reset, addr 0x239f57c, size 0x64, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method RotateLeft, addr 0x239f678, size 0xc, virtual false, abstract: false, final false
  static inline int64_t RotateLeft(int64_t x, int32_t n);

  /// @brief Method Update, addr 0x239f2ac, size 0x44, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  constexpr int32_t const& __cordl_internal_get_c() const;

  constexpr int32_t& __cordl_internal_get_c();

  constexpr int32_t const& __cordl_internal_get_d() const;

  constexpr int32_t& __cordl_internal_get_d();

  constexpr int64_t const& __cordl_internal_get_k0() const;

  constexpr int64_t& __cordl_internal_get_k0();

  constexpr int64_t const& __cordl_internal_get_k1() const;

  constexpr int64_t& __cordl_internal_get_k1();

  constexpr int64_t const& __cordl_internal_get_m() const;

  constexpr int64_t& __cordl_internal_get_m();

  constexpr int64_t const& __cordl_internal_get_v0() const;

  constexpr int64_t& __cordl_internal_get_v0();

  constexpr int64_t const& __cordl_internal_get_v1() const;

  constexpr int64_t& __cordl_internal_get_v1();

  constexpr int64_t const& __cordl_internal_get_v2() const;

  constexpr int64_t& __cordl_internal_get_v2();

  constexpr int64_t const& __cordl_internal_get_v3() const;

  constexpr int64_t& __cordl_internal_get_v3();

  constexpr int32_t const& __cordl_internal_get_wordCount() const;

  constexpr int32_t& __cordl_internal_get_wordCount();

  constexpr int32_t const& __cordl_internal_get_wordPos() const;

  constexpr int32_t& __cordl_internal_get_wordPos();

  constexpr void __cordl_internal_set_c(int32_t value);

  constexpr void __cordl_internal_set_d(int32_t value);

  constexpr void __cordl_internal_set_k0(int64_t value);

  constexpr void __cordl_internal_set_k1(int64_t value);

  constexpr void __cordl_internal_set_m(int64_t value);

  constexpr void __cordl_internal_set_v0(int64_t value);

  constexpr void __cordl_internal_set_v1(int64_t value);

  constexpr void __cordl_internal_set_v2(int64_t value);

  constexpr void __cordl_internal_set_v3(int64_t value);

  constexpr void __cordl_internal_set_wordCount(int32_t value);

  constexpr void __cordl_internal_set_wordPos(int32_t value);

  /// @brief Method .ctor, addr 0x239ef6c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x239ef94, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t c, int32_t d);

  /// @brief Method get_AlgorithmName, addr 0x239efc4, size 0x194, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
  constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SipHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SipHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SipHash(SipHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SipHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SipHash(SipHash const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 946 };

  /// @brief Field c, offset: 0x10, size: 0x4, def value: None
  int32_t ___c;

  /// @brief Field d, offset: 0x14, size: 0x4, def value: None
  int32_t ___d;

  /// @brief Field k0, offset: 0x18, size: 0x8, def value: None
  int64_t ___k0;

  /// @brief Field k1, offset: 0x20, size: 0x8, def value: None
  int64_t ___k1;

  /// @brief Field v0, offset: 0x28, size: 0x8, def value: None
  int64_t ___v0;

  /// @brief Field v1, offset: 0x30, size: 0x8, def value: None
  int64_t ___v1;

  /// @brief Field v2, offset: 0x38, size: 0x8, def value: None
  int64_t ___v2;

  /// @brief Field v3, offset: 0x40, size: 0x8, def value: None
  int64_t ___v3;

  /// @brief Field m, offset: 0x48, size: 0x8, def value: None
  int64_t ___m;

  /// @brief Field wordPos, offset: 0x50, size: 0x4, def value: None
  int32_t ___wordPos;

  /// @brief Field wordCount, offset: 0x54, size: 0x4, def value: None
  int32_t ___wordCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SipHash, ___c) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SipHash, ___d) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SipHash, ___k0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SipHash, ___k1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SipHash, ___v0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SipHash, ___v1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SipHash, ___v2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SipHash, ___v3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SipHash, ___m) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SipHash, ___wordPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SipHash, ___wordCount) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::SipHash, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::SipHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::SipHash*, "Org.BouncyCastle.Crypto.Macs", "SipHash");
