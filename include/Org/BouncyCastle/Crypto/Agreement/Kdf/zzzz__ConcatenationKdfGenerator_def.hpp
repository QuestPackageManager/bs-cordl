#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/Kdf/ConcatenationKdfGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConcatenationKdfGenerator)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
class ConcatenationKdfGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator);
// Dependencies Org.BouncyCastle.Crypto.IDerivationFunction, System.Object
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Agreement.Kdf.ConcatenationKdfGenerator
class CORDL_TYPE ConcatenationKdfGenerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Digest)) ::Org::BouncyCastle::Crypto::IDigest* Digest;

  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mDigest, put = __cordl_internal_set_mDigest)) ::Org::BouncyCastle::Crypto::IDigest* mDigest;

  /// @brief Field mHLen, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_mHLen, put = __cordl_internal_set_mHLen)) int32_t mHLen;

  /// @brief Field mOtherInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mOtherInfo, put = __cordl_internal_set_mOtherInfo)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mOtherInfo;

  /// @brief Field mShared, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mShared, put = __cordl_internal_set_mShared)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mShared;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

  /// @brief Method GenerateBytes, addr 0x268a9f8, size 0x5d4, virtual true, abstract: false, final false
  inline int32_t GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff, int32_t len);

  /// @brief Method Init, addr 0x268a928, size 0xc8, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters* param);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_mDigest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_mDigest();

  constexpr int32_t const& __cordl_internal_get_mHLen() const;

  constexpr int32_t& __cordl_internal_get_mHLen();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mOtherInfo() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mOtherInfo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mShared() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mShared();

  constexpr void __cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_mHLen(int32_t value);

  constexpr void __cordl_internal_set_mOtherInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mShared(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x268a86c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_Digest, addr 0x268a9f0, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcatenationKdfGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConcatenationKdfGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcatenationKdfGenerator(ConcatenationKdfGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcatenationKdfGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcatenationKdfGenerator(ConcatenationKdfGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 722 };

  /// @brief Field mDigest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___mDigest;

  /// @brief Field mShared, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mShared;

  /// @brief Field mOtherInfo, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mOtherInfo;

  /// @brief Field mHLen, offset: 0x28, size: 0x4, def value: None
  int32_t ___mHLen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator, ___mDigest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator, ___mShared) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator, ___mOtherInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator, ___mHLen) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::Kdf
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*, "Org.BouncyCastle.Crypto.Agreement.Kdf", "ConcatenationKdfGenerator");
