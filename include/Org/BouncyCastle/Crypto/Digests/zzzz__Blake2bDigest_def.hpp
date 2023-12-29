#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Blake2bDigest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Blake2bDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest);
// Type: Org.BouncyCastle.Crypto.Digests::Blake2bDigest
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(746))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::Blake2bDigest*
class CORDL_TYPE Blake2bDigest : public ::System::Object {
public:
  // Declarations
  /// @brief Field digestLength, offset 0x10, size 0x4
  __declspec(property(get = __get_digestLength, put = __set_digestLength)) int32_t digestLength;

  /// @brief Field keyLength, offset 0x14, size 0x4
  __declspec(property(get = __get_keyLength, put = __set_keyLength)) int32_t keyLength;

  /// @brief Field salt, offset 0x18, size 0x8
  __declspec(property(get = __get_salt, put = __set_salt))::ArrayW<uint8_t, ::Array<uint8_t>*> salt;

  /// @brief Field personalization, offset 0x20, size 0x8
  __declspec(property(get = __get_personalization, put = __set_personalization))::ArrayW<uint8_t, ::Array<uint8_t>*> personalization;

  /// @brief Field key, offset 0x28, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::ArrayW<uint8_t, ::Array<uint8_t>*> key;

  /// @brief Field buffer, offset 0x30, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field bufferPos, offset 0x38, size 0x4
  __declspec(property(get = __get_bufferPos, put = __set_bufferPos)) int32_t bufferPos;

  /// @brief Field internalState, offset 0x40, size 0x8
  __declspec(property(get = __get_internalState, put = __set_internalState))::ArrayW<uint64_t, ::Array<uint64_t>*> internalState;

  /// @brief Field chainValue, offset 0x48, size 0x8
  __declspec(property(get = __get_chainValue, put = __set_chainValue))::ArrayW<uint64_t, ::Array<uint64_t>*> chainValue;

  /// @brief Field t0, offset 0x50, size 0x8
  __declspec(property(get = __get_t0, put = __set_t0)) uint64_t t0;

  /// @brief Field t1, offset 0x58, size 0x8
  __declspec(property(get = __get_t1, put = __set_t1)) uint64_t t1;

  /// @brief Field f0, offset 0x60, size 0x8
  __declspec(property(get = __get_f0, put = __set_f0)) uint64_t f0;

  /// @brief Field blake2b_IV, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_blake2b_IV, put = setStaticF_blake2b_IV))::ArrayW<uint64_t, ::Array<uint64_t>*> blake2b_IV;

  /// @brief Field blake2b_sigma, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_blake2b_sigma, put = setStaticF_blake2b_sigma)) Il2CppObject* blake2b_sigma;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  constexpr int32_t& __get_digestLength();

  constexpr int32_t const& __get_digestLength() const;

  constexpr void __set_digestLength(int32_t value);

  constexpr int32_t& __get_keyLength();

  constexpr int32_t const& __get_keyLength() const;

  constexpr void __set_keyLength(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_salt();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_salt() const;

  constexpr void __set_salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_personalization();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_personalization() const;

  constexpr void __set_personalization(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_key();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_key() const;

  constexpr void __set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buffer() const;

  constexpr void __set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_bufferPos();

  constexpr int32_t const& __get_bufferPos() const;

  constexpr void __set_bufferPos(int32_t value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __get_internalState();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __get_internalState() const;

  constexpr void __set_internalState(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __get_chainValue();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __get_chainValue() const;

  constexpr void __set_chainValue(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr uint64_t& __get_t0();

  constexpr uint64_t const& __get_t0() const;

  constexpr void __set_t0(uint64_t value);

  constexpr uint64_t& __get_t1();

  constexpr uint64_t const& __get_t1() const;

  constexpr void __set_t1(uint64_t value);

  constexpr uint64_t& __get_f0();

  constexpr uint64_t const& __get_f0() const;

  constexpr void __set_f0(uint64_t value);

  static inline void setStaticF_blake2b_IV(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF_blake2b_IV();

  static inline void setStaticF_blake2b_sigma(Il2CppObject* value);

  static inline Il2CppObject* getStaticF_blake2b_sigma();

  static inline ::Org::BouncyCastle::Crypto::Digests::Blake2bDigest* New_ctor();

  /// @brief Method .ctor addr 0x11ac260 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::Blake2bDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest* digest);

  /// @brief Method .ctor addr 0x11ac384 size 0x134 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Digests::Blake2bDigest* New_ctor(int32_t digestSize);

  /// @brief Method .ctor addr 0x11ac268 size 0x11c virtual false final false
  inline void _ctor(int32_t digestSize);

  static inline ::Org::BouncyCastle::Crypto::Digests::Blake2bDigest* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method .ctor addr 0x11ac764 size 0x164 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline ::Org::BouncyCastle::Crypto::Digests::Blake2bDigest* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t digestLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> personalization);

  /// @brief Method .ctor addr 0x11ac8c8 size 0x268 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t digestLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::ArrayW<uint8_t, ::Array<uint8_t>*> personalization);

  /// @brief Method Init addr 0x11ac4b8 size 0x2ac virtual false final false
  inline void Init();

  /// @brief Method InitializeInternalState addr 0x11acb30 size 0x148 virtual false final false
  inline void InitializeInternalState();

  /// @brief Method Update addr 0x11acc78 size 0xb8 virtual true final false
  inline void Update(uint8_t b);

  /// @brief Method BlockUpdate addr 0x11ad2bc size 0x140 virtual true final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t offset, int32_t len);

  /// @brief Method DoFinal addr 0x11ad3fc size 0x14c virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOffset);

  /// @brief Method Reset addr 0x11ad548 size 0x68 virtual true final false
  inline void Reset();

  /// @brief Method Compress addr 0x11acd30 size 0x58c virtual false final false
  inline void Compress(::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t messagePos);

  /// @brief Method G addr 0x11ad5b0 size 0x208 virtual false final false
  inline void G(uint64_t m1, uint64_t m2, int32_t posA, int32_t posB, int32_t posC, int32_t posD);

  /// @brief Method Rotr64 addr 0x11ad7b8 size 0x8 virtual false final false
  static inline uint64_t Rotr64(uint64_t x, int32_t rot);

  /// @brief Method get_AlgorithmName addr 0x11ad7c0 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize addr 0x11ad800 size 0x8 virtual true final false
  inline int32_t GetDigestSize();

  /// @brief Method GetByteLength addr 0x11ad808 size 0x8 virtual true final false
  inline int32_t GetByteLength();

  /// @brief Method ClearKey addr 0x11ad810 size 0x48 virtual true final false
  inline void ClearKey();

  /// @brief Method ClearSalt addr 0x11ad858 size 0x1c virtual true final false
  inline void ClearSalt();

  // Ctor Parameters [CppParam { name: "", ty: "Blake2bDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Blake2bDigest(Blake2bDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Blake2bDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Blake2bDigest(Blake2bDigest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Blake2bDigest();

public:
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
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___internalState;

  /// @brief Field chainValue, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___chainValue;

  /// @brief Field t0, offset: 0x50, size: 0x8, def value: None
  uint64_t ___t0;

  /// @brief Field t1, offset: 0x58, size: 0x8, def value: None
  uint64_t ___t1;

  /// @brief Field f0, offset: 0x60, size: 0x8, def value: None
  uint64_t ___f0;

  /// @brief Field ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS{ static_cast<int32_t>(0xc) };

  /// @brief Field BLOCK_LENGTH_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_LENGTH_BYTES{ static_cast<int32_t>(0x80) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, 0x68>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___digestLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___keyLength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___salt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___personalization) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___key) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___bufferPos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___internalState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___chainValue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___t0) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___t1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest, ___f0) == 0x60, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::Blake2bDigest*, "Org.BouncyCastle.Crypto.Digests", "Blake2bDigest");
