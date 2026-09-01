#pragma once
// IWYU pragma private; include "Unity\Properties\TypeTraits.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::Unity::Properties::TypeTraits*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::TypeTraits*, "Unity.Properties", "TypeTraits");
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeTraits
class CORDL_TYPE TypeTraits : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsContainer, addr 0x6bb0658, size 0xfc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19697 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::TypeTraits) == 0x10, "Size mismatch!");

} // namespace Unity::Properties
