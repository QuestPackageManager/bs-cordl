#pragma once
// IWYU pragma private; include "System/Security/Principal/IdentityReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IdentityReference)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Principal {
class IdentityReference;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::IdentityReference);
// Dependencies System.Object
namespace System::Security::Principal {
// Is value type: false
// CS Name: System.Security.Principal.IdentityReference
class CORDL_TYPE IdentityReference : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::StringW Value;

  /// @brief Method Equals, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Security::Principal::IdentityReference* New_ctor();

  /// @brief Method ToString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Translate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Security::Principal::IdentityReference* Translate(::System::Type* targetType);

  /// @brief Method .ctor, addr 0x3cbdc14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method op_Equality, addr 0x3cbdc1c, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Security::Principal::IdentityReference* left, ::System::Security::Principal::IdentityReference* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdentityReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IdentityReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdentityReference(IdentityReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdentityReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdentityReference(IdentityReference const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2999 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::IdentityReference, 0x10>, "Size mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::IdentityReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::IdentityReference*, "System.Security.Principal", "IdentityReference");
