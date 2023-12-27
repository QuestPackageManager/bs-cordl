#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeExtensions)
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Delegate;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class TypeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::TypeExtensions);
// Type: Newtonsoft.Json.Utilities::TypeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11901))
// CS Name: ::Newtonsoft.Json.Utilities::TypeExtensions*
class CORDL_TYPE TypeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Method addr 0x2669e50 size 0x14 virtual false final false
  static inline ::System::Reflection::MethodInfo* Method(::System::Delegate* d);

  /// @brief Method MemberType addr 0x265b3b4 size 0x1c virtual false final false
  static inline ::System::Reflection::MemberTypes MemberType(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method ContainsGenericParameters addr 0x2669e64 size 0x20 virtual false final false
  static inline bool ContainsGenericParameters(::System::Type* type);

  /// @brief Method IsInterface addr 0x265d42c size 0x14 virtual false final false
  static inline bool IsInterface(::System::Type* type);

  /// @brief Method IsGenericType addr 0x26662bc size 0x20 virtual false final false
  static inline bool IsGenericType(::System::Type* type);

  /// @brief Method IsGenericTypeDefinition addr 0x265d440 size 0x20 virtual false final false
  static inline bool IsGenericTypeDefinition(::System::Type* type);

  /// @brief Method BaseType addr 0x2666888 size 0x20 virtual false final false
  static inline ::System::Type* BaseType(::System::Type* type);

  /// @brief Method Assembly addr 0x2669e84 size 0x20 virtual false final false
  static inline ::System::Reflection::Assembly* Assembly(::System::Type* type);

  /// @brief Method IsEnum addr 0x265bf18 size 0x20 virtual false final false
  static inline bool IsEnum(::System::Type* type);

  /// @brief Method IsClass addr 0x266678c size 0x14 virtual false final false
  static inline bool IsClass(::System::Type* type);

  /// @brief Method IsSealed addr 0x2669ea4 size 0x14 virtual false final false
  static inline bool IsSealed(::System::Type* type);

  /// @brief Method IsAbstract addr 0x265d460 size 0x14 virtual false final false
  static inline bool IsAbstract(::System::Type* type);

  /// @brief Method IsVisible addr 0x2669eb8 size 0x14 virtual false final false
  static inline bool IsVisible(::System::Type* type);

  /// @brief Method IsValueType addr 0x2666120 size 0x14 virtual false final false
  static inline bool IsValueType(::System::Type* type);

  /// @brief Method AssignableToTypeName addr 0x2669ecc size 0x10c virtual false final false
  static inline bool AssignableToTypeName(::System::Type* type, ::StringW fullTypeName, ByRef<::System::Type*> match);

  /// @brief Method AssignableToTypeName addr 0x2669fd8 size 0x1c virtual false final false
  static inline bool AssignableToTypeName(::System::Type* type, ::StringW fullTypeName);

  /// @brief Method ImplementInterface addr 0x2669ff4 size 0x368 virtual false final false
  static inline bool ImplementInterface(::System::Type* type, ::System::Type* interfaceType);

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeExtensions(TypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeExtensions(TypeExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::TypeExtensions, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::TypeExtensions*, "Newtonsoft.Json.Utilities", "TypeExtensions");
