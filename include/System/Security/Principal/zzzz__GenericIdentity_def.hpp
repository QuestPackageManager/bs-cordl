#pragma once
// IWYU pragma private; include "System/Security/Principal/GenericIdentity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Claims/zzzz__ClaimsIdentity_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GenericIdentity)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Security::Claims {
class Claim;
}
namespace System::Security::Claims {
class ClaimsIdentity;
}
// Forward declare root types
namespace System::Security::Principal {
class GenericIdentity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::GenericIdentity);
// Dependencies System.Security.Claims.ClaimsIdentity
namespace System::Security::Principal {
// Is value type: false
// CS Name: System.Security.Principal.GenericIdentity
class CORDL_TYPE GenericIdentity : public ::System::Security::Claims::ClaimsIdentity {
public:
  // Declarations
  __declspec(property(get = get_AuthenticationType)) ::StringW AuthenticationType;

  __declspec(property(get = get_Claims)) ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* Claims;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field m_name, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_name, put = __cordl_internal_set_m_name)) ::StringW m_name;

  /// @brief Field m_type, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_type, put = __cordl_internal_set_m_type)) ::StringW m_type;

  /// @brief Method AddNameClaim, addr 0x3cb8dd4, size 0xd0, virtual false, abstract: false, final false
  inline void AddNameClaim();

  /// @brief Method Clone, addr 0x3cb90e4, size 0x58, virtual true, abstract: false, final false
  inline ::System::Security::Claims::ClaimsIdentity* Clone();

  static inline ::System::Security::Principal::GenericIdentity* New_ctor();

  static inline ::System::Security::Principal::GenericIdentity* New_ctor(::System::Security::Principal::GenericIdentity* identity);

  static inline ::System::Security::Principal::GenericIdentity* New_ctor(::StringW name, ::StringW type);

  constexpr ::StringW const& __cordl_internal_get_m_name() const;

  constexpr ::StringW& __cordl_internal_get_m_name();

  constexpr ::StringW const& __cordl_internal_get_m_type() const;

  constexpr ::StringW& __cordl_internal_get_m_type();

  constexpr void __cordl_internal_set_m_name(::StringW value);

  constexpr void __cordl_internal_set_m_type(::StringW value);

  /// @brief Method .ctor, addr 0x3cb8ea4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3cb8ec0, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Principal::GenericIdentity* identity);

  /// @brief Method .ctor, addr 0x3cb8d04, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW type);

  /// @brief Method get_AuthenticationType, addr 0x3cb91b8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_AuthenticationType();

  /// @brief Method get_Claims, addr 0x3cb913c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::Claim*>* get_Claims();

  /// @brief Method get_Name, addr 0x3cb91b0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericIdentity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericIdentity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericIdentity(GenericIdentity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericIdentity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericIdentity(GenericIdentity const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2993 };

  /// @brief Field m_name, offset: 0x78, size: 0x8, def value: None
  ::StringW ___m_name;

  /// @brief Field m_type, offset: 0x80, size: 0x8, def value: None
  ::StringW ___m_type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Principal::GenericIdentity, ___m_name) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Security::Principal::GenericIdentity, ___m_type) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Principal::GenericIdentity, 0x88>, "Size mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::GenericIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::GenericIdentity*, "System.Security.Principal", "GenericIdentity");
