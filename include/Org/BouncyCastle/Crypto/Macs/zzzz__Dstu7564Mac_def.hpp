#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dstu7564Mac)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
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
// Type: Org.BouncyCastle.Crypto.Macs::Dstu7564Mac
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(939))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::Dstu7564Mac*
class CORDL_TYPE Dstu7564Mac : public ::System::Object {
public:
  // Declarations
  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __get_engine, put = __set_engine))::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* engine;

  /// @brief Field macSize, offset 0x18, size 0x4
  __declspec(property(get = __get_macSize, put = __set_macSize)) int32_t macSize;

  /// @brief Field inputLength, offset 0x20, size 0x8
  __declspec(property(get = __get_inputLength, put = __set_inputLength)) uint64_t inputLength;

  /// @brief Field paddedKey, offset 0x28, size 0x8
  __declspec(property(get = __get_paddedKey, put = __set_paddedKey))::ArrayW<uint8_t, ::Array<uint8_t>*> paddedKey;

  /// @brief Field invertedKey, offset 0x30, size 0x8
  __declspec(property(get = __get_invertedKey, put = __set_invertedKey))::ArrayW<uint8_t, ::Array<uint8_t>*> invertedKey;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*& __get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest*> const& __get_engine() const;

  constexpr void __set_engine(::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* value);

  constexpr int32_t& __get_macSize();

  constexpr int32_t const& __get_macSize() const;

  constexpr void __set_macSize(int32_t value);

  constexpr uint64_t& __get_inputLength();

  constexpr uint64_t const& __get_inputLength() const;

  constexpr void __set_inputLength(uint64_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_paddedKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_paddedKey() const;

  constexpr void __set_paddedKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_invertedKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_invertedKey() const;

  constexpr void __set_invertedKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method get_AlgorithmName addr 0xf0bc98 size 0x40 virtual true final true
  inline ::StringW get_AlgorithmName();

  static inline ::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac* New_ctor(int32_t macSizeBits);

  /// @brief Method .ctor addr 0xf0bcd8 size 0x90 virtual false final false
  inline void _ctor(int32_t macSizeBits);

  /// @brief Method Init addr 0xf0bd68 size 0x17c virtual true final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetMacSize addr 0xf0c098 size 0x8 virtual true final true
  inline int32_t GetMacSize();

  /// @brief Method BlockUpdate addr 0xf0c0a0 size 0x118 virtual true final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method Update addr 0xf0c1b8 size 0x38 virtual true final true
  inline void Update(uint8_t input);

  /// @brief Method DoFinal addr 0xf0c1f0 size 0x12c virtual true final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xf0c434 size 0x5c virtual true final true
  inline void Reset();

  /// @brief Method Pad addr 0xf0c31c size 0x118 virtual false final false
  inline void Pad();

  /// @brief Method PadKey addr 0xf0bee4 size 0x1b4 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PadKey(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7564Mac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dstu7564Mac(Dstu7564Mac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7564Mac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dstu7564Mac(Dstu7564Mac const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dstu7564Mac();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::Dstu7564Mac*, "Org.BouncyCastle.Crypto.Macs", "Dstu7564Mac");
