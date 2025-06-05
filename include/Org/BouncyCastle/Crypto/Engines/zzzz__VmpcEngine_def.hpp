#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/VmpcEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VmpcEngine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class VmpcEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::VmpcEngine);
// Dependencies Org.BouncyCastle.Crypto.IStreamCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.VmpcEngine
class CORDL_TYPE VmpcEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field P, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_P, put = __cordl_internal_set_P)) ::ArrayW<uint8_t, ::Array<uint8_t>*> P;

  /// @brief Field n, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_n, put = __cordl_internal_set_n)) uint8_t n;

  /// @brief Field s, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) uint8_t s;

  /// @brief Field workingIV, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_workingIV, put = __cordl_internal_set_workingIV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> workingIV;

  /// @brief Field workingKey, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey, put = __cordl_internal_set_workingKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> workingKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept;

  /// @brief Method Init, addr 0x237ea64, size 0x18c, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method InitKey, addr 0x237ebf0, size 0x1f8, virtual true, abstract: false, final false
  inline void InitKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes);

  static inline ::Org::BouncyCastle::Crypto::Engines::VmpcEngine* New_ctor();

  /// @brief Method ProcessBytes, addr 0x237ede8, size 0x1c0, virtual true, abstract: false, final false
  inline void ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x237efa8, size 0x10, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ReturnByte, addr 0x237efb8, size 0xc4, virtual true, abstract: false, final false
  inline uint8_t ReturnByte(uint8_t input);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_P() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_P();

  constexpr uint8_t const& __cordl_internal_get_n() const;

  constexpr uint8_t& __cordl_internal_get_n();

  constexpr uint8_t const& __cordl_internal_get_s() const;

  constexpr uint8_t& __cordl_internal_get_s();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_workingIV() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_workingIV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_workingKey();

  constexpr void __cordl_internal_set_P(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_n(uint8_t value);

  constexpr void __cordl_internal_set_s(uint8_t value);

  constexpr void __cordl_internal_set_workingIV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_workingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x237f07c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlgorithmName, addr 0x237ea24, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VmpcEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VmpcEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VmpcEngine(VmpcEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VmpcEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VmpcEngine(VmpcEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 882 };

  /// @brief Field n, offset: 0x10, size: 0x1, def value: None
  uint8_t ___n;

  /// @brief Field P, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___P;

  /// @brief Field s, offset: 0x20, size: 0x1, def value: None
  uint8_t ___s;

  /// @brief Field workingIV, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___workingIV;

  /// @brief Field workingKey, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___workingKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::VmpcEngine, ___n) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::VmpcEngine, ___P) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::VmpcEngine, ___s) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::VmpcEngine, ___workingIV) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::VmpcEngine, ___workingKey) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::VmpcEngine, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::VmpcEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::VmpcEngine*, "Org.BouncyCastle.Crypto.Engines", "VmpcEngine");
