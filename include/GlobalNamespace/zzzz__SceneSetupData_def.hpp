#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SceneSetupData)
// Forward declare root types
namespace GlobalNamespace {
class SceneSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SceneSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SceneSetupData*, "", "SceneSetupData");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SceneSetupData
class CORDL_TYPE SceneSetupData : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::SceneSetupData* New_ctor();

  /// @brief Method .ctor, addr 0x3306580, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneSetupData(SceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneSetupData(SceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21490 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SceneSetupData) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
