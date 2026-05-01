#pragma once
// IWYU pragma private; include "System/Reflection/ICustomAttributeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICustomAttributeProvider)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class ICustomAttributeProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::ICustomAttributeProvider);
// Dependencies
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.ICustomAttributeProvider
class CORDL_TYPE ICustomAttributeProvider {
public:
  // Declarations
  /// @brief Method GetCustomAttributes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method IsDefined, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  // Ctor Parameters [CppParam { name: "", ty: "ICustomAttributeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomAttributeProvider(ICustomAttributeProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3491 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::ICustomAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ICustomAttributeProvider*, "System.Reflection", "ICustomAttributeProvider");
