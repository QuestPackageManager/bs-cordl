#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Macs/Dstu7564Mac.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dstu7564Mac)
namespace Org::BouncyCastle::Crypto::Digests {
class Dstu7564Digest;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class Dstu7564Mac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac);
// Dependencies Org.BouncyCastle.Crypto.IMac, System.Object
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Macs.Dstu7564Mac
class CORDL_TYPE Dstu7564Mac : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine)) ::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* engine;

  /// @brief Field inputLength, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_inputLength, put = __cordl_internal_set_inputLength)) uint64_t inputLength;

  /// @brief Field invertedKey, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_invertedKey, put = __cordl_internal_set_invertedKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> invertedKey;

  /// @brief Field macSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  /// @brief Field paddedKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_paddedKey, put = __cordl_internal_set_paddedKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> paddedKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  /// @brief Method BlockUpdate, addr 0x239a8ec, size 0x110, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0x239aa34, size 0x124, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetMacSize, addr 0x239a8e4, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetMacSize();

  /// @brief Method Init, addr 0x239a5bc, size 0x178, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac* New_ctor(int32_t macSizeBits);

  /// @brief Method Pad, addr 0x239ab58, size 0x118, virtual false, abstract: false, final false
  inline void Pad();

  /// @brief Method PadKey, addr 0x239a734, size 0x1b0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PadKey(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method Reset, addr 0x239ac70, size 0x5c, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Update, addr 0x239a9fc, size 0x38, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  constexpr ::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* const& __cordl_internal_get_engine() const;

  constexpr ::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*& __cordl_internal_get_engine();

  constexpr uint64_t const& __cordl_internal_get_inputLength() const;

  constexpr uint64_t& __cordl_internal_get_inputLength();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_invertedKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_invertedKey();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_paddedKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_paddedKey();

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* value);

  constexpr void __cordl_internal_set_inputLength(uint64_t value);

  constexpr void __cordl_internal_set_invertedKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_macSize(int32_t value);

  constexpr void __cordl_internal_set_paddedKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x239a534, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t macSizeBits);

  /// @brief Method get_AlgorithmName, addr 0x239a4f4, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
  constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dstu7564Mac();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dstu7564Mac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dstu7564Mac(Dstu7564Mac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7564Mac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dstu7564Mac(Dstu7564Mac const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 939 };

  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* ___engine;

  /// @brief Field macSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___macSize;

  /// @brief Field inputLength, offset: 0x20, size: 0x8, def value: None
  uint64_t ___inputLength;

  /// @brief Field paddedKey, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___paddedKey;

  /// @brief Field invertedKey, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___invertedKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac, ___engine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac, ___macSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac, ___inputLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac, ___paddedKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac, ___invertedKey) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*, "Org.BouncyCastle.Crypto.Macs", "Dstu7564Mac");
