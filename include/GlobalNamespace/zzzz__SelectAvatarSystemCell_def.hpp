#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectAvatarSystemCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectAvatarSystemCell)
namespace BeatSaber::AvatarCore {
class AvatarSelectionView;
}
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace GlobalNamespace {
struct __SelectAvatarSystemCell___Load_d__14;
}
namespace GlobalNamespace {
struct __SelectAvatarSystemCell___ReloadIsCreated_d__17;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectAvatarSystemCell;
}
namespace GlobalNamespace {
struct __SelectAvatarSystemCell___Load_d__14;
}
namespace GlobalNamespace {
struct __SelectAvatarSystemCell___ReloadIsCreated_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectAvatarSystemCell);
MARK_VAL_T(::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14);
MARK_VAL_T(::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17);
// Type: ::<Load>d__14
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SelectAvatarSystemCell::<Load>d__14
struct CORDL_TYPE __SelectAvatarSystemCell___Load_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3aa8684, size 0x590, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3aa8c14, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectAvatarSystemCell___Load_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SelectAvatarSystemCell>",
  // modifiers: "", def_value: None }, CppParam { name: "avatarSystemMetadata", ty: "::BeatSaber::AvatarCore::IAvatarSystemMetadata*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>>", modifiers: "", def_value: None }]
  constexpr __SelectAvatarSystemCell___Load_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                  ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> __4__this, ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata,
                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> __4__this;

  /// @brief Field avatarSystemMetadata, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4980 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14, avatarSystemMetadata) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ReloadIsCreated>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SelectAvatarSystemCell::<ReloadIsCreated>d__17
struct CORDL_TYPE __SelectAvatarSystemCell___ReloadIsCreated_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3aa8c20, size 0x2b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3aa8ed0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectAvatarSystemCell___ReloadIsCreated_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SelectAvatarSystemCell>",
  // modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty: "::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __SelectAvatarSystemCell___ReloadIsCreated_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                             ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> __4__this, ::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView> __7__wrap1,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> __4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView> __7__wrap1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4981 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SelectAvatarSystemCell
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 161, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SelectAvatarSystemCell*
class CORDL_TYPE SelectAvatarSystemCell : public ::HMUI::TableCell {
public:
  // Declarations
  using _Load_d__14 = ::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14;

  using _ReloadIsCreated_d__17 = ::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17;

  /// @brief Field _activateViewOnEnable, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__activateViewOnEnable, put = __cordl_internal_set__activateViewOnEnable)) bool _activateViewOnEnable;

  /// @brief Field _avatarSystemCollection, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarSystemCollection, put = __cordl_internal_set__avatarSystemCollection)) ::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _loadedAvatarSystemMetadata, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__loadedAvatarSystemMetadata,
                      put = __cordl_internal_set__loadedAvatarSystemMetadata)) ::BeatSaber::AvatarCore::IAvatarSystemMetadata* _loadedAvatarSystemMetadata;

  /// @brief Field _loadedSelectionView, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__loadedSelectionView, put = __cordl_internal_set__loadedSelectionView)) ::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView> _loadedSelectionView;

  /// @brief Field _selectedAvatarSystemMetadata, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAvatarSystemMetadata,
                      put = __cordl_internal_set__selectedAvatarSystemMetadata)) ::BeatSaber::AvatarCore::IAvatarSystemMetadata* _selectedAvatarSystemMetadata;

  /// @brief Field didRequestCreationOfAvatarEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didRequestCreationOfAvatarEvent,
                      put = __cordl_internal_set_didRequestCreationOfAvatarEvent)) ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didRequestCreationOfAvatarEvent;

  /// @brief Field didRequestEditOfAvatarEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didRequestEditOfAvatarEvent,
                      put = __cordl_internal_set_didRequestEditOfAvatarEvent)) ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didRequestEditOfAvatarEvent;

  /// @brief Field didSetAvatarSystemPreferredEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_didSetAvatarSystemPreferredEvent,
                      put = __cordl_internal_set_didSetAvatarSystemPreferredEvent)) ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didSetAvatarSystemPreferredEvent;

  /// @brief Method Activate, addr 0x3aa84e8, size 0xac, virtual false, abstract: false, final false
  inline void Activate();

  /// @brief Method Deactivate, addr 0x3aa8594, size 0x88, virtual false, abstract: false, final false
  inline void Deactivate();

  /// @brief Method HandleLoadedSelectionViewDidPressCreateButton, addr 0x3aa865c, size 0x20, virtual false, abstract: false, final false
  inline void HandleLoadedSelectionViewDidPressCreateButton();

  /// @brief Method HandleLoadedSelectionViewDidPressEditButton, addr 0x3aa863c, size 0x20, virtual false, abstract: false, final false
  inline void HandleLoadedSelectionViewDidPressEditButton();

  /// @brief Method HandleLoadedSelectionViewDidPressPreferredButton, addr 0x3aa861c, size 0x20, virtual false, abstract: false, final false
  inline void HandleLoadedSelectionViewDidPressPreferredButton();

  /// @brief Method Load, addr 0x3aa8284, size 0x98, virtual false, abstract: false, final false
  inline void Load(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata);

  static inline ::GlobalNamespace::SelectAvatarSystemCell* New_ctor();

  /// @brief Method OnEnable, addr 0x3aa831c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ReloadIsCreated, addr 0x3aa845c, size 0x8c, virtual false, abstract: false, final false
  inline void ReloadIsCreated();

  /// @brief Method SetSelectedAvatarSystem, addr 0x3aa83b4, size 0xa8, virtual false, abstract: false, final false
  inline void SetSelectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method TryActivateOnEnable, addr 0x3aa8320, size 0x94, virtual false, abstract: false, final false
  inline void TryActivateOnEnable();

  constexpr bool const& __cordl_internal_get__activateViewOnEnable() const;

  constexpr bool& __cordl_internal_get__activateViewOnEnable();

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __cordl_internal_get__avatarSystemCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& __cordl_internal_get__avatarSystemCollection() const;

  constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& __cordl_internal_get__loadedAvatarSystemMetadata();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> const& __cordl_internal_get__loadedAvatarSystemMetadata() const;

  constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView> const& __cordl_internal_get__loadedSelectionView() const;

  constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView>& __cordl_internal_get__loadedSelectionView();

  constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& __cordl_internal_get__selectedAvatarSystemMetadata();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> const& __cordl_internal_get__selectedAvatarSystemMetadata() const;

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __cordl_internal_get_didRequestCreationOfAvatarEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const& __cordl_internal_get_didRequestCreationOfAvatarEvent() const;

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __cordl_internal_get_didRequestEditOfAvatarEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const& __cordl_internal_get_didRequestEditOfAvatarEvent() const;

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __cordl_internal_get_didSetAvatarSystemPreferredEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const& __cordl_internal_get_didSetAvatarSystemPreferredEvent() const;

  constexpr void __cordl_internal_set__activateViewOnEnable(bool value);

  constexpr void __cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr void __cordl_internal_set__loadedAvatarSystemMetadata(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value);

  constexpr void __cordl_internal_set__loadedSelectionView(::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView> value);

  constexpr void __cordl_internal_set__selectedAvatarSystemMetadata(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value);

  constexpr void __cordl_internal_set_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr void __cordl_internal_set_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr void __cordl_internal_set_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method .ctor, addr 0x3aa867c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didRequestCreationOfAvatarEvent, addr 0x3aa8124, size 0xb0, virtual false, abstract: false, final false
  inline void add_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method add_didRequestEditOfAvatarEvent, addr 0x3aa7fc4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method add_didSetAvatarSystemPreferredEvent, addr 0x3aa7e64, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method remove_didRequestCreationOfAvatarEvent, addr 0x3aa81d4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method remove_didRequestEditOfAvatarEvent, addr 0x3aa8074, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method remove_didSetAvatarSystemPreferredEvent, addr 0x3aa7f14, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectAvatarSystemCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectAvatarSystemCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectAvatarSystemCell(SelectAvatarSystemCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectAvatarSystemCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectAvatarSystemCell(SelectAvatarSystemCell const&) = delete;

  /// @brief Field _avatarSystemCollection, offset: 0x68, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field didSetAvatarSystemPreferredEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didSetAvatarSystemPreferredEvent;

  /// @brief Field didRequestEditOfAvatarEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didRequestEditOfAvatarEvent;

  /// @brief Field didRequestCreationOfAvatarEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didRequestCreationOfAvatarEvent;

  /// @brief Field _loadedAvatarSystemMetadata, offset: 0x88, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystemMetadata* ____loadedAvatarSystemMetadata;

  /// @brief Field _selectedAvatarSystemMetadata, offset: 0x90, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystemMetadata* ____selectedAvatarSystemMetadata;

  /// @brief Field _loadedSelectionView, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::BeatSaber::AvatarCore::AvatarSelectionView> ____loadedSelectionView;

  /// @brief Field _activateViewOnEnable, offset: 0xa0, size: 0x1, def value: None
  bool ____activateViewOnEnable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4982 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectAvatarSystemCell, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemCell, ____avatarSystemCollection) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemCell, ___didSetAvatarSystemPreferredEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemCell, ___didRequestEditOfAvatarEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemCell, ___didRequestCreationOfAvatarEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemCell, ____loadedAvatarSystemMetadata) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemCell, ____selectedAvatarSystemMetadata) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemCell, ____loadedSelectionView) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemCell, ____activateViewOnEnable) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectAvatarSystemCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectAvatarSystemCell*, "", "SelectAvatarSystemCell");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14, "", "SelectAvatarSystemCell/<Load>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17, "", "SelectAvatarSystemCell/<ReloadIsCreated>d__17");
