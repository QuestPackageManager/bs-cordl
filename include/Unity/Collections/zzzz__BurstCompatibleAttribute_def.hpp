#pragma once
// IWYU pragma private; include "Unity/Collections/BurstCompatibleAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(BurstCompatibleAttribute)
// Forward declare root types
namespace Unity::Collections {
class BurstCompatibleAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::BurstCompatibleAttribute);
// Dependencies System.Attribute
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.BurstCompatibleAttribute
class CORDL_TYPE BurstCompatibleAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Unity::Collections::BurstCompatibleAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x62a3e3c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstCompatibleAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstCompatibleAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstCompatibleAttribute(BurstCompatibleAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstCompatibleAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstCompatibleAttribute(BurstCompatibleAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15577 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::BurstCompatibleAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::BurstCompatibleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::BurstCompatibleAttribute*, "Unity.Collections", "BurstCompatibleAttribute");
