#pragma once
// IWYU pragma private; include "System/Reflection/IReflectableType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IReflectableType)
namespace System::Reflection {
class TypeInfo;
}
// Forward declare root types
namespace System::Reflection {
class IReflectableType;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::IReflectableType);
// Dependencies
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.IReflectableType
class CORDL_TYPE IReflectableType {
public:
  // Declarations
  /// @brief Method GetTypeInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::TypeInfo* GetTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "IReflectableType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReflectableType(IReflectableType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3492 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::IReflectableType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::IReflectableType*, "System.Reflection", "IReflectableType");
