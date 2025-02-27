#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/SkipLocalsInitAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SkipLocalsInitAttribute)
// Forward declare root types
namespace Unity::Burst::CompilerServices {
class SkipLocalsInitAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::CompilerServices::SkipLocalsInitAttribute);
// Dependencies System.Attribute
namespace Unity::Burst::CompilerServices {
// Is value type: false
// CS Name: Unity.Burst.CompilerServices.SkipLocalsInitAttribute
class CORDL_TYPE SkipLocalsInitAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Burst::CompilerServices::SkipLocalsInitAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x4548eb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkipLocalsInitAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SkipLocalsInitAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkipLocalsInitAttribute(SkipLocalsInitAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkipLocalsInitAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkipLocalsInitAttribute(SkipLocalsInitAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14676 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::CompilerServices::SkipLocalsInitAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Burst::CompilerServices
NEED_NO_BOX(::Unity::Burst::CompilerServices::SkipLocalsInitAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::CompilerServices::SkipLocalsInitAttribute*, "Unity.Burst.CompilerServices", "SkipLocalsInitAttribute");
