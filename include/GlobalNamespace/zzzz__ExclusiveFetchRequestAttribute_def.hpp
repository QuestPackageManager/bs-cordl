#pragma once
// IWYU pragma private; include "GlobalNamespace/ExclusiveFetchRequestAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExclusiveFetchRequestAttribute)
// Forward declare root types
namespace GlobalNamespace {
class ExclusiveFetchRequestAttribute;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ExclusiveFetchRequestAttribute*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExclusiveFetchRequestAttribute*, "", "ExclusiveFetchRequestAttribute");
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: ExclusiveFetchRequestAttribute
class CORDL_TYPE ExclusiveFetchRequestAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::GlobalNamespace::ExclusiveFetchRequestAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x5f29f6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExclusiveFetchRequestAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveFetchRequestAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExclusiveFetchRequestAttribute(ExclusiveFetchRequestAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExclusiveFetchRequestAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExclusiveFetchRequestAttribute(ExclusiveFetchRequestAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22815 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ExclusiveFetchRequestAttribute) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
