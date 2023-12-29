#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinator_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EditAvatarAnalytics)
namespace GlobalNamespace {
class EditAvatarFlowCoordinator;
}
namespace GlobalNamespace {
class EditAvatarViewController;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class AvatarDataModel;
}
namespace GlobalNamespace {
struct __EditAvatarFlowCoordinator__EditAvatarType;
}
namespace GlobalNamespace {
struct __EditAvatarViewController__FinishAction;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EditAvatarAnalytics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EditAvatarAnalytics);
// Type: ::EditAvatarAnalytics
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(5593))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4000))
// CS Name: ::EditAvatarAnalytics*
class CORDL_TYPE EditAvatarAnalytics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _editAvatarFlowCoordinator, offset 0x18, size 0x8
  __declspec(property(get = __get__editAvatarFlowCoordinator, put = __set__editAvatarFlowCoordinator))::GlobalNamespace::EditAvatarFlowCoordinator* _editAvatarFlowCoordinator;

  /// @brief Field _editAvatarViewController, offset 0x20, size 0x8
  __declspec(property(get = __get__editAvatarViewController, put = __set__editAvatarViewController))::GlobalNamespace::EditAvatarViewController* _editAvatarViewController;

  /// @brief Field _analyticsModel, offset 0x28, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _avatarDataModel, offset 0x30, size 0x8
  __declspec(property(get = __get__avatarDataModel, put = __set__avatarDataModel))::GlobalNamespace::AvatarDataModel* _avatarDataModel;

  /// @brief Field _lastEditAvatarType, offset 0x38, size 0x4
  __declspec(property(get = __get__lastEditAvatarType, put = __set__lastEditAvatarType))::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType _lastEditAvatarType;

  constexpr ::GlobalNamespace::EditAvatarFlowCoordinator*& __get__editAvatarFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarFlowCoordinator*> const& __get__editAvatarFlowCoordinator() const;

  constexpr void __set__editAvatarFlowCoordinator(::GlobalNamespace::EditAvatarFlowCoordinator* value);

  constexpr ::GlobalNamespace::EditAvatarViewController*& __get__editAvatarViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarViewController*> const& __get__editAvatarViewController() const;

  constexpr void __set__editAvatarViewController(::GlobalNamespace::EditAvatarViewController* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::GlobalNamespace::AvatarDataModel*& __get__avatarDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarDataModel*> const& __get__avatarDataModel() const;

  constexpr void __set__avatarDataModel(::GlobalNamespace::AvatarDataModel* value);

  constexpr ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType& __get__lastEditAvatarType();

  constexpr ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType const& __get__lastEditAvatarType() const;

  constexpr void __set__lastEditAvatarType(::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType value);

  /// @brief Method Awake addr 0x20c2270 size 0x154 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x20c23c4 size 0x1c8 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleEditAvatarFlowCoordinatorWasSetup addr 0x20c258c size 0xd8 virtual false final false
  inline void HandleEditAvatarFlowCoordinatorWasSetup(::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType editAvatarType);

  /// @brief Method HandleEditAvatarViewControllerDidFinish addr 0x20c28dc size 0xf8 virtual false final false
  inline void HandleEditAvatarViewControllerDidFinish(::GlobalNamespace::__EditAvatarViewController__FinishAction finishAction);

  /// @brief Method HandleEditAvatarViewControllerRandomizeAllButtonWasPressed addr 0x20c29d4 size 0xd0 virtual false final false
  inline void HandleEditAvatarViewControllerRandomizeAllButtonWasPressed();

  /// @brief Method CreateEditAvatarEventData addr 0x20c2664 size 0x278 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CreateEditAvatarEventData();

  static inline ::GlobalNamespace::EditAvatarAnalytics* New_ctor();

  /// @brief Method .ctor addr 0x20c2aa4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditAvatarAnalytics(EditAvatarAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditAvatarAnalytics(EditAvatarAnalytics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarAnalytics();

public:
  /// @brief Field _editAvatarFlowCoordinator, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarFlowCoordinator* ____editAvatarFlowCoordinator;

  /// @brief Field _editAvatarViewController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarViewController* ____editAvatarViewController;

  /// @brief Field _analyticsModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _avatarDataModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::AvatarDataModel* ____avatarDataModel;

  /// @brief Field _lastEditAvatarType, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType ____lastEditAvatarType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditAvatarAnalytics, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarAnalytics, ____editAvatarFlowCoordinator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarAnalytics, ____editAvatarViewController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarAnalytics, ____analyticsModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarAnalytics, ____avatarDataModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarAnalytics, ____lastEditAvatarType) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EditAvatarAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarAnalytics*, "", "EditAvatarAnalytics");
