#pragma once
// IWYU pragma private; include "GlobalNamespace/MainSettingsMenuViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsMenuViewController)
namespace GlobalNamespace {
class SettingsSubMenuInfo;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsMenuViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsMenuViewController);
// Type: ::MainSettingsMenuViewController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainSettingsMenuViewController*
class CORDL_TYPE MainSettingsMenuViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _selectedSubMenuInfo, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedSubMenuInfo, put = __cordl_internal_set__selectedSubMenuInfo))::GlobalNamespace::SettingsSubMenuInfo* _selectedSubMenuInfo;

  /// @brief Field _selectedSubMenuInfoIdx, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedSubMenuInfoIdx, put = __cordl_internal_set__selectedSubMenuInfoIdx)) int32_t _selectedSubMenuInfoIdx;

  /// @brief Field _settingsMenuSegmentedControl, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsMenuSegmentedControl,
                      put = __cordl_internal_set__settingsMenuSegmentedControl))::UnityW<::HMUI::TextSegmentedControl> _settingsMenuSegmentedControl;

  /// @brief Field _settingsSubMenuInfos, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsSubMenuInfos,
                      put = __cordl_internal_set__settingsSubMenuInfos))::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*, ::Array<::GlobalNamespace::SettingsSubMenuInfo*>*> _settingsSubMenuInfos;

  /// @brief Field didSelectSettingsSubMenuEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectSettingsSubMenuEvent,
                      put = __cordl_internal_set_didSelectSettingsSubMenuEvent))::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>* didSelectSettingsSubMenuEvent;

  __declspec(property(get = get_numberOfSubMenus)) int32_t numberOfSubMenus;

  __declspec(property(get = get_selectedSubMenuInfo))::GlobalNamespace::SettingsSubMenuInfo* selectedSubMenuInfo;

  /// @brief Method DidActivate, addr 0x26666a4, size 0x1f0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleSettingsMenuSegmentedControlDidSelectCell, addr 0x2666894, size 0x54, virtual false, abstract: false, final false
  inline void HandleSettingsMenuSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx);

  /// @brief Method Init, addr 0x266666c, size 0x38, virtual false, abstract: false, final false
  inline void Init(int32_t selectedSubMenuInfoIdx);

  static inline ::GlobalNamespace::MainSettingsMenuViewController* New_ctor();

  constexpr ::GlobalNamespace::SettingsSubMenuInfo*& __cordl_internal_get__selectedSubMenuInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsSubMenuInfo*> const& __cordl_internal_get__selectedSubMenuInfo() const;

  constexpr int32_t const& __cordl_internal_get__selectedSubMenuInfoIdx() const;

  constexpr int32_t& __cordl_internal_get__selectedSubMenuInfoIdx();

  constexpr ::UnityW<::HMUI::TextSegmentedControl> const& __cordl_internal_get__settingsMenuSegmentedControl() const;

  constexpr ::UnityW<::HMUI::TextSegmentedControl>& __cordl_internal_get__settingsMenuSegmentedControl();

  constexpr ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*, ::Array<::GlobalNamespace::SettingsSubMenuInfo*>*> const& __cordl_internal_get__settingsSubMenuInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*, ::Array<::GlobalNamespace::SettingsSubMenuInfo*>*>& __cordl_internal_get__settingsSubMenuInfos();

  constexpr ::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>*& __cordl_internal_get_didSelectSettingsSubMenuEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>*> const& __cordl_internal_get_didSelectSettingsSubMenuEvent() const;

  constexpr void __cordl_internal_set__selectedSubMenuInfo(::GlobalNamespace::SettingsSubMenuInfo* value);

  constexpr void __cordl_internal_set__selectedSubMenuInfoIdx(int32_t value);

  constexpr void __cordl_internal_set__settingsMenuSegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value);

  constexpr void __cordl_internal_set__settingsSubMenuInfos(::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*, ::Array<::GlobalNamespace::SettingsSubMenuInfo*>*> value);

  constexpr void __cordl_internal_set_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>* value);

  /// @brief Method .ctor, addr 0x26668e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectSettingsSubMenuEvent, addr 0x26664e8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>* value);

  /// @brief Method get_numberOfSubMenus, addr 0x2666648, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_numberOfSubMenus();

  /// @brief Method get_selectedSubMenuInfo, addr 0x2666664, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SettingsSubMenuInfo* get_selectedSubMenuInfo();

  /// @brief Method remove_didSelectSettingsSubMenuEvent, addr 0x2666598, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectSettingsSubMenuEvent(::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsMenuViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettingsMenuViewController(MainSettingsMenuViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettingsMenuViewController(MainSettingsMenuViewController const&) = delete;

  /// @brief Field didSelectSettingsSubMenuEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::SettingsSubMenuInfo*, int32_t>* ___didSelectSettingsSubMenuEvent;

  /// @brief Field _settingsSubMenuInfos, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SettingsSubMenuInfo*, ::Array<::GlobalNamespace::SettingsSubMenuInfo*>*> ____settingsSubMenuInfos;

  /// @brief Field _settingsMenuSegmentedControl, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::TextSegmentedControl> ____settingsMenuSegmentedControl;

  /// @brief Field _selectedSubMenuInfo, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::SettingsSubMenuInfo* ____selectedSubMenuInfo;

  /// @brief Field _selectedSubMenuInfoIdx, offset: 0x90, size: 0x4, def value: None
  int32_t ____selectedSubMenuInfoIdx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsMenuViewController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsMenuViewController, ___didSelectSettingsSubMenuEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsMenuViewController, ____settingsSubMenuInfos) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsMenuViewController, ____settingsMenuSegmentedControl) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsMenuViewController, ____selectedSubMenuInfo) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsMenuViewController, ____selectedSubMenuInfoIdx) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsMenuViewController*, "", "MainSettingsMenuViewController");
