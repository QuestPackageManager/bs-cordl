#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.Reflection::ICustomAttributeProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3471))
// CS Name: ::System.Reflection::ICustomAttributeProvider*
class CORDL_TYPE ICustomAttributeProvider {
public:
  // Declarations
  /// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method IsDefined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  // Ctor Parameters [CppParam { name: "", ty: "ICustomAttributeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICustomAttributeProvider(ICustomAttributeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICustomAttributeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomAttributeProvider(ICustomAttributeProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::ICustomAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ICustomAttributeProvider*, "System.Reflection", "ICustomAttributeProvider");
