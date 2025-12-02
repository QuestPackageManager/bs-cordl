#pragma once
// IWYU pragma private; include "GlobalNamespace/StartupErrorSceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StartupErrorSceneSetupData)
// Forward declare root types
namespace GlobalNamespace {
class StartupErrorSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StartupErrorSceneSetupData);
// Dependencies SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: StartupErrorSceneSetupData
class CORDL_TYPE StartupErrorSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field subtitle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subtitle, put = __cordl_internal_set_subtitle)) ::StringW subtitle;

  /// @brief Field title, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_title, put = __cordl_internal_set_title)) ::StringW title;

  static inline ::GlobalNamespace::StartupErrorSceneSetupData* New_ctor(::StringW title, ::StringW subtitle);

  constexpr ::StringW const& __cordl_internal_get_subtitle() const;

  constexpr ::StringW& __cordl_internal_get_subtitle();

  constexpr ::StringW const& __cordl_internal_get_title() const;

  constexpr ::StringW& __cordl_internal_get_title();

  constexpr void __cordl_internal_set_subtitle(::StringW value);

  constexpr void __cordl_internal_set_title(::StringW value);

  /// @brief Method .ctor, addr 0x571e978, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW title, ::StringW subtitle);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6824 };

  /// @brief Field title, offset: 0x10, size: 0x8, def value: None
  ::StringW ___title;

  /// @brief Field subtitle, offset: 0x18, size: 0x8, def value: None
  ::StringW ___subtitle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StartupErrorSceneSetupData, ___title) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StartupErrorSceneSetupData, ___subtitle) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StartupErrorSceneSetupData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StartupErrorSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StartupErrorSceneSetupData*, "", "StartupErrorSceneSetupData");
