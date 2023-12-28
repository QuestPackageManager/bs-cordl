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
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(831))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::CamelliaLightEngine*
class CORDL_TYPE CamelliaLightEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field initialised, offset 0x10, size 0x1
  __declspec(property(get = __get_initialised, put = __set_initialised)) bool initialised;

  /// @brief Field _keyis128, offset 0x11, size 0x1
  __declspec(property(get = __get__keyis128, put = __set__keyis128)) bool _keyis128;

  /// @brief Field subkey, offset 0x18, size 0x8
  __declspec(property(get = __get_subkey, put = __set_subkey))::ArrayW<uint32_t, ::Array<uint32_t>*> subkey;

  /// @brief Field kw, offset 0x20, size 0x8
  __declspec(property(get = __get_kw, put = __set_kw))::ArrayW<uint32_t, ::Array<uint32_t>*> kw;

  /// @brief Field ke, offset 0x28, size 0x8
  __declspec(property(get = __get_ke, put = __set_ke))::ArrayW<uint32_t, ::Array<uint32_t>*> ke;

  /// @brief Field state, offset 0x30, size 0x8
  __declspec(property(get = __get_state, put = __set_state))::ArrayW<uint32_t, ::Array<uint32_t>*> state;

  /// @brief Field SIGMA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SIGMA, put = setStaticF_SIGMA))::ArrayW<uint32_t, ::Array<uint32_t>*> SIGMA;

  /// @brief Field SBOX1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SBOX1, put = setStaticF_SBOX1))::ArrayW<uint8_t, ::Array<uint8_t>*> SBOX1;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  constexpr bool& __get_initialised();

  constexpr bool const& __get_initialised() const;

  constexpr void __set_initialised(bool value);

  constexpr bool& __get__keyis128();

  constexpr bool const& __get__keyis128() const;

  constexpr void __set__keyis128(bool value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_subkey();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_subkey() const;

  constexpr void __set_subkey(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_kw();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_kw() const;

  constexpr void __set_kw(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_ke();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_ke() const;

  constexpr void __set_ke(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_state();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_state() const;

  constexpr void __set_state(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SIGMA(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SIGMA();

  static inline void setStaticF_SBOX1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SBOX1();

  /// @brief Method rightRotate addr 0xebf8ac size 0x14 virtual false final false
  static inline uint32_t rightRotate(uint32_t x, int32_t s);

  /// @brief Method leftRotate addr 0xebf8c0 size 0x14 virtual false final false
  static inline uint32_t leftRotate(uint32_t x, int32_t s);

  /// @brief Method roldq addr 0xebf8d4 size 0x128 virtual false final false
  static inline void roldq(int32_t rot, ::ArrayW<uint32_t, ::Array<uint32_t>*> ki, int32_t ioff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ko, int32_t ooff);

  /// @brief Method decroldq addr 0xebf9fc size 0x128 virtual false final false
  static inline void decroldq(int32_t rot, ::ArrayW<uint32_t, ::Array<uint32_t>*> ki, int32_t ioff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ko, int32_t ooff);

  /// @brief Method roldqo32 addr 0xebfb24 size 0x128 virtual false final false
  static inline void roldqo32(int32_t rot, ::ArrayW<uint32_t, ::Array<uint32_t>*> ki, int32_t ioff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ko, int32_t ooff);

  /// @brief Method decroldqo32 addr 0xebfc4c size 0x128 virtual false final false
  static inline void decroldqo32(int32_t rot, ::ArrayW<uint32_t, ::Array<uint32_t>*> ki, int32_t ioff, ::ArrayW<uint32_t, ::Array<uint32_t>*> ko, int32_t ooff);

  /// @brief Method bytes2uint addr 0xebfd74 size 0x60 virtual false final false
  static inline uint32_t bytes2uint(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t offset);

  /// @brief Method uint2bytes addr 0xebfdd4 size 0x48 virtual false final false
  static inline void uint2bytes(uint32_t word, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t offset);

  /// @brief Method lRot8 addr 0xebfe1c size 0x1c virtual false final false
  inline uint8_t lRot8(uint8_t v, int32_t rot);

  /// @brief Method sbox2 addr 0xebfe38 size 0x88 virtual false final false
  inline uint32_t sbox2(int32_t x);

  /// @brief Method sbox3 addr 0xebfec0 size 0x88 virtual false final false
  inline uint32_t sbox3(int32_t x);

  /// @brief Method sbox4 addr 0xebff48 size 0x88 virtual false final false
  inline uint32_t sbox4(int32_t x);

  /// @brief Method camelliaF2 addr 0xebffd0 size 0x2e8 virtual false final false
  inline void camelliaF2(::ArrayW<uint32_t, ::Array<uint32_t>*> s, ::ArrayW<uint32_t, ::Array<uint32_t>*> skey, int32_t keyoff);

  /// @brief Method camelliaFLs addr 0xec02b8 size 0x134 virtual false final false
  inline void camelliaFLs(::ArrayW<uint32_t, ::Array<uint32_t>*> s, ::ArrayW<uint32_t, ::Array<uint32_t>*> fkey, int32_t keyoff);

  /// @brief Method setKey addr 0xec03ec size 0xf0c virtual false final false
  inline void setKey(bool forEncryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method processBlock128 addr 0xec12f8 size 0x2b0 virtual false final false
  inline int32_t processBlock128(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method processBlock192or256 addr 0xec15a8 size 0x2ec virtual false final false
  inline int32_t processBlock192or256(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  static inline ::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine* New_ctor();

  /// @brief Method .ctor addr 0xec1894 size 0x90 virtual false final false
  inline void _ctor();

  /// @brief Method get_AlgorithmName addr 0xec1924 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay addr 0xec1964 size 0x8 virtual true final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize addr 0xec196c size 0x8 virtual true final false
  inline int32_t GetBlockSize();

  /// @brief Method Init addr 0xec1974 size 0xf0 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method ProcessBlock addr 0xec1a64 size 0x138 virtual true final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xec1b9c size 0x4 virtual true final false
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "CamelliaLightEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CamelliaLightEngine(CamelliaLightEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CamelliaLightEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CamelliaLightEngine(CamelliaLightEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CamelliaLightEngine();

public:
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

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine*, "Org.BouncyCastle.Crypto.Engines", "CamelliaLightEngine");
