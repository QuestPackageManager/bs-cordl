#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SkeinDigest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Digests {
class SkeinEngine;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class SkeinParameters;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class SkeinDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::SkeinDigest);
// Type: Org.BouncyCastle.Crypto.Digests::SkeinDigest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(776))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::SkeinDigest*
class CORDL_TYPE SkeinDigest : public ::System::Object {
public:
  // Declarations
  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __get_engine, put = __set_engine))::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*& __get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*> const& __get_engine() const;

  constexpr void __set_engine(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* value);

  static inline ::Org::BouncyCastle::Crypto::Digests::SkeinDigest* New_ctor(int32_t stateSizeBits, int32_t digestSizeBits);

  /// @brief Method .ctor addr 0xe31e9c size 0x88 virtual false final false
  inline void _ctor(int32_t stateSizeBits, int32_t digestSizeBits);

  static inline ::Org::BouncyCastle::Crypto::Digests::SkeinDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinDigest* digest);

  /// @brief Method .ctor addr 0xe320cc size 0x78 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::SkeinDigest* digest);

  /// @brief Method Reset addr 0xe3219c size 0x8c virtual true final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method Copy addr 0xe3234c size 0x60 virtual true final true
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method get_AlgorithmName addr 0xe323ac size 0x1c4 virtual true final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize addr 0xe32594 size 0x1c virtual true final true
  inline int32_t GetDigestSize();

  /// @brief Method GetByteLength addr 0xe325b0 size 0x2c virtual true final true
  inline int32_t GetByteLength();

  /// @brief Method Init addr 0xe320b4 size 0x18 virtual false final false
  inline void Init(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters);

  /// @brief Method Reset addr 0xe32694 size 0x18 virtual true final true
  inline void Reset();

  /// @brief Method Update addr 0xe326ec size 0x18 virtual true final true
  inline void Update(uint8_t inByte);

  /// @brief Method BlockUpdate addr 0xe32738 size 0x18 virtual true final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method DoFinal addr 0xe3279c size 0x18 virtual true final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  // Ctor Parameters [CppParam { name: "", ty: "SkeinDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkeinDigest(SkeinDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkeinDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkeinDigest(SkeinDigest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkeinDigest();

public:
  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* ___engine;

  /// @brief Field SKEIN_256 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_256{ static_cast<int32_t>(0x100) };

  /// @brief Field SKEIN_512 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_512{ static_cast<int32_t>(0x200) };

  /// @brief Field SKEIN_1024 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_1024{ static_cast<int32_t>(0x400) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::SkeinDigest, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SkeinDigest, ___engine) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::SkeinDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::SkeinDigest*, "Org.BouncyCastle.Crypto.Digests", "SkeinDigest");
