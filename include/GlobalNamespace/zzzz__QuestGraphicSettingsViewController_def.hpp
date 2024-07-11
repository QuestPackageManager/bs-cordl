#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestGraphicSettingsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QuestGraphicSettingsViewController)
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
}
namespace GlobalNamespace {
class PresetsSettingsController;
}
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8;
}
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___UpdatePreset_d__12;
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
struct __QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8;
}
namespace GlobalNamespace {
struct __QuestGraphicSettingsViewController___UpdatePreset_d__12;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuestGraphicSettingsViewController);
MARK_VAL_T(::GlobalNamespace::__QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8);
MARK_VAL_T(::GlobalNamespace::__QuestGraphicSettingsViewController___UpdatePreset_d__12);
// Type: ::<InitializeSettingsAsync>d__8
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::QuestGraphicSettingsViewController::<InitializeSettingsAsync>d__8
struct CORDL_TYPE __QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x268cc18, size 0x478, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x268d090, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::QuestGraphicSettingsViewController>", modifiers: "", def_value: None }, CppParam { name: "firstActivation", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8, firstActivation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdatePreset>d__12
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::QuestGraphicSettingsViewController::<UpdatePreset>d__12
struct CORDL_TYPE __QuestGraphicSettingsViewController___UpdatePreset_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x268d09c, size 0x4c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x268d564, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __QuestGraphicSettingsViewController___UpdatePreset_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::QuestGraphicSettingsViewController>", modifiers: "", def_value: None }, CppParam { name: "_prevPresetKey_5__2", ty: "::StringW", modifiers: "", def_value: None },
  // CppParam { name: "_presetKey_5__3", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*>", modifiers: "", def_value: None }]
  constexpr __QuestGraphicSettingsViewController___UpdatePreset_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                      ::UnityW<::GlobalNamespace::QuestGraphicSettingsViewController> __4__this, ::StringW _prevPresetKey_5__2,
                                                                      ::StringW _presetKey_5__3,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::QuestGraphicSettingsViewController> __4__this;

  /// @brief Field <prevPresetKey>5__2, offset: 0x30, size: 0x8, def value: None
  ::StringW _prevPresetKey_5__2;

  /// @brief Field <presetKey>5__3, offset: 0x38, size: 0x8, def value: None
  ::StringW _presetKey_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuestGraphicSettingsViewController___UpdatePreset_d__12, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___UpdatePreset_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___UpdatePreset_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___UpdatePreset_d__12, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___UpdatePreset_d__12, _prevPresetKey_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___UpdatePreset_d__12, _presetKey_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__QuestGraphicSettingsViewController___UpdatePreset_d__12, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::QuestGraphicSettingsViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuestGraphicSettingsViewController*
class CORDL_TYPE QuestGraphicSettingsViewController : public ::GlobalNamespace::GraphicSettingsViewController {
public:
  // Declarations
  using _InitializeSettingsAsync_d__8 = ::GlobalNamespace::__QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8;

  using _UpdatePreset_d__12 = ::GlobalNamespace::__QuestGraphicSettingsViewController___UpdatePreset_d__12;

  /// @brief Field _120HzMode, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__120HzMode, put = __cordl_internal_set__120HzMode))::UnityW<::UnityEngine::UI::Toggle> _120HzMode;

  /// @brief Field _mirror, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__mirror, put = __cordl_internal_set__mirror))::UnityW<::GlobalNamespace::PresetsSettingsController> _mirror;

  /// @brief Field _stinsonOnlyEntries, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__stinsonOnlyEntries,
                      put = __cordl_internal_set__stinsonOnlyEntries))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> _stinsonOnlyEntries;

  /// @brief Method DidActivate, addr 0x268c72c, size 0x214, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x268c9e0, size 0x8c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method GetPresetKey, addr 0x268cb08, size 0x108, virtual false, abstract: false, final false
  inline ::StringW GetPresetKey();

  /// @brief Method Handle120HzToggleValueChangedAsync, addr 0x268cb04, size 0x4, virtual false, abstract: false, final false
  inline void Handle120HzToggleValueChangedAsync(bool newState);

  /// @brief Method HandleMirrorChanged, addr 0x268ca6c, size 0x4, virtual false, abstract: false, final false
  inline void HandleMirrorChanged(int32_t newValue);

  /// @brief Method InitializeSettingsAsync, addr 0x268c940, size 0xa0, virtual false, abstract: false, final false
  inline void InitializeSettingsAsync(bool firstActivation);

  static inline ::GlobalNamespace::QuestGraphicSettingsViewController* New_ctor();

  /// @brief Method UpdatePreset, addr 0x268ca70, size 0x94, virtual false, abstract: false, final false
  inline void UpdatePreset();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__120HzMode() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__120HzMode();

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController> const& __cordl_internal_get__mirror() const;

  constexpr ::UnityW<::GlobalNamespace::PresetsSettingsController>& __cordl_internal_get__mirror();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__stinsonOnlyEntries() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__stinsonOnlyEntries();

  constexpr void __cordl_internal_set__120HzMode(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__mirror(::UnityW<::GlobalNamespace::PresetsSettingsController> value);

  constexpr void __cordl_internal_set__stinsonOnlyEntries(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  /// @brief Method .ctor, addr 0x268cc10, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _mirror, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PresetsSettingsController> ____mirror;

  /// @brief Field _120HzMode, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____120HzMode;

  /// @brief Field _stinsonOnlyEntries, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____stinsonOnlyEntries;

  /// @brief Field kBalancedPresetKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kBalancedPresetKey{ u"Balanced" };

  /// @brief Field kFrameratePresetKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kFrameratePresetKey{ u"Framerate" };

  /// @brief Field kNoMirrorSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString kNoMirrorSuffix{ u"_NoMirror" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuestGraphicSettingsViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestGraphicSettingsViewController, ____mirror) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestGraphicSettingsViewController, ____120HzMode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestGraphicSettingsViewController, ____stinsonOnlyEntries) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuestGraphicSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuestGraphicSettingsViewController*, "", "QuestGraphicSettingsViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuestGraphicSettingsViewController___InitializeSettingsAsync_d__8, "", "QuestGraphicSettingsViewController/<InitializeSettingsAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuestGraphicSettingsViewController___UpdatePreset_d__12, "", "QuestGraphicSettingsViewController/<UpdatePreset>d__12");
