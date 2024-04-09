#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OpenBsdBCrypt)
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class OpenBsdBCrypt;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt);
// Type: Org.BouncyCastle.Crypto.Generators::OpenBsdBCrypt
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::OpenBsdBCrypt*
class CORDL_TYPE OpenBsdBCrypt : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllowedVersions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllowedVersions, put = setStaticF_AllowedVersions))::Org::BouncyCastle::Utilities::Collections::ISet* AllowedVersions;

  /// @brief Field DecodingTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DecodingTable, put = setStaticF_DecodingTable))::ArrayW<uint8_t, ::Array<uint8_t>*> DecodingTable;

  /// @brief Field DefaultVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultVersion, put = setStaticF_DefaultVersion))::StringW DefaultVersion;

  /// @brief Field EncodingTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EncodingTable, put = setStaticF_EncodingTable))::ArrayW<uint8_t, ::Array<uint8_t>*> EncodingTable;

  /// @brief Method CheckPassword, addr 0x106d044, size 0x528, virtual false, abstract: false, final false
  static inline bool CheckPassword(::StringW bcryptString, ::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method CreateBcryptString, addr 0x106c5d8, size 0x2e4, virtual false, abstract: false, final false
  static inline ::StringW CreateBcryptString(::StringW version, ::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t cost);

  /// @brief Method DecodeSaltString, addr 0x106d56c, size 0x3d4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecodeSaltString(::StringW saltString);

  /// @brief Method EncodeData, addr 0x106c8bc, size 0x35c, virtual false, abstract: false, final false
  static inline ::StringW EncodeData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Generate, addr 0x106cc18, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW Generate(::ArrayW<char16_t, ::Array<char16_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t cost);

  /// @brief Method Generate, addr 0x106cc90, size 0x3b4, virtual false, abstract: false, final false
  static inline ::StringW Generate(::StringW version, ::ArrayW<char16_t, ::Array<char16_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t cost);

  static inline ::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt* New_ctor();

  /// @brief Method .ctor, addr 0x106c5d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Utilities::Collections::ISet* getStaticF_AllowedVersions();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_DecodingTable();

  static inline ::StringW getStaticF_DefaultVersion();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_EncodingTable();

  static inline void setStaticF_AllowedVersions(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  static inline void setStaticF_DecodingTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_DefaultVersion(::StringW value);

  static inline void setStaticF_EncodingTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenBsdBCrypt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenBsdBCrypt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenBsdBCrypt(OpenBsdBCrypt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenBsdBCrypt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenBsdBCrypt(OpenBsdBCrypt const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::OpenBsdBCrypt*, "Org.BouncyCastle.Crypto.Generators", "OpenBsdBCrypt");
