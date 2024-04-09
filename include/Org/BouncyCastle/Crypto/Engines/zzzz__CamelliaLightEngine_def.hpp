#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CamelliaLightEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class CamelliaLightEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine);
// Type: Org.BouncyCastle.Crypto.Engines::CamelliaLightEngine
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::CamelliaLightEngine*
class CORDL_TYPE CamelliaLightEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field SBOX1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SBOX1, put = setStaticF_SBOX1))::ArrayW<uint8_t, ::Array<uint8_t>*> SBOX1;

  /// @brief Field SIGMA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SIGMA, put = setStaticF_SIGMA))::ArrayW<uint32_t, ::Array<uint32_t>*> SIGMA;

  /// @brief Field _keyis128, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__keyis128, put = __cordl_internal_set__keyis128)) bool _keyis128;

  /// @brief Field initialised, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_initialised, put = __cordl_internal_set_initialised)) bool initialised;

  /// @brief Field ke, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ke, put = __cordl_internal_set_ke))::ArrayW<uint32_t, ::Array<uint32_t>*> ke;

  /// @brief Field kw, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_kw, put = __cordl_internal_set_kw))::ArrayW<uint32_t, ::Array<uint32_t>*> kw;

  /// @brief Field state, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state))::ArrayW<uint32_t, ::Array<uint32_t>*> state;

  /// @brief Field subkey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subkey, put = __cordl_internal_set_subkey))::ArrayW<uint32_t, ::Array<uint32_t>*> subkey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method GetBlockSize, addr 0x102da54, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x102da5c, size 0xf0, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x102db4c, size 0x138, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x102dc84, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get__keyis128() const;

  constexpr bool& __cordl_internal_get__keyis128();

  constexpr bool const& __cordl_internal_get_initialised() const;

  constexpr bool& __cordl_internal_get_initialised();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_ke() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_ke();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_kw() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_kw();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_state() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_state();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_subkey() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_subkey();

  constexpr void __cordl_internal_set__keyis128(bool value);

  constexpr void __cordl_internal_set_initialised(bool value);

  constexpr void __cordl_internal_set_ke(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_kw(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_state(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_subkey(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method .ctor, addr 0x102d97c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method bytes2uint, addr 0x102be5c, size 0x60, virtual false, abstract: false, final false
  static inline uint32_t bytes2uint(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t offset);

  /// @brief Method camelliaF2, addr 0x102c0b8, size 0x2e8, virtual false, abstract: false, final false
  inline void camelliaF2(::ArrayW<uint32_t, ::Array<uint32_t>*> s, ::ArrayW<uint32_t, ::Array<uint32_t>*> skey, int32_t keyoff);

  /// @brief Method camelliaFLs, addr 0x102c3a0, size 0x134, virtual false, abstract: false, final false
  inline void camelliaFLs(::ArrayW<uint32_t, ::Array<uint32_t>*> s, ::ArrayW<uint32_t, ::Array<uint32_t>*> fkey, int32_t keyoff);

  /// @brief Method decroldq, addr 0x102bae4, size 0x128, virtual false, abstract: false, final false
  static inline void decroldq(int32_t rot, ::ArrayW<uint32_t, ::Array<uint32_t>*> ki, int32_t ioff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ko, int32_t ooff);

  /// @brief Method decroldqo32, addr 0x102bd34, size 0x128, virtual false, abstract: false, final false
  static inline void decroldqo32(int32_t rot, ::ArrayW<uint32_t, ::Array<uint32_t>*> ki, int32_t ioff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ko, int32_t ooff);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SBOX1();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SIGMA();

  /// @brief Method get_AlgorithmName, addr 0x102da0c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x102da4c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  /// @brief Method lRot8, addr 0x102bf04, size 0x1c, virtual false, abstract: false, final false
  inline uint8_t lRot8(uint8_t v, int32_t rot);

  /// @brief Method leftRotate, addr 0x102b9a8, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t leftRotate(uint32_t x, int32_t s);

  /// @brief Method processBlock128, addr 0x102d3e0, size 0x2b0, virtual false, abstract: false, final false
  inline int32_t processBlock128(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method processBlock192or256, addr 0x102d690, size 0x2ec, virtual false, abstract: false, final false
  inline int32_t processBlock192or256(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method rightRotate, addr 0x102b994, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t rightRotate(uint32_t x, int32_t s);

  /// @brief Method roldq, addr 0x102b9bc, size 0x128, virtual false, abstract: false, final false
  static inline void roldq(int32_t rot, ::ArrayW<uint32_t, ::Array<uint32_t>*> ki, int32_t ioff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ko, int32_t ooff);

  /// @brief Method roldqo32, addr 0x102bc0c, size 0x128, virtual false, abstract: false, final false
  static inline void roldqo32(int32_t rot, ::ArrayW<uint32_t, ::Array<uint32_t>*> ki, int32_t ioff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ko, int32_t ooff);

  /// @brief Method sbox2, addr 0x102bf20, size 0x88, virtual false, abstract: false, final false
  inline uint32_t sbox2(int32_t x);

  /// @brief Method sbox3, addr 0x102bfa8, size 0x88, virtual false, abstract: false, final false
  inline uint32_t sbox3(int32_t x);

  /// @brief Method sbox4, addr 0x102c030, size 0x88, virtual false, abstract: false, final false
  inline uint32_t sbox4(int32_t x);

  /// @brief Method setKey, addr 0x102c4d4, size 0xf0c, virtual false, abstract: false, final false
  inline void setKey(bool forEncryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline void setStaticF_SBOX1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_SIGMA(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method uint2bytes, addr 0x102bebc, size 0x48, virtual false, abstract: false, final false
  static inline void uint2bytes(uint32_t word, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t offset);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CamelliaLightEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CamelliaLightEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CamelliaLightEngine(CamelliaLightEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CamelliaLightEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CamelliaLightEngine(CamelliaLightEngine const&) = delete;

  /// @brief Field initialised, offset: 0x10, size: 0x1, def value: None
  bool ___initialised;

  /// @brief Field _keyis128, offset: 0x11, size: 0x1, def value: None
  bool ____keyis128;

  /// @brief Field subkey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___subkey;

  /// @brief Field kw, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___kw;

  /// @brief Field ke, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___ke;

  /// @brief Field state, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___state;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine, ___initialised) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine, ____keyis128) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine, ___subkey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine, ___kw) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine, ___ke) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine, ___state) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine*, "Org.BouncyCastle.Crypto.Engines", "CamelliaLightEngine");
