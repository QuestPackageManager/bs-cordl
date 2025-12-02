#pragma once
// IWYU pragma private; include "HMUI/FlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlowCoordinator)
namespace HMUI {
struct FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41;
}
namespace HMUI {
struct FlowCoordinator__DismissChildViewControllersRecursively_d__42;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass39_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass40_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass43_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass44_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass45_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass47_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass48_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass51_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass52_0;
}
namespace HMUI {
class NavigationController;
}
namespace HMUI {
class ScreenSystem;
}
namespace HMUI {
struct ViewController_AnimationDirection;
}
namespace HMUI {
struct ViewController_AnimationType;
}
namespace HMUI {
class ViewController;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
// Forward declare root types
namespace HMUI {
class FlowCoordinator;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass39_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass40_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass43_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass44_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass45_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass47_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass48_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass51_0;
}
namespace HMUI {
class FlowCoordinator___c__DisplayClass52_0;
}
namespace HMUI {
struct FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41;
}
namespace HMUI {
struct FlowCoordinator__DismissChildViewControllersRecursively_d__42;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::FlowCoordinator);
MARK_REF_PTR_T(::HMUI::FlowCoordinator___c__DisplayClass39_0);
MARK_REF_PTR_T(::HMUI::FlowCoordinator___c__DisplayClass40_0);
MARK_REF_PTR_T(::HMUI::FlowCoordinator___c__DisplayClass43_0);
MARK_REF_PTR_T(::HMUI::FlowCoordinator___c__DisplayClass44_0);
MARK_REF_PTR_T(::HMUI::FlowCoordinator___c__DisplayClass45_0);
MARK_REF_PTR_T(::HMUI::FlowCoordinator___c__DisplayClass47_0);
MARK_REF_PTR_T(::HMUI::FlowCoordinator___c__DisplayClass48_0);
MARK_REF_PTR_T(::HMUI::FlowCoordinator___c__DisplayClass51_0);
MARK_REF_PTR_T(::HMUI::FlowCoordinator___c__DisplayClass52_0);
MARK_VAL_T(::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41);
MARK_VAL_T(::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42);
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.FlowCoordinator/<>c__DisplayClass39_0
class CORDL_TYPE FlowCoordinator___c__DisplayClass39_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::FlowCoordinator> __4__this;

  /// @brief Field finishedCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field flowCoordinator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_flowCoordinator, put = __cordl_internal_set_flowCoordinator)) ::UnityW<::HMUI::FlowCoordinator> flowCoordinator;

  static inline ::HMUI::FlowCoordinator___c__DisplayClass39_0* New_ctor();

  /// @brief Method <PresentFlowCoordinator>b__0, addr 0x31cd408, size 0x78, virtual false, abstract: false, final false
  inline void _PresentFlowCoordinator_b__0();

  /// @brief Method <PresentFlowCoordinator>b__1, addr 0x31cd390, size 0x78, virtual false, abstract: false, final false
  inline void _PresentFlowCoordinator_b__1();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get_flowCoordinator() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get_flowCoordinator();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_flowCoordinator(::UnityW<::HMUI::FlowCoordinator> value);

  /// @brief Method .ctor, addr 0x31cb374, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator___c__DisplayClass39_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass39_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinator___c__DisplayClass39_0(FlowCoordinator___c__DisplayClass39_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass39_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinator___c__DisplayClass39_0(FlowCoordinator___c__DisplayClass39_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20410 };

  /// @brief Field finishedCallback, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field flowCoordinator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> ___flowCoordinator;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass39_0, ___finishedCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass39_0, ___flowCoordinator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass39_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator___c__DisplayClass39_0, 0x28>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.FlowCoordinator/<>c__DisplayClass40_0
class CORDL_TYPE FlowCoordinator___c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::FlowCoordinator> __4__this;

  /// @brief Field finishedCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field flowCoordinator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_flowCoordinator, put = __cordl_internal_set_flowCoordinator)) ::UnityW<::HMUI::FlowCoordinator> flowCoordinator;

  /// @brief Field immediately, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_immediately, put = __cordl_internal_set_immediately)) bool immediately;

  /// @brief Field viewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_viewController, put = __cordl_internal_set_viewController)) ::UnityW<::HMUI::ViewController> viewController;

  static inline ::HMUI::FlowCoordinator___c__DisplayClass40_0* New_ctor();

  /// @brief Method <DismissFlowCoordinator>b__0, addr 0x31cd480, size 0x9c, virtual false, abstract: false, final false
  inline void _DismissFlowCoordinator_b__0();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get_flowCoordinator() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get_flowCoordinator();

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_viewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_viewController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_flowCoordinator(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set_immediately(bool value);

  constexpr void __cordl_internal_set_viewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x31cba18, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator___c__DisplayClass40_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinator___c__DisplayClass40_0(FlowCoordinator___c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinator___c__DisplayClass40_0(FlowCoordinator___c__DisplayClass40_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20411 };

  /// @brief Field immediately, offset: 0x10, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> _____4__this;

  /// @brief Field finishedCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field viewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___viewController;

  /// @brief Field flowCoordinator, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> ___flowCoordinator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass40_0, ___immediately) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass40_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass40_0, ___finishedCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass40_0, ___viewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass40_0, ___flowCoordinator) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator___c__DisplayClass40_0, 0x38>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.FlowCoordinator/<>c__DisplayClass43_0
class CORDL_TYPE FlowCoordinator___c__DisplayClass43_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::FlowCoordinator> __4__this;

  /// @brief Field finishedCallback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field flowCoordinator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_flowCoordinator, put = __cordl_internal_set_flowCoordinator)) ::UnityW<::HMUI::FlowCoordinator> flowCoordinator;

  /// @brief Field flowCoordinatorToReplace, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_flowCoordinatorToReplace, put = __cordl_internal_set_flowCoordinatorToReplace)) ::UnityW<::HMUI::FlowCoordinator> flowCoordinatorToReplace;

  static inline ::HMUI::FlowCoordinator___c__DisplayClass43_0* New_ctor();

  /// @brief Method <ReplaceChildFlowCoordinator>b__0, addr 0x31cd51c, size 0xa0, virtual false, abstract: false, final false
  inline void _ReplaceChildFlowCoordinator_b__0();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get_flowCoordinator() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get_flowCoordinator();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get_flowCoordinatorToReplace() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get_flowCoordinatorToReplace();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_flowCoordinator(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set_flowCoordinatorToReplace(::UnityW<::HMUI::FlowCoordinator> value);

  /// @brief Method .ctor, addr 0x31cbf10, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator___c__DisplayClass43_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass43_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinator___c__DisplayClass43_0(FlowCoordinator___c__DisplayClass43_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass43_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinator___c__DisplayClass43_0(FlowCoordinator___c__DisplayClass43_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20412 };

  /// @brief Field finishedCallback, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field flowCoordinator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> ___flowCoordinator;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> _____4__this;

  /// @brief Field flowCoordinatorToReplace, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> ___flowCoordinatorToReplace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass43_0, ___finishedCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass43_0, ___flowCoordinator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass43_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass43_0, ___flowCoordinatorToReplace) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator___c__DisplayClass43_0, 0x30>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.FlowCoordinator/<>c__DisplayClass44_0
class CORDL_TYPE FlowCoordinator___c__DisplayClass44_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::FlowCoordinator> __4__this;

  /// @brief Field finishedCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field immediately, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_immediately, put = __cordl_internal_set_immediately)) bool immediately;

  /// @brief Field topViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_topViewController, put = __cordl_internal_set_topViewController)) ::UnityW<::HMUI::ViewController> topViewController;

  static inline ::HMUI::FlowCoordinator___c__DisplayClass44_0* New_ctor();

  /// @brief Method <PresentViewController>b__0, addr 0x31cd5bc, size 0x80, virtual false, abstract: false, final false
  inline void _PresentViewController_b__0();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_topViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_topViewController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_immediately(bool value);

  constexpr void __cordl_internal_set_topViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x31cbf14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator___c__DisplayClass44_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass44_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinator___c__DisplayClass44_0(FlowCoordinator___c__DisplayClass44_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass44_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinator___c__DisplayClass44_0(FlowCoordinator___c__DisplayClass44_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20413 };

  /// @brief Field immediately, offset: 0x10, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> _____4__this;

  /// @brief Field finishedCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field topViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___topViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass44_0, ___immediately) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass44_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass44_0, ___finishedCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass44_0, ___topViewController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator___c__DisplayClass44_0, 0x30>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.FlowCoordinator/<>c__DisplayClass45_0
class CORDL_TYPE FlowCoordinator___c__DisplayClass45_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::FlowCoordinator> __4__this;

  /// @brief Field finishedCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field immediately, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_immediately, put = __cordl_internal_set_immediately)) bool immediately;

  /// @brief Field newTopViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_newTopViewController, put = __cordl_internal_set_newTopViewController)) ::UnityW<::HMUI::ViewController> newTopViewController;

  /// @brief Field taskCompletionSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_taskCompletionSource,
                      put = __cordl_internal_set_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* taskCompletionSource;

  static inline ::HMUI::FlowCoordinator___c__DisplayClass45_0* New_ctor();

  /// @brief Method <DismissViewController>b__0, addr 0x31cd63c, size 0xc0, virtual false, abstract: false, final false
  inline void _DismissViewController_b__0();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_newTopViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_newTopViewController();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& __cordl_internal_get_taskCompletionSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& __cordl_internal_get_taskCompletionSource();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_immediately(bool value);

  constexpr void __cordl_internal_set_newTopViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x31cc294, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator___c__DisplayClass45_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass45_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinator___c__DisplayClass45_0(FlowCoordinator___c__DisplayClass45_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass45_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinator___c__DisplayClass45_0(FlowCoordinator___c__DisplayClass45_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20414 };

  /// @brief Field immediately, offset: 0x10, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> _____4__this;

  /// @brief Field finishedCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field newTopViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___newTopViewController;

  /// @brief Field taskCompletionSource, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* ___taskCompletionSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass45_0, ___immediately) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass45_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass45_0, ___finishedCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass45_0, ___newTopViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass45_0, ___taskCompletionSource) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator___c__DisplayClass45_0, 0x38>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.ViewController::AnimationType, System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.FlowCoordinator/<>c__DisplayClass47_0
class CORDL_TYPE FlowCoordinator___c__DisplayClass47_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::FlowCoordinator> __4__this;

  /// @brief Field animationType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_animationType, put = __cordl_internal_set_animationType)) ::HMUI::ViewController_AnimationType animationType;

  /// @brief Field finishedCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field originalTopViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_originalTopViewController, put = __cordl_internal_set_originalTopViewController)) ::UnityW<::HMUI::ViewController> originalTopViewController;

  static inline ::HMUI::FlowCoordinator___c__DisplayClass47_0* New_ctor();

  /// @brief Method <ReplaceTopViewController>b__0, addr 0x31cd6fc, size 0x80, virtual false, abstract: false, final false
  inline void _ReplaceTopViewController_b__0();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::HMUI::ViewController_AnimationType const& __cordl_internal_get_animationType() const;

  constexpr ::HMUI::ViewController_AnimationType& __cordl_internal_get_animationType();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_originalTopViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_originalTopViewController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set_animationType(::HMUI::ViewController_AnimationType value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_originalTopViewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x31cc378, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator___c__DisplayClass47_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass47_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinator___c__DisplayClass47_0(FlowCoordinator___c__DisplayClass47_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass47_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinator___c__DisplayClass47_0(FlowCoordinator___c__DisplayClass47_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20415 };

  /// @brief Field animationType, offset: 0x10, size: 0x4, def value: None
  ::HMUI::ViewController_AnimationType ___animationType;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> _____4__this;

  /// @brief Field finishedCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field originalTopViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___originalTopViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass47_0, ___animationType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass47_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass47_0, ___finishedCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass47_0, ___originalTopViewController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator___c__DisplayClass47_0, 0x30>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.FlowCoordinator/<>c__DisplayClass48_0
class CORDL_TYPE FlowCoordinator___c__DisplayClass48_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::FlowCoordinator> __4__this;

  /// @brief Field finishedCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field immediately, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_immediately, put = __cordl_internal_set_immediately)) bool immediately;

  /// @brief Field viewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_viewController, put = __cordl_internal_set_viewController)) ::UnityW<::HMUI::ViewController> viewController;

  static inline ::HMUI::FlowCoordinator___c__DisplayClass48_0* New_ctor();

  /// @brief Method <PushViewControllerToNavigationController>b__0, addr 0x31cd77c, size 0x80, virtual false, abstract: false, final false
  inline void _PushViewControllerToNavigationController_b__0();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_viewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_viewController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_immediately(bool value);

  constexpr void __cordl_internal_set_viewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x31cc4fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator___c__DisplayClass48_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass48_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinator___c__DisplayClass48_0(FlowCoordinator___c__DisplayClass48_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass48_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinator___c__DisplayClass48_0(FlowCoordinator___c__DisplayClass48_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20416 };

  /// @brief Field immediately, offset: 0x10, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> _____4__this;

  /// @brief Field finishedCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field viewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___viewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass48_0, ___immediately) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass48_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass48_0, ___finishedCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass48_0, ___viewController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator___c__DisplayClass48_0, 0x30>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.FlowCoordinator/<>c__DisplayClass51_0
class CORDL_TYPE FlowCoordinator___c__DisplayClass51_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::FlowCoordinator> __4__this;

  /// @brief Field finishedCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field immediately, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_immediately, put = __cordl_internal_set_immediately)) bool immediately;

  /// @brief Field navigationController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_navigationController, put = __cordl_internal_set_navigationController)) ::UnityW<::HMUI::NavigationController> navigationController;

  static inline ::HMUI::FlowCoordinator___c__DisplayClass51_0* New_ctor();

  /// @brief Method <PopViewControllerFromNavigationController>b__0, addr 0x31cd7fc, size 0x80, virtual false, abstract: false, final false
  inline void _PopViewControllerFromNavigationController_b__0();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr ::UnityW<::HMUI::NavigationController> const& __cordl_internal_get_navigationController() const;

  constexpr ::UnityW<::HMUI::NavigationController>& __cordl_internal_get_navigationController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_immediately(bool value);

  constexpr void __cordl_internal_set_navigationController(::UnityW<::HMUI::NavigationController> value);

  /// @brief Method .ctor, addr 0x31cc7a0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator___c__DisplayClass51_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass51_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinator___c__DisplayClass51_0(FlowCoordinator___c__DisplayClass51_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass51_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinator___c__DisplayClass51_0(FlowCoordinator___c__DisplayClass51_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20417 };

  /// @brief Field immediately, offset: 0x10, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> _____4__this;

  /// @brief Field finishedCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field navigationController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::NavigationController> ___navigationController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass51_0, ___immediately) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass51_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass51_0, ___finishedCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass51_0, ___navigationController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator___c__DisplayClass51_0, 0x30>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.FlowCoordinator/<>c__DisplayClass52_0
class CORDL_TYPE FlowCoordinator___c__DisplayClass52_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::HMUI::FlowCoordinator> __4__this;

  /// @brief Field finishedCallback, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback)) ::System::Action* finishedCallback;

  /// @brief Field immediately, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_immediately, put = __cordl_internal_set_immediately)) bool immediately;

  /// @brief Field navigationController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_navigationController, put = __cordl_internal_set_navigationController)) ::UnityW<::HMUI::NavigationController> navigationController;

  static inline ::HMUI::FlowCoordinator___c__DisplayClass52_0* New_ctor();

  /// @brief Method <PopViewControllersFromNavigationController>b__0, addr 0x31cd87c, size 0x80, virtual false, abstract: false, final false
  inline void _PopViewControllersFromNavigationController_b__0();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_finishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_finishedCallback();

  constexpr bool const& __cordl_internal_get_immediately() const;

  constexpr bool& __cordl_internal_get_immediately();

  constexpr ::UnityW<::HMUI::NavigationController> const& __cordl_internal_get_navigationController() const;

  constexpr ::UnityW<::HMUI::NavigationController>& __cordl_internal_get_navigationController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set_immediately(bool value);

  constexpr void __cordl_internal_set_navigationController(::UnityW<::HMUI::NavigationController> value);

  /// @brief Method .ctor, addr 0x31cc914, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator___c__DisplayClass52_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass52_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinator___c__DisplayClass52_0(FlowCoordinator___c__DisplayClass52_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator___c__DisplayClass52_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinator___c__DisplayClass52_0(FlowCoordinator___c__DisplayClass52_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20418 };

  /// @brief Field immediately, offset: 0x10, size: 0x1, def value: None
  bool ___immediately;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> _____4__this;

  /// @brief Field finishedCallback, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___finishedCallback;

  /// @brief Field navigationController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::NavigationController> ___navigationController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass52_0, ___immediately) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass52_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass52_0, ___finishedCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator___c__DisplayClass52_0, ___navigationController) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator___c__DisplayClass52_0, 0x30>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace HMUI {
// Is value type: true
// CS Name: HMUI.FlowCoordinator/<DismissChildFlowCoordinatorsRecursively>d__41
struct CORDL_TYPE FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x31cd8fc, size 0x340, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31cdc3c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::HMUI::FlowCoordinator>", modifiers: "", def_value:
  // None }, CppParam { name: "immediately", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
  // None }]
  constexpr FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                           ::UnityW<::HMUI::FlowCoordinator> __4__this, bool immediately,
                                                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20419 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> __4__this;

  /// @brief Field immediately, offset: 0x28, size: 0x1, def value: None
  bool immediately;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41, immediately) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41, 0x38>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace HMUI {
// Is value type: true
// CS Name: HMUI.FlowCoordinator/<DismissChildViewControllersRecursively>d__42
struct CORDL_TYPE FlowCoordinator__DismissChildViewControllersRecursively_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x31cdca8, size 0x250, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x31cdef8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator__DismissChildViewControllersRecursively_d__42();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::HMUI::FlowCoordinator>", modifiers: "", def_value:
  // None }, CppParam { name: "immediately", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
  // None }]
  constexpr FlowCoordinator__DismissChildViewControllersRecursively_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                          ::UnityW<::HMUI::FlowCoordinator> __4__this, bool immediately,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20420 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> __4__this;

  /// @brief Field immediately, offset: 0x28, size: 0x1, def value: None
  bool immediately;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42, immediately) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42, 0x38>, "Size mismatch!");

} // namespace HMUI
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.FlowCoordinator
class CORDL_TYPE FlowCoordinator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DismissChildFlowCoordinatorsRecursively_d__41 = ::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41;

  using _DismissChildViewControllersRecursively_d__42 = ::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42;

  using __c__DisplayClass39_0 = ::HMUI::FlowCoordinator___c__DisplayClass39_0;

  using __c__DisplayClass40_0 = ::HMUI::FlowCoordinator___c__DisplayClass40_0;

  using __c__DisplayClass43_0 = ::HMUI::FlowCoordinator___c__DisplayClass43_0;

  using __c__DisplayClass44_0 = ::HMUI::FlowCoordinator___c__DisplayClass44_0;

  using __c__DisplayClass45_0 = ::HMUI::FlowCoordinator___c__DisplayClass45_0;

  using __c__DisplayClass47_0 = ::HMUI::FlowCoordinator___c__DisplayClass47_0;

  using __c__DisplayClass48_0 = ::HMUI::FlowCoordinator___c__DisplayClass48_0;

  using __c__DisplayClass51_0 = ::HMUI::FlowCoordinator___c__DisplayClass51_0;

  using __c__DisplayClass52_0 = ::HMUI::FlowCoordinator___c__DisplayClass52_0;

  /// @brief Field _baseInputModule, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__baseInputModule, put = __cordl_internal_set__baseInputModule)) ::UnityW<::UnityEngine::EventSystems::BaseInputModule> _baseInputModule;

  /// @brief Field _bottomScreenViewController, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__bottomScreenViewController, put = __cordl_internal_set__bottomScreenViewController)) ::UnityW<::HMUI::ViewController> _bottomScreenViewController;

  /// @brief Field _childFlowCoordinator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__childFlowCoordinator, put = __cordl_internal_set__childFlowCoordinator)) ::UnityW<::HMUI::FlowCoordinator> _childFlowCoordinator;

  /// @brief Field _isActivated, offset 0xa2, size 0x1
  __declspec(property(get = __cordl_internal_get__isActivated, put = __cordl_internal_set__isActivated)) bool _isActivated;

  /// @brief Field _isInDidActivatePhase, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get__isInDidActivatePhase, put = __cordl_internal_set__isInDidActivatePhase)) bool _isInDidActivatePhase;

  /// @brief Field _isInTransition, offset 0xa3, size 0x1
  __declspec(property(get = __cordl_internal_get__isInTransition, put = __cordl_internal_set__isInTransition)) bool _isInTransition;

  /// @brief Field _leftScreenViewController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__leftScreenViewController, put = __cordl_internal_set__leftScreenViewController)) ::UnityW<::HMUI::ViewController> _leftScreenViewController;

  /// @brief Field _mainScreenViewControllers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__mainScreenViewControllers,
                      put = __cordl_internal_set__mainScreenViewControllers)) ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* _mainScreenViewControllers;

  /// @brief Field _parentFlowCoordinator, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__parentFlowCoordinator, put = __cordl_internal_set__parentFlowCoordinator)) ::UnityW<::HMUI::FlowCoordinator> _parentFlowCoordinator;

  /// @brief Field _prevEventSystem, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__prevEventSystem, put = __cordl_internal_set__prevEventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem> _prevEventSystem;

  /// @brief Field _providedBottomScreenViewController, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__providedBottomScreenViewController, put = __cordl_internal_set__providedBottomScreenViewController)) ::UnityW<::HMUI::ViewController>
      _providedBottomScreenViewController;

  /// @brief Field _providedLeftScreenViewController, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__providedLeftScreenViewController, put = __cordl_internal_set__providedLeftScreenViewController)) ::UnityW<::HMUI::ViewController>
      _providedLeftScreenViewController;

  /// @brief Field _providedMainViewController, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__providedMainViewController, put = __cordl_internal_set__providedMainViewController)) ::UnityW<::HMUI::ViewController> _providedMainViewController;

  /// @brief Field _providedRightScreenViewController, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__providedRightScreenViewController, put = __cordl_internal_set__providedRightScreenViewController)) ::UnityW<::HMUI::ViewController>
      _providedRightScreenViewController;

  /// @brief Field _providedTopScreenViewController, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__providedTopScreenViewController, put = __cordl_internal_set__providedTopScreenViewController)) ::UnityW<::HMUI::ViewController>
      _providedTopScreenViewController;

  /// @brief Field _rightScreenViewController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__rightScreenViewController, put = __cordl_internal_set__rightScreenViewController)) ::UnityW<::HMUI::ViewController> _rightScreenViewController;

  /// @brief Field _screenSystem, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__screenSystem, put = __cordl_internal_set__screenSystem)) ::UnityW<::HMUI::ScreenSystem> _screenSystem;

  /// @brief Field _showBackButton, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get__showBackButton, put = __cordl_internal_set__showBackButton)) bool _showBackButton;

  /// @brief Field _title, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__title, put = __cordl_internal_set__title)) ::StringW _title;

  /// @brief Field _topScreenViewController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__topScreenViewController, put = __cordl_internal_set__topScreenViewController)) ::UnityW<::HMUI::ViewController> _topScreenViewController;

  /// @brief Field _viewControllersWereProvided, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__viewControllersWereProvided, put = __cordl_internal_set__viewControllersWereProvided)) bool _viewControllersWereProvided;

  /// @brief Field _wasActivatedBefore, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__wasActivatedBefore, put = __cordl_internal_set__wasActivatedBefore)) bool _wasActivatedBefore;

  __declspec(property(get = get_childFlowCoordinator)) ::UnityW<::HMUI::FlowCoordinator> childFlowCoordinator;

  __declspec(property(get = get_isActivated)) bool isActivated;

  __declspec(property(get = get_isInTransition)) bool isInTransition;

  __declspec(property(get = get_rightScreenViewController)) ::UnityW<::HMUI::ViewController> rightScreenViewController;

  __declspec(property(get = get_showBackButton, put = set_showBackButton)) bool showBackButton;

  __declspec(property(get = get_title)) ::StringW title;

  __declspec(property(get = get_topViewController)) ::UnityW<::HMUI::ViewController> topViewController;

  /// @brief Method Activate, addr 0x31ca730, size 0xcc, virtual false, abstract: false, final false
  inline void Activate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method BackButtonWasPressed, addr 0x31cd2b8, size 0x4, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method CanPressBackButton, addr 0x31cd1a4, size 0xf4, virtual false, abstract: false, final false
  inline bool CanPressBackButton();

  /// @brief Method Deactivate, addr 0x31cb378, size 0xb8, virtual false, abstract: false, final false
  inline void Deactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method DidActivate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x31cd298, size 0x4, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method DismissChildFlowCoordinatorsRecursively, addr 0x31cba58, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* DismissChildFlowCoordinatorsRecursively(bool immediately);

  /// @brief Method DismissChildViewControllersRecursively, addr 0x31cbb20, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* DismissChildViewControllersRecursively(bool immediately);

  /// @brief Method DismissFlowCoordinator, addr 0x31cb6d0, size 0x348, virtual false, abstract: false, final false
  inline void DismissFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator, ::HMUI::ViewController_AnimationDirection animationDirection, ::System::Action* finishedCallback, bool immediately);

  /// @brief Method DismissViewController, addr 0x31cc00c, size 0x288, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* DismissViewController(::HMUI::ViewController* viewController, ::HMUI::ViewController_AnimationDirection animationDirection,
                                                                 ::System::Action* finishedCallback, bool immediately);

  /// @brief Method HandleScreenSystemBackButtonWasPressed, addr 0x31cd16c, size 0x38, virtual false, abstract: false, final false
  inline void HandleScreenSystemBackButtonWasPressed();

  /// @brief Method InitialViewControllerWasPresented, addr 0x31cd2b4, size 0x4, virtual true, abstract: false, final false
  inline void InitialViewControllerWasPresented();

  /// @brief Method IsFlowCoordinatorInHierarchy, addr 0x31ca480, size 0xa4, virtual false, abstract: false, final false
  inline bool IsFlowCoordinatorInHierarchy(::HMUI::FlowCoordinator* flowCoordinator);

  /// @brief Method Log, addr 0x31cd2bc, size 0x5c, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  static inline ::HMUI::FlowCoordinator* New_ctor();

  /// @brief Method PopViewControllerFromNavigationController, addr 0x31cc644, size 0x15c, virtual false, abstract: false, final false
  inline void PopViewControllerFromNavigationController(::HMUI::NavigationController* navigationController, ::System::Action* finishedCallback, bool immediately);

  /// @brief Method PopViewControllersFromNavigationController, addr 0x31cc7b4, size 0x160, virtual false, abstract: false, final false
  inline void PopViewControllersFromNavigationController(::HMUI::NavigationController* navigationController, int32_t numberOfControllers, ::System::Action* finishedCallback, bool immediately);

  /// @brief Method PresentFlowCoordinator, addr 0x31caf48, size 0x42c, virtual false, abstract: false, final false
  inline void PresentFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately,
                                     bool replaceTopViewController);

  /// @brief Method PresentTitle, addr 0x31ca524, size 0x74, virtual false, abstract: false, final false
  inline void PresentTitle(::StringW title, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method PresentViewController, addr 0x31cab5c, size 0x3ec, virtual false, abstract: false, final false
  inline void PresentViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately);

  /// @brief Method ProvideInitialViewControllers, addr 0x31ccbf4, size 0x18, virtual false, abstract: false, final false
  inline void ProvideInitialViewControllers(::HMUI::ViewController* mainViewController, ::HMUI::ViewController* leftScreenViewController, ::HMUI::ViewController* rightScreenViewController,
                                            ::HMUI::ViewController* bottomScreenViewController, ::HMUI::ViewController* topScreenViewController);

  /// @brief Method PushViewControllerToNavigationController, addr 0x31cc39c, size 0x160, virtual false, abstract: false, final false
  inline void PushViewControllerToNavigationController(::HMUI::NavigationController* navigationController, ::HMUI::ViewController* viewController, ::System::Action* finishedCallback,
                                                       bool immediately);

  /// @brief Method ReplaceChildFlowCoordinator, addr 0x31cbbe8, size 0x328, virtual false, abstract: false, final false
  inline void ReplaceChildFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately);

  /// @brief Method ReplaceTopViewController, addr 0x31cc298, size 0xe0, virtual false, abstract: false, final false
  inline void ReplaceTopViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationType animationType,
                                       ::HMUI::ViewController_AnimationDirection animationDirection);

  /// @brief Method ReplaceTopViewController, addr 0x31cb460, size 0x270, virtual false, abstract: false, final false
  inline void ReplaceTopViewController(::HMUI::ViewController* viewController, ::HMUI::FlowCoordinator* originalOwnerFlowCoordinator, ::HMUI::FlowCoordinator* newOwnerFlowCoordinator,
                                       ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationType animationType, ::HMUI::ViewController_AnimationDirection animationDirection);

  /// @brief Method SetBottomScreenViewController, addr 0x31ca9ac, size 0xd8, virtual false, abstract: false, final false
  inline void SetBottomScreenViewController(::HMUI::ViewController* viewController, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method SetGlobalUserInteraction, addr 0x31cba1c, size 0x1c, virtual false, abstract: false, final false
  inline void SetGlobalUserInteraction(bool value);

  /// @brief Method SetLeftScreenViewController, addr 0x31ca7fc, size 0xd8, virtual false, abstract: false, final false
  inline void SetLeftScreenViewController(::HMUI::ViewController* viewController, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method SetRightScreenViewController, addr 0x31ca8d4, size 0xd8, virtual false, abstract: false, final false
  inline void SetRightScreenViewController(::HMUI::ViewController* viewController, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method SetTitle, addr 0x31ca430, size 0x50, virtual false, abstract: false, final false
  inline void SetTitle(::StringW value, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method SetTopScreenViewController, addr 0x31caa84, size 0xd8, virtual false, abstract: false, final false
  inline void SetTopScreenViewController(::HMUI::ViewController* viewController, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method SetViewControllerToNavigationController, addr 0x31cc62c, size 0x18, virtual false, abstract: false, final false
  inline void SetViewControllerToNavigationController(::HMUI::NavigationController* navigationController, ::HMUI::ViewController* viewController);

  /// @brief Method SetViewControllersToNavigationController, addr 0x31cc614, size 0x18, virtual false, abstract: false, final false
  inline void SetViewControllersToNavigationController(::HMUI::NavigationController* navigationController, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers);

  /// @brief Method TopViewControllerWillChange, addr 0x31cd2b0, size 0x4, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method TransitionDidFinish, addr 0x31cd2a8, size 0x8, virtual true, abstract: false, final false
  inline void TransitionDidFinish();

  /// @brief Method TransitionDidStart, addr 0x31cd29c, size 0xc, virtual true, abstract: false, final false
  inline void TransitionDidStart();

  /// @brief Method YoungestChildFlowCoordinatorOrSelf, addr 0x31ccb74, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::FlowCoordinator> YoungestChildFlowCoordinatorOrSelf();

  /// @brief Method __ExternalActivate, addr 0x31ccd64, size 0x1fc, virtual false, abstract: false, final false
  inline void __ExternalActivate();

  /// @brief Method __ExternalDeactivate, addr 0x31ccf60, size 0x20c, virtual false, abstract: false, final false
  inline void __ExternalDeactivate();

  /// @brief Method __StartOnScreenSystem, addr 0x31ca5a8, size 0x188, virtual false, abstract: false, final false
  inline void __StartOnScreenSystem(::HMUI::ScreenSystem* screenSystem);

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule> const& __cordl_internal_get__baseInputModule() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule>& __cordl_internal_get__baseInputModule();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__bottomScreenViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__bottomScreenViewController();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get__childFlowCoordinator() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get__childFlowCoordinator();

  constexpr bool const& __cordl_internal_get__isActivated() const;

  constexpr bool& __cordl_internal_get__isActivated();

  constexpr bool const& __cordl_internal_get__isInDidActivatePhase() const;

  constexpr bool& __cordl_internal_get__isInDidActivatePhase();

  constexpr bool const& __cordl_internal_get__isInTransition() const;

  constexpr bool& __cordl_internal_get__isInTransition();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__leftScreenViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__leftScreenViewController();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* const& __cordl_internal_get__mainScreenViewControllers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*& __cordl_internal_get__mainScreenViewControllers();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get__parentFlowCoordinator() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get__parentFlowCoordinator();

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& __cordl_internal_get__prevEventSystem() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& __cordl_internal_get__prevEventSystem();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__providedBottomScreenViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__providedBottomScreenViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__providedLeftScreenViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__providedLeftScreenViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__providedMainViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__providedMainViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__providedRightScreenViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__providedRightScreenViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__providedTopScreenViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__providedTopScreenViewController();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__rightScreenViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__rightScreenViewController();

  constexpr ::UnityW<::HMUI::ScreenSystem> const& __cordl_internal_get__screenSystem() const;

  constexpr ::UnityW<::HMUI::ScreenSystem>& __cordl_internal_get__screenSystem();

  constexpr bool const& __cordl_internal_get__showBackButton() const;

  constexpr bool& __cordl_internal_get__showBackButton();

  constexpr ::StringW const& __cordl_internal_get__title() const;

  constexpr ::StringW& __cordl_internal_get__title();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get__topScreenViewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get__topScreenViewController();

  constexpr bool const& __cordl_internal_get__viewControllersWereProvided() const;

  constexpr bool& __cordl_internal_get__viewControllersWereProvided();

  constexpr bool const& __cordl_internal_get__wasActivatedBefore() const;

  constexpr bool& __cordl_internal_get__wasActivatedBefore();

  constexpr void __cordl_internal_set__baseInputModule(::UnityW<::UnityEngine::EventSystems::BaseInputModule> value);

  constexpr void __cordl_internal_set__bottomScreenViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__childFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set__isActivated(bool value);

  constexpr void __cordl_internal_set__isInDidActivatePhase(bool value);

  constexpr void __cordl_internal_set__isInTransition(bool value);

  constexpr void __cordl_internal_set__leftScreenViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__mainScreenViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* value);

  constexpr void __cordl_internal_set__parentFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set__prevEventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value);

  constexpr void __cordl_internal_set__providedBottomScreenViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__providedLeftScreenViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__providedMainViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__providedRightScreenViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__providedTopScreenViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__rightScreenViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__screenSystem(::UnityW<::HMUI::ScreenSystem> value);

  constexpr void __cordl_internal_set__showBackButton(bool value);

  constexpr void __cordl_internal_set__title(::StringW value);

  constexpr void __cordl_internal_set__topScreenViewController(::UnityW<::HMUI::ViewController> value);

  constexpr void __cordl_internal_set__viewControllersWereProvided(bool value);

  constexpr void __cordl_internal_set__wasActivatedBefore(bool value);

  /// @brief Method .ctor, addr 0x31cd318, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childFlowCoordinator, addr 0x31ca410, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::FlowCoordinator> get_childFlowCoordinator();

  /// @brief Method get_isActivated, addr 0x31ca418, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActivated();

  /// @brief Method get_isInTransition, addr 0x31ca420, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInTransition();

  /// @brief Method get_rightScreenViewController, addr 0x31ca408, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_rightScreenViewController();

  /// @brief Method get_showBackButton, addr 0x31ca5a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_showBackButton();

  /// @brief Method get_title, addr 0x31ca428, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_title();

  /// @brief Method get_topViewController, addr 0x31ca384, size 0x84, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_topViewController();

  /// @brief Method set_showBackButton, addr 0x31ca598, size 0x8, virtual false, abstract: false, final false
  inline void set_showBackButton(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlowCoordinator(FlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlowCoordinator(FlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20421 };

  /// @brief Field _baseInputModule, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::BaseInputModule> ____baseInputModule;

  /// @brief Field _screenSystem, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::HMUI::ScreenSystem> ____screenSystem;

  /// @brief Field _parentFlowCoordinator, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> ____parentFlowCoordinator;

  /// @brief Field _childFlowCoordinator, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> ____childFlowCoordinator;

  /// @brief Field _mainScreenViewControllers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* ____mainScreenViewControllers;

  /// @brief Field _leftScreenViewController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____leftScreenViewController;

  /// @brief Field _rightScreenViewController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____rightScreenViewController;

  /// @brief Field _bottomScreenViewController, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____bottomScreenViewController;

  /// @brief Field _topScreenViewController, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____topScreenViewController;

  /// @brief Field _wasActivatedBefore, offset: 0x68, size: 0x1, def value: None
  bool ____wasActivatedBefore;

  /// @brief Field _title, offset: 0x70, size: 0x8, def value: None
  ::StringW ____title;

  /// @brief Field _providedMainViewController, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____providedMainViewController;

  /// @brief Field _providedLeftScreenViewController, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____providedLeftScreenViewController;

  /// @brief Field _providedRightScreenViewController, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____providedRightScreenViewController;

  /// @brief Field _providedBottomScreenViewController, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____providedBottomScreenViewController;

  /// @brief Field _providedTopScreenViewController, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ____providedTopScreenViewController;

  /// @brief Field _viewControllersWereProvided, offset: 0xa0, size: 0x1, def value: None
  bool ____viewControllersWereProvided;

  /// @brief Field _isInDidActivatePhase, offset: 0xa1, size: 0x1, def value: None
  bool ____isInDidActivatePhase;

  /// @brief Field _isActivated, offset: 0xa2, size: 0x1, def value: None
  bool ____isActivated;

  /// @brief Field _isInTransition, offset: 0xa3, size: 0x1, def value: None
  bool ____isInTransition;

  /// @brief Field _showBackButton, offset: 0xa4, size: 0x1, def value: None
  bool ____showBackButton;

  /// @brief Field _prevEventSystem, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> ____prevEventSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::FlowCoordinator, ____baseInputModule) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____screenSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____parentFlowCoordinator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____childFlowCoordinator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____mainScreenViewControllers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____leftScreenViewController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____rightScreenViewController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____bottomScreenViewController) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____topScreenViewController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____wasActivatedBefore) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____title) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____providedMainViewController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____providedLeftScreenViewController) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____providedRightScreenViewController) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____providedBottomScreenViewController) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____providedTopScreenViewController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____viewControllersWereProvided) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____isInDidActivatePhase) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____isActivated) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____isInTransition) == 0xa3, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____showBackButton) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::HMUI::FlowCoordinator, ____prevEventSystem) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator, 0xb0>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::FlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator*, "HMUI", "FlowCoordinator");
NEED_NO_BOX(::HMUI::FlowCoordinator___c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator___c__DisplayClass39_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass39_0");
NEED_NO_BOX(::HMUI::FlowCoordinator___c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator___c__DisplayClass40_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass40_0");
NEED_NO_BOX(::HMUI::FlowCoordinator___c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator___c__DisplayClass43_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass43_0");
NEED_NO_BOX(::HMUI::FlowCoordinator___c__DisplayClass44_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator___c__DisplayClass44_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass44_0");
NEED_NO_BOX(::HMUI::FlowCoordinator___c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator___c__DisplayClass45_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass45_0");
NEED_NO_BOX(::HMUI::FlowCoordinator___c__DisplayClass47_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator___c__DisplayClass47_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass47_0");
NEED_NO_BOX(::HMUI::FlowCoordinator___c__DisplayClass48_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator___c__DisplayClass48_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass48_0");
NEED_NO_BOX(::HMUI::FlowCoordinator___c__DisplayClass51_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator___c__DisplayClass51_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass51_0");
NEED_NO_BOX(::HMUI::FlowCoordinator___c__DisplayClass52_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator___c__DisplayClass52_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass52_0");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41, "HMUI", "FlowCoordinator/<DismissChildFlowCoordinatorsRecursively>d__41");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42, "HMUI", "FlowCoordinator/<DismissChildViewControllersRecursively>d__42");
