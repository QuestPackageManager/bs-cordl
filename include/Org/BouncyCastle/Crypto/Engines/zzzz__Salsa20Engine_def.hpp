#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Salsa20Engine)
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Salsa20Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine);
// Type: Org.BouncyCastle.Crypto.Engines::Salsa20Engine
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(836))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::Salsa20Engine*
class CORDL_TYPE Salsa20Engine : public ::System::Object {
public:
  // Declarations
  /// @brief Field rounds, offset 0x10, size 0x4
  __declspec(property(get = __get_rounds, put = __set_rounds)) int32_t rounds;

  /// @brief Field index, offset 0x14, size 0x4
  __declspec(property(get = __get_index, put = __set_index)) int32_t index;

  /// @brief Field engineState, offset 0x18, size 0x8
  __declspec(property(get = __get_engineState, put = __set_engineState))::ArrayW<uint32_t, ::Array<uint32_t>*> engineState;

  /// @brief Field x, offset 0x20, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::ArrayW<uint32_t, ::Array<uint32_t>*> x;

  /// @brief Field keyStream, offset 0x28, size 0x8
  __declspec(property(get = __get_keyStream, put = __set_keyStream))::ArrayW<uint8_t, ::Array<uint8_t>*> keyStream;

  /// @brief Field initialised, offset 0x30, size 0x1
  __declspec(property(get = __get_initialised, put = __set_initialised)) bool initialised;

  /// @brief Field cW0, offset 0x34, size 0x4
  __declspec(property(get = __get_cW0, put = __set_cW0)) uint32_t cW0;

  /// @brief Field cW1, offset 0x38, size 0x4
  __declspec(property(get = __get_cW1, put = __set_cW1)) uint32_t cW1;

  /// @brief Field cW2, offset 0x3c, size 0x4
  __declspec(property(get = __get_cW2, put = __set_cW2)) uint32_t cW2;

  /// @brief Field DEFAULT_ROUNDS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_DEFAULT_ROUNDS, put = setStaticF_DEFAULT_ROUNDS)) int32_t DEFAULT_ROUNDS;

  /// @brief Field TAU_SIGMA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TAU_SIGMA, put = setStaticF_TAU_SIGMA))::ArrayW<uint32_t, ::Array<uint32_t>*> TAU_SIGMA;

  /// @brief Field sigma, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sigma, put = setStaticF_sigma))::ArrayW<uint8_t, ::Array<uint8_t>*> sigma;

  /// @brief Field tau, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tau, put = setStaticF_tau))::ArrayW<uint8_t, ::Array<uint8_t>*> tau;

  __declspec(property(get = get_NonceSize)) int32_t NonceSize;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept;

  constexpr int32_t& __get_rounds();

  constexpr int32_t const& __get_rounds() const;

  constexpr void __set_rounds(int32_t value);

  constexpr int32_t& __get_index();

  constexpr int32_t const& __get_index() const;

  constexpr void __set_index(int32_t value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_engineState();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_engineState() const;

  constexpr void __set_engineState(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_x();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_x() const;

  constexpr void __set_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_keyStream();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_keyStream() const;

  constexpr void __set_keyStream(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_initialised();

  constexpr bool const& __get_initialised() const;

  constexpr void __set_initialised(bool value);

  constexpr uint32_t& __get_cW0();

  constexpr uint32_t const& __get_cW0() const;

  constexpr void __set_cW0(uint32_t value);

  constexpr uint32_t& __get_cW1();

  constexpr uint32_t const& __get_cW1() const;

  constexpr void __set_cW1(uint32_t value);

  constexpr uint32_t& __get_cW2();

  constexpr uint32_t const& __get_cW2() const;

  constexpr void __set_cW2(uint32_t value);

  static inline void setStaticF_DEFAULT_ROUNDS(int32_t value);

  static inline int32_t getStaticF_DEFAULT_ROUNDS();

  static inline void setStaticF_TAU_SIGMA(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_TAU_SIGMA();

  static inline void setStaticF_sigma(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_sigma();

  static inline void setStaticF_tau(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_tau();

  /// @brief Method PackTauOrSigma, addr 0xec7424, size 0x134, virtual false, abstract: false, final false
  inline void PackTauOrSigma(int32_t keyLength, ::ArrayW<uint32_t, ::Array<uint32_t>*> state, int32_t stateOffset);

  static inline ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine* New_ctor();

  /// @brief Method .ctor, addr 0xec7558, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine* New_ctor(int32_t rounds);

  /// @brief Method .ctor, addr 0xec75b8, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(int32_t rounds);

  /// @brief Method Init, addr 0xec76b8, size 0x3bc, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_NonceSize, addr 0xec7a74, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_NonceSize();

  /// @brief Method get_AlgorithmName, addr 0xec7a7c, size 0xe0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method ReturnByte, addr 0xec7b5c, size 0x104, virtual true, abstract: false, final false
  inline uint8_t ReturnByte(uint8_t input);

  /// @brief Method AdvanceCounter, addr 0xec7c9c, size 0x4c, virtual true, abstract: false, final false
  inline void AdvanceCounter();

  /// @brief Method ProcessBytes, addr 0xec7ce8, size 0x274, virtual true, abstract: false, final false
  inline void ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Reset, addr 0xec7f98, size 0x1c, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetCounter, addr 0xec7fc0, size 0x2c, virtual true, abstract: false, final false
  inline void ResetCounter();

  /// @brief Method SetKey, addr 0xec7fec, size 0x204, virtual true, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes);

  /// @brief Method GenerateKeyStream, addr 0xec81f0, size 0x84, virtual true, abstract: false, final false
  inline void GenerateKeyStream(::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method SalsaCore, addr 0xec8274, size 0x5f4, virtual false, abstract: false, final false
  static inline void SalsaCore(int32_t rounds, ::ArrayW<uint32_t, ::Array<uint32_t>*> input, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method ResetLimitCounter, addr 0xec7fb4, size 0xc, virtual false, abstract: false, final false
  inline void ResetLimitCounter();

  /// @brief Method LimitExceeded, addr 0xec7c60, size 0x3c, virtual false, abstract: false, final false
  inline bool LimitExceeded();

  /// @brief Method LimitExceeded, addr 0xec7f5c, size 0x3c, virtual false, abstract: false, final false
  inline bool LimitExceeded(uint32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "Salsa20Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Salsa20Engine(Salsa20Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Salsa20Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Salsa20Engine(Salsa20Engine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Salsa20Engine();

public:
  /// @brief Field rounds, offset: 0x10, size: 0x4, def value: None
  int32_t ___rounds;

  /// @brief Field index, offset: 0x14, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field engineState, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___engineState;

  /// @brief Field x, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___x;

  /// @brief Field keyStream, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___keyStream;

  /// @brief Field initialised, offset: 0x30, size: 0x1, def value: None
  bool ___initialised;

  /// @brief Field cW0, offset: 0x34, size: 0x4, def value: None
  uint32_t ___cW0;

  /// @brief Field cW1, offset: 0x38, size: 0x4, def value: None
  uint32_t ___cW1;

  /// @brief Field cW2, offset: 0x3c, size: 0x4, def value: None
  uint32_t ___cW2;

  /// @brief Field StateSize offset 0xffffffff size 0x4
  static constexpr int32_t StateSize{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Salsa20Engine, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine, ___rounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine, ___index) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine, ___engineState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine, ___x) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine, ___keyStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine, ___initialised) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine, ___cW0) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine, ___cW1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine, ___cW2) == 0x3c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Salsa20Engine*, "Org.BouncyCastle.Crypto.Engines", "Salsa20Engine");
