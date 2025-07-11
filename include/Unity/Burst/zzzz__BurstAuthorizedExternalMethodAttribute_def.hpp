#pragma once
// IWYU pragma private; include "Unity/Burst/BurstAuthorizedExternalMethodAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(BurstAuthorizedExternalMethodAttribute)
// Forward declare root types
namespace Unity::Burst {
class BurstAuthorizedExternalMethodAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::BurstAuthorizedExternalMethodAttribute);
// Dependencies System.Attribute
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstAuthorizedExternalMethodAttribute
class CORDL_TYPE BurstAuthorizedExternalMethodAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Burst::BurstAuthorizedExternalMethodAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x48620c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstAuthorizedExternalMethodAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstAuthorizedExternalMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstAuthorizedExternalMethodAttribute(BurstAuthorizedExternalMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstAuthorizedExternalMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstAuthorizedExternalMethodAttribute(BurstAuthorizedExternalMethodAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10635 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::BurstAuthorizedExternalMethodAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Burst
NEED_NO_BOX(::Unity::Burst::BurstAuthorizedExternalMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstAuthorizedExternalMethodAttribute*, "Unity.Burst", "BurstAuthorizedExternalMethodAttribute");
