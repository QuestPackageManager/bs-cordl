#pragma once
// IWYU pragma private; include "GlobalNamespace\UnitySpecificRandomExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnitySpecificRandomExtensions)
namespace GlobalNamespace {
class IRandom;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class UnitySpecificRandomExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnitySpecificRandomExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnitySpecificRandomExtensions*, "", "UnitySpecificRandomExtensions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnitySpecificRandomExtensions
class CORDL_TYPE UnitySpecificRandomExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method InsideUnitSphere, addr 0x3327a78, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 InsideUnitSphere(::GlobalNamespace::IRandom* random);

  /// @brief Method OnUnitSphere, addr 0x3327b0c, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 OnUnitSphere(::GlobalNamespace::IRandom* random);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnitySpecificRandomExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnitySpecificRandomExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnitySpecificRandomExtensions(UnitySpecificRandomExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnitySpecificRandomExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnitySpecificRandomExtensions(UnitySpecificRandomExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20769 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnitySpecificRandomExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
