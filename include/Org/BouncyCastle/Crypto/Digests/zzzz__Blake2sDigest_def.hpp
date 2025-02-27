#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/Blake2sDigest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Blake2sDigest)
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Blake2sDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest);
// Dependencies Org.BouncyCastle.Crypto.IDigest, System.Object
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.Blake2sDigest
class CORDL_TYPE Blake2sDigest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field blake2s_IV, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_blake2s_IV, put = setStaticF_blake2s_IV)) ::ArrayW<uint32_t, ::Array<uint32_t>*> blake2s_IV;

  /// @brief Field blake2s_sigma, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_blake2s_sigma, put = setStaticF_blake2s_sigma)) ::System::Object* blake2s_sigma;

  /// @brief Field buffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field bufferPos, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_bufferPos, put = __cordl_internal_set_bufferPos)) int32_t bufferPos;

  /// @brief Field chainValue, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_chainValue, put = __cordl_internal_set_chainValue)) ::ArrayW<uint32_t, ::Array<uint32_t>*> chainValue;

  /// @brief Field digestLength, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_digestLength, put = __cordl_internal_set_digestLength)) int32_t digestLength;

  /// @brief Field f0, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_f0, put = __cordl_internal_set_f0)) uint32_t f0;

  /// @brief Field internalState, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_internalState, put = __cordl_internal_set_internalState)) ::ArrayW<uint32_t, ::Array<uint32_t>*> internalState;

  /// @brief Field key, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::ArrayW<uint8_t, ::Array<uint8_t>*> key;

  /// @brief Field keyLength, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_keyLength, put = __cordl_internal_set_keyLength)) int32_t keyLength;

  /// @brief Field personalization, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_personalization, put = __cordl_internal_set_personalization)) ::ArrayW<uint8_t, ::Array<uint8_t>*> personalization;

  /// @brief Field salt, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_salt, put = __cordl_internal_set_salt)) ::ArrayW<uint8_t, ::Array<uint8_t>*> salt;

  /// @brief Field t0, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_t0, put = __cordl_internal_set_t0)) uint32_t t0;

  /// @brief Field t1, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_t1, put = __cordl_internal_set_t1)) uint32_t t1;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Method BlockUpdate, addr 0x2698050, size 0x140, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t offset, int32_t len);

  /// @brief Method ClearKey, addr 0x2698448, size 0x48, virtual true, abstract: false, final false
  inline void ClearKey();

  /// @brief Method ClearSalt, addr 0x2698490, size 0x1c, virtual true, abstract: false, final false
  inline void ClearSalt();

  /// @brief Method Compress, addr 0x2697ac4, size 0x58c, virtual false, abstract: false, final false
  inline void Compress(::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t messagePos);

  /// @brief Method DoFinal, addr 0x2698190, size 0x130, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOffset);

  /// @brief Method G, addr 0x2698324, size 0xcc, virtual false, abstract: false, final false
  inline void G(uint32_t m1, uint32_t m2, int32_t posA, int32_t posB, int32_t posC, int32_t posD);

  /// @brief Method GetByteLength, addr 0x2698440, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x2698438, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDigestSize();

  /// @brief Method Init, addr 0x2697290, size 0x290, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method InitializeInternalState, addr 0x26978d0, size 0x13c, virtual false, abstract: false, final false
  inline void InitializeInternalState();

  static inline ::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* New_ctor(int32_t digestBits);

  static inline ::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline ::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t digestBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> personalization);

  /// @brief Method Reset, addr 0x26982c0, size 0x64, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x2697a0c, size 0xb8, virtual true, abstract: false, final false
  inline void Update(uint8_t b);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr int32_t const& __cordl_internal_get_bufferPos() const;

  constexpr int32_t& __cordl_internal_get_bufferPos();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_chainValue() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_chainValue();

  constexpr int32_t const& __cordl_internal_get_digestLength() const;

  constexpr int32_t& __cordl_internal_get_digestLength();

  constexpr uint32_t const& __cordl_internal_get_f0() const;

  constexpr uint32_t& __cordl_internal_get_f0();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_internalState() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_internalState();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_key() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_key();

  constexpr int32_t const& __cordl_internal_get_keyLength() const;

  constexpr int32_t& __cordl_internal_get_keyLength();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_personalization() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_personalization();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_salt() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_salt();

  constexpr uint32_t const& __cordl_internal_get_t0() const;

  constexpr uint32_t& __cordl_internal_get_t0();

  constexpr uint32_t const& __cordl_internal_get_t1() const;

  constexpr uint32_t& __cordl_internal_get_t1();

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_bufferPos(int32_t value);

  constexpr void __cordl_internal_set_chainValue(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_digestLength(int32_t value);

  constexpr void __cordl_internal_set_f0(uint32_t value);

  constexpr void __cordl_internal_set_internalState(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_keyLength(int32_t value);

  constexpr void __cordl_internal_set_personalization(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_t0(uint32_t value);

  constexpr void __cordl_internal_set_t1(uint32_t value);

  /// @brief Method .ctor, addr 0x2697064, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2697180, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest* digest);

  /// @brief Method .ctor, addr 0x269706c, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(int32_t digestBits);

  /// @brief Method .ctor, addr 0x2697520, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method .ctor, addr 0x269767c, size 0x254, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t digestBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalization);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_blake2s_IV();

  static inline ::System::Object* getStaticF_blake2s_sigma();

  /// @brief Method get_AlgorithmName, addr 0x26983f8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Method rotr32, addr 0x26983f0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t rotr32(uint32_t x, int32_t rot);

  static inline void setStaticF_blake2s_IV(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_blake2s_sigma(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Blake2sDigest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Blake2sDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Blake2sDigest(Blake2sDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Blake2sDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Blake2sDigest(Blake2sDigest const&) = delete;

  /// @brief Field BLOCK_LENGTH_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_LENGTH_BYTES{ static_cast<int32_t>(0x40) };

  /// @brief Field ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS{ static_cast<int32_t>(0xa) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 747 };

  /// @brief Field digestLength, offset: 0x10, size: 0x4, def value: None
  int32_t ___digestLength;

  /// @brief Field keyLength, offset: 0x14, size: 0x4, def value: None
  int32_t ___keyLength;

  /// @brief Field salt, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___salt;

  /// @brief Field personalization, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___personalization;

  /// @brief Field key, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___key;

  /// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field bufferPos, offset: 0x38, size: 0x4, def value: None
  int32_t ___bufferPos;

  /// @brief Field internalState, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___internalState;

  /// @brief Field chainValue, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___chainValue;

  /// @brief Field t0, offset: 0x50, size: 0x4, def value: None
  uint32_t ___t0;

  /// @brief Field t1, offset: 0x54, size: 0x4, def value: None
  uint32_t ___t1;

  /// @brief Field f0, offset: 0x58, size: 0x4, def value: None
  uint32_t ___f0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___digestLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___keyLength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___salt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___personalization) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___key) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___bufferPos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___internalState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___chainValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___t0) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___t1) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, ___f0) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Blake2sDigest, 0x60>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Blake2sDigest*, "Org.BouncyCastle.Crypto.Digests", "Blake2sDigest");
