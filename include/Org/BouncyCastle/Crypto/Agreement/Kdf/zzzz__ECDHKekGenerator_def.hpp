#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Agreement/Kdf/ECDHKekGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECDHKekGenerator)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
class ECDHKekGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator);
// Type: Org.BouncyCastle.Crypto.Agreement.Kdf::ECDHKekGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement::Kdf {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.Kdf::ECDHKekGenerator*
class CORDL_TYPE ECDHKekGenerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Digest)) ::Org::BouncyCastle::Crypto::IDigest* Digest;

  /// @brief Field algorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm;

  /// @brief Field kdf, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_kdf, put = __cordl_internal_set_kdf)) ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf;

  /// @brief Field keySize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_keySize, put = __cordl_internal_set_keySize)) int32_t keySize;

  /// @brief Field z, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) ::ArrayW<uint8_t, ::Array<uint8_t>*> z;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

  /// @brief Method GenerateBytes, addr 0x264b2a4, size 0x310, virtual true, abstract: false, final false
  inline int32_t GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff, int32_t len);

  /// @brief Method Init, addr 0x264b168, size 0x98, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters* param);

  static inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_algorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_algorithm() const;

  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction*& __cordl_internal_get_kdf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDerivationFunction*> const& __cordl_internal_get_kdf() const;

  constexpr int32_t const& __cordl_internal_get_keySize() const;

  constexpr int32_t& __cordl_internal_get_keySize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_z() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction* value);

  constexpr void __cordl_internal_set_keySize(int32_t value);

  constexpr void __cordl_internal_set_z(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x264b0f4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_Digest, addr 0x264b200, size 0xa4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECDHKekGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECDHKekGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECDHKekGenerator(ECDHKekGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECDHKekGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECDHKekGenerator(ECDHKekGenerator const&) = delete;

  /// @brief Field kdf, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDerivationFunction* ___kdf;

  /// @brief Field algorithm, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___algorithm;

  /// @brief Field keySize, offset: 0x20, size: 0x4, def value: None
  int32_t ___keySize;

  /// @brief Field z, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___z;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 726 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator, ___kdf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator, ___algorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator, ___keySize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator, ___z) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement::Kdf
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::Kdf::ECDHKekGenerator*, "Org.BouncyCastle.Crypto.Agreement.Kdf", "ECDHKekGenerator");
