#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelsPromoDataSO)
namespace GlobalNamespace {
class __BeatmapLevelsPromoDataSO__BeatmapLevelsPromo;
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
class __BeatmapLevelsPromoDataSO__BeatmapLevelsPromo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelsPromoDataSO);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo);
// Type: ::BeatmapLevelsPromo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11056))
// CS Name: ::BeatmapLevelsPromoDataSO::BeatmapLevelsPromo*
class CORDL_TYPE __BeatmapLevelsPromoDataSO__BeatmapLevelsPromo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _promotedBeatmapLevelPacks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__promotedBeatmapLevelPacks,
                      put = __cordl_internal_set__promotedBeatmapLevelPacks))::System::Collections::Generic::List_1<::StringW>* _promotedBeatmapLevelPacks;

  /// @brief Field _updatedBeatmapLevelPacks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__updatedBeatmapLevelPacks,
                      put = __cordl_internal_set__updatedBeatmapLevelPacks))::System::Collections::Generic::List_1<::StringW>* _updatedBeatmapLevelPacks;

  /// @brief Field _promotedBeatmapLevels, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__promotedBeatmapLevels, put = __cordl_internal_set__promotedBeatmapLevels))::System::Collections::Generic::List_1<::StringW>* _promotedBeatmapLevels;

  /// @brief Field _updatedBeatmapLevels, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__updatedBeatmapLevels, put = __cordl_internal_set__updatedBeatmapLevels))::System::Collections::Generic::List_1<::StringW>* _updatedBeatmapLevels;

  __declspec(property(get = get_promotedBeatmapLevelPacks))::System::Collections::Generic::IEnumerable_1<::StringW>* promotedBeatmapLevelPacks;

  __declspec(property(get = get_updatedBeatmapLevelPacks))::System::Collections::Generic::IEnumerable_1<::StringW>* updatedBeatmapLevelPacks;

  __declspec(property(get = get_promotedBeatmapLevels))::System::Collections::Generic::IEnumerable_1<::StringW>* promotedBeatmapLevels;

  __declspec(property(get = get_updatedBeatmapLevels))::System::Collections::Generic::IEnumerable_1<::StringW>* updatedBeatmapLevels;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__promotedBeatmapLevelPacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__promotedBeatmapLevelPacks() const;

  constexpr void __cordl_internal_set__promotedBeatmapLevelPacks(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__updatedBeatmapLevelPacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__updatedBeatmapLevelPacks() const;

  constexpr void __cordl_internal_set__updatedBeatmapLevelPacks(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__promotedBeatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__promotedBeatmapLevels() const;

  constexpr void __cordl_internal_set__promotedBeatmapLevels(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__updatedBeatmapLevels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__updatedBeatmapLevels() const;

  constexpr void __cordl_internal_set__updatedBeatmapLevels(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_promotedBeatmapLevelPacks, addr 0x12b5f20, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_promotedBeatmapLevelPacks();

  /// @brief Method get_updatedBeatmapLevelPacks, addr 0x12b5f28, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_updatedBeatmapLevelPacks();

  /// @brief Method get_promotedBeatmapLevels, addr 0x12b5f30, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_promotedBeatmapLevels();

  /// @brief Method get_updatedBeatmapLevels, addr 0x12b5f38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_updatedBeatmapLevels();

  static inline ::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo* New_ctor();

  /// @brief Method .ctor, addr 0x12b5f40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelsPromoDataSO__BeatmapLevelsPromo(__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelsPromoDataSO__BeatmapLevelsPromo(__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelsPromoDataSO__BeatmapLevelsPromo();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo, ____promotedBeatmapLevelPacks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo, ____updatedBeatmapLevelPacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo, ____promotedBeatmapLevels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo, ____updatedBeatmapLevels) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelsPromoDataSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8954))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11057))
// CS Name: ::BeatmapLevelsPromoDataSO*
class CORDL_TYPE BeatmapLevelsPromoDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using BeatmapLevelsPromo = ::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo;

  /// @brief Field _promo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__promo, put = __cordl_internal_set__promo))::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo* _promo;

  __declspec(property(get = get_promo, put = set_promo))::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo* promo;

  constexpr ::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo*& __cordl_internal_get__promo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo*> const& __cordl_internal_get__promo() const;

  constexpr void __cordl_internal_set__promo(::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo* value);

  /// @brief Method get_promo, addr 0x12b5f08, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo* get_promo();

  /// @brief Method set_promo, addr 0x12b5f10, size 0x8, virtual false, abstract: false, final false
  inline void set_promo(::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo* value);

  static inline ::GlobalNamespace::BeatmapLevelsPromoDataSO* New_ctor();

  /// @brief Method .ctor, addr 0x12b5f18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelsPromoDataSO(BeatmapLevelsPromoDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelsPromoDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelsPromoDataSO(BeatmapLevelsPromoDataSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelsPromoDataSO();

public:
  /// @brief Field _promo, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo* ____promo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelsPromoDataSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelsPromoDataSO, ____promo) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelsPromoDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelsPromoDataSO*, "", "BeatmapLevelsPromoDataSO");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelsPromoDataSO__BeatmapLevelsPromo*, "", "BeatmapLevelsPromoDataSO/BeatmapLevelsPromo");
