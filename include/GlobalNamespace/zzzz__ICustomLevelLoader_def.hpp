#pragma once
// IWYU pragma private; include "GlobalNamespace/ICustomLevelLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICustomLevelLoader)
// Forward declare root types
namespace GlobalNamespace {
class ICustomLevelLoader;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ICustomLevelLoader*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ICustomLevelLoader*, "", "ICustomLevelLoader");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ICustomLevelLoader
class CORDL_TYPE ICustomLevelLoader {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ICustomLevelLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomLevelLoader(ICustomLevelLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14789 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
