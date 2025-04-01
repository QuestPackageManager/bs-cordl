#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/IgnoreWarningAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoreWarningAttribute)
// Forward declare root types
namespace Unity::Burst::CompilerServices {
class IgnoreWarningAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::CompilerServices::IgnoreWarningAttribute);
// Dependencies System.Attribute
namespace Unity::Burst::CompilerServices {
// Is value type: false
// CS Name: Unity.Burst.CompilerServices.IgnoreWarningAttribute
class CORDL_TYPE IgnoreWarningAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Burst::CompilerServices::IgnoreWarningAttribute* New_ctor(int32_t warning);

  /// @brief Method .ctor, addr 0x4536a88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t warning);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IgnoreWarningAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IgnoreWarningAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IgnoreWarningAttribute(IgnoreWarningAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IgnoreWarningAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IgnoreWarningAttribute(IgnoreWarningAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14673 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::CompilerServices::IgnoreWarningAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::CompilerServices
NEED_NO_BOX(::Unity::Burst::CompilerServices::IgnoreWarningAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::CompilerServices::IgnoreWarningAttribute*, "Unity.Burst.CompilerServices", "IgnoreWarningAttribute");
