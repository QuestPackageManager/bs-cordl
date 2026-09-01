#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DelegateUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DelegateUtility)
namespace System {
class Delegate;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DelegateUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::DelegateUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DelegateUtility*, "UnityEngine.Rendering", "DelegateUtility");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DelegateUtility
class CORDL_TYPE DelegateUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method Cast, addr 0x67c2750, size 0x198, virtual false, abstract: false, final false
  static inline ::System::Delegate* Cast(::System::Delegate* source, ::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DelegateUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DelegateUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DelegateUtility(DelegateUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DelegateUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DelegateUtility(DelegateUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12279 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::DelegateUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
