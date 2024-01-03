#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class PemObjectGenerator;
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
// Type: Org.BouncyCastle.OpenSsl::MiscPemGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1682))
// CS Name: ::Org.BouncyCastle.OpenSsl::MiscPemGenerator*
class CORDL_TYPE MiscPemGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field obj, offset 0x10, size 0x8
  __declspec(property(get = __get_obj, put = __set_obj))::System::Object* obj;

  /// @brief Field algorithm, offset 0x18, size 0x8
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::StringW algorithm;

  /// @brief Field password, offset 0x20, size 0x8
  __declspec(property(get = __get_password, put = __set_password))::ArrayW<char16_t, ::Array<char16_t>*> password;

  /// @brief Field random, offset 0x28, size 0x8
  __declspec(property(get = __get_random, put = __set_random))::Org::BouncyCastle::Security::SecureRandom* random;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
  constexpr operator ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator"
  constexpr ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator* i___Org__BouncyCastle__Utilities__IO__Pem__PemObjectGenerator() noexcept;

  constexpr ::System::Object*& __get_obj();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_obj() const;

  constexpr void __set_obj(::System::Object* value);

  constexpr ::StringW& __get_algorithm();

  constexpr ::StringW const& __get_algorithm() const;

  constexpr void __set_algorithm(::StringW value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_password();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_password() const;

  constexpr void __set_password(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_random();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_random() const;

  constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::OpenSsl::MiscPemGenerator* New_ctor(::System::Object* obj);

  /// @brief Method .ctor, addr 0x10cfe14, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj);

  static inline ::Org::BouncyCastle::OpenSsl::MiscPemGenerator* New_ctor(::System::Object* obj, ::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor, addr 0x10cfe3c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj, ::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method CreatePemObject, addr 0x10cfe7c, size 0x66c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* CreatePemObject(::System::Object* obj);

  /// @brief Method CreatePemObject, addr 0x10d09d0, size 0x5c4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* CreatePemObject(::System::Object* obj, ::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> password,
                                                                                    ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method EncodePrivateKey, addr 0x10d04e8, size 0x4e8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> EncodePrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* akp, ByRef<::StringW> keyType);

  /// @brief Method Generate, addr 0x10d1490, size 0xf4, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Generate();

  // Ctor Parameters [CppParam { name: "", ty: "MiscPemGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MiscPemGenerator(MiscPemGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MiscPemGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MiscPemGenerator(MiscPemGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MiscPemGenerator();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::MiscPemGenerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::MiscPemGenerator, ___obj) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::MiscPemGenerator, ___algorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::MiscPemGenerator, ___password) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::OpenSsl::MiscPemGenerator, ___random) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::MiscPemGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::MiscPemGenerator*, "Org.BouncyCastle.OpenSsl", "MiscPemGenerator");
