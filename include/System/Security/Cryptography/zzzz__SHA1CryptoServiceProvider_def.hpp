#pragma once
// IWYU pragma private; include "System/Security/Cryptography/SHA1CryptoServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SHA1_def.hpp"
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
// Dependencies System.Security.Cryptography.SHA1
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.SHA1CryptoServiceProvider
class CORDL_TYPE SHA1CryptoServiceProvider : public ::System::Security::Cryptography::SHA1 {
public:
  // Declarations
  /// @brief Field sha, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sha, put = __cordl_internal_set_sha)) ::System::Security::Cryptography::SHA1Internal* sha;

  /// @brief Method Dispose, addr 0x3cb6934, size 0xc, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x3cb6894, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HashCore, addr 0x3cb6940, size 0x24, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x3cb6964, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x3cb6984, size 0x18, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::System::Security::Cryptography::SHA1CryptoServiceProvider* New_ctor();

  constexpr ::System::Security::Cryptography::SHA1Internal* const& __cordl_internal_get_sha() const;

  constexpr ::System::Security::Cryptography::SHA1Internal*& __cordl_internal_get_sha();

  constexpr void __cordl_internal_set_sha(::System::Security::Cryptography::SHA1Internal* value);

  /// @brief Method .ctor, addr 0x3cb6834, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SHA1CryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SHA1CryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SHA1CryptoServiceProvider(SHA1CryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SHA1CryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SHA1CryptoServiceProvider(SHA1CryptoServiceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2985 };

  /// @brief Field sha, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Cryptography::SHA1Internal* ___sha;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::SHA1CryptoServiceProvider, ___sha) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SHA1CryptoServiceProvider, 0x30>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SHA1CryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA1CryptoServiceProvider*, "System.Security.Cryptography", "SHA1CryptoServiceProvider");
