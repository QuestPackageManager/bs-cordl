#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CspParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CspParameters)
namespace System::Security::Cryptography {
struct CspProviderFlags;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CspParameters;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CspParameters);
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.CspParameters
class CORDL_TYPE CspParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Flags, put = set_Flags)) ::System::Security::Cryptography::CspProviderFlags Flags;

  /// @brief Field KeyContainerName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyContainerName, put = __cordl_internal_set_KeyContainerName)) ::StringW KeyContainerName;

  /// @brief Field KeyNumber, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_KeyNumber, put = __cordl_internal_set_KeyNumber)) int32_t KeyNumber;

  /// @brief Field ProviderName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ProviderName, put = __cordl_internal_set_ProviderName)) ::StringW ProviderName;

  /// @brief Field ProviderType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_ProviderType, put = __cordl_internal_set_ProviderType)) int32_t ProviderType;

  /// @brief Field m_flags, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_flags, put = __cordl_internal_set_m_flags)) int32_t m_flags;

  static inline ::System::Security::Cryptography::CspParameters* New_ctor();

  static inline ::System::Security::Cryptography::CspParameters* New_ctor(int32_t dwTypeIn);

  static inline ::System::Security::Cryptography::CspParameters* New_ctor(int32_t dwTypeIn, ::StringW strProviderNameIn, ::StringW strContainerNameIn);

  static inline ::System::Security::Cryptography::CspParameters* New_ctor(int32_t providerType, ::StringW providerName, ::StringW keyContainerName,
                                                                          ::System::Security::Cryptography::CspProviderFlags flags);

  constexpr ::StringW const& __cordl_internal_get_KeyContainerName() const;

  constexpr ::StringW& __cordl_internal_get_KeyContainerName();

  constexpr int32_t const& __cordl_internal_get_KeyNumber() const;

  constexpr int32_t& __cordl_internal_get_KeyNumber();

  constexpr ::StringW const& __cordl_internal_get_ProviderName() const;

  constexpr ::StringW& __cordl_internal_get_ProviderName();

  constexpr int32_t const& __cordl_internal_get_ProviderType() const;

  constexpr int32_t& __cordl_internal_get_ProviderType();

  constexpr int32_t const& __cordl_internal_get_m_flags() const;

  constexpr int32_t& __cordl_internal_get_m_flags();

  constexpr void __cordl_internal_set_KeyContainerName(::StringW value);

  constexpr void __cordl_internal_set_KeyNumber(int32_t value);

  constexpr void __cordl_internal_set_ProviderName(::StringW value);

  constexpr void __cordl_internal_set_ProviderType(int32_t value);

  constexpr void __cordl_internal_set_m_flags(int32_t value);

  /// @brief Method .ctor, addr 0x3c9edf8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c9ee68, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t dwTypeIn);

  /// @brief Method .ctor, addr 0x3c9ee24, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(int32_t dwTypeIn, ::StringW strProviderNameIn, ::StringW strContainerNameIn);

  /// @brief Method .ctor, addr 0x3c9ee9c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(int32_t providerType, ::StringW providerName, ::StringW keyContainerName, ::System::Security::Cryptography::CspProviderFlags flags);

  /// @brief Method get_Flags, addr 0x3c9ed0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::CspProviderFlags get_Flags();

  /// @brief Method set_Flags, addr 0x3c9ed14, size 0xe4, virtual false, abstract: false, final false
  inline void set_Flags(::System::Security::Cryptography::CspProviderFlags value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CspParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CspParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CspParameters(CspParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CspParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CspParameters(CspParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2926 };

  /// @brief Field ProviderType, offset: 0x10, size: 0x4, def value: None
  int32_t ___ProviderType;

  /// @brief Field ProviderName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ProviderName;

  /// @brief Field KeyContainerName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___KeyContainerName;

  /// @brief Field KeyNumber, offset: 0x28, size: 0x4, def value: None
  int32_t ___KeyNumber;

  /// @brief Field m_flags, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___ProviderType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___ProviderName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___KeyContainerName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___KeyNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___m_flags) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CspParameters, 0x30>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CspParameters);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CspParameters*, "System.Security.Cryptography", "CspParameters");
