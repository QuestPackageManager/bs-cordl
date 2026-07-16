#pragma once
// IWYU pragma private; include "System/SecurityUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SecurityUtils)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class SecurityUtils;
}
// Write type traits
MARK_REF_T(::System::SecurityUtils*);
DEFINE_IL2CPP_CLASS(::System::SecurityUtils*, "System", "SecurityUtils");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.SecurityUtils
class CORDL_TYPE SecurityUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method DemandGrantSet, addr 0x636f2cc, size 0x4, virtual false, abstract: false, final false
  static inline void DemandGrantSet(::System::Reflection::Assembly* assembly);

  /// @brief Method DemandReflectionAccess, addr 0x636f2c8, size 0x4, virtual false, abstract: false, final false
  static inline void DemandReflectionAccess(::System::Type* type);

  /// @brief Method GenericArgumentsAreVisible, addr 0x636f510, size 0x94, virtual false, abstract: false, final false
  static inline bool GenericArgumentsAreVisible(::System::Reflection::MethodInfo* method);

  /// @brief Method HasReflectionPermission, addr 0x636f2d0, size 0x8, virtual false, abstract: false, final false
  static inline bool HasReflectionPermission(::System::Type* type);

  /// @brief Method MethodInfoInvoke, addr 0x636f5a4, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::Object* MethodInfoInvoke(::System::Reflection::MethodInfo* method, ::System::Object* target, ::ArrayW<::System::Object*> args);

  /// @brief Method SecureConstructorInvoke, addr 0x636f3a0, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Object* SecureConstructorInvoke(::System::Type* type, ::ArrayW<::System::Type*> argTypes, ::ArrayW<::System::Object*> args, bool allowNonPublic);

  /// @brief Method SecureConstructorInvoke, addr 0x636f3a8, size 0x168, virtual false, abstract: false, final false
  static inline ::System::Object* SecureConstructorInvoke(::System::Type* type, ::ArrayW<::System::Type*> argTypes, ::ArrayW<::System::Object*> args, bool allowNonPublic,
                                                          ::System::Reflection::BindingFlags extraFlags);

  /// @brief Method SecureCreateInstance, addr 0x636f2d8, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Object* SecureCreateInstance(::System::Type* type);

  /// @brief Method SecureCreateInstance, addr 0x636f398, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Object* SecureCreateInstance(::System::Type* type, ::ArrayW<::System::Object*> args);

  /// @brief Method SecureCreateInstance, addr 0x636f2e4, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Object* SecureCreateInstance(::System::Type* type, ::ArrayW<::System::Object*> args, bool allowNonPublic);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecurityUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityUtils(SecurityUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityUtils(SecurityUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11031 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::SecurityUtils) == 0x10, "Size mismatch!");

} // namespace System
