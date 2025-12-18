#pragma once
// IWYU pragma private; include "GlobalNamespace/CountdownController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CountdownController)
namespace GlobalNamespace {
class CountdownElementController;
}
namespace GlobalNamespace {
class ITimeProvider;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class CountdownController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CountdownController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CountdownController
class CORDL_TYPE CountdownController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _countdownElementControllerQueue, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__countdownElementControllerQueue,
      put = __cordl_internal_set__countdownElementControllerQueue)) ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::CountdownElementController>>* _countdownElementControllerQueue;

  /// @brief Field _countdownElementControllers, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__countdownElementControllers,
      put = __cordl_internal_set__countdownElementControllers)) ::ArrayW<::UnityW<::GlobalNamespace::CountdownElementController>, ::Array<::UnityW<::GlobalNamespace::CountdownElementController>>*>
      _countdownElementControllers;

  /// @brief Field _countdownEndTime, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__countdownEndTime, put = __cordl_internal_set__countdownEndTime)) int64_t _countdownEndTime;

  /// @brief Field _countdownRunning, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get__countdownRunning, put = __cordl_internal_set__countdownRunning)) bool _countdownRunning;

  /// @brief Field _currentRemainingSecond, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__currentRemainingSecond, put = __cordl_internal_set__currentRemainingSecond)) int32_t _currentRemainingSecond;

  /// @brief Field _gongSounded, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__gongSounded, put = __cordl_internal_set__gongSounded)) bool _gongSounded;

  /// @brief Field _timeProvider, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__timeProvider, put = __cordl_internal_set__timeProvider)) ::GlobalNamespace::ITimeProvider* _timeProvider;

  /// @brief Method Awake, addr 0x5868068, size 0x18, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::CountdownController* New_ctor();

  /// @brief Method StartCountdown, addr 0x58682c8, size 0xf0, virtual false, abstract: false, final false
  inline void StartCountdown(int64_t countdownEndTime);

  /// @brief Method StopCountdown, addr 0x5868440, size 0x74, virtual false, abstract: false, final false
  inline void StopCountdown();

  /// @brief Method Update, addr 0x5868080, size 0x1e8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateCountdown, addr 0x58683dc, size 0x64, virtual false, abstract: false, final false
  inline void UpdateCountdown(int64_t countdownEndTime);

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::CountdownElementController>>* const& __cordl_internal_get__countdownElementControllerQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::CountdownElementController>>*& __cordl_internal_get__countdownElementControllerQueue();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CountdownElementController>, ::Array<::UnityW<::GlobalNamespace::CountdownElementController>>*> const&
  __cordl_internal_get__countdownElementControllers() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::CountdownElementController>, ::Array<::UnityW<::GlobalNamespace::CountdownElementController>>*>& __cordl_internal_get__countdownElementControllers();

  constexpr int64_t const& __cordl_internal_get__countdownEndTime() const;

  constexpr int64_t& __cordl_internal_get__countdownEndTime();

  constexpr bool const& __cordl_internal_get__countdownRunning() const;

  constexpr bool& __cordl_internal_get__countdownRunning();

  constexpr int32_t const& __cordl_internal_get__currentRemainingSecond() const;

  constexpr int32_t& __cordl_internal_get__currentRemainingSecond();

  constexpr bool const& __cordl_internal_get__gongSounded() const;

  constexpr bool& __cordl_internal_get__gongSounded();

  constexpr ::GlobalNamespace::ITimeProvider* const& __cordl_internal_get__timeProvider() const;

  constexpr ::GlobalNamespace::ITimeProvider*& __cordl_internal_get__timeProvider();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__countdownElementControllerQueue(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::CountdownElementController>>* value);

  constexpr void
  __cordl_internal_set__countdownElementControllers(::ArrayW<::UnityW<::GlobalNamespace::CountdownElementController>, ::Array<::UnityW<::GlobalNamespace::CountdownElementController>>*> value);

  constexpr void __cordl_internal_set__countdownEndTime(int64_t value);

  constexpr void __cordl_internal_set__countdownRunning(bool value);

  constexpr void __cordl_internal_set__currentRemainingSecond(int32_t value);

  constexpr void __cordl_internal_set__gongSounded(bool value);

  constexpr void __cordl_internal_set__timeProvider(::GlobalNamespace::ITimeProvider* value);

  /// @brief Method .ctor, addr 0x58684b4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CountdownController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CountdownController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CountdownController(CountdownController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CountdownController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CountdownController(CountdownController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6409 };

  /// @brief Field kGongTime offset 0xffffffff size 0x8
  static constexpr int64_t kGongTime{ static_cast<int64_t>(0x1388) };

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _countdownElementControllers, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::CountdownElementController>, ::Array<::UnityW<::GlobalNamespace::CountdownElementController>>*> ____countdownElementControllers;

  /// @brief Field _timeProvider, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::ITimeProvider* ____timeProvider;

  /// @brief Field _countdownEndTime, offset: 0x38, size: 0x8, def value: None
  int64_t ____countdownEndTime;

  /// @brief Field _currentRemainingSecond, offset: 0x40, size: 0x4, def value: None
  int32_t ____currentRemainingSecond;

  /// @brief Field _gongSounded, offset: 0x44, size: 0x1, def value: None
  bool ____gongSounded;

  /// @brief Field _countdownRunning, offset: 0x45, size: 0x1, def value: None
  bool ____countdownRunning;

  /// @brief Field _countdownElementControllerQueue, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::CountdownElementController>>* ____countdownElementControllerQueue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CountdownController, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountdownController, ____countdownElementControllers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountdownController, ____timeProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountdownController, ____countdownEndTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountdownController, ____currentRemainingSecond) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountdownController, ____gongSounded) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountdownController, ____countdownRunning) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CountdownController, ____countdownElementControllerQueue) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CountdownController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CountdownController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CountdownController*, "", "CountdownController");
