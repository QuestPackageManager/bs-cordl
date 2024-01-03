#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsFlowCoordinator)
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class MainSettingsMenuViewController;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class SettingsNavigationController;
}
namespace GlobalNamespace {
class SettingsSubMenuInfo;
}
namespace GlobalNamespace {
struct __SettingsFlowCoordinator__FinishAction;
}
namespace GlobalNamespace {
struct __SettingsNavigationController__FinishAction;
}
namespace HMUI {
class ViewController;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SettingsFlowCoordinator__FinishAction;
}
namespace GlobalNamespace {
class SettingsFlowCoordinator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SettingsFlowCoordinator__FinishAction);
MARK_REF_PTR_T(::GlobalNamespace::SettingsFlowCoordinator);
// Type: ::FinishAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5523))
// CS Name: ::SettingsFlowCoordinator::FinishAction
struct CORDL_TYPE __SettingsFlowCoordinator__FinishAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SettingsFlowCoordinator__FinishAction_Unwrapped
  enum struct ____SettingsFlowCoordinator__FinishAction_Unwrapped : int32_t {
    __E_Cancel = static_cast<int32_t>(0x0),
    __E_Ok = static_cast<int32_t>(0x1),
    __E_Apply = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SettingsFlowCoordinator__FinishAction_Unwrapped() const noexcept {
    return static_cast<____SettingsFlowCoordinator__FinishAction_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SettingsFlowCoordinator__FinishAction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsFlowCoordinator__FinishAction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Cancel value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction const Cancel;

  /// @brief Field Ok value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction const Ok;

  /// @brief Field Apply value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction const Apply;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsFlowCoordinator__FinishAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsFlowCoordinator__FinishAction, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SettingsFlowCoordinator
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5524))
// CS Name: ::SettingsFlowCoordinator*
class CORDL_TYPE SettingsFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using FinishAction = ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction;

  /// @brief Field _mainSettingsModel, offset 0xa8, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  /// @brief Field _mainSettingsMenuViewController, offset 0xb0, size 0x8
  __declspec(property(get = __get__mainSettingsMenuViewController, put = __set__mainSettingsMenuViewController))::GlobalNamespace::MainSettingsMenuViewController* _mainSettingsMenuViewController;

  /// @brief Field _settingsNavigationController, offset 0xb8, size 0x8
  __declspec(property(get = __get__settingsNavigationController, put = __set__settingsNavigationController))::GlobalNamespace::SettingsNavigationController* _settingsNavigationController;

  /// @brief Field _saveData, offset 0xc0, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::ISaveData* _saveData;

  /// @brief Field didFinishEvent, offset 0xc8, size 0x8
  __declspec(property(get = __get_didFinishEvent,
                      put = __set_didFinishEvent))::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* didFinishEvent;

  /// @brief Field _selectedSettingsSubMenuInfoIdx, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__selectedSettingsSubMenuInfoIdx, put = setStaticF__selectedSettingsSubMenuInfoIdx)) int32_t _selectedSettingsSubMenuInfoIdx;

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::GlobalNamespace::MainSettingsMenuViewController*& __get__mainSettingsMenuViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsMenuViewController*> const& __get__mainSettingsMenuViewController() const;

  constexpr void __set__mainSettingsMenuViewController(::GlobalNamespace::MainSettingsMenuViewController* value);

  constexpr ::GlobalNamespace::SettingsNavigationController*& __get__settingsNavigationController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsNavigationController*> const& __get__settingsNavigationController() const;

  constexpr void __set__settingsNavigationController(::GlobalNamespace::SettingsNavigationController* value);

  constexpr ::GlobalNamespace::ISaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::ISaveData* value);

  constexpr ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*> const&
  __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value);

  static inline void setStaticF__selectedSettingsSubMenuInfoIdx(int32_t value);

  static inline int32_t getStaticF__selectedSettingsSubMenuInfoIdx();

  /// @brief Method add_didFinishEvent, addr 0x228b9b8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value);

  /// @brief Method remove_didFinishEvent, addr 0x228c1d8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value);

  /// @brief Method DidActivate, addr 0x229b6d0, size 0x2b0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x229b980, size 0x10c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method ShowSecretViewController, addr 0x229ba8c, size 0x4, virtual false, abstract: false, final false
  inline void ShowSecretViewController(::HMUI::ViewController* viewController);

  /// @brief Method HandleDidSelectSettingsSubMenu, addr 0x229bb24, size 0x6c, virtual false, abstract: false, final false
  inline void HandleDidSelectSettingsSubMenu(::GlobalNamespace::SettingsSubMenuInfo* settingsSubMenuInfo, int32_t idx);

  /// @brief Method ReplaceViewController, addr 0x229ba90, size 0x94, virtual false, abstract: false, final false
  inline void ReplaceViewController(::HMUI::ViewController* viewController);

  /// @brief Method HandleSettingsNavigationControllerDidFinish, addr 0x229bb90, size 0x9c, virtual false, abstract: false, final false
  inline void HandleSettingsNavigationControllerDidFinish(::GlobalNamespace::__SettingsNavigationController__FinishAction finishAction);

  /// @brief Method ApplySettings, addr 0x229bc2c, size 0x3c, virtual false, abstract: false, final false
  inline void ApplySettings();

  /// @brief Method CancelSettings, addr 0x229bc68, size 0x28, virtual false, abstract: false, final false
  inline void CancelSettings();

  static inline ::GlobalNamespace::SettingsFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x229bc90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SettingsFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsFlowCoordinator(SettingsFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsFlowCoordinator(SettingsFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsFlowCoordinator();

public:
  /// @brief Field _mainSettingsModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  /// @brief Field _mainSettingsMenuViewController, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsMenuViewController* ____mainSettingsMenuViewController;

  /// @brief Field _settingsNavigationController, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::SettingsNavigationController* ____settingsNavigationController;

  /// @brief Field _saveData, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  /// @brief Field didFinishEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::SettingsFlowCoordinator*, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsFlowCoordinator, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____mainSettingsModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____mainSettingsMenuViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____settingsNavigationController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____saveData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ___didFinishEvent) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsFlowCoordinator__FinishAction, "", "SettingsFlowCoordinator/FinishAction");
NEED_NO_BOX(::GlobalNamespace::SettingsFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsFlowCoordinator*, "", "SettingsFlowCoordinator");
