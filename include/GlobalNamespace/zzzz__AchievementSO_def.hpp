#pragma once
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
// Type: ::AchievementSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4089))
// CS Name: ::AchievementSO*
class CORDL_TYPE AchievementSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _achievementId, offset 0x18, size 0x8
  __declspec(property(get = __get__achievementId, put = __set__achievementId))::StringW _achievementId;

  __declspec(property(get = get_achievementId))::StringW achievementId;

  constexpr ::StringW& __get__achievementId();

  constexpr ::StringW const& __get__achievementId() const;

  constexpr void __set__achievementId(::StringW value);

  /// @brief Method get_achievementId, addr 0x2233204, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_achievementId();

  static inline ::GlobalNamespace::AchievementSO* New_ctor();

  /// @brief Method .ctor, addr 0x223320c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AchievementSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementSO(AchievementSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementSO(AchievementSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementSO();

public:
  /// @brief Field _achievementId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____achievementId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AchievementSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementSO, ____achievementId) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AchievementSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementSO*, "", "AchievementSO");
