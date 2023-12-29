#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinator_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EditAvatarFlowCoordinator)
namespace GlobalNamespace {
struct __EditAvatarFlowCoordinator__EditAvatarType;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class EditAvatarViewController;
}
namespace GlobalNamespace {
struct __EditAvatarViewController__FinishAction;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct __EditAvatarViewController__AvatarEditPart;
}
namespace GlobalNamespace {
class AvatarVisualController;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class AvatarTweenController;
}
namespace GlobalNamespace {
class AvatarDataModel;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class EditColorController;
}
// Forward declare root types
namespace GlobalNamespace {
struct __EditAvatarFlowCoordinator__EditAvatarType;
}
namespace GlobalNamespace {
class EditAvatarFlowCoordinator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType);
MARK_REF_PTR_T(::GlobalNamespace::EditAvatarFlowCoordinator);
// Type: ::EditAvatarType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5593))
// CS Name: ::EditAvatarFlowCoordinator::EditAvatarType
struct CORDL_TYPE __EditAvatarFlowCoordinator__EditAvatarType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EditAvatarFlowCoordinator__EditAvatarType_Unwrapped
  enum struct ____EditAvatarFlowCoordinator__EditAvatarType_Unwrapped : int32_t {
    __E_Create = static_cast<int32_t>(0x0),
    __E_Edit = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EditAvatarFlowCoordinator__EditAvatarType_Unwrapped() const noexcept {
    return static_cast<____EditAvatarFlowCoordinator__EditAvatarType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EditAvatarFlowCoordinator__EditAvatarType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EditAvatarFlowCoordinator__EditAvatarType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Create value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType const Create;

  /// @brief Field Edit value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType const Edit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EditAvatarFlowCoordinator
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13699)), TypeDefinitionIndex(TypeDefinitionIndex(5593))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5594))
// CS Name: ::EditAvatarFlowCoordinator*
class CORDL_TYPE EditAvatarFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using EditAvatarType = ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType;

  /// @brief Field _avatarVisualController, offset 0xa8, size 0x8
  __declspec(property(get = __get__avatarVisualController, put = __set__avatarVisualController))::GlobalNamespace::AvatarVisualController* _avatarVisualController;

  /// @brief Field _avatarTweenController, offset 0xb0, size 0x8
  __declspec(property(get = __get__avatarTweenController, put = __set__avatarTweenController))::GlobalNamespace::AvatarTweenController* _avatarTweenController;

  /// @brief Field _avatarContainerGameObject, offset 0xb8, size 0x8
  __declspec(property(get = __get__avatarContainerGameObject, put = __set__avatarContainerGameObject))::UnityEngine::GameObject* _avatarContainerGameObject;

  /// @brief Field _editAvatarViewController, offset 0xc0, size 0x8
  __declspec(property(get = __get__editAvatarViewController, put = __set__editAvatarViewController))::GlobalNamespace::EditAvatarViewController* _editAvatarViewController;

  /// @brief Field _editColorViewController, offset 0xc8, size 0x8
  __declspec(property(get = __get__editColorViewController, put = __set__editColorViewController))::GlobalNamespace::EditColorController* _editColorViewController;

  /// @brief Field _avatarDataModel, offset 0xd0, size 0x8
  __declspec(property(get = __get__avatarDataModel, put = __set__avatarDataModel))::GlobalNamespace::AvatarDataModel* _avatarDataModel;

  /// @brief Field _parameterChangedAnimationCallbacks, offset 0xd8, size 0x8
  __declspec(property(get = __get__parameterChangedAnimationCallbacks,
                      put = __set__parameterChangedAnimationCallbacks))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart,
                                                                                                                    ::System::Action*>* _parameterChangedAnimationCallbacks;

  /// @brief Field _editAvatarType, offset 0xe0, size 0x4
  __declspec(property(get = __get__editAvatarType, put = __set__editAvatarType))::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType _editAvatarType;

  /// @brief Field didFinishEvent, offset 0xe8, size 0x8
  __declspec(property(get = __get_didFinishEvent,
                      put = __set_didFinishEvent))::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* didFinishEvent;

  /// @brief Field wasSetupEvent, offset 0xf0, size 0x8
  __declspec(property(get = __get_wasSetupEvent, put = __set_wasSetupEvent))::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* wasSetupEvent;

  constexpr ::GlobalNamespace::AvatarVisualController*& __get__avatarVisualController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarVisualController*> const& __get__avatarVisualController() const;

  constexpr void __set__avatarVisualController(::GlobalNamespace::AvatarVisualController* value);

  constexpr ::GlobalNamespace::AvatarTweenController*& __get__avatarTweenController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarTweenController*> const& __get__avatarTweenController() const;

  constexpr void __set__avatarTweenController(::GlobalNamespace::AvatarTweenController* value);

  constexpr ::UnityEngine::GameObject*& __get__avatarContainerGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__avatarContainerGameObject() const;

  constexpr void __set__avatarContainerGameObject(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::EditAvatarViewController*& __get__editAvatarViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarViewController*> const& __get__editAvatarViewController() const;

  constexpr void __set__editAvatarViewController(::GlobalNamespace::EditAvatarViewController* value);

  constexpr ::GlobalNamespace::EditColorController*& __get__editColorViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditColorController*> const& __get__editColorViewController() const;

  constexpr void __set__editColorViewController(::GlobalNamespace::EditColorController* value);

  constexpr ::GlobalNamespace::AvatarDataModel*& __get__avatarDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarDataModel*> const& __get__avatarDataModel() const;

  constexpr void __set__avatarDataModel(::GlobalNamespace::AvatarDataModel* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::System::Action*>*& __get__parameterChangedAnimationCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::System::Action*>*> const&
  __get__parameterChangedAnimationCallbacks() const;

  constexpr void __set__parameterChangedAnimationCallbacks(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::System::Action*>* value);

  constexpr ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType& __get__editAvatarType();

  constexpr ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType const& __get__editAvatarType() const;

  constexpr void __set__editAvatarType(::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType value);

  constexpr ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*> const&
  __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value);

  constexpr ::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*& __get_wasSetupEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>*> const& __get_wasSetupEvent() const;

  constexpr void __set_wasSetupEvent(::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value);

  /// @brief Method add_didFinishEvent addr 0x21444d8 size 0xb0 virtual false final false
  inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value);

  /// @brief Method remove_didFinishEvent addr 0x2144588 size 0xb0 virtual false final false
  inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value);

  /// @brief Method add_wasSetupEvent addr 0x2144638 size 0xb0 virtual false final false
  inline void add_wasSetupEvent(::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value);

  /// @brief Method remove_wasSetupEvent addr 0x21446e8 size 0xb0 virtual false final false
  inline void remove_wasSetupEvent(::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* value);

  /// @brief Method Setup addr 0x2144798 size 0x50 virtual false final false
  inline void Setup(::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType editAvatarType);

  /// @brief Method DidActivate addr 0x21447e8 size 0x4a4 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x2144c8c size 0x224 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleEditAvatarViewControllerDidRequestColorChange addr 0x2144eb0 size 0x78 virtual false final false
  inline void HandleEditAvatarViewControllerDidRequestColorChange(::System::Action_1<::UnityEngine::Color>* colorCallback, ::UnityEngine::Color currentColor,
                                                                  ::GlobalNamespace::__EditAvatarViewController__AvatarEditPart editPart, int32_t uvSegment);

  /// @brief Method HandleEditAvatarViewControllerChangedAvatarPart addr 0x2144f28 size 0xa0 virtual false final false
  inline void HandleEditAvatarViewControllerChangedAvatarPart(::GlobalNamespace::__EditAvatarViewController__AvatarEditPart avatarPart);

  /// @brief Method HandleEditAvatarViewControllerDidFinished addr 0x2144fc8 size 0x24 virtual false final false
  inline void HandleEditAvatarViewControllerDidFinished(::GlobalNamespace::__EditAvatarViewController__FinishAction _);

  /// @brief Method HandleEditColorViewControllerDidChangedColor addr 0x2144fec size 0x28 virtual false final false
  inline void HandleEditColorViewControllerDidChangedColor(::UnityEngine::Color color);

  /// @brief Method HandleEditColorViewControllerDidFinish addr 0x2145014 size 0x68 virtual false final false
  inline void HandleEditColorViewControllerDidFinish(bool apply);

  static inline ::GlobalNamespace::EditAvatarFlowCoordinator* New_ctor();

  /// @brief Method .ctor addr 0x214507c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditAvatarFlowCoordinator(EditAvatarFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditAvatarFlowCoordinator(EditAvatarFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarFlowCoordinator();

public:
  /// @brief Field _avatarVisualController, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::AvatarVisualController* ____avatarVisualController;

  /// @brief Field _avatarTweenController, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::AvatarTweenController* ____avatarTweenController;

  /// @brief Field _avatarContainerGameObject, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____avatarContainerGameObject;

  /// @brief Field _editAvatarViewController, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarViewController* ____editAvatarViewController;

  /// @brief Field _editColorViewController, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::EditColorController* ____editColorViewController;

  /// @brief Field _avatarDataModel, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::AvatarDataModel* ____avatarDataModel;

  /// @brief Field _parameterChangedAnimationCallbacks, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__EditAvatarViewController__AvatarEditPart, ::System::Action*>* ____parameterChangedAnimationCallbacks;

  /// @brief Field _editAvatarType, offset: 0xe0, size: 0x4, def value: None
  ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType ____editAvatarType;

  /// @brief Field didFinishEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::EditAvatarFlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* ___didFinishEvent;

  /// @brief Field wasSetupEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType>* ___wasSetupEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditAvatarFlowCoordinator, 0xf8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinator, ____avatarVisualController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinator, ____avatarTweenController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinator, ____avatarContainerGameObject) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinator, ____editAvatarViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinator, ____editColorViewController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinator, ____avatarDataModel) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinator, ____parameterChangedAnimationCallbacks) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinator, ____editAvatarType) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinator, ___didFinishEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinator, ___wasSetupEvent) == 0xf0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType, "", "EditAvatarFlowCoordinator/EditAvatarType");
NEED_NO_BOX(::GlobalNamespace::EditAvatarFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarFlowCoordinator*, "", "EditAvatarFlowCoordinator");
