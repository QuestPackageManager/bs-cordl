#pragma once
// IWYU pragma private; include "Org/BouncyCastle/OpenSsl/MiscPemGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObjectGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MiscPemGenerator)
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class MiscPemGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::OpenSsl::MiscPemGenerator);
// Dependencies Org.BouncyCastle.Utilities.IO.Pem.PemObjectGenerator, System.Object
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// CS Name: Org.BouncyCastle.OpenSsl.MiscPemGenerator
class CORDL_TYPE MiscPemGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm)) ::StringW algorithm;

  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_obj, put = __cordl_internal_set_obj)) ::System::Object* obj;

  /// @brief Field password, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_password, put = __cordl_internal_set_password)) ::ArrayW<char16_t, ::Array<char16_t>*> password;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_random, put = __cordl_internal_set_random)) ::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
  constexpr operator ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*() noexcept;

  /// @brief Method CreatePemObject, addr 0x254e1a8, size 0x640, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* CreatePemObject(::System::Object* obj);

  /// @brief Method CreatePemObject, addr 0x254ecd0, size 0x59c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* CreatePemObject(::System::Object* obj, ::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                                    ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method EncodePrivateKey, addr 0x254e7e8, size 0x4e8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodePrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* akp, ::ByRef<::StringW> keyType);

  /// @brief Method Generate, addr 0x254f75c, size 0xf0, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate();

  static inline ::Org::BouncyCastle::OpenSsl::MiscPemGenerator* New_ctor(::System::Object* obj);

  static inline ::Org::BouncyCastle::OpenSsl::MiscPemGenerator* New_ctor(::System::Object* obj, ::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* random);

  constexpr ::StringW const& __cordl_internal_get_algorithm() const;

  constexpr ::StringW& __cordl_internal_get_algorithm();

  constexpr ::System::Object* const& __cordl_internal_get_obj() const;

  constexpr ::System::Object*& __cordl_internal_get_obj();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_password() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_password();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_random() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_random();

  constexpr void __cordl_internal_set_algorithm(::StringW value);

  constexpr void __cordl_internal_set_obj(::System::Object* value);

  constexpr void __cordl_internal_set_password(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x254e140, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj);

  /// @brief Method .ctor, addr 0x254e168, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj, ::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
  constexpr ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator* i___Org__BouncyCastle__Utilities__IO__Pem__PemObjectGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MiscPemGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MiscPemGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MiscPemGenerator(MiscPemGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MiscPemGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MiscPemGenerator(MiscPemGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1682 };

  /// @brief Field obj, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___obj;

  /// @brief Field algorithm, offset: 0x18, size: 0x8, def value: None
  ::StringW ___algorithm;

  /// @brief Field password, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___password;

  /// @brief Field random, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::OpenSsl::MiscPemGenerator, ___obj) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::MiscPemGenerator, ___algorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::MiscPemGenerator, ___password) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::MiscPemGenerator, ___random) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::MiscPemGenerator, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::MiscPemGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::MiscPemGenerator*, "Org.BouncyCastle.OpenSsl", "MiscPemGenerator");
