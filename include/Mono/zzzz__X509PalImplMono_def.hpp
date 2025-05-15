#pragma once
// IWYU pragma private; include "Mono/X509PalImplMono.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/zzzz__X509PalImpl_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509PalImplMono)
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
// Forward declare root types
namespace Mono {
class X509PalImplMono;
}
// Write type traits
MARK_REF_PTR_T(::Mono::X509PalImplMono);
// Dependencies Mono.X509PalImpl
namespace Mono {
// Is value type: false
// CS Name: Mono.X509PalImplMono
class CORDL_TYPE X509PalImplMono : public ::Mono::X509PalImpl {
public:
  // Declarations
  /// @brief Method Import, addr 0x410a078, size 0x8, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert);

  /// @brief Method Import, addr 0x410a074, size 0x4, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                          ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  /// @brief Method Import, addr 0x410a070, size 0x4, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Mono::X509PalImplMono* New_ctor();

  /// @brief Method .ctor, addr 0x4109644, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509PalImplMono();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509PalImplMono", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509PalImplMono(X509PalImplMono&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509PalImplMono", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509PalImplMono(X509PalImplMono const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9073 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::X509PalImplMono, 0x10>, "Size mismatch!");

} // namespace Mono
NEED_NO_BOX(::Mono::X509PalImplMono);
DEFINE_IL2CPP_ARG_TYPE(::Mono::X509PalImplMono*, "Mono", "X509PalImplMono");
