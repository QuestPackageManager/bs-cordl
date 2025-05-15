#pragma once
// IWYU pragma private; include "System/SecurityUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
MARK_REF_PTR_T(::System::SecurityUtils);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.SecurityUtils
class CORDL_TYPE SecurityUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method DemandGrantSet, addr 0x440a4ac, size 0x4, virtual false, abstract: false, final false
  static inline void DemandGrantSet(::System::Reflection::Assembly* assembly);

  /// @brief Method DemandReflectionAccess, addr 0x440a4a8, size 0x4, virtual false, abstract: false, final false
  static inline void DemandReflectionAccess(::System::Type* type);

  /// @brief Method GenericArgumentsAreVisible, addr 0x440a740, size 0xb0, virtual false, abstract: false, final false
  static inline bool GenericArgumentsAreVisible(::System::Reflection::MethodInfo* method);

  /// @brief Method HasReflectionPermission, addr 0x440a4b0, size 0x8, virtual false, abstract: false, final false
  static inline bool HasReflectionPermission(::System::Type* type);

  /// @brief Method MethodInfoInvoke, addr 0x440a7f0, size 0x110, virtual false, abstract: false, final false
  static inline ::System::Object* MethodInfoInvoke(::System::Reflection::MethodInfo* method, ::System::Object* target, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method SecureConstructorInvoke, addr 0x440a5c0, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Object* SecureConstructorInvoke(::System::Type* type, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool allowNonPublic);

  /// @brief Method SecureConstructorInvoke, addr 0x440a5cc, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Object* SecureConstructorInvoke(::System::Type* type, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                                          ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool allowNonPublic, ::System::Reflection::BindingFlags extraFlags);

  /// @brief Method SecureCreateInstance, addr 0x440a4b8, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Object* SecureCreateInstance(::System::Type* type);

  /// @brief Method SecureCreateInstance, addr 0x440a5b8, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Object* SecureCreateInstance(::System::Type* type, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  /// @brief Method SecureCreateInstance, addr 0x440a4c4, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Object* SecureCreateInstance(::System::Type* type, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, bool allowNonPublic);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9187 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::SecurityUtils, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::SecurityUtils);
DEFINE_IL2CPP_ARG_TYPE(::System::SecurityUtils*, "System", "SecurityUtils");
