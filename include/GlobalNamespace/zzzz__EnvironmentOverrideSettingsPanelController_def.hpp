#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnvironmentType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentOverrideSettingsPanelController)
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class __EnvironmentOverrideSettingsPanelController__Elements;
}
namespace GlobalNamespace {
class __EnvironmentOverrideSettingsPanelController____c;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class PanelAnimationSO;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentOverrideSettingsPanelController;
}
namespace GlobalNamespace {
class __EnvironmentOverrideSettingsPanelController__Elements;
}
namespace GlobalNamespace {
class __EnvironmentOverrideSettingsPanelController____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentOverrideSettingsPanelController);
MARK_REF_PTR_T(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements);
MARK_REF_PTR_T(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c);
// Type: ::Elements
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentOverrideSettingsPanelController::Elements*
class CORDL_TYPE __EnvironmentOverrideSettingsPanelController__Elements : public ::System::Object {
public:
  // Declarations
  /// @brief Field <environmentInfos>k__BackingField, offset 0x30, size 0x8
  __declspec(
      property(get = __cordl_internal_get__environmentInfos_k__BackingField,
               put = __cordl_internal_set__environmentInfos_k__BackingField))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _environmentInfos_k__BackingField;

  __declspec(property(get = get_environmentInfos, put = set_environmentInfos))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* environmentInfos;

  /// @brief Field environmentType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_environmentType, put = __cordl_internal_set_environmentType))::GlobalNamespace::EnvironmentType environmentType;

  /// @brief Field label, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_label, put = __cordl_internal_set_label))::UnityW<::TMPro::TextMeshProUGUI> label;

  /// @brief Field localizationKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_localizationKey, put = __cordl_internal_set_localizationKey))::StringW localizationKey;

  /// @brief Field simpleTextDropdown, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_simpleTextDropdown, put = __cordl_internal_set_simpleTextDropdown))::UnityW<::HMUI::SimpleTextDropdown> simpleTextDropdown;

  static inline ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__environmentInfos_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*> const&
  __cordl_internal_get__environmentInfos_k__BackingField() const;

  constexpr ::GlobalNamespace::EnvironmentType const& __cordl_internal_get_environmentType() const;

  constexpr ::GlobalNamespace::EnvironmentType& __cordl_internal_get_environmentType();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_label() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_label();

  constexpr ::StringW const& __cordl_internal_get_localizationKey() const;

  constexpr ::StringW& __cordl_internal_get_localizationKey();

  constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get_simpleTextDropdown() const;

  constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get_simpleTextDropdown();

  constexpr void __cordl_internal_set__environmentInfos_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  constexpr void __cordl_internal_set_environmentType(::GlobalNamespace::EnvironmentType value);

  constexpr void __cordl_internal_set_label(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set_localizationKey(::StringW value);

  constexpr void __cordl_internal_set_simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value);

  /// @brief Method .ctor, addr 0x24adfb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_environmentInfos, addr 0x24adfa4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* get_environmentInfos();

  /// @brief Method set_environmentInfos, addr 0x24adfac, size 0x8, virtual false, abstract: false, final false
  inline void set_environmentInfos(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentOverrideSettingsPanelController__Elements();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentOverrideSettingsPanelController__Elements", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentOverrideSettingsPanelController__Elements(__EnvironmentOverrideSettingsPanelController__Elements&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentOverrideSettingsPanelController__Elements", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentOverrideSettingsPanelController__Elements(__EnvironmentOverrideSettingsPanelController__Elements const&) = delete;

  /// @brief Field label, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ___label;

  /// @brief Field simpleTextDropdown, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::SimpleTextDropdown> ___simpleTextDropdown;

  /// @brief Field environmentType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentType ___environmentType;

  /// @brief Field localizationKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___localizationKey;

  /// @brief Field <environmentInfos>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____environmentInfos_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements, ___label) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements, ___simpleTextDropdown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements, ___environmentType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements, ___localizationKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements, ____environmentInfos_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentOverrideSettingsPanelController::<>c*
class CORDL_TYPE __EnvironmentOverrideSettingsPanelController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* __9__12_0;

  static inline ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c* New_ctor();

  /// @brief Method <SetData>b__12_0, addr 0x24ae028, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _SetData_b__12_0(::GlobalNamespace::EnvironmentInfoSO* x);

  /// @brief Method .ctor, addr 0x24ae020, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* getStaticF___9__12_0();

  static inline void setStaticF___9(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c* value);

  static inline void setStaticF___9__12_0(::System::Func_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentOverrideSettingsPanelController____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentOverrideSettingsPanelController____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentOverrideSettingsPanelController____c(__EnvironmentOverrideSettingsPanelController____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentOverrideSettingsPanelController____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentOverrideSettingsPanelController____c(__EnvironmentOverrideSettingsPanelController____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EnvironmentOverrideSettingsPanelController
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::EnvironmentOverrideSettingsPanelController*
class CORDL_TYPE EnvironmentOverrideSettingsPanelController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Elements = ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements;

  using __c = ::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c;

  /// @brief Field _analyticsModel, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _dismissPanelAnimation, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__dismissPanelAnimation, put = __cordl_internal_set__dismissPanelAnimation))::UnityW<::HMUI::PanelAnimationSO> _dismissPanelAnimation;

  /// @brief Field _elements, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__elements,
                      put = __cordl_internal_set__elements))::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*,
                                                                     ::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*> _elements;

  /// @brief Field _elementsGO, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__elementsGO, put = __cordl_internal_set__elementsGO))::UnityW<::UnityEngine::GameObject> _elementsGO;

  /// @brief Field _environmentListModel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentListModel, put = __cordl_internal_set__environmentListModel))::GlobalNamespace::EnvironmentsListModel* _environmentListModel;

  /// @brief Field _initialized, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _overrideEnvironmentSettings, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideEnvironmentSettings,
                      put = __cordl_internal_set__overrideEnvironmentSettings))::GlobalNamespace::OverrideEnvironmentSettings* _overrideEnvironmentSettings;

  /// @brief Field _overrideEnvironmentsToggle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideEnvironmentsToggle, put = __cordl_internal_set__overrideEnvironmentsToggle))::UnityW<::UnityEngine::UI::Toggle> _overrideEnvironmentsToggle;

  /// @brief Field _presentPanelAnimation, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__presentPanelAnimation, put = __cordl_internal_set__presentPanelAnimation))::UnityW<::HMUI::PanelAnimationSO> _presentPanelAnimation;

  __declspec(property(get = get_overrideEnvironmentSettings))::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings;

  /// @brief Convert operator to "::GlobalNamespace::IRefreshable"
  constexpr operator ::GlobalNamespace::IRefreshable*() noexcept;

  /// @brief Method HandleDropDownDidSelectCellWithIdx, addr 0x24adac8, size 0x288, virtual false, abstract: false, final false
  inline void HandleDropDownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropDownWithTableView, int32_t idx);

  /// @brief Method HandleOverrideEnvironmentsToggleValueChanged, addr 0x24add50, size 0x22c, virtual false, abstract: false, final false
  inline void HandleOverrideEnvironmentsToggleValueChanged(bool isOn);

  static inline ::GlobalNamespace::EnvironmentOverrideSettingsPanelController* New_ctor();

  /// @brief Method OnDestroy, addr 0x24ad7d4, size 0x19c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Refresh, addr 0x24ad970, size 0x158, virtual true, abstract: false, final true
  inline void Refresh();

  /// @brief Method SetData, addr 0x24ad524, size 0x2b0, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings);

  /// @brief Method <HandleOverrideEnvironmentsToggleValueChanged>b__16_0, addr 0x24adf84, size 0x20, virtual false, abstract: false, final false
  inline void _HandleOverrideEnvironmentsToggleValueChanged_b__16_0();

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr ::UnityW<::HMUI::PanelAnimationSO> const& __cordl_internal_get__dismissPanelAnimation() const;

  constexpr ::UnityW<::HMUI::PanelAnimationSO>& __cordl_internal_get__dismissPanelAnimation();

  constexpr ::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*, ::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*> const&
  __cordl_internal_get__elements() const;

  constexpr ::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*, ::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*>&
  __cordl_internal_get__elements();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__elementsGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__elementsGO();

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentListModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentsListModel*> const& __cordl_internal_get__environmentListModel() const;

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::GlobalNamespace::OverrideEnvironmentSettings*& __cordl_internal_get__overrideEnvironmentSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OverrideEnvironmentSettings*> const& __cordl_internal_get__overrideEnvironmentSettings() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__overrideEnvironmentsToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__overrideEnvironmentsToggle();

  constexpr ::UnityW<::HMUI::PanelAnimationSO> const& __cordl_internal_get__presentPanelAnimation() const;

  constexpr ::UnityW<::HMUI::PanelAnimationSO>& __cordl_internal_get__presentPanelAnimation();

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__dismissPanelAnimation(::UnityW<::HMUI::PanelAnimationSO> value);

  constexpr void __cordl_internal_set__elements(
      ::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*, ::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*> value);

  constexpr void __cordl_internal_set__elementsGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__environmentListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__overrideEnvironmentSettings(::GlobalNamespace::OverrideEnvironmentSettings* value);

  constexpr void __cordl_internal_set__overrideEnvironmentsToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__presentPanelAnimation(::UnityW<::HMUI::PanelAnimationSO> value);

  /// @brief Method .ctor, addr 0x24adf7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_overrideEnvironmentSettings, addr 0x24ad51c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OverrideEnvironmentSettings* get_overrideEnvironmentSettings();

  /// @brief Convert to "::GlobalNamespace::IRefreshable"
  constexpr ::GlobalNamespace::IRefreshable* i___GlobalNamespace__IRefreshable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentOverrideSettingsPanelController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentOverrideSettingsPanelController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentOverrideSettingsPanelController(EnvironmentOverrideSettingsPanelController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentOverrideSettingsPanelController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentOverrideSettingsPanelController(EnvironmentOverrideSettingsPanelController const&) = delete;

  /// @brief Field _overrideEnvironmentsToggle, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____overrideEnvironmentsToggle;

  /// @brief Field _elementsGO, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____elementsGO;

  /// @brief Field _elements, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*, ::Array<::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*>*> ____elements;

  /// @brief Field _presentPanelAnimation, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::PanelAnimationSO> ____presentPanelAnimation;

  /// @brief Field _dismissPanelAnimation, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::PanelAnimationSO> ____dismissPanelAnimation;

  /// @brief Field _environmentListModel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentListModel;

  /// @brief Field _analyticsModel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _overrideEnvironmentSettings, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OverrideEnvironmentSettings* ____overrideEnvironmentSettings;

  /// @brief Field _initialized, offset: 0x58, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentOverrideSettingsPanelController, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentOverrideSettingsPanelController, ____overrideEnvironmentsToggle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentOverrideSettingsPanelController, ____elementsGO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentOverrideSettingsPanelController, ____elements) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentOverrideSettingsPanelController, ____presentPanelAnimation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentOverrideSettingsPanelController, ____dismissPanelAnimation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentOverrideSettingsPanelController, ____environmentListModel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentOverrideSettingsPanelController, ____analyticsModel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentOverrideSettingsPanelController, ____overrideEnvironmentSettings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EnvironmentOverrideSettingsPanelController, ____initialized) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentOverrideSettingsPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentOverrideSettingsPanelController*, "", "EnvironmentOverrideSettingsPanelController");
NEED_NO_BOX(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController__Elements*, "", "EnvironmentOverrideSettingsPanelController/Elements");
NEED_NO_BOX(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentOverrideSettingsPanelController____c*, "", "EnvironmentOverrideSettingsPanelController/<>c");
