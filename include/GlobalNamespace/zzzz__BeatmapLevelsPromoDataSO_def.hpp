#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelsPromoDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelsPromoDataSO)
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO_BeatmapLevelsPromo;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO_BeatmapLevelsPromo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsPromoDataSO);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelsPromoDataSO/BeatmapLevelsPromo
class CORDL_TYPE BeatmapLevelsPromoDataSO_BeatmapLevelsPromo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _promotedBeatmapLevelPacks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__promotedBeatmapLevelPacks,
                      put = __cordl_internal_set__promotedBeatmapLevelPacks)) ::System::Collections::Generic::List_1<::StringW>* _promotedBeatmapLevelPacks;

  /// @brief Field _promotedBeatmapLevels, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__promotedBeatmapLevels, put = __cordl_internal_set__promotedBeatmapLevels)) ::System::Collections::Generic::List_1<::StringW>* _promotedBeatmapLevels;

  /// @brief Field _updatedBeatmapLevelPacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__updatedBeatmapLevelPacks,
                      put = __cordl_internal_set__updatedBeatmapLevelPacks)) ::System::Collections::Generic::List_1<::StringW>* _updatedBeatmapLevelPacks;

  /// @brief Field _updatedBeatmapLevels, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__updatedBeatmapLevels, put = __cordl_internal_set__updatedBeatmapLevels)) ::System::Collections::Generic::List_1<::StringW>* _updatedBeatmapLevels;

  __declspec(property(get = get_promotedBeatmapLevelPacks)) ::System::Collections::Generic::IEnumerable_1<::StringW>* promotedBeatmapLevelPacks;

  __declspec(property(get = get_promotedBeatmapLevels)) ::System::Collections::Generic::IEnumerable_1<::StringW>* promotedBeatmapLevels;

  __declspec(property(get = get_updatedBeatmapLevelPacks)) ::System::Collections::Generic::IEnumerable_1<::StringW>* updatedBeatmapLevelPacks;

  __declspec(property(get = get_updatedBeatmapLevels)) ::System::Collections::Generic::IEnumerable_1<::StringW>* updatedBeatmapLevels;

  static inline ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__promotedBeatmapLevelPacks() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__promotedBeatmapLevelPacks();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__promotedBeatmapLevels() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__promotedBeatmapLevels();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__updatedBeatmapLevelPacks() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__updatedBeatmapLevelPacks();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__updatedBeatmapLevels() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__updatedBeatmapLevels();

  constexpr void __cordl_internal_set__promotedBeatmapLevelPacks(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__promotedBeatmapLevels(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__updatedBeatmapLevelPacks(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__updatedBeatmapLevels(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x26f6074, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_promotedBeatmapLevelPacks, addr 0x26f6054, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_promotedBeatmapLevelPacks();

  /// @brief Method get_promotedBeatmapLevels, addr 0x26f6064, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_promotedBeatmapLevels();

  /// @brief Method get_updatedBeatmapLevelPacks, addr 0x26f605c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_updatedBeatmapLevelPacks();

  /// @brief Method get_updatedBeatmapLevels, addr 0x26f606c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_updatedBeatmapLevels();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsPromoDataSO_BeatmapLevelsPromo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoDataSO_BeatmapLevelsPromo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsPromoDataSO_BeatmapLevelsPromo(BeatmapLevelsPromoDataSO_BeatmapLevelsPromo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoDataSO_BeatmapLevelsPromo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsPromoDataSO_BeatmapLevelsPromo(BeatmapLevelsPromoDataSO_BeatmapLevelsPromo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13240 };

  /// @brief Field _promotedBeatmapLevelPacks, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____promotedBeatmapLevelPacks;

  /// @brief Field _updatedBeatmapLevelPacks, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____updatedBeatmapLevelPacks;

  /// @brief Field _promotedBeatmapLevels, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____promotedBeatmapLevels;

  /// @brief Field _updatedBeatmapLevels, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____updatedBeatmapLevels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo, ____promotedBeatmapLevelPacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo, ____updatedBeatmapLevelPacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo, ____promotedBeatmapLevels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo, ____updatedBeatmapLevels) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelsPromoDataSO
class CORDL_TYPE BeatmapLevelsPromoDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using BeatmapLevelsPromo = ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo;

  /// @brief Field _promo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__promo, put = __cordl_internal_set__promo)) ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* _promo;

  __declspec(property(get = get_promo, put = set_promo)) ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* promo;

  static inline ::GlobalNamespace::BeatmapLevelsPromoDataSO* New_ctor();

  constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* const& __cordl_internal_get__promo() const;

  constexpr ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*& __cordl_internal_get__promo();

  constexpr void __cordl_internal_set__promo(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* value);

  /// @brief Method .ctor, addr 0x26f604c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_promo, addr 0x26f603c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* get_promo();

  /// @brief Method set_promo, addr 0x26f6044, size 0x8, virtual false, abstract: false, final false
  inline void set_promo(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsPromoDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsPromoDataSO(BeatmapLevelsPromoDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsPromoDataSO(BeatmapLevelsPromoDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13241 };

  /// @brief Field _promo, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo* ____promo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelsPromoDataSO, ____promo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsPromoDataSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsPromoDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsPromoDataSO*, "", "BeatmapLevelsPromoDataSO");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsPromoDataSO_BeatmapLevelsPromo*, "", "BeatmapLevelsPromoDataSO/BeatmapLevelsPromo");
