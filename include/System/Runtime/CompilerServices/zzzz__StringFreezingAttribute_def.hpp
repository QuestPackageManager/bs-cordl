#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/StringFreezingAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(StringFreezingAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class StringFreezingAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::StringFreezingAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.StringFreezingAttribute
class CORDL_TYPE StringFreezingAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::StringFreezingAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3d18c64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringFreezingAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringFreezingAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringFreezingAttribute(StringFreezingAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringFreezingAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringFreezingAttribute(StringFreezingAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3385 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::StringFreezingAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::StringFreezingAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::StringFreezingAttribute*, "System.Runtime.CompilerServices", "StringFreezingAttribute");
