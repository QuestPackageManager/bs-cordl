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
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
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
// CS Name: ::Org.BouncyCastle.Crypto.Engines::Salsa20Engine*
class CORDL_TYPE Salsa20Engine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field DEFAULT_ROUNDS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_DEFAULT_ROUNDS, put = setStaticF_DEFAULT_ROUNDS)) int32_t DEFAULT_ROUNDS;

  __declspec(property(get = get_NonceSize)) int32_t NonceSize;

  /// @brief Field TAU_SIGMA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TAU_SIGMA, put = setStaticF_TAU_SIGMA))::ArrayW<uint32_t, ::Array<uint32_t>*> TAU_SIGMA;

  /// @brief Field cW0, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_cW0, put = __cordl_internal_set_cW0)) uint32_t cW0;

  /// @brief Field cW1, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_cW1, put = __cordl_internal_set_cW1)) uint32_t cW1;

  /// @brief Field cW2, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_cW2, put = __cordl_internal_set_cW2)) uint32_t cW2;

  /// @brief Field engineState, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_engineState, put = __cordl_internal_set_engineState))::ArrayW<uint32_t, ::Array<uint32_t>*> engineState;

  /// @brief Field index, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field initialised, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_initialised, put = __cordl_internal_set_initialised)) bool initialised;

  /// @brief Field keyStream, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_keyStream, put = __cordl_internal_set_keyStream))::ArrayW<uint8_t, ::Array<uint8_t>*> keyStream;

  /// @brief Field rounds, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_rounds, put = __cordl_internal_set_rounds)) int32_t rounds;

  /// @brief Field sigma, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sigma, put = setStaticF_sigma))::ArrayW<uint8_t, ::Array<uint8_t>*> sigma;

  /// @brief Field tau, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tau, put = setStaticF_tau))::ArrayW<uint8_t, ::Array<uint8_t>*> tau;

  /// @brief Field x, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x))::ArrayW<uint32_t, ::Array<uint32_t>*> x;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept;

  /// @brief Method AdvanceCounter, addr 0x11274a8, size 0x4c, virtual true, abstract: false, final false
  inline void AdvanceCounter();

  /// @brief Method GenerateKeyStream, addr 0x11279fc, size 0x84, virtual true, abstract: false, final false
  inline void GenerateKeyStream(::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method Init, addr 0x1126ec4, size 0x3bc, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method LimitExceeded, addr 0x112746c, size 0x3c, virtual false, abstract: false, final false
  inline bool LimitExceeded();

  /// @brief Method LimitExceeded, addr 0x1127768, size 0x3c, virtual false, abstract: false, final false
  inline bool LimitExceeded(uint32_t len);

  static inline ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine* New_ctor(int32_t rounds);

  /// @brief Method PackTauOrSigma, addr 0x1126c30, size 0x134, virtual false, abstract: false, final false
  inline void PackTauOrSigma(int32_t keyLength, ::ArrayW<uint32_t, ::Array<uint32_t>*> state, int32_t stateOffset);

  /// @brief Method ProcessBytes, addr 0x11274f4, size 0x274, virtual true, abstract: false, final false
  inline void ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Reset, addr 0x11277a4, size 0x1c, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetCounter, addr 0x11277cc, size 0x2c, virtual true, abstract: false, final false
  inline void ResetCounter();

  /// @brief Method ResetLimitCounter, addr 0x11277c0, size 0xc, virtual false, abstract: false, final false
  inline void ResetLimitCounter();

  /// @brief Method ReturnByte, addr 0x1127368, size 0x104, virtual true, abstract: false, final false
  inline uint8_t ReturnByte(uint8_t input);

  /// @brief Method SalsaCore, addr 0x1127a80, size 0x5f4, virtual false, abstract: false, final false
  static inline void SalsaCore(int32_t rounds, ::ArrayW<uint32_t, ::Array<uint32_t>*> input, ::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method SetKey, addr 0x11277f8, size 0x204, virtual true, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes);

  constexpr uint32_t const& __cordl_internal_get_cW0() const;

  constexpr uint32_t& __cordl_internal_get_cW0();

  constexpr uint32_t const& __cordl_internal_get_cW1() const;

  constexpr uint32_t& __cordl_internal_get_cW1();

  constexpr uint32_t const& __cordl_internal_get_cW2() const;

  constexpr uint32_t& __cordl_internal_get_cW2();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_engineState() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_engineState();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr bool const& __cordl_internal_get_initialised() const;

  constexpr bool& __cordl_internal_get_initialised();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_keyStream() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_keyStream();

  constexpr int32_t const& __cordl_internal_get_rounds() const;

  constexpr int32_t& __cordl_internal_get_rounds();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_x() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_cW0(uint32_t value);

  constexpr void __cordl_internal_set_cW1(uint32_t value);

  constexpr void __cordl_internal_set_cW2(uint32_t value);

  constexpr void __cordl_internal_set_engineState(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_initialised(bool value);

  constexpr void __cordl_internal_set_keyStream(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_rounds(int32_t value);

  constexpr void __cordl_internal_set_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method .ctor, addr 0x1126d64, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1126dc4, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(int32_t rounds);

  static inline int32_t getStaticF_DEFAULT_ROUNDS();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_TAU_SIGMA();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_sigma();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_tau();

  /// @brief Method get_AlgorithmName, addr 0x1127288, size 0xe0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_NonceSize, addr 0x1127280, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_NonceSize();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept;

  static inline void setStaticF_DEFAULT_ROUNDS(int32_t value);

  static inline void setStaticF_TAU_SIGMA(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_sigma(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_tau(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Salsa20Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Salsa20Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Salsa20Engine(Salsa20Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Salsa20Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Salsa20Engine(Salsa20Engine const&) = delete;

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
