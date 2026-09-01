#pragma once
// IWYU pragma private; include "GlobalNamespace\StartupErrorSceneSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StartupErrorSceneSetupData)
// Forward declare root types
namespace GlobalNamespace {
class StartupErrorSceneSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StartupErrorSceneSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StartupErrorSceneSetupData*, "", "StartupErrorSceneSetupData");
// Dependencies SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: StartupErrorSceneSetupData
class CORDL_TYPE StartupErrorSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field subtitleKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subtitleKey, put = __cordl_internal_set_subtitleKey)) ::StringW subtitleKey;

  /// @brief Field titleKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_titleKey, put = __cordl_internal_set_titleKey)) ::StringW titleKey;

  static inline ::GlobalNamespace::StartupErrorSceneSetupData* New_ctor(::StringW titleKey, ::StringW subtitleKey);

  constexpr ::StringW const& __cordl_internal_get_subtitleKey() const;

  constexpr ::StringW& __cordl_internal_get_subtitleKey();

  constexpr ::StringW const& __cordl_internal_get_titleKey() const;

  constexpr ::StringW& __cordl_internal_get_titleKey();

  constexpr void __cordl_internal_set_subtitleKey(::StringW value);

  constexpr void __cordl_internal_set_titleKey(::StringW value);

  /// @brief Method .ctor, addr 0x590dda0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW titleKey, ::StringW subtitleKey);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StartupErrorSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StartupErrorSceneSetupData(StartupErrorSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StartupErrorSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StartupErrorSceneSetupData(StartupErrorSceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6729 };

  /// @brief Field titleKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___titleKey;

  /// @brief Field subtitleKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___subtitleKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StartupErrorSceneSetupData, ___titleKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StartupErrorSceneSetupData, ___subtitleKey) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StartupErrorSceneSetupData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
