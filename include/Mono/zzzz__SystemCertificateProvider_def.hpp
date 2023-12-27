#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemCertificateProvider)
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System {
class Object;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace Mono {
struct CertificateImportFlags;
}
namespace Mono {
class ISystemCertificateProvider;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
namespace Mono {
class X509PalImpl;
}
// Forward declare root types
namespace Mono {
class SystemCertificateProvider;
}
// Write type traits
MARK_REF_PTR_T(::Mono::SystemCertificateProvider);
// Type: Mono::SystemCertificateProvider
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8750))
// CS Name: ::Mono::SystemCertificateProvider*
class CORDL_TYPE SystemCertificateProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field initialized, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_initialized, put = setStaticF_initialized)) int32_t initialized;

  /// @brief Field x509pal, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_x509pal, put = setStaticF_x509pal))::Mono::X509PalImpl* x509pal;

  /// @brief Field syncRoot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_syncRoot, put = setStaticF_syncRoot))::System::Object* syncRoot;

  __declspec(property(get = get_X509Pal))::Mono::X509PalImpl* X509Pal;

  /// @brief Convert operator to "::Mono::ISystemCertificateProvider"
  constexpr operator ::Mono::ISystemCertificateProvider*() noexcept;

  static inline void setStaticF_initialized(int32_t value);

  static inline int32_t getStaticF_initialized();

  static inline void setStaticF_x509pal(::Mono::X509PalImpl* value);

  static inline ::Mono::X509PalImpl* getStaticF_x509pal();

  static inline void setStaticF_syncRoot(::System::Object* value);

  static inline ::System::Object* getStaticF_syncRoot();

  /// @brief Method GetX509Pal addr 0x2816420 size 0x58 virtual false final false
  static inline ::Mono::X509PalImpl* GetX509Pal();

  /// @brief Method EnsureInitialized addr 0x28164d0 size 0x154 virtual false final false
  static inline void EnsureInitialized();

  /// @brief Method get_X509Pal addr 0x2816624 size 0x5c virtual false final false
  inline ::Mono::X509PalImpl* get_X509Pal();

  /// @brief Method Import addr 0x2816680 size 0x6c virtual true final true
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Mono::CertificateImportFlags importFlags);

  /// @brief Method Mono.ISystemCertificateProvider.Import addr 0x28168e8 size 0x4 virtual true final true
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl*
  Mono_ISystemCertificateProvider_Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                         ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, ::Mono::CertificateImportFlags importFlags);

  /// @brief Method Import addr 0x28168ec size 0x90 virtual false final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                          ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags,
                                                                                          ::Mono::CertificateImportFlags importFlags);

  /// @brief Method Mono.ISystemCertificateProvider.Import addr 0x28169f8 size 0x4 virtual true final true
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Mono_ISystemCertificateProvider_Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                                                         ::Mono::CertificateImportFlags importFlags);

  /// @brief Method Import addr 0x28169fc size 0x114 virtual false final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                          ::Mono::CertificateImportFlags importFlags);

  static inline ::Mono::SystemCertificateProvider* New_ctor();

  /// @brief Method .ctor addr 0x2816b10 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SystemCertificateProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemCertificateProvider(SystemCertificateProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemCertificateProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemCertificateProvider(SystemCertificateProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemCertificateProvider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::SystemCertificateProvider, 0x10>, "Size mismatch!");

} // namespace Mono
NEED_NO_BOX(::Mono::SystemCertificateProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::SystemCertificateProvider*, "Mono", "SystemCertificateProvider");
