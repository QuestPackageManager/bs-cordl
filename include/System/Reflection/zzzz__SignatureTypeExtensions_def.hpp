#pragma once
// IWYU pragma private; include "System/Reflection/SignatureTypeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureTypeExtensions)
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class SignatureType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class SignatureTypeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::SignatureTypeExtensions);
// Dependencies System.Object
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.SignatureTypeExtensions
class CORDL_TYPE SignatureTypeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method MatchesExactly, addr 0x3d27d28, size 0x3a8, virtual false, abstract: false, final false
  static inline bool MatchesExactly(::System::Reflection::SignatureType* pattern, ::System::Type* actual);

  /// @brief Method MatchesParameterTypeExactly, addr 0x3d27c74, size 0xb4, virtual false, abstract: false, final false
  static inline bool MatchesParameterTypeExactly(::System::Type* pattern, ::System::Reflection::ParameterInfo* parameter);

  /// @brief Method TryMakeArrayType, addr 0x3d284cc, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Type* TryMakeArrayType(::System::Type* type);

  /// @brief Method TryMakeArrayType, addr 0x3d28568, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Type* TryMakeArrayType(::System::Type* type, int32_t rank);

  /// @brief Method TryMakeByRefType, addr 0x3d28604, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Type* TryMakeByRefType(::System::Type* type);

  /// @brief Method TryMakeGenericType, addr 0x3d2873c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Type* TryMakeGenericType(::System::Type* type, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> instantiation);

  /// @brief Method TryMakePointerType, addr 0x3d286a0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Type* TryMakePointerType(::System::Type* type);

  /// @brief Method TryResolve, addr 0x3d28108, size 0x3c4, virtual false, abstract: false, final false
  static inline ::System::Type* TryResolve(::System::Reflection::SignatureType* signatureType, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> genericMethodParameters);

  /// @brief Method TryResolveAgainstGenericMethod, addr 0x3d280d0, size 0x38, virtual false, abstract: false, final false
  static inline ::System::Type* TryResolveAgainstGenericMethod(::System::Reflection::SignatureType* signatureType, ::System::Reflection::MethodInfo* genericMethod);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureTypeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignatureTypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureTypeExtensions(SignatureTypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureTypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureTypeExtensions(SignatureTypeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3498 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::SignatureTypeExtensions, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::SignatureTypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignatureTypeExtensions*, "System.Reflection", "SignatureTypeExtensions");
