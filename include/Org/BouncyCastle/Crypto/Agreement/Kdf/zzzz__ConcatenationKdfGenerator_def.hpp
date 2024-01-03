#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConcatenationKdfGenerator)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
class ConcatenationKdfGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator);
// Type: Org.BouncyCastle.Crypto.Agreement.Kdf::ConcatenationKdfGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(722))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.Kdf::ConcatenationKdfGenerator*
class CORDL_TYPE ConcatenationKdfGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field mDigest, offset 0x10, size 0x8
  __declspec(property(get = __get_mDigest, put = __set_mDigest))::Org::BouncyCastle::Crypto::IDigest* mDigest;

  /// @brief Field mShared, offset 0x18, size 0x8
  __declspec(property(get = __get_mShared, put = __set_mShared))::ArrayW<uint8_t, ::Array<uint8_t>*> mShared;

  /// @brief Field mOtherInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_mOtherInfo, put = __set_mOtherInfo))::ArrayW<uint8_t, ::Array<uint8_t>*> mOtherInfo;

  /// @brief Field mHLen, offset 0x28, size 0x4
  __declspec(property(get = __get_mHLen, put = __set_mHLen)) int32_t mHLen;

  __declspec(property(get = get_Digest))::Org::BouncyCastle::Crypto::IDigest* Digest;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_mDigest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_mDigest() const;

  constexpr void __set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mShared();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mShared() const;

  constexpr void __set_mShared(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mOtherInfo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mOtherInfo() const;

  constexpr void __set_mOtherInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_mHLen();

  constexpr int32_t const& __get_mHLen() const;

  constexpr void __set_mHLen(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0x12165f0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Init, addr 0x12166ac, size 0xcc, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters* param);

  /// @brief Method get_Digest, addr 0x1216778, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest();

  /// @brief Method GenerateBytes, addr 0x1216780, size 0x5d8, virtual true, abstract: false, final false
  inline int32_t GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff, int32_t len);

  // Ctor Parameters [CppParam { name: "", ty: "ConcatenationKdfGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConcatenationKdfGenerator(ConcatenationKdfGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConcatenationKdfGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConcatenationKdfGenerator(ConcatenationKdfGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConcatenationKdfGenerator();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator, ___mDigest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator, ___mShared) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator, ___mOtherInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator, ___mHLen) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::Kdf
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*, "Org.BouncyCastle.Crypto.Agreement.Kdf", "ConcatenationKdfGenerator");
