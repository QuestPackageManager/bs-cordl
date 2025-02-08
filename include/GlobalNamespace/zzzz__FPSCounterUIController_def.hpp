#pragma once
// IWYU pragma private; include "GlobalNamespace/FPSCounterUIController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FPSCounterUIController)
namespace GlobalNamespace {
class FPSCounterUIController__Start_d__9;
}
namespace GlobalNamespace {
class FPSCounter;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class FPSCounterUIController;
}
namespace GlobalNamespace {
class FPSCounterUIController__Start_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FPSCounterUIController);
MARK_REF_PTR_T(::GlobalNamespace::FPSCounterUIController__Start_d__9);
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FPSCounterUIController/<Start>d__9
class CORDL_TYPE FPSCounterUIController__Start_d__9 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::FPSCounterUIController> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39c34cc, size 0x94, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::FPSCounterUIController__Start_d__9* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39c3560, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39c3568, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39c35a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39c34c8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::FPSCounterUIController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::FPSCounterUIController>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::FPSCounterUIController> value);

  /// @brief Method .ctor, addr 0x39c3350, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FPSCounterUIController__Start_d__9();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FPSCounterUIController__Start_d__9", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FPSCounterUIController__Start_d__9(FPSCounterUIController__Start_d__9&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FPSCounterUIController__Start_d__9", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FPSCounterUIController__Start_d__9(FPSCounterUIController__Start_d__9 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18859 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FPSCounterUIController> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FPSCounterUIController__Start_d__9, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounterUIController__Start_d__9, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounterUIController__Start_d__9, _____4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FPSCounterUIController__Start_d__9, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FPSCounterUIController
class CORDL_TYPE FPSCounterUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__9 = ::GlobalNamespace::FPSCounterUIController__Start_d__9;

  /// @brief Field _currentFPSText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__currentFPSText, put = __cordl_internal_set__currentFPSText)) ::UnityW<::TMPro::TextMeshProUGUI> _currentFPSText;

  /// @brief Field _droppedFramesText, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__droppedFramesText, put = __cordl_internal_set__droppedFramesText)) ::UnityW<::TMPro::TextMeshProUGUI> _droppedFramesText;

  /// @brief Field _fpsCounter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__fpsCounter, put = __cordl_internal_set__fpsCounter)) ::UnityW<::GlobalNamespace::FPSCounter> _fpsCounter;

  /// @brief Field _gameScenesManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _highestFPSText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__highestFPSText, put = __cordl_internal_set__highestFPSText)) ::UnityW<::TMPro::TextMeshProUGUI> _highestFPSText;

  /// @brief Field _lowestFPSText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lowestFPSText, put = __cordl_internal_set__lowestFPSText)) ::UnityW<::TMPro::TextMeshProUGUI> _lowestFPSText;

  /// @brief Field _timeToUpdateUI, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__timeToUpdateUI, put = __cordl_internal_set__timeToUpdateUI)) float_t _timeToUpdateUI;

  /// @brief Field _uiUpdateTimeInterval, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__uiUpdateTimeInterval, put = __cordl_internal_set__uiUpdateTimeInterval)) float_t _uiUpdateTimeInterval;

  /// @brief Method Awake, addr 0x39c3290, size 0x60, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x39c3378, size 0x140, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::FPSCounterUIController* New_ctor();

  /// @brief Method Start, addr 0x39c32f0, size 0x60, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Start();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__currentFPSText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__currentFPSText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__droppedFramesText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__droppedFramesText();

  constexpr ::UnityW<::GlobalNamespace::FPSCounter> const& __cordl_internal_get__fpsCounter() const;

  constexpr ::UnityW<::GlobalNamespace::FPSCounter>& __cordl_internal_get__fpsCounter();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__highestFPSText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__highestFPSText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__lowestFPSText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__lowestFPSText();

  constexpr float_t const& __cordl_internal_get__timeToUpdateUI() const;

  constexpr float_t& __cordl_internal_get__timeToUpdateUI();

  constexpr float_t const& __cordl_internal_get__uiUpdateTimeInterval() const;

  constexpr float_t& __cordl_internal_get__uiUpdateTimeInterval();

  constexpr void __cordl_internal_set__currentFPSText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__droppedFramesText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__fpsCounter(::UnityW<::GlobalNamespace::FPSCounter> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__highestFPSText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__lowestFPSText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__timeToUpdateUI(float_t value);

  constexpr void __cordl_internal_set__uiUpdateTimeInterval(float_t value);

  /// @brief Method .ctor, addr 0x39c34b8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FPSCounterUIController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FPSCounterUIController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FPSCounterUIController(FPSCounterUIController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FPSCounterUIController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FPSCounterUIController(FPSCounterUIController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18860 };

  /// @brief Field _uiUpdateTimeInterval, offset: 0x20, size: 0x4, def value: None
  float_t ____uiUpdateTimeInterval;

  /// @brief Field _currentFPSText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____currentFPSText;

  /// @brief Field _lowestFPSText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____lowestFPSText;

  /// @brief Field _highestFPSText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____highestFPSText;

  /// @brief Field _droppedFramesText, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____droppedFramesText;

  /// @brief Field _gameScenesManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _fpsCounter, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FPSCounter> ____fpsCounter;

  /// @brief Field _timeToUpdateUI, offset: 0x58, size: 0x4, def value: None
  float_t ____timeToUpdateUI;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FPSCounterUIController, ____uiUpdateTimeInterval) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounterUIController, ____currentFPSText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounterUIController, ____lowestFPSText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounterUIController, ____highestFPSText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounterUIController, ____droppedFramesText) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounterUIController, ____gameScenesManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounterUIController, ____fpsCounter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FPSCounterUIController, ____timeToUpdateUI) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FPSCounterUIController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FPSCounterUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FPSCounterUIController*, "", "FPSCounterUIController");
NEED_NO_BOX(::GlobalNamespace::FPSCounterUIController__Start_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FPSCounterUIController__Start_d__9*, "", "FPSCounterUIController/<Start>d__9");
