#pragma once
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
// Type: System.Security.Claims::ClaimsPrincipal
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Claims {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3011))
// CS Name: ::System.Security.Claims::ClaimsPrincipal*
class CORDL_TYPE ClaimsPrincipal : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_version, offset 0x10, size 0x8
  __declspec(property(get = __get_m_version, put = __set_m_version))::StringW m_version;

  /// @brief Field m_serializedClaimsIdentities, offset 0x18, size 0x8
  __declspec(property(get = __get_m_serializedClaimsIdentities, put = __set_m_serializedClaimsIdentities))::StringW m_serializedClaimsIdentities;

  /// @brief Field m_identities, offset 0x20, size 0x8
  __declspec(property(get = __get_m_identities, put = __set_m_identities))::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>* m_identities;

  /// @brief Field s_identitySelector, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_identitySelector,
                             put = setStaticF_s_identitySelector))::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*,
                                                                                   ::System::Security::Claims::ClaimsIdentity*>* s_identitySelector;

  /// @brief Field s_principalSelector, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_principalSelector, put = setStaticF_s_principalSelector))::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* s_principalSelector;

  /// @brief Convert operator to "::System::Security::Principal::IPrincipal"
  constexpr operator ::System::Security::Principal::IPrincipal*() noexcept;

  /// @brief Convert to "::System::Security::Principal::IPrincipal"
  constexpr ::System::Security::Principal::IPrincipal* i___System__Security__Principal__IPrincipal() noexcept;

  constexpr ::StringW& __get_m_version();

  constexpr ::StringW const& __get_m_version() const;

  constexpr void __set_m_version(::StringW value);

  constexpr ::StringW& __get_m_serializedClaimsIdentities();

  constexpr ::StringW const& __get_m_serializedClaimsIdentities() const;

  constexpr void __set_m_serializedClaimsIdentities(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>*& __get_m_identities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>*> const& __get_m_identities() const;

  constexpr void __set_m_identities(::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>* value);

  static inline void
  setStaticF_s_identitySelector(::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*, ::System::Security::Claims::ClaimsIdentity*>* value);

  static inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*, ::System::Security::Claims::ClaimsIdentity*>*
  getStaticF_s_identitySelector();

  static inline void setStaticF_s_principalSelector(::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* value);

  static inline ::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* getStaticF_s_principalSelector();

  /// @brief Method SelectPrimaryIdentity, addr 0x247ec6c, size 0x380, virtual false, abstract: false, final false
  static inline ::System::Security::Claims::ClaimsIdentity* SelectPrimaryIdentity(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>* identities);

  /// @brief Method get_ClaimsPrincipalSelector, addr 0x247efec, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* get_ClaimsPrincipalSelector();

  static inline ::System::Security::Claims::ClaimsPrincipal* New_ctor();

  /// @brief Method .ctor, addr 0x2476d20, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Security::Claims::ClaimsPrincipal* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x247f044, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnSerializingMethod, addr 0x247f298, size 0x5c, virtual false, abstract: false, final false
  inline void OnSerializingMethod(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserializedMethod, addr 0x247fd08, size 0x60, virtual false, abstract: false, final false
  inline void OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Deserialize, addr 0x247f144, size 0x154, virtual false, abstract: false, final false
  inline void Deserialize(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method DeserializeIdentities, addr 0x247fd68, size 0x6fc, virtual false, abstract: false, final false
  inline void DeserializeIdentities(::StringW identities);

  /// @brief Method SerializeIdentities, addr 0x247f2f4, size 0xa14, virtual false, abstract: false, final false
  inline ::StringW SerializeIdentities();

  // Ctor Parameters [CppParam { name: "", ty: "ClaimsPrincipal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClaimsPrincipal(ClaimsPrincipal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClaimsPrincipal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClaimsPrincipal(ClaimsPrincipal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClaimsPrincipal();

public:
  /// @brief Field m_version, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_version;

  /// @brief Field m_serializedClaimsIdentities, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_serializedClaimsIdentities;

  /// @brief Field m_identities, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>* ___m_identities;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Claims::ClaimsPrincipal, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsPrincipal, ___m_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsPrincipal, ___m_serializedClaimsIdentities) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Claims::ClaimsPrincipal, ___m_identities) == 0x20, "Offset mismatch!");

} // namespace System::Security::Claims
NEED_NO_BOX(::System::Security::Claims::ClaimsPrincipal);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Claims::ClaimsPrincipal*, "System.Security.Claims", "ClaimsPrincipal");
