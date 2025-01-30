#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/TypeHelpers.hpp"
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
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.TypeHelpers
class CORDL_TYPE TypeHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TObject> static inline TObject As(::System::Object* obj);

  /// @brief Method GetGenericTypeArgumentFromHierarchy, addr 0x457400c, size 0x3c8, virtual false, abstract: false, final false
  static inline ::System::Type* GetGenericTypeArgumentFromHierarchy(::System::Type* type, ::System::Type* genericTypeDefinition, int32_t argumentIndex);

  /// @brief Method GetNiceTypeName, addr 0x4573b7c, size 0x490, virtual false, abstract: false, final false
  static inline ::StringW GetNiceTypeName(::System::Type* type);

  /// @brief Method GetValueType, addr 0x45739b0, size 0x1cc, virtual false, abstract: false, final false
  static inline ::System::Type* GetValueType(::System::Reflection::MemberInfo* member);

  /// @brief Method IsInt, addr 0x45739a0, size 0x10, virtual false, abstract: false, final false
  static inline bool IsInt(::System::TypeCode type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeHelpers(TypeHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeHelpers(TypeHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7119 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::TypeHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::TypeHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::TypeHelpers*, "UnityEngine.InputSystem.Utilities", "TypeHelpers");
