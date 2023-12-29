#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SHA1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SHA1CryptoServiceProvider)
namespace System::Security::Cryptography {
class SHA1Internal;
}
// Forward declare root types
namespace System::Security::Cryptography {
class SHA1CryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::SHA1CryptoServiceProvider);
// Type: System.Security.Cryptography::SHA1CryptoServiceProvider
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2957))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2985))
// CS Name: ::System.Security.Cryptography::SHA1CryptoServiceProvider*
class CORDL_TYPE SHA1CryptoServiceProvider : public ::System::Security::Cryptography::SHA1 {
public:
  // Declarations
  /// @brief Field sha, offset 0x28, size 0x8
  __declspec(property(get = __get_sha, put = __set_sha))::System::Security::Cryptography::SHA1Internal* sha;

  constexpr ::System::Security::Cryptography::SHA1Internal*& __get_sha();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::SHA1Internal*> const& __get_sha() const;

  constexpr void __set_sha(::System::Security::Cryptography::SHA1Internal* value);

  static inline ::System::Security::Cryptography::SHA1CryptoServiceProvider* New_ctor();

  /// @brief Method .ctor addr 0x231575c size 0x68 virtual false final false
  inline void _ctor();

  /// @brief Method Finalize addr 0x231ba50 size 0xa0 virtual true final false
  inline void Finalize();

  /// @brief Method Dispose addr 0x231baf0 size 0xc virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method HashCore addr 0x231bafc size 0x24 virtual true final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal addr 0x231bb20 size 0x20 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize addr 0x231bb40 size 0x18 virtual true final false
  inline void Initialize();

  // Ctor Parameters [CppParam { name: "", ty: "SHA1CryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SHA1CryptoServiceProvider(SHA1CryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SHA1CryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SHA1CryptoServiceProvider(SHA1CryptoServiceProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SHA1CryptoServiceProvider();

public:
  /// @brief Field sha, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Cryptography::SHA1Internal* ___sha;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SHA1CryptoServiceProvider, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1CryptoServiceProvider, ___sha) == 0x28, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SHA1CryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA1CryptoServiceProvider*, "System.Security.Cryptography", "SHA1CryptoServiceProvider");
