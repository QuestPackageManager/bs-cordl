#pragma once
// IWYU pragma private; include "GlobalNamespace\UnityScenesHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityScenesHelper)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityScenesHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnityScenesHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityScenesHelper*, "", "UnityScenesHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityScenesHelper
class CORDL_TYPE UnityScenesHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetComponentsInScene, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void GetComponentsInScene(::UnityEngine::SceneManagement::Scene scene, ::System::Collections::Generic::List_1<T>* components, bool includeInactive);

  /// @brief Method SetRootObjectsActive, addr 0x33279d4, size 0xa4, virtual false, abstract: false, final false
  static inline void SetRootObjectsActive(::UnityEngine::SceneManagement::Scene scene, bool active);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityScenesHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityScenesHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityScenesHelper(UnityScenesHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityScenesHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityScenesHelper(UnityScenesHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20768 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnityScenesHelper) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
