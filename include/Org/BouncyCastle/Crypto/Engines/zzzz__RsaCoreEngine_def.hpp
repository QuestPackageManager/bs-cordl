#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RsaCoreEngine)
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RsaCoreEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RsaCoreEngine);
// Type: Org.BouncyCastle.Crypto.Engines::RsaCoreEngine
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RsaCoreEngine*
class CORDL_TYPE RsaCoreEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field bitSize, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_bitSize, put = __cordl_internal_set_bitSize)) int32_t bitSize;

  /// @brief Field forEncryption, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IRsa"
  constexpr operator ::Org::BouncyCastle::Crypto::IRsa*() noexcept;

  /// @brief Method CheckInitialised, addr 0xf71d04, size 0x60, virtual false, abstract: false, final false
  inline void CheckInitialised();

  /// @brief Method ConvertInput, addr 0xf71f3c, size 0x110, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ConvertInput(::ArrayW<uint8_t, ::Array<uint8_t>*> inBuf, int32_t inOff, int32_t inLen);

  /// @brief Method ConvertOutput, addr 0xf7204c, size 0xc4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConvertOutput(::Org::BouncyCastle::Math::BigInteger* result);

  /// @brief Method GetInputBlockSize, addr 0xf71ec4, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetInputBlockSize();

  /// @brief Method GetOutputBlockSize, addr 0xf71f00, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetOutputBlockSize();

  /// @brief Method Init, addr 0xf71d64, size 0x160, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::RsaCoreEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0xf72110, size 0x168, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* ProcessBlock(::Org::BouncyCastle::Math::BigInteger* input);

  constexpr int32_t const& __cordl_internal_get_bitSize() const;

  constexpr int32_t& __cordl_internal_get_bitSize();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& __cordl_internal_get_key();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_bitSize(int32_t value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value);

  /// @brief Method .ctor, addr 0xf70f30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IRsa"
  constexpr ::Org::BouncyCastle::Crypto::IRsa* i___Org__BouncyCastle__Crypto__IRsa() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RsaCoreEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RsaCoreEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RsaCoreEngine(RsaCoreEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RsaCoreEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RsaCoreEngine(RsaCoreEngine const&) = delete;

  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* ___key;

  /// @brief Field forEncryption, offset: 0x18, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field bitSize, offset: 0x1c, size: 0x4, def value: None
  int32_t ___bitSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RsaCoreEngine, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaCoreEngine, ___key) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaCoreEngine, ___forEncryption) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RsaCoreEngine, ___bitSize) == 0x1c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RsaCoreEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RsaCoreEngine*, "Org.BouncyCastle.Crypto.Engines", "RsaCoreEngine");
