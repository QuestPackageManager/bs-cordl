#pragma once
// IWYU pragma private; include "Org/BouncyCastle/OpenSsl/Pkcs8Generator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObjectGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs8Generator)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class Pkcs8Generator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::OpenSsl::Pkcs8Generator);
// Dependencies Org.BouncyCastle.Utilities.IO.Pem.PemObjectGenerator, System.Object
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// CS Name: Org.BouncyCastle.OpenSsl.Pkcs8Generator
class CORDL_TYPE Pkcs8Generator : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_IterationCount)) int32_t IterationCount;

  __declspec(property(put = set_Password)) ::ArrayW<char16_t, ::Array<char16_t>*> Password;

  /// @brief Field PbeSha1_2DES, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PbeSha1_2DES, put = setStaticF_PbeSha1_2DES)) ::StringW PbeSha1_2DES;

  /// @brief Field PbeSha1_3DES, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PbeSha1_3DES, put = setStaticF_PbeSha1_3DES)) ::StringW PbeSha1_3DES;

  /// @brief Field PbeSha1_RC2_128, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PbeSha1_RC2_128, put = setStaticF_PbeSha1_RC2_128)) ::StringW PbeSha1_RC2_128;

  /// @brief Field PbeSha1_RC2_40, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PbeSha1_RC2_40, put = setStaticF_PbeSha1_RC2_40)) ::StringW PbeSha1_RC2_40;

  /// @brief Field PbeSha1_RC4_128, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PbeSha1_RC4_128, put = setStaticF_PbeSha1_RC4_128)) ::StringW PbeSha1_RC4_128;

  /// @brief Field PbeSha1_RC4_40, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PbeSha1_RC4_40, put = setStaticF_PbeSha1_RC4_40)) ::StringW PbeSha1_RC4_40;

  __declspec(property(put = set_SecureRandom)) ::Org::BouncyCastle::Security::SecureRandom* SecureRandom;

  /// @brief Field algorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm)) ::StringW algorithm;

  /// @brief Field iterationCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_iterationCount, put = __cordl_internal_set_iterationCount)) int32_t iterationCount;

  /// @brief Field password, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_password, put = __cordl_internal_set_password)) ::ArrayW<char16_t, ::Array<char16_t>*> password;

  /// @brief Field privKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_privKey, put = __cordl_internal_set_privKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey;

  /// @brief Field random, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
  constexpr operator ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*() noexcept;

  /// @brief Method Generate, addr 0x2558910, size 0x25c, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate();

  static inline ::Org::BouncyCastle::OpenSsl::Pkcs8Generator* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey);

  static inline ::Org::BouncyCastle::OpenSsl::Pkcs8Generator* New_ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::StringW algorithm);

  constexpr ::StringW const& __cordl_internal_get_algorithm() const;

  constexpr ::StringW& __cordl_internal_get_algorithm();

  constexpr int32_t const& __cordl_internal_get_iterationCount() const;

  constexpr int32_t& __cordl_internal_get_iterationCount();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_password() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_password();

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& __cordl_internal_get_privKey() const;

  constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& __cordl_internal_get_privKey();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr void __cordl_internal_set_algorithm(::StringW value);

  constexpr void __cordl_internal_set_iterationCount(int32_t value);

  constexpr void __cordl_internal_set_password(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_privKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x2558898, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey);

  /// @brief Method .ctor, addr 0x25588c0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::StringW algorithm);

  static inline ::StringW getStaticF_PbeSha1_2DES();

  static inline ::StringW getStaticF_PbeSha1_3DES();

  static inline ::StringW getStaticF_PbeSha1_RC2_128();

  static inline ::StringW getStaticF_PbeSha1_RC2_40();

  static inline ::StringW getStaticF_PbeSha1_RC4_128();

  static inline ::StringW getStaticF_PbeSha1_RC4_40();

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
  constexpr ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator* i___Org__BouncyCastle__Utilities__IO__Pem__PemObjectGenerator() noexcept;

  static inline void setStaticF_PbeSha1_2DES(::StringW value);

  static inline void setStaticF_PbeSha1_3DES(::StringW value);

  static inline void setStaticF_PbeSha1_RC2_128(::StringW value);

  static inline void setStaticF_PbeSha1_RC2_40(::StringW value);

  static inline void setStaticF_PbeSha1_RC4_128(::StringW value);

  static inline void setStaticF_PbeSha1_RC4_40(::StringW value);

  /// @brief Method set_IterationCount, addr 0x2558908, size 0x8, virtual false, abstract: false, final false
  inline void set_IterationCount(int32_t value);

  /// @brief Method set_Password, addr 0x2558900, size 0x8, virtual false, abstract: false, final false
  inline void set_Password(::ArrayW<char16_t, ::Array<char16_t>*> value);

  /// @brief Method set_SecureRandom, addr 0x25588f8, size 0x8, virtual false, abstract: false, final false
  inline void set_SecureRandom(::Org::BouncyCastle::Security::SecureRandom* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs8Generator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs8Generator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs8Generator(Pkcs8Generator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs8Generator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs8Generator(Pkcs8Generator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1692 };

  /// @brief Field password, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___password;

  /// @brief Field algorithm, offset: 0x18, size: 0x8, def value: None
  ::StringW ___algorithm;

  /// @brief Field iterationCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___iterationCount;

  /// @brief Field privKey, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* ___privKey;

  /// @brief Field random, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::OpenSsl::Pkcs8Generator, ___password) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::Pkcs8Generator, ___algorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::Pkcs8Generator, ___iterationCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::Pkcs8Generator, ___privKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::Pkcs8Generator, ___random) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::Pkcs8Generator, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::Pkcs8Generator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::Pkcs8Generator*, "Org.BouncyCastle.OpenSsl", "Pkcs8Generator");
