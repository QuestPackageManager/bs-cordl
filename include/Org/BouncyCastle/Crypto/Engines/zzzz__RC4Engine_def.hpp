#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\RC4Engine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC4Engine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC4Engine;
}
// Write type traits
MARK_REF_T(::Org::BouncyCastle::Crypto::Engines::RC4Engine*);
DEFINE_IL2CPP_CLASS(::Org::BouncyCastle::Crypto::Engines::RC4Engine*, "Org.BouncyCastle.Crypto.Engines", "RC4Engine");
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.RC4Engine
class CORDL_TYPE RC4Engine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field STATE_LENGTH, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_STATE_LENGTH, put = setStaticF_STATE_LENGTH)) int32_t STATE_LENGTH;

  /// @brief Field engineState, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engineState, put = __cordl_internal_set_engineState)) ::ArrayW<uint8_t> engineState;

  /// @brief Field workingKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey, put = __cordl_internal_set_workingKey)) ::ArrayW<uint8_t> workingKey;

  /// @brief Field x, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) int32_t x;

  /// @brief Field y, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_y, put = __cordl_internal_set_y)) int32_t y;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept;

  /// @brief Method Init, addr 0x33ba3b0, size 0x10c, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::RC4Engine* New_ctor();

  /// @brief Method ProcessBytes, addr 0x33ba784, size 0x1e4, virtual true, abstract: false, final false
  inline void ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff);

  /// @brief Method Reset, addr 0x33ba968, size 0x8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ReturnByte, addr 0x33ba6b4, size 0xd0, virtual true, abstract: false, final false
  inline uint8_t ReturnByte(uint8_t input);

  /// @brief Method SetKey, addr 0x33ba4bc, size 0x1b4, virtual false, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t> keyBytes);

  constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_engineState() const;

  constexpr ::ArrayW<uint8_t>& __cordl_internal_get_engineState();

  constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<uint8_t>& __cordl_internal_get_workingKey();

  constexpr int32_t const& __cordl_internal_get_x() const;

  constexpr int32_t& __cordl_internal_get_x();

  constexpr int32_t const& __cordl_internal_get_y() const;

  constexpr int32_t& __cordl_internal_get_y();

  constexpr void __cordl_internal_set_engineState(::ArrayW<uint8_t> value);

  constexpr void __cordl_internal_set_workingKey(::ArrayW<uint8_t> value);

  constexpr void __cordl_internal_set_x(int32_t value);

  constexpr void __cordl_internal_set_y(int32_t value);

  /// @brief Method .ctor, addr 0x33ba9c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_STATE_LENGTH();

  /// @brief Method get_AlgorithmName, addr 0x33ba670, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept;

  static inline void setStaticF_STATE_LENGTH(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC4Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RC4Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC4Engine(RC4Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC4Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC4Engine(RC4Engine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 856 };

  /// @brief Field engineState, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t> ___engineState;

  /// @brief Field x, offset: 0x18, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x1c, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field workingKey, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t> ___workingKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC4Engine, ___engineState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC4Engine, ___x) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC4Engine, ___y) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC4Engine, ___workingKey) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Org::BouncyCastle::Crypto::Engines::RC4Engine) == 0x28, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
