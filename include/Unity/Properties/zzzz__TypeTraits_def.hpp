#pragma once
// IWYU pragma private; include "Unity/Properties/TypeTraits.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TypeTraits)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Properties {
class TypeTraits;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::TypeTraits);
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeTraits
class CORDL_TYPE TypeTraits : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsContainer, addr 0x69e5174, size 0xfc, virtual false, abstract: false, final false
  static inline bool IsContainer(::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeTraits(TypeTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeTraits(TypeTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19415 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::TypeTraits, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::TypeTraits);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeTraits*, "Unity.Properties", "TypeTraits");
