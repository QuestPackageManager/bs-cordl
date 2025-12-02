#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/PKCS8.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKCS8)
namespace Mono::Security::Cryptography {
class PKCS8_EncryptedPrivateKeyInfo;
}
namespace Mono::Security::Cryptography {
class PKCS8_PrivateKeyInfo;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class PKCS8;
}
namespace Mono::Security::Cryptography {
class PKCS8_EncryptedPrivateKeyInfo;
}
namespace Mono::Security::Cryptography {
class PKCS8_PrivateKeyInfo;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::PKCS8);
MARK_REF_PTR_T(::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo);
MARK_REF_PTR_T(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo);
// Dependencies System.Object
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
class CORDL_TYPE PKCS8_PrivateKeyInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::StringW Algorithm;

  __declspec(property(get = get_PrivateKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> PrivateKey;

  /// @brief Field _algorithm, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__algorithm, put = __cordl_internal_set__algorithm)) ::StringW _algorithm;

  /// @brief Field _key, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _key;

  /// @brief Field _list, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::ArrayList* _list;

  /// @brief Field _version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Method Decode, addr 0x588cea4, size 0x264, virtual false, abstract: false, final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method DecodeDSA, addr 0x588d8a4, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::DSA* DecodeDSA(::ArrayW<uint8_t, ::Array<uint8_t>*> privateKey, ::System::Security::Cryptography::DSAParameters dsaParameters);

  /// @brief Method DecodeRSA, addr 0x588d2d4, size 0x3dc, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RSA* DecodeRSA(::ArrayW<uint8_t, ::Array<uint8_t>*> keypair);

  /// @brief Method Encode, addr 0x588da0c, size 0x12c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode(::System::Security::Cryptography::AsymmetricAlgorithm* aa);

  /// @brief Method Encode, addr 0x588d9c0, size 0x4c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode(::System::Security::Cryptography::DSA* dsa);

  /// @brief Method Encode, addr 0x588d6b0, size 0x1f4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Encode(::System::Security::Cryptography::RSA* rsa);

  static inline ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo* New_ctor();

  static inline ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Normalize, addr 0x588d224, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Normalize(::ArrayW<uint8_t, ::Array<uint8_t>*> bigInt, int32_t length);

  /// @brief Method RemoveLeadingZero, addr 0x588d184, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> RemoveLeadingZero(::ArrayW<uint8_t, ::Array<uint8_t>*> bigInt);

  constexpr ::StringW const& __cordl_internal_get__algorithm() const;

  constexpr ::StringW& __cordl_internal_get__algorithm();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__key() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__key();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__list();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__algorithm(::StringW value);

  constexpr void __cordl_internal_set__key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__list(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x588ce1c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x588ce7c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method get_Algorithm, addr 0x588d108, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Algorithm();

  /// @brief Method get_PrivateKey, addr 0x588d110, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_PrivateKey();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS8_PrivateKeyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKCS8_PrivateKeyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS8_PrivateKeyInfo(PKCS8_PrivateKeyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS8_PrivateKeyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS8_PrivateKeyInfo(PKCS8_PrivateKeyInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19265 };

  /// @brief Field _version, offset: 0x10, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _algorithm, offset: 0x18, size: 0x8, def value: None
  ::StringW ____algorithm;

  /// @brief Field _key, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____key;

  /// @brief Field _list, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo, ____version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo, ____algorithm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo, ____key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo, ____list) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo, 0x30>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
// Dependencies System.Object
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
class CORDL_TYPE PKCS8_EncryptedPrivateKeyInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Algorithm)) ::StringW Algorithm;

  __declspec(property(get = get_EncryptedData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> EncryptedData;

  __declspec(property(get = get_IterationCount)) int32_t IterationCount;

  __declspec(property(get = get_Salt)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Salt;

  /// @brief Field _algorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__algorithm, put = __cordl_internal_set__algorithm)) ::StringW _algorithm;

  /// @brief Field _data, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _data;

  /// @brief Field _iterations, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__iterations, put = __cordl_internal_set__iterations)) int32_t _iterations;

  /// @brief Field _salt, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__salt, put = __cordl_internal_set__salt)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _salt;

  /// @brief Method Decode, addr 0x588db40, size 0x2a0, virtual false, abstract: false, final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo* New_ctor();

  static inline ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  constexpr ::StringW const& __cordl_internal_get__algorithm() const;

  constexpr ::StringW& __cordl_internal_get__algorithm();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__data() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__data();

  constexpr int32_t const& __cordl_internal_get__iterations() const;

  constexpr int32_t& __cordl_internal_get__iterations();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__salt() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__salt();

  constexpr void __cordl_internal_set__algorithm(::StringW value);

  constexpr void __cordl_internal_set__data(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__iterations(int32_t value);

  constexpr void __cordl_internal_set__salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x588db38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x588db3c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method get_Algorithm, addr 0x588dde0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Algorithm();

  /// @brief Method get_EncryptedData, addr 0x588dde8, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_EncryptedData();

  /// @brief Method get_IterationCount, addr 0x588df10, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IterationCount();

  /// @brief Method get_Salt, addr 0x588de5c, size 0xb4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Salt();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS8_EncryptedPrivateKeyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKCS8_EncryptedPrivateKeyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS8_EncryptedPrivateKeyInfo(PKCS8_EncryptedPrivateKeyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS8_EncryptedPrivateKeyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS8_EncryptedPrivateKeyInfo(PKCS8_EncryptedPrivateKeyInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19266 };

  /// @brief Field _algorithm, offset: 0x10, size: 0x8, def value: None
  ::StringW ____algorithm;

  /// @brief Field _salt, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____salt;

  /// @brief Field _iterations, offset: 0x20, size: 0x4, def value: None
  int32_t ____iterations;

  /// @brief Field _data, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo, ____algorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo, ____salt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo, ____iterations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo, ____data) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo, 0x30>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
// Dependencies System.Object
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.PKCS8
class CORDL_TYPE PKCS8 : public ::System::Object {
public:
  // Declarations
  using EncryptedPrivateKeyInfo = ::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo;

  using PrivateKeyInfo = ::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PKCS8();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PKCS8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PKCS8(PKCS8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PKCS8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PKCS8(PKCS8 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19267 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::PKCS8, 0x10>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::PKCS8);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::PKCS8*, "Mono.Security.Cryptography", "PKCS8");
NEED_NO_BOX(::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::PKCS8_EncryptedPrivateKeyInfo*, "Mono.Security.Cryptography", "PKCS8/EncryptedPrivateKeyInfo");
NEED_NO_BOX(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*, "Mono.Security.Cryptography", "PKCS8/PrivateKeyInfo");
