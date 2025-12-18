#pragma once
// IWYU pragma private; include "System/Security/Cryptography/X509Certificates/X509ChainElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509ChainElement)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509ChainElement);
// Dependencies System.Object, System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: System.Security.Cryptography.X509Certificates.X509ChainElement
class CORDL_TYPE X509ChainElement : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Certificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate2* Certificate;

  __declspec(property(
      get = get_ChainElementStatus)) ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>
      ChainElementStatus;

  __declspec(property(get = get_StatusFlags, put = set_StatusFlags)) ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags StatusFlags;

  /// @brief Field certificate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certificate, put = __cordl_internal_set_certificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate;

  /// @brief Field compressed_status_flags, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_compressed_status_flags,
                      put = __cordl_internal_set_compressed_status_flags)) ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags compressed_status_flags;

  /// @brief Field info, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_info, put = __cordl_internal_set_info)) ::StringW info;

  /// @brief Field status, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_status,
      put = __cordl_internal_set_status)) ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>
      status;

  /// @brief Method Count, addr 0x61f60d0, size 0x24, virtual false, abstract: false, final false
  inline int32_t Count(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags);

  static inline ::System::Security::Cryptography::X509Certificates::X509ChainElement* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method Set, addr 0x61f60f4, size 0x84, virtual false, abstract: false, final false
  inline void Set(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> status,
                  ::ByRef<int32_t> position, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags,
                  ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags mask);

  /// @brief Method UncompressFlags, addr 0x61f6178, size 0x254, virtual false, abstract: false, final false
  inline void UncompressFlags();

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* const& __cordl_internal_get_certificate() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& __cordl_internal_get_certificate();

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const& __cordl_internal_get_compressed_status_flags() const;

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags& __cordl_internal_get_compressed_status_flags();

  constexpr ::StringW const& __cordl_internal_get_info() const;

  constexpr ::StringW& __cordl_internal_get_info();

  constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> const&
  __cordl_internal_get_status() const;

  constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>& __cordl_internal_get_status();

  constexpr void __cordl_internal_set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* value);

  constexpr void __cordl_internal_set_compressed_status_flags(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);

  constexpr void __cordl_internal_set_info(::StringW value);

  constexpr void
  __cordl_internal_set_status(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> value);

  /// @brief Method .ctor, addr 0x61f6094, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method get_Certificate, addr 0x61f60b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_Certificate();

  /// @brief Method get_ChainElementStatus, addr 0x61f60b8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> get_ChainElementStatus();

  /// @brief Method get_StatusFlags, addr 0x61f60c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_StatusFlags();

  /// @brief Method set_StatusFlags, addr 0x61f60c8, size 0x8, virtual false, abstract: false, final false
  inline void set_StatusFlags(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ChainElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509ChainElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ChainElement(X509ChainElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ChainElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ChainElement(X509ChainElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11176 };

  /// @brief Field certificate, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509Certificate2* ___certificate;

  /// @brief Field status, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> ___status;

  /// @brief Field info, offset: 0x20, size: 0x8, def value: None
  ::StringW ___info;

  /// @brief Field compressed_status_flags, offset: 0x28, size: 0x4, def value: None
  ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags ___compressed_status_flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainElement, ___certificate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainElement, ___status) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainElement, ___info) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainElement, ___compressed_status_flags) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainElement, 0x30>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainElement*, "System.Security.Cryptography.X509Certificates", "X509ChainElement");
