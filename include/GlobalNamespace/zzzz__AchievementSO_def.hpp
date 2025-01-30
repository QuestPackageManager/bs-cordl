#pragma once
// IWYU pragma private; include "GlobalNamespace/AchievementSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AchievementSO)
// Forward declare root types
namespace GlobalNamespace {
class AchievementSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AchievementSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AchievementSO
class CORDL_TYPE AchievementSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _achievementId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__achievementId, put = __cordl_internal_set__achievementId)) ::StringW _achievementId;

  __declspec(property(get = get_achievementId)) ::StringW achievementId;

  static inline ::GlobalNamespace::AchievementSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__achievementId() const;

  constexpr ::StringW& __cordl_internal_get__achievementId();

  constexpr void __cordl_internal_set__achievementId(::StringW value);

  /// @brief Method .ctor, addr 0x26a2d18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_achievementId, addr 0x26a2d10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_achievementId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AchievementSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementSO(AchievementSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementSO(AchievementSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12750 };

  /// @brief Field _achievementId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____achievementId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AchievementSO, ____achievementId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AchievementSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AchievementSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementSO*, "", "AchievementSO");
