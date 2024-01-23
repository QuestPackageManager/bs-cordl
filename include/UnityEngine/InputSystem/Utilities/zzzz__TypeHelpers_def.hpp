#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeHelpers)
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class TypeHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::TypeHelpers);
// Type: UnityEngine.InputSystem.Utilities::TypeHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6710))
// CS Name: ::UnityEngine.InputSystem.Utilities::TypeHelpers*
class CORDL_TYPE TypeHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline TObject As(::System::Object* obj);

  /// @brief Method IsInt, addr 0x2a599b4, size 0x10, virtual false, abstract: false, final false
  static inline bool IsInt(::System::TypeCode type);

  /// @brief Method GetValueType, addr 0x2a599c4, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::Type* GetValueType(::System::Reflection::MemberInfo* member);

  /// @brief Method GetNiceTypeName, addr 0x2a59b64, size 0x490, virtual false, abstract: false, final false
  static inline ::StringW GetNiceTypeName(::System::Type* type);

  /// @brief Method GetGenericTypeArgumentFromHierarchy, addr 0x2a59ff4, size 0x3cc, virtual false, abstract: false, final false
  static inline ::System::Type* GetGenericTypeArgumentFromHierarchy(::System::Type* type, ::System::Type* genericTypeDefinition, int32_t argumentIndex);

  // Ctor Parameters [CppParam { name: "", ty: "TypeHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeHelpers(TypeHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeHelpers(TypeHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::TypeHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::TypeHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::TypeHelpers*, "UnityEngine.InputSystem.Utilities", "TypeHelpers");
