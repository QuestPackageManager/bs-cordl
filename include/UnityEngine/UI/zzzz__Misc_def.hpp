#pragma once
// IWYU pragma private; include "UnityEngine/UI/Misc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Misc)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UI {
class Misc;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Misc);
// Dependencies System.Object
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Misc
class CORDL_TYPE Misc : public ::System::Object {
public:
  // Declarations
  /// @brief Method Destroy, addr 0x4ac42e8, size 0x124, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Object* obj);

  /// @brief Method DestroyImmediate, addr 0x4ac440c, size 0xcc, virtual false, abstract: false, final false
  static inline void DestroyImmediate(::UnityEngine::Object* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Misc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Misc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Misc(Misc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Misc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Misc(Misc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15117 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Misc, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Misc);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Misc*, "UnityEngine.UI", "Misc");
