#pragma once
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
// Type: System.Security.Principal::IdentityReference
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3000))
// CS Name: ::System.Security.Principal::IdentityReference*
class CORDL_TYPE IdentityReference : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Value))::StringW Value;

  static inline ::System::Security::Principal::IdentityReference* New_ctor();

  /// @brief Method .ctor, addr 0x2498e98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Value();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString();

  /// @brief Method Translate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Principal::IdentityReference* Translate(::System::Type* targetType);

  /// @brief Method op_Equality, addr 0x2498ea0, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Security::Principal::IdentityReference* left, ::System::Security::Principal::IdentityReference* right);

  // Ctor Parameters [CppParam { name: "", ty: "IdentityReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IdentityReference(IdentityReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IdentityReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IdentityReference(IdentityReference const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdentityReference();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::IdentityReference, 0x10>, "Size mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::IdentityReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::IdentityReference*, "System.Security.Principal", "IdentityReference");
