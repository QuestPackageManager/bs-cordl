#pragma once
// IWYU pragma private; include "Mono/SystemCertificateProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemCertificateProvider)
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace Mono {
struct CertificateImportFlags;
}
namespace Mono {
class ISystemCertificateProvider;
}
namespace Mono {
class X509PalImpl;
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
namespace System {
class Object;
}
// Forward declare root types
namespace Mono {
class SystemCertificateProvider;
}
// Write type traits
MARK_REF_PTR_T(::Mono::SystemCertificateProvider);
// Dependencies System.Object
namespace Mono {
// Is value type: false
// CS Name: Mono.SystemCertificateProvider
class CORDL_TYPE SystemCertificateProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_X509Pal)) ::Mono::X509PalImpl* X509Pal;

  /// @brief Field initialized, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_initialized, put = setStaticF_initialized)) int32_t initialized;

  /// @brief Field syncRoot, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_syncRoot, put = setStaticF_syncRoot)) ::System::Object* syncRoot;

  /// @brief Field x509pal, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_x509pal, put = setStaticF_x509pal)) ::Mono::X509PalImpl* x509pal;

  /// @brief Convert operator to "::Mono::ISystemCertificateProvider"
  constexpr operator ::Mono::ISystemCertificateProvider*() noexcept;

  /// @brief Method EnsureInitialized, addr 0x5db3360, size 0x150, virtual false, abstract: false, final false
  static inline void EnsureInitialized();

  /// @brief Method GetX509Pal, addr 0x5db32b4, size 0x54, virtual false, abstract: false, final false
  static inline ::Mono::X509PalImpl* GetX509Pal();

  /// @brief Method Import, addr 0x5db387c, size 0x124, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                          ::Mono::CertificateImportFlags importFlags);

  /// @brief Method Import, addr 0x5db3770, size 0x90, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                          ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags,
                                                                                          ::Mono::CertificateImportFlags importFlags);

  /// @brief Method Import, addr 0x5db3510, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Mono::CertificateImportFlags importFlags);

  /// @brief Method Mono.ISystemCertificateProvider.Import, addr 0x5db3878, size 0x4, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono_ISystemCertificateProvider_Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                                                         ::Mono::CertificateImportFlags importFlags);

  /// @brief Method Mono.ISystemCertificateProvider.Import, addr 0x5db376c, size 0x4, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
  Mono_ISystemCertificateProvider_Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                         ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, ::Mono::CertificateImportFlags importFlags);

  static inline ::Mono::SystemCertificateProvider* New_ctor();

  /// @brief Method .ctor, addr 0x5db39a0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_initialized();

  static inline ::System::Object* getStaticF_syncRoot();

  static inline ::Mono::X509PalImpl* getStaticF_x509pal();

  /// @brief Method get_X509Pal, addr 0x5db34b0, size 0x60, virtual false, abstract: false, final false
  inline ::Mono::X509PalImpl* get_X509Pal();

  /// @brief Convert to "::Mono::ISystemCertificateProvider"
  constexpr ::Mono::ISystemCertificateProvider* i___Mono__ISystemCertificateProvider() noexcept;

  static inline void setStaticF_initialized(int32_t value);

  static inline void setStaticF_syncRoot(::System::Object* value);

  static inline void setStaticF_x509pal(::Mono::X509PalImpl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemCertificateProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemCertificateProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemCertificateProvider(SystemCertificateProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemCertificateProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemCertificateProvider(SystemCertificateProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10911 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::SystemCertificateProvider, 0x10>, "Size mismatch!");

} // namespace Mono
NEED_NO_BOX(::Mono::SystemCertificateProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::SystemCertificateProvider*, "Mono", "SystemCertificateProvider");
