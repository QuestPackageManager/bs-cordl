#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD2Digest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class MD2Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::MD2Digest);
// Type: Org.BouncyCastle.Crypto.Digests::MD2Digest
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Digests::MD2Digest*
class CORDL_TYPE MD2Digest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field C, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_C, put = __cordl_internal_set_C))::ArrayW<uint8_t, ::Array<uint8_t>*> C;

  /// @brief Field COff, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_COff, put = __cordl_internal_set_COff)) int32_t COff;

  /// @brief Field M, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_M, put = __cordl_internal_set_M))::ArrayW<uint8_t, ::Array<uint8_t>*> M;

  /// @brief Field S, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_S, put = setStaticF_S))::ArrayW<uint8_t, ::Array<uint8_t>*> S;

  /// @brief Field X, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_X, put = __cordl_internal_set_X))::ArrayW<uint8_t, ::Array<uint8_t>*> X;

  /// @brief Field mOff, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mOff, put = __cordl_internal_set_mOff)) int32_t mOff;

  /// @brief Field xOff, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_xOff, put = __cordl_internal_set_xOff)) int32_t xOff;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Method BlockUpdate, addr 0x148c18c, size 0x128, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Copy, addr 0x148c2b4, size 0x60, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method CopyIn, addr 0x148bcc8, size 0x9c, virtual false, abstract: false, final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::MD2Digest* t);

  /// @brief Method DoFinal, addr 0x148bdb4, size 0xb8, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetByteLength, addr 0x148bdac, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x148bda4, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetDigestSize();

  static inline ::Org::BouncyCastle::Crypto::Digests::MD2Digest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::MD2Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::MD2Digest* t);

  /// @brief Method ProcessBlock, addr 0x148bf90, size 0x194, virtual false, abstract: false, final false
  inline void ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> m);

  /// @brief Method ProcessChecksum, addr 0x148be6c, size 0x124, virtual false, abstract: false, final false
  inline void ProcessChecksum(::ArrayW<uint8_t, ::Array<uint8_t>*> m);

  /// @brief Method Reset, addr 0x148bb80, size 0xb8, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Reset, addr 0x148c314, size 0x84, virtual true, abstract: false, final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method Update, addr 0x148c124, size 0x68, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_C() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_C();

  constexpr int32_t const& __cordl_internal_get_COff() const;

  constexpr int32_t& __cordl_internal_get_COff();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_M() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_M();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_X() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_X();

  constexpr int32_t const& __cordl_internal_get_mOff() const;

  constexpr int32_t& __cordl_internal_get_mOff();

  constexpr int32_t const& __cordl_internal_get_xOff() const;

  constexpr int32_t& __cordl_internal_get_xOff();

  constexpr void __cordl_internal_set_C(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_COff(int32_t value);

  constexpr void __cordl_internal_set_M(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_X(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mOff(int32_t value);

  constexpr void __cordl_internal_set_xOff(int32_t value);

  /// @brief Method .ctor, addr 0x148bb00, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x148bc38, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::MD2Digest* t);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_S();

  /// @brief Method get_AlgorithmName, addr 0x148bd64, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

  static inline void setStaticF_S(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD2Digest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD2Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD2Digest(MD2Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD2Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD2Digest(MD2Digest const&) = delete;

  /// @brief Field X, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___X;

  /// @brief Field xOff, offset: 0x18, size: 0x4, def value: None
  int32_t ___xOff;

  /// @brief Field M, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___M;

  /// @brief Field mOff, offset: 0x28, size: 0x4, def value: None
  int32_t ___mOff;

  /// @brief Field C, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___C;

  /// @brief Field COff, offset: 0x38, size: 0x4, def value: None
  int32_t ___COff;

  /// @brief Field BYTE_LENGTH offset 0xffffffff size 0x4
  static constexpr int32_t BYTE_LENGTH{ static_cast<int32_t>(0x10) };

  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::MD2Digest, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD2Digest, ___X) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD2Digest, ___xOff) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD2Digest, ___M) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD2Digest, ___mOff) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD2Digest, ___C) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::MD2Digest, ___COff) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::MD2Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::MD2Digest*, "Org.BouncyCastle.Crypto.Digests", "MD2Digest");
