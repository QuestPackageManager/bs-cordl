#pragma once
// IWYU pragma private; include "Zenject/Internal/PreserveAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PreserveAttribute)
// Forward declare root types
namespace Zenject::Internal {
class PreserveAttribute;
}
// Write type traits
MARK_REF_T(::Zenject::Internal::PreserveAttribute*);
DEFINE_IL2CPP_CLASS(::Zenject::Internal::PreserveAttribute*, "Zenject.Internal", "PreserveAttribute");
// Dependencies System.Attribute
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.PreserveAttribute
class CORDL_TYPE PreserveAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::Zenject::Internal::PreserveAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x6e3a1b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreserveAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreserveAttribute(PreserveAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreserveAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreserveAttribute(PreserveAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22459 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::Internal::PreserveAttribute) == 0x10, "Size mismatch!");

} // namespace Zenject::Internal
