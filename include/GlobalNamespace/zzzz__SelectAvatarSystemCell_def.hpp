#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarSelectionView_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectAvatarSystemCell)
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
struct __SelectAvatarSystemCell___Load_d__14;
}
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
class AvatarSelectionView;
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
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15177)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5065 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5808)) CS Name: ::SelectAvatarSystemCell::<Load>d__14
struct CORDL_TYPE __SelectAvatarSystemCell___Load_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x22e8fbc size 0x5b4 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22e9570 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SelectAvatarSystemCell*", modifiers: "",
  // def_value: None }, CppParam { name: "avatarSystemMetadata", ty: "::BeatSaber::AvatarCore::IAvatarSystemMetadata*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*>", modifiers: "", def_value: None }]
  constexpr __SelectAvatarSystemCell___Load_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::SelectAvatarSystemCell* __4__this,
                                                  ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata,
                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectAvatarSystemCell___Load_d__14();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SelectAvatarSystemCell* __4__this;

  /// @brief Field avatarSystemMetadata, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarSelectionView*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<ReloadIsCreated>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3400))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5809)) CS Name: ::SelectAvatarSystemCell::<ReloadIsCreated>d__17
struct CORDL_TYPE __SelectAvatarSystemCell___ReloadIsCreated_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x22e957c size 0x2b0 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22e982c size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SelectAvatarSystemCell*", modifiers: "",
  // def_value: None }, CppParam { name: "__7__wrap1", ty: "::BeatSaber::AvatarCore::AvatarSelectionView*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __SelectAvatarSystemCell___ReloadIsCreated_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                             ::GlobalNamespace::SelectAvatarSystemCell* __4__this, ::BeatSaber::AvatarCore::AvatarSelectionView* __7__wrap1,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectAvatarSystemCell___ReloadIsCreated_d__17();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SelectAvatarSystemCell* __4__this;

  /// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSelectionView* __7__wrap1;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SelectAvatarSystemCell
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5810))
// CS Name: ::SelectAvatarSystemCell*
class CORDL_TYPE SelectAvatarSystemCell : public ::HMUI::TableCell {
public:
  // Declarations
  using _ReloadIsCreated_d__17 = ::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17;

  using _Load_d__14 = ::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14;

  /// @brief Field _avatarSystemCollection, offset 0x58, size 0x8
  __declspec(property(get = __get__avatarSystemCollection, put = __set__avatarSystemCollection))::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field didSetAvatarSystemPreferredEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_didSetAvatarSystemPreferredEvent,
                      put = __set_didSetAvatarSystemPreferredEvent))::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didSetAvatarSystemPreferredEvent;

  /// @brief Field didRequestEditOfAvatarEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_didRequestEditOfAvatarEvent,
                      put = __set_didRequestEditOfAvatarEvent))::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didRequestEditOfAvatarEvent;

  /// @brief Field didRequestCreationOfAvatarEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_didRequestCreationOfAvatarEvent,
                      put = __set_didRequestCreationOfAvatarEvent))::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didRequestCreationOfAvatarEvent;

  /// @brief Field _loadedAvatarSystemMetadata, offset 0x78, size 0x8
  __declspec(property(get = __get__loadedAvatarSystemMetadata, put = __set__loadedAvatarSystemMetadata))::BeatSaber::AvatarCore::IAvatarSystemMetadata* _loadedAvatarSystemMetadata;

  /// @brief Field _selectedAvatarSystemMetadata, offset 0x80, size 0x8
  __declspec(property(get = __get__selectedAvatarSystemMetadata, put = __set__selectedAvatarSystemMetadata))::BeatSaber::AvatarCore::IAvatarSystemMetadata* _selectedAvatarSystemMetadata;

  /// @brief Field _loadedSelectionView, offset 0x88, size 0x8
  __declspec(property(get = __get__loadedSelectionView, put = __set__loadedSelectionView))::BeatSaber::AvatarCore::AvatarSelectionView* _loadedSelectionView;

  /// @brief Field _activateViewOnEnable, offset 0x90, size 0x1
  __declspec(property(get = __get__activateViewOnEnable, put = __set__activateViewOnEnable)) bool _activateViewOnEnable;

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __get__avatarSystemCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& __get__avatarSystemCollection() const;

  constexpr void __set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __get_didSetAvatarSystemPreferredEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const& __get_didSetAvatarSystemPreferredEvent() const;

  constexpr void __set_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __get_didRequestEditOfAvatarEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const& __get_didRequestEditOfAvatarEvent() const;

  constexpr void __set_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __get_didRequestCreationOfAvatarEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const& __get_didRequestCreationOfAvatarEvent() const;

  constexpr void __set_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& __get__loadedAvatarSystemMetadata();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> const& __get__loadedAvatarSystemMetadata() const;

  constexpr void __set__loadedAvatarSystemMetadata(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value);

  constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& __get__selectedAvatarSystemMetadata();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> const& __get__selectedAvatarSystemMetadata() const;

  constexpr void __set__selectedAvatarSystemMetadata(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value);

  constexpr ::BeatSaber::AvatarCore::AvatarSelectionView*& __get__loadedSelectionView();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSelectionView*> const& __get__loadedSelectionView() const;

  constexpr void __set__loadedSelectionView(::BeatSaber::AvatarCore::AvatarSelectionView* value);

  constexpr bool& __get__activateViewOnEnable();

  constexpr bool const& __get__activateViewOnEnable() const;

  constexpr void __set__activateViewOnEnable(bool value);

  /// @brief Method add_didSetAvatarSystemPreferredEvent addr 0x22e8794 size 0xb0 virtual false final false
  inline void add_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method remove_didSetAvatarSystemPreferredEvent addr 0x22e8844 size 0xb0 virtual false final false
  inline void remove_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method add_didRequestEditOfAvatarEvent addr 0x22e88f4 size 0xb0 virtual false final false
  inline void add_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method remove_didRequestEditOfAvatarEvent addr 0x22e89a4 size 0xb0 virtual false final false
  inline void remove_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method add_didRequestCreationOfAvatarEvent addr 0x22e8a54 size 0xb0 virtual false final false
  inline void add_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method remove_didRequestCreationOfAvatarEvent addr 0x22e8b04 size 0xb0 virtual false final false
  inline void remove_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method Load addr 0x22e8bb4 size 0x9c virtual false final false
  inline void Load(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystemMetadata);

  /// @brief Method OnEnable addr 0x22e8c50 size 0x4 virtual false final false
  inline void OnEnable();

  /// @brief Method SetSelectedAvatarSystem addr 0x22e8ce8 size 0xa8 virtual false final false
  inline void SetSelectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method ReloadIsCreated addr 0x22e8d90 size 0x90 virtual false final false
  inline void ReloadIsCreated();

  /// @brief Method Activate addr 0x22e8e20 size 0xac virtual false final false
  inline void Activate();

  /// @brief Method Deactivate addr 0x22e8ecc size 0x88 virtual false final false
  inline void Deactivate();

  /// @brief Method TryActivateOnEnable addr 0x22e8c54 size 0x94 virtual false final false
  inline void TryActivateOnEnable();

  /// @brief Method HandleLoadedSelectionViewDidPressPreferredButton addr 0x22e8f54 size 0x20 virtual false final false
  inline void HandleLoadedSelectionViewDidPressPreferredButton();

  /// @brief Method HandleLoadedSelectionViewDidPressEditButton addr 0x22e8f74 size 0x20 virtual false final false
  inline void HandleLoadedSelectionViewDidPressEditButton();

  /// @brief Method HandleLoadedSelectionViewDidPressCreateButton addr 0x22e8f94 size 0x20 virtual false final false
  inline void HandleLoadedSelectionViewDidPressCreateButton();

  static inline ::GlobalNamespace::SelectAvatarSystemCell* New_ctor();

  /// @brief Method .ctor addr 0x22e8fb4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SelectAvatarSystemCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectAvatarSystemCell(SelectAvatarSystemCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectAvatarSystemCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectAvatarSystemCell(SelectAvatarSystemCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectAvatarSystemCell();

public:
  /// @brief Field _avatarSystemCollection, offset: 0x58, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field didSetAvatarSystemPreferredEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didSetAvatarSystemPreferredEvent;

  /// @brief Field didRequestEditOfAvatarEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didRequestEditOfAvatarEvent;

  /// @brief Field didRequestCreationOfAvatarEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didRequestCreationOfAvatarEvent;

  /// @brief Field _loadedAvatarSystemMetadata, offset: 0x78, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystemMetadata* ____loadedAvatarSystemMetadata;

  /// @brief Field _selectedAvatarSystemMetadata, offset: 0x80, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystemMetadata* ____selectedAvatarSystemMetadata;

  /// @brief Field _loadedSelectionView, offset: 0x88, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSelectionView* ____loadedSelectionView;

  /// @brief Field _activateViewOnEnable, offset: 0x90, size: 0x1, def value: None
  bool ____activateViewOnEnable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectAvatarSystemCell, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectAvatarSystemCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectAvatarSystemCell*, "", "SelectAvatarSystemCell");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectAvatarSystemCell___Load_d__14, "", "SelectAvatarSystemCell/<Load>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectAvatarSystemCell___ReloadIsCreated_d__17, "", "SelectAvatarSystemCell/<ReloadIsCreated>d__17");
