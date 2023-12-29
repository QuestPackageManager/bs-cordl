#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicsDropdown)
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace GlobalNamespace {
class __BeatmapCharacteristicsDropdown____c;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown;
}
namespace GlobalNamespace {
class __BeatmapCharacteristicsDropdown____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicsDropdown);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCharacteristicsDropdown____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5659))
// CS Name: ::BeatmapCharacteristicsDropdown::<>c*
class CORDL_TYPE __BeatmapCharacteristicsDropdown____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__BeatmapCharacteristicsDropdown____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Func_2<::GlobalNamespace::BeatmapCharacteristicSO*, ::StringW>* __9__5_0;

  static inline void setStaticF___9(::GlobalNamespace::__BeatmapCharacteristicsDropdown____c* value);

  static inline ::GlobalNamespace::__BeatmapCharacteristicsDropdown____c* getStaticF___9();

  static inline void setStaticF___9__5_0(::System::Func_2<::GlobalNamespace::BeatmapCharacteristicSO*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::BeatmapCharacteristicSO*, ::StringW>* getStaticF___9__5_0();

  static inline ::GlobalNamespace::__BeatmapCharacteristicsDropdown____c* New_ctor();

  /// @brief Method .ctor addr 0x215f1f8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <Start>b__5_0 addr 0x215f200 size 0x1c virtual false final false
  inline ::StringW _Start_b__5_0(::GlobalNamespace::BeatmapCharacteristicSO* x);

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCharacteristicsDropdown____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapCharacteristicsDropdown____c(__BeatmapCharacteristicsDropdown____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapCharacteristicsDropdown____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapCharacteristicsDropdown____c(__BeatmapCharacteristicsDropdown____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapCharacteristicsDropdown____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapCharacteristicsDropdown____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapCharacteristicsDropdown
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5660))
// CS Name: ::BeatmapCharacteristicsDropdown*
class CORDL_TYPE BeatmapCharacteristicsDropdown : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__BeatmapCharacteristicsDropdown____c;

  /// @brief Field _simpleTextDropdown, offset 0x18, size 0x8
  __declspec(property(get = __get__simpleTextDropdown, put = __set__simpleTextDropdown))::HMUI::SimpleTextDropdown* _simpleTextDropdown;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x20, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicCollection,
                      put = __set__beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollectionSO* _beatmapCharacteristicCollection;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_didSelectCellWithIdxEvent, put = __set_didSelectCellWithIdxEvent))::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* didSelectCellWithIdxEvent;

  constexpr ::HMUI::SimpleTextDropdown*& __get__simpleTextDropdown();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::SimpleTextDropdown*> const& __get__simpleTextDropdown() const;

  constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollectionSO*& __get__beatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollectionSO*> const& __get__beatmapCharacteristicCollection() const;

  constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollectionSO* value);

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*& __get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& __get_didSelectCellWithIdxEvent() const;

  constexpr void __set_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  /// @brief Method add_didSelectCellWithIdxEvent addr 0x215ec30 size 0xb0 virtual false final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent addr 0x215ece0 size 0xb0 virtual false final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  /// @brief Method Start addr 0x215ed90 size 0x1c0 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x215ef50 size 0xd4 virtual false final false
  inline void OnDestroy();

  /// @brief Method GetSelectedBeatmapCharacteristic addr 0x215f024 size 0x4c virtual false final false
  inline ::GlobalNamespace::BeatmapCharacteristicSO* GetSelectedBeatmapCharacteristic();

  /// @brief Method SelectCellWithBeatmapCharacteristic addr 0x215f070 size 0xb4 virtual false final false
  inline void SelectCellWithBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x215f124 size 0x68 virtual false final false
  inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  static inline ::GlobalNamespace::BeatmapCharacteristicsDropdown* New_ctor();

  /// @brief Method .ctor addr 0x215f18c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicsDropdown(BeatmapCharacteristicsDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicsDropdown(BeatmapCharacteristicsDropdown const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicsDropdown();

public:
  /// @brief Field _simpleTextDropdown, offset: 0x18, size: 0x8, def value: None
  ::HMUI::SimpleTextDropdown* ____simpleTextDropdown;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollectionSO* ____beatmapCharacteristicCollection;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* ___didSelectCellWithIdxEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicsDropdown, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ____simpleTextDropdown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ____beatmapCharacteristicCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsDropdown, ___didSelectCellWithIdxEvent) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicsDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicsDropdown*, "", "BeatmapCharacteristicsDropdown");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCharacteristicsDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCharacteristicsDropdown____c*, "", "BeatmapCharacteristicsDropdown/<>c");
