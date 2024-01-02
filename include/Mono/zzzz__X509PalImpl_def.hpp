#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509PalImpl)
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyStorageFlags;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Impl;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ContentType;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace Microsoft::Win32::SafeHandles {
class SafePasswordHandle;
}
// Forward declare root types
namespace Mono {
class X509PalImpl;
}
// Write type traits
MARK_REF_PTR_T(::Mono::X509PalImpl);
// Type: Mono::X509PalImpl
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8754))
// CS Name: ::Mono::X509PalImpl*
class CORDL_TYPE X509PalImpl : public ::System::Object {
public:
  // Declarations
  /// @brief Field signedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_signedData, put = setStaticF_signedData))::ArrayW<uint8_t, ::Array<uint8_t>*> signedData;

  __declspec(property(get = get_SupportsLegacyBasicConstraintsExtension)) bool SupportsLegacyBasicConstraintsExtension;

  static inline void setStaticF_signedData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_signedData();

  /// @brief Method Import, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Import, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                          ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  /// @brief Method Import, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert);

  /// @brief Method PEM, addr 0x2816ef0, size 0x134, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> PEM(::StringW type, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ConvertData, addr 0x2817024, size 0x10c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConvertData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ImportFallback, addr 0x28166ec, size 0x1fc, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* ImportFallback(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ImportFallback, addr 0x281697c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* ImportFallback(::ArrayW<uint8_t, ::Array<uint8_t>*> data,
                                                                                                  ::Microsoft::Win32::SafeHandles::SafePasswordHandle* password,
                                                                                                  ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);

  /// @brief Method get_SupportsLegacyBasicConstraintsExtension, addr 0x2817130, size 0x8, virtual false, abstract: false, final false
  inline bool get_SupportsLegacyBasicConstraintsExtension();

  /// @brief Method GetCertContentType, addr 0x2817138, size 0x40c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ContentType GetCertContentType(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  static inline ::Mono::X509PalImpl* New_ctor();

  /// @brief Method .ctor, addr 0x2816ee8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "X509PalImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509PalImpl(X509PalImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509PalImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509PalImpl(X509PalImpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509PalImpl();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::X509PalImpl, 0x10>, "Size mismatch!");

} // namespace Mono
NEED_NO_BOX(::Mono::X509PalImpl);
DEFINE_IL2CPP_ARG_TYPE(::Mono::X509PalImpl*, "Mono", "X509PalImpl");
