#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthorizationRule)
namespace System::Security::AccessControl {
struct InheritanceFlags;
}
namespace System::Security::Principal {
class IdentityReference;
}
namespace System::Security::AccessControl {
struct PropagationFlags;
}
// Forward declare root types
namespace System::Security::AccessControl {
class AuthorizationRule;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::AuthorizationRule);
// Type: System.Security.AccessControl::AuthorizationRule
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3038)), TypeDefinitionIndex(TypeDefinitionIndex(3045))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3021))
// CS Name: ::System.Security.AccessControl::AuthorizationRule*
class CORDL_TYPE AuthorizationRule : public ::System::Object {
public:
  // Declarations
  /// @brief Field identity, offset 0x10, size 0x8
  __declspec(property(get = __get_identity, put = __set_identity))::System::Security::Principal::IdentityReference* identity;

  /// @brief Field accessMask, offset 0x18, size 0x4
  __declspec(property(get = __get_accessMask, put = __set_accessMask)) int32_t accessMask;

  /// @brief Field isInherited, offset 0x1c, size 0x1
  __declspec(property(get = __get_isInherited, put = __set_isInherited)) bool isInherited;

  /// @brief Field inheritanceFlags, offset 0x20, size 0x4
  __declspec(property(get = __get_inheritanceFlags, put = __set_inheritanceFlags))::System::Security::AccessControl::InheritanceFlags inheritanceFlags;

  /// @brief Field propagationFlags, offset 0x24, size 0x4
  __declspec(property(get = __get_propagationFlags, put = __set_propagationFlags))::System::Security::AccessControl::PropagationFlags propagationFlags;

  __declspec(property(get = get_AccessMask)) int32_t AccessMask;

  constexpr ::System::Security::Principal::IdentityReference*& __get_identity();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::IdentityReference*> const& __get_identity() const;

  constexpr void __set_identity(::System::Security::Principal::IdentityReference* value);

  constexpr int32_t& __get_accessMask();

  constexpr int32_t const& __get_accessMask() const;

  constexpr void __set_accessMask(int32_t value);

  constexpr bool& __get_isInherited();

  constexpr bool const& __get_isInherited() const;

  constexpr void __set_isInherited(bool value);

  constexpr ::System::Security::AccessControl::InheritanceFlags& __get_inheritanceFlags();

  constexpr ::System::Security::AccessControl::InheritanceFlags const& __get_inheritanceFlags() const;

  constexpr void __set_inheritanceFlags(::System::Security::AccessControl::InheritanceFlags value);

  constexpr ::System::Security::AccessControl::PropagationFlags& __get_propagationFlags();

  constexpr ::System::Security::AccessControl::PropagationFlags const& __get_propagationFlags() const;

  constexpr void __set_propagationFlags(::System::Security::AccessControl::PropagationFlags value);

  static inline ::System::Security::AccessControl::AuthorizationRule* New_ctor(::System::Security::Principal::IdentityReference* identity, int32_t accessMask, bool isInherited,
                                                                               ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                               ::System::Security::AccessControl::PropagationFlags propagationFlags);

  /// @brief Method .ctor addr 0x2480770 size 0x19c virtual false final false
  inline void _ctor(::System::Security::Principal::IdentityReference* identity, int32_t accessMask, bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                    ::System::Security::AccessControl::PropagationFlags propagationFlags);

  /// @brief Method get_AccessMask addr 0x24809e0 size 0x8 virtual false final false
  inline int32_t get_AccessMask();

  // Ctor Parameters [CppParam { name: "", ty: "AuthorizationRule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthorizationRule(AuthorizationRule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthorizationRule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthorizationRule(AuthorizationRule const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthorizationRule();

public:
  /// @brief Field identity, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Principal::IdentityReference* ___identity;

  /// @brief Field accessMask, offset: 0x18, size: 0x4, def value: None
  int32_t ___accessMask;

  /// @brief Field isInherited, offset: 0x1c, size: 0x1, def value: None
  bool ___isInherited;

  /// @brief Field inheritanceFlags, offset: 0x20, size: 0x4, def value: None
  ::System::Security::AccessControl::InheritanceFlags ___inheritanceFlags;

  /// @brief Field propagationFlags, offset: 0x24, size: 0x4, def value: None
  ::System::Security::AccessControl::PropagationFlags ___propagationFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AuthorizationRule, 0x28>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::AuthorizationRule);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AuthorizationRule*, "System.Security.AccessControl", "AuthorizationRule");
