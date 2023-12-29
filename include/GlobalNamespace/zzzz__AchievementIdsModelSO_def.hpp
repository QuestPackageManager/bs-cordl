#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(AchievementIdsModelSO)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class AchievementSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AchievementIdsModelSO);
// Type: ::AchievementIdsModelSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4110))
// CS Name: ::AchievementIdsModelSO*
class CORDL_TYPE AchievementIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _achievementsIds, offset 0x18, size 0x8
  __declspec(property(get = __get__achievementsIds, put = __set__achievementsIds))::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>* _achievementsIds;

  __declspec(property(get = get_achievementsIds))::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>* achievementsIds;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>*& __get__achievementsIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>*> const& __get__achievementsIds() const;

  constexpr void __set__achievementsIds(::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>* value);

  /// @brief Method get_achievementsIds addr 0x20d844c size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>* get_achievementsIds();

  static inline ::GlobalNamespace::AchievementIdsModelSO* New_ctor();

  /// @brief Method .ctor addr 0x20d8454 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AchievementIdsModelSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AchievementIdsModelSO(AchievementIdsModelSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AchievementIdsModelSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AchievementIdsModelSO(AchievementIdsModelSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AchievementIdsModelSO();

public:
  /// @brief Field _achievementsIds, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::AchievementSO*>* ____achievementsIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AchievementIdsModelSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AchievementIdsModelSO, ____achievementsIds) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AchievementIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AchievementIdsModelSO*, "", "AchievementIdsModelSO");
