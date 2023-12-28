#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_def.hpp"
#include "GlobalNamespace/zzzz__PerformancePreset_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuestGraphicSettingsViewController)
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class PerformancePreset;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class QuestGraphicSettingsViewController;
}
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5;
}
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuestGraphicSettingsViewController);
MARK_VAL_T(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5);
MARK_VAL_T(::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4);
// Type: ::<Initialize120HzToggleAsync>d__4
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5757)) CS Name: ::QuestGraphicSettingsViewController::<Initialize120HzToggleAsync>d__4
struct CORDL_TYPE __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x22daa9c size 0x3b8 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22dae54 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::QuestGraphicSettingsViewController*",
  // modifiers: "", def_value: None }, CppParam { name: "firstActivation", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                   ::GlobalNamespace::QuestGraphicSettingsViewController* __4__this, bool firstActivation,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::QuestGraphicSettingsViewController* __4__this;

  /// @brief Field firstActivation, offset: 0x30, size: 0x1, def value: None
  bool firstActivation;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<Handle120HzToggleValueChangedAsync>d__5
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2507)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(4443)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 896 }), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2507), inst: 5315 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 870 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5758)) CS Name:
// ::QuestGraphicSettingsViewController::<Handle120HzToggleValueChangedAsync>d__5
struct CORDL_TYPE __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x22dae60 size 0x724 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22db584 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::QuestGraphicSettingsViewController*",
  // modifiers: "", def_value: None }, CppParam { name: "newState", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_prevPerformancePresetKey_5__2", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "_prevTargetFramerate_5__3", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>", modifiers: "", def_value: None }]
  constexpr __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::QuestGraphicSettingsViewController* __4__this, bool newState,
      ::StringW _prevPerformancePresetKey_5__2, float_t _prevTargetFramerate_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::QuestGraphicSettingsViewController* __4__this;

  /// @brief Field newState, offset: 0x30, size: 0x1, def value: None
  bool newState;

  /// @brief Field <prevPerformancePresetKey>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _prevPerformancePresetKey_5__2;

  /// @brief Field <prevTargetFramerate>5__3, offset: 0x40, size: 0x4, def value: None
  float_t _prevTargetFramerate_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::QuestGraphicSettingsViewController
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5753))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5759))
// CS Name: ::QuestGraphicSettingsViewController*
class CORDL_TYPE QuestGraphicSettingsViewController : public ::GlobalNamespace::GraphicSettingsViewController {
public:
  // Declarations
  using _Handle120HzToggleValueChangedAsync_d__5 = ::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5;

  using _Initialize120HzToggleAsync_d__4 = ::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4;

  /// @brief Field _120HzMode, offset 0x78, size 0x8
  __declspec(property(get = __get__120HzMode, put = __set__120HzMode))::UnityEngine::UI::Toggle* _120HzMode;

  /// @brief Field _stinsonOnlyEntries, offset 0x80, size 0x8
  __declspec(property(get = __get__stinsonOnlyEntries, put = __set__stinsonOnlyEntries))::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> _stinsonOnlyEntries;

  constexpr ::UnityEngine::UI::Toggle*& __get__120HzMode();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__120HzMode() const;

  constexpr void __set__120HzMode(::UnityEngine::UI::Toggle* value);

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& __get__stinsonOnlyEntries();

  constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& __get__stinsonOnlyEntries() const;

  constexpr void __set__stinsonOnlyEntries(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value);

  /// @brief Method DidActivate addr 0x22da840 size 0x10c virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Initialize120HzToggleAsync addr 0x22da94c size 0xa0 virtual false final false
  inline void Initialize120HzToggleAsync(bool firstActivation);

  /// @brief Method Handle120HzToggleValueChangedAsync addr 0x22da9ec size 0xa8 virtual false final false
  inline void Handle120HzToggleValueChangedAsync(bool newState);

  static inline ::GlobalNamespace::QuestGraphicSettingsViewController* New_ctor();

  /// @brief Method .ctor addr 0x22daa94 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "QuestGraphicSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuestGraphicSettingsViewController(QuestGraphicSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuestGraphicSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuestGraphicSettingsViewController(QuestGraphicSettingsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestGraphicSettingsViewController();

public:
  /// @brief Field _120HzMode, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____120HzMode;

  /// @brief Field _stinsonOnlyEntries, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> ____stinsonOnlyEntries;

  /// @brief Field k120HzPerformancePreset offset 0xffffffff size 0x8
  static constexpr ::ConstString k120HzPerformancePreset{ u"Framerate" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuestGraphicSettingsViewController, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuestGraphicSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuestGraphicSettingsViewController*, "", "QuestGraphicSettingsViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, "",
                       "QuestGraphicSettingsViewController/<Handle120HzToggleValueChangedAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4, "", "QuestGraphicSettingsViewController/<Initialize120HzToggleAsync>d__4");
