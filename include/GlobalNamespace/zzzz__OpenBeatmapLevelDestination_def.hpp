#pragma once
// IWYU pragma private; include "GlobalNamespace\OpenBeatmapLevelDestination.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OpenBeatmapLevelDestination)
// Forward declare root types
namespace GlobalNamespace {
class OpenBeatmapLevelDestination;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OpenBeatmapLevelDestination*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OpenBeatmapLevelDestination*, "", "OpenBeatmapLevelDestination");
// Dependencies MenuDestination
namespace GlobalNamespace {
// Is value type: false
// CS Name: OpenBeatmapLevelDestination
class CORDL_TYPE OpenBeatmapLevelDestination : public ::GlobalNamespace::MenuDestination {
public:
  // Declarations
  /// @brief Field projectPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_projectPath, put = __cordl_internal_set_projectPath)) ::StringW projectPath;

  static inline ::GlobalNamespace::OpenBeatmapLevelDestination* New_ctor(::StringW projectPath);

  constexpr ::StringW const& __cordl_internal_get_projectPath() const;

  constexpr ::StringW& __cordl_internal_get_projectPath();

  constexpr void __cordl_internal_set_projectPath(::StringW value);

  /// @brief Method .ctor, addr 0x3707fe4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW projectPath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenBeatmapLevelDestination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenBeatmapLevelDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenBeatmapLevelDestination(OpenBeatmapLevelDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenBeatmapLevelDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenBeatmapLevelDestination(OpenBeatmapLevelDestination const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14828 };

  /// @brief Field projectPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___projectPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OpenBeatmapLevelDestination, ___projectPath) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OpenBeatmapLevelDestination) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
