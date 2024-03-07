#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/PerformancePresets/zzzz__PerformancePreset_def.hpp"
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuestGraphicSettingsViewController)
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
}
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5;
}
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4;
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
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class GameObject;
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
// CS Name: ::QuestGraphicSettingsViewController::<Initialize120HzToggleAsync>d__4
struct CORDL_TYPE __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x243d9a8, size 0x3b8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x243dd60, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::QuestGraphicSettingsViewController>", modifiers: "", def_value: None }, CppParam { name: "firstActivation", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                   ::UnityW<::GlobalNamespace::QuestGraphicSettingsViewController> __4__this, bool firstActivation,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::QuestGraphicSettingsViewController> __4__this;

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

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4, firstActivation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Handle120HzToggleValueChangedAsync>d__5
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::QuestGraphicSettingsViewController::<Handle120HzToggleValueChangedAsync>d__5
struct CORDL_TYPE __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x243dd6c, size 0x724, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x243e490, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::QuestGraphicSettingsViewController>", modifiers: "", def_value: None }, CppParam { name: "newState", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "_prevPerformancePresetKey_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_prevTargetFramerate_5__3", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::BeatSaber::PerformancePresets::PerformancePreset*>>", modifiers: "", def_value: None }]
  constexpr __QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::QuestGraphicSettingsViewController> __4__this, bool newState,
      ::StringW _prevPerformancePresetKey_5__2, float_t _prevTargetFramerate_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::QuestGraphicSettingsViewController> __4__this;

  /// @brief Field newState, offset: 0x30, size: 0x1, def value: None
  bool newState;

  /// @brief Field <prevPerformancePresetKey>5__2, offset: 0x38, size: 0x8, def value: None
  ::StringW _prevPerformancePresetKey_5__2;

  /// @brief Field <prevTargetFramerate>5__3, offset: 0x40, size: 0x4, def value: None
  float_t _prevTargetFramerate_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__1;

  /// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, newState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, _prevPerformancePresetKey_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, _prevTargetFramerate_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, __u__2) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::QuestGraphicSettingsViewController
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuestGraphicSettingsViewController*
class CORDL_TYPE QuestGraphicSettingsViewController : public ::GlobalNamespace::GraphicSettingsViewController {
public:
  // Declarations
  using _Handle120HzToggleValueChangedAsync_d__5 = ::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5;

  using _Initialize120HzToggleAsync_d__4 = ::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4;

  /// @brief Field _120HzMode, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__120HzMode, put = __cordl_internal_set__120HzMode))::UnityW<::UnityEngine::UI::Toggle> _120HzMode;

  /// @brief Field _stinsonOnlyEntries, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__stinsonOnlyEntries,
                      put = __cordl_internal_set__stinsonOnlyEntries))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> _stinsonOnlyEntries;

  /// @brief Method DidActivate, addr 0x243d74c, size 0x10c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Handle120HzToggleValueChangedAsync, addr 0x243d8f8, size 0xa8, virtual false, abstract: false, final false
  inline void Handle120HzToggleValueChangedAsync(bool newState);

  /// @brief Method Initialize120HzToggleAsync, addr 0x243d858, size 0xa0, virtual false, abstract: false, final false
  inline void Initialize120HzToggleAsync(bool firstActivation);

  static inline ::GlobalNamespace::QuestGraphicSettingsViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__120HzMode() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__120HzMode();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__stinsonOnlyEntries() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__stinsonOnlyEntries();

  constexpr void __cordl_internal_set__120HzMode(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__stinsonOnlyEntries(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  /// @brief Method .ctor, addr 0x243d9a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuestGraphicSettingsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuestGraphicSettingsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuestGraphicSettingsViewController(QuestGraphicSettingsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuestGraphicSettingsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuestGraphicSettingsViewController(QuestGraphicSettingsViewController const&) = delete;

  /// @brief Field _120HzMode, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____120HzMode;

  /// @brief Field _stinsonOnlyEntries, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____stinsonOnlyEntries;

  /// @brief Field k120HzPerformancePreset offset 0xffffffff size 0x8
  static constexpr ::ConstString k120HzPerformancePreset{ u"Framerate" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuestGraphicSettingsViewController, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestGraphicSettingsViewController, ____120HzMode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestGraphicSettingsViewController, ____stinsonOnlyEntries) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuestGraphicSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuestGraphicSettingsViewController*, "", "QuestGraphicSettingsViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuestGraphicSettingsViewController___Handle120HzToggleValueChangedAsync_d__5, "",
                       "QuestGraphicSettingsViewController/<Handle120HzToggleValueChangedAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuestGraphicSettingsViewController___Initialize120HzToggleAsync_d__4, "", "QuestGraphicSettingsViewController/<Initialize120HzToggleAsync>d__4");
