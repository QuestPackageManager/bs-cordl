#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/Gost3411_2012Digest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3411_2012Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Gost3411_2012Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest);
// Dependencies Org.BouncyCastle.Crypto.IDigest, Org.BouncyCastle.Utilities.IMemoable, System.Object
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
class CORDL_TYPE Gost3411_2012Digest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field C, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_C, put = setStaticF_C)) ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> C;

  /// @brief Field IV, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_IV, put = __cordl_internal_set_IV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> IV;

  /// @brief Field Ki, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Ki, put = __cordl_internal_set_Ki)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Ki;

  /// @brief Field N, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_N, put = __cordl_internal_set_N)) ::ArrayW<uint8_t, ::Array<uint8_t>*> N;

  /// @brief Field Sigma, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Sigma, put = __cordl_internal_set_Sigma)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Sigma;

  /// @brief Field T, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_T, put = setStaticF_T)) ::ArrayW<::ArrayW<uint64_t, ::Array<uint64_t>*>, ::Array<::ArrayW<uint64_t, ::Array<uint64_t>*>>*> T;

  /// @brief Field Zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Zero;

  /// @brief Field bOff, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_bOff, put = __cordl_internal_set_bOff)) int32_t bOff;

  /// @brief Field block, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_block, put = __cordl_internal_set_block)) ::ArrayW<uint8_t, ::Array<uint8_t>*> block;

  /// @brief Field h, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_h, put = __cordl_internal_set_h)) ::ArrayW<uint8_t, ::Array<uint8_t>*> h;

  /// @brief Field m, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m, put = __cordl_internal_set_m)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m;

  /// @brief Field tmp, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_tmp, put = __cordl_internal_set_tmp)) ::ArrayW<uint8_t, ::Array<uint8_t>*> tmp;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Method BlockUpdate, addr 0x269bcb8, size 0x144, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method Copy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method DoFinal, addr 0x269b700, size 0x178, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method E, addr 0x269c9ac, size 0x11c, virtual false, abstract: false, final false
  inline void E(::ArrayW<uint8_t, ::Array<uint8_t>*> K, ::ArrayW<uint8_t, ::Array<uint8_t>*> m);

  /// @brief Method F, addr 0x269bdfc, size 0xb54, virtual false, abstract: false, final false
  inline void F(::ArrayW<uint8_t, ::Array<uint8_t>*> V);

  /// @brief Method GetByteLength, addr 0x269bae8, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  static inline ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

  /// @brief Method Reset, addr 0x269ba44, size 0xa4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Reset, addr 0x269baf0, size 0x14c, virtual true, abstract: false, final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method Update, addr 0x269bc3c, size 0x7c, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_IV() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_IV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Ki() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Ki();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_N() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_N();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Sigma() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Sigma();

  constexpr int32_t const& __cordl_internal_get_bOff() const;

  constexpr int32_t& __cordl_internal_get_bOff();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_block() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_block();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_h() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_h();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_tmp() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_tmp();

  constexpr void __cordl_internal_set_IV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Ki(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_N(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Sigma(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_bOff(int32_t value);

  constexpr void __cordl_internal_set_block(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_h(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_tmp(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x269b5fc, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

  /// @brief Method addMod512, addr 0x269b974, size 0x60, virtual false, abstract: false, final false
  inline void addMod512(::ArrayW<uint8_t, ::Array<uint8_t>*> A, ::ArrayW<uint8_t, ::Array<uint8_t>*> B);

  /// @brief Method addMod512, addr 0x269b8f8, size 0x7c, virtual false, abstract: false, final false
  inline void addMod512(::ArrayW<uint8_t, ::Array<uint8_t>*> A, int32_t num);

  /// @brief Method g_N, addr 0x269b878, size 0x80, virtual false, abstract: false, final false
  inline void g_N(::ArrayW<uint8_t, ::Array<uint8_t>*> h, ::ArrayW<uint8_t, ::Array<uint8_t>*> N, ::ArrayW<uint8_t, ::Array<uint8_t>*> m);

  static inline ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> getStaticF_C();

  static inline ::ArrayW<::ArrayW<uint64_t, ::Array<uint64_t>*>, ::Array<::ArrayW<uint64_t, ::Array<uint64_t>*>>*> getStaticF_T();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Zero();

  /// @brief Method get_AlgorithmName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

  /// @brief Method reverse, addr 0x269b9d4, size 0x70, virtual false, abstract: false, final false
  inline void reverse(::ArrayW<uint8_t, ::Array<uint8_t>*> src, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst);

  static inline void setStaticF_C(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  static inline void setStaticF_T(::ArrayW<::ArrayW<uint64_t, ::Array<uint64_t>*>, ::Array<::ArrayW<uint64_t, ::Array<uint64_t>*>>*> value);

  static inline void setStaticF_Zero(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method xor512, addr 0x269c950, size 0x5c, virtual false, abstract: false, final false
  inline void xor512(::ArrayW<uint8_t, ::Array<uint8_t>*> A, ::ArrayW<uint8_t, ::Array<uint8_t>*> B);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3411_2012Digest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3411_2012Digest(Gost3411_2012Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3411_2012Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3411_2012Digest(Gost3411_2012Digest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 752 };

  /// @brief Field IV, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___IV;

  /// @brief Field N, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___N;

  /// @brief Field Sigma, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Sigma;

  /// @brief Field Ki, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Ki;

  /// @brief Field m, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m;

  /// @brief Field h, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___h;

  /// @brief Field tmp, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___tmp;

  /// @brief Field block, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___block;

  /// @brief Field bOff, offset: 0x50, size: 0x4, def value: None
  int32_t ___bOff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, ___IV) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, ___N) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, ___Sigma) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, ___Ki) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, ___m) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, ___h) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, ___tmp) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, ___block) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, ___bOff) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411_2012Digest");
