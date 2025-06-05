#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarEditorFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarEditorFlowCoordinator)
namespace BeatSaber::AvatarCore {
struct AvatarEditorFlowCoordinator_EditMode;
}
namespace BeatSaber::AvatarCore {
struct AvatarEditorFlowCoordinator_FinishAction;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
class Action;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
struct AvatarEditorFlowCoordinator_EditMode;
}
namespace BeatSaber::AvatarCore {
struct AvatarEditorFlowCoordinator_FinishAction;
}
namespace BeatSaber::AvatarCore {
class AvatarEditorFlowCoordinator;
}
// Write type traits
MARK_VAL_T(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode);
MARK_VAL_T(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction);
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator);
// Dependencies
namespace BeatSaber::AvatarCore {
// Is value type: true
// CS Name: BeatSaber.AvatarCore.AvatarEditorFlowCoordinator/FinishAction
struct CORDL_TYPE AvatarEditorFlowCoordinator_FinishAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AvatarEditorFlowCoordinator_FinishAction_Unwrapped
  enum struct __AvatarEditorFlowCoordinator_FinishAction_Unwrapped : int32_t {
    __E_Cancel = static_cast<int32_t>(0x0),
    __E_Apply = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AvatarEditorFlowCoordinator_FinishAction_Unwrapped() const noexcept {
    return static_cast<__AvatarEditorFlowCoordinator_FinishAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarEditorFlowCoordinator_FinishAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AvatarEditorFlowCoordinator_FinishAction(int32_t value__) noexcept;

  /// @brief Field Apply value: I32(1)
  static ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction const Apply;

  /// @brief Field Cancel value: I32(0)
  static ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction const Cancel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17562 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction, 0x4>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
// Dependencies
namespace BeatSaber::AvatarCore {
// Is value type: true
// CS Name: BeatSaber.AvatarCore.AvatarEditorFlowCoordinator/EditMode
struct CORDL_TYPE AvatarEditorFlowCoordinator_EditMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AvatarEditorFlowCoordinator_EditMode_Unwrapped
  enum struct __AvatarEditorFlowCoordinator_EditMode_Unwrapped : int32_t {
    __E_Create = static_cast<int32_t>(0x0),
    __E_Edit = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AvatarEditorFlowCoordinator_EditMode_Unwrapped() const noexcept {
    return static_cast<__AvatarEditorFlowCoordinator_EditMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarEditorFlowCoordinator_EditMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AvatarEditorFlowCoordinator_EditMode(int32_t value__) noexcept;

  /// @brief Field Create value: I32(0)
  static ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode const Create;

  /// @brief Field Edit value: I32(1)
  static ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode const Edit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17563 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode, 0x4>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
// Dependencies HMUI.FlowCoordinator
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: BeatSaber.AvatarCore.AvatarEditorFlowCoordinator
class CORDL_TYPE AvatarEditorFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using EditMode = ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode;

  using FinishAction = ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction;

  /// @brief Field _initialized, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _selectedAvatarSystem, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAvatarSystem, put = __cordl_internal_set__selectedAvatarSystem)) ::BeatSaber::AvatarCore::IAvatarSystemMetadata* _selectedAvatarSystem;

  /// @brief Field didFinishEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                                                                                     ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>* didFinishEvent;

  /// @brief Field didSetupEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_didSetupEvent,
                      put = __cordl_internal_set_didSetupEvent)) ::System::Action_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode>* didSetupEvent;

  /// @brief Field randomizeAllButtonWasPressedEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_randomizeAllButtonWasPressedEvent, put = __cordl_internal_set_randomizeAllButtonWasPressedEvent)) ::System::Action* randomizeAllButtonWasPressedEvent;

  /// @brief Method Finish, addr 0x224b928, size 0x2c, virtual false, abstract: false, final false
  inline void Finish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction finishAction);

  /// @brief Method HandleBeatAvatarEditorRandomizeAllButtonWasPressed, addr 0x224b954, size 0x1c, virtual false, abstract: false, final false
  inline void HandleBeatAvatarEditorRandomizeAllButtonWasPressed();

  static inline ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* New_ctor();

  /// @brief Method OneTimeInitialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OneTimeInitialize();

  /// @brief Method SetAvatarSystem, addr 0x224b920, size 0x8, virtual false, abstract: false, final false
  inline void SetAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method Setup, addr 0x224b8c0, size 0x60, virtual true, abstract: false, final false
  inline void Setup(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode editMode);

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* const& __cordl_internal_get__selectedAvatarSystem() const;

  constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& __cordl_internal_get__selectedAvatarSystem();

  constexpr ::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                               ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>* const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                               ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>*&
  __cordl_internal_get_didFinishEvent();

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode>* const& __cordl_internal_get_didSetupEvent() const;

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode>*& __cordl_internal_get_didSetupEvent();

  constexpr ::System::Action* const& __cordl_internal_get_randomizeAllButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_randomizeAllButtonWasPressedEvent();

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__selectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                                                                        ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>* value);

  constexpr void __cordl_internal_set_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode>* value);

  constexpr void __cordl_internal_set_randomizeAllButtonWasPressedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x224b970, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x224b4c8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                                                    ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>* value);

  /// @brief Method add_didSetupEvent, addr 0x224b628, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode>* value);

  /// @brief Method add_randomizeAllButtonWasPressedEvent, addr 0x224b788, size 0x9c, virtual false, abstract: false, final false
  inline void add_randomizeAllButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x224b578, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                                                       ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>* value);

  /// @brief Method remove_didSetupEvent, addr 0x224b6d8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode>* value);

  /// @brief Method remove_randomizeAllButtonWasPressedEvent, addr 0x224b824, size 0x9c, virtual false, abstract: false, final false
  inline void remove_randomizeAllButtonWasPressedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarEditorFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarEditorFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarEditorFlowCoordinator(AvatarEditorFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarEditorFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarEditorFlowCoordinator(AvatarEditorFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17564 };

  /// @brief Field didFinishEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>, ::BeatSaber::AvatarCore::IAvatarSystemMetadata*,
                     ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction>* ___didFinishEvent;

  /// @brief Field didSetupEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode>* ___didSetupEvent;

  /// @brief Field randomizeAllButtonWasPressedEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action* ___randomizeAllButtonWasPressedEvent;

  /// @brief Field _selectedAvatarSystem, offset: 0xc8, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystemMetadata* ____selectedAvatarSystem;

  /// @brief Field _initialized, offset: 0xd0, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator, ___didFinishEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator, ___didSetupEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator, ___randomizeAllButtonWasPressedEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator, ____selectedAvatarSystem) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator, ____initialized) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator, 0xd8>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode, "BeatSaber.AvatarCore", "AvatarEditorFlowCoordinator/EditMode");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction, "BeatSaber.AvatarCore", "AvatarEditorFlowCoordinator/FinishAction");
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, "BeatSaber.AvatarCore", "AvatarEditorFlowCoordinator");
