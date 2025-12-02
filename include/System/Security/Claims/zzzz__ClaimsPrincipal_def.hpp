#pragma once
// IWYU pragma private; include "System/Security/Claims/ClaimsPrincipal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ClaimsPrincipal)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Claims {
class ClaimsIdentity;
}
namespace System::Security::Principal {
class IPrincipal;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace System::Security::Claims {
class ClaimsPrincipal;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Claims::ClaimsPrincipal);
// Dependencies System.Object
namespace System::Security::Claims {
// Is value type: false
// CS Name: System.Security.Claims.ClaimsPrincipal
class CORDL_TYPE ClaimsPrincipal : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_identities, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_identities,
                      put = __cordl_internal_set_m_identities)) ::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>* m_identities;

  /// @brief Field m_serializedClaimsIdentities, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_serializedClaimsIdentities, put = __cordl_internal_set_m_serializedClaimsIdentities)) ::StringW m_serializedClaimsIdentities;

  /// @brief Field m_version, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) ::StringW m_version;

  /// @brief Field s_identitySelector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_identitySelector,
                      put = setStaticF_s_identitySelector)) ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*,
                                                                             ::System::Security::Claims::ClaimsIdentity*>* s_identitySelector;

  /// @brief Field s_principalSelector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_principalSelector, put = setStaticF_s_principalSelector)) ::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* s_principalSelector;

  /// @brief Convert operator to "::System::Security::Principal::IPrincipal"
  constexpr operator ::System::Security::Principal::IPrincipal*() noexcept;

  /// @brief Method Deserialize, addr 0x5904bd4, size 0x160, virtual false, abstract: false, final false
  inline void Deserialize(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method DeserializeIdentities, addr 0x5905728, size 0x630, virtual false, abstract: false, final false
  inline void DeserializeIdentities(::StringW identities);

  static inline ::System::Security::Claims::ClaimsPrincipal* New_ctor();

  static inline ::System::Security::Claims::ClaimsPrincipal* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserializedMethod, addr 0x59056c4, size 0x64, virtual false, abstract: false, final false
  inline void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnSerializingMethod, addr 0x5904d34, size 0x60, virtual false, abstract: false, final false
  inline void OnSerializingMethod(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SelectPrimaryIdentity, addr 0x5904728, size 0x35c, virtual false, abstract: false, final false
  static inline ::System::Security::Claims::ClaimsIdentity* SelectPrimaryIdentity(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>* identities);

  /// @brief Method SerializeIdentities, addr 0x5904d94, size 0x930, virtual false, abstract: false, final false
  inline ::StringW SerializeIdentities();

  constexpr ::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>* const& __cordl_internal_get_m_identities() const;

  constexpr ::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>*& __cordl_internal_get_m_identities();

  constexpr ::StringW const& __cordl_internal_get_m_serializedClaimsIdentities() const;

  constexpr ::StringW& __cordl_internal_get_m_serializedClaimsIdentities();

  constexpr ::StringW const& __cordl_internal_get_m_version() const;

  constexpr ::StringW& __cordl_internal_get_m_version();

  constexpr void __cordl_internal_set_m_identities(::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>* value);

  constexpr void __cordl_internal_set_m_serializedClaimsIdentities(::StringW value);

  constexpr void __cordl_internal_set_m_version(::StringW value);

  /// @brief Method .ctor, addr 0x58fcde0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5904ae0, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*, ::System::Security::Claims::ClaimsIdentity*>*
  getStaticF_s_identitySelector();

  static inline ::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* getStaticF_s_principalSelector();

  /// @brief Method get_ClaimsPrincipalSelector, addr 0x5904a84, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* get_ClaimsPrincipalSelector();

  /// @brief Convert to "::System::Security::Principal::IPrincipal"
  constexpr ::System::Security::Principal::IPrincipal* i___System__Security__Principal__IPrincipal() noexcept;

  static inline void
  setStaticF_s_identitySelector(::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*, ::System::Security::Claims::ClaimsIdentity*>* value);

  static inline void setStaticF_s_principalSelector(::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClaimsPrincipal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClaimsPrincipal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClaimsPrincipal(ClaimsPrincipal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClaimsPrincipal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClaimsPrincipal(ClaimsPrincipal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3027 };

  /// @brief Field m_version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_version;

  /// @brief Field m_serializedClaimsIdentities, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_serializedClaimsIdentities;

  /// @brief Field m_identities, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>* ___m_identities;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Claims::ClaimsPrincipal, ___m_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsPrincipal, ___m_serializedClaimsIdentities) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsPrincipal, ___m_identities) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Claims::ClaimsPrincipal, 0x28>, "Size mismatch!");

} // namespace System::Security::Claims
NEED_NO_BOX(::System::Security::Claims::ClaimsPrincipal);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Claims::ClaimsPrincipal*, "System.Security.Claims", "ClaimsPrincipal");
