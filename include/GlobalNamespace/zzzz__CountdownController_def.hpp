#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CountdownController)
namespace GlobalNamespace {
class CountdownElementController;
}
namespace GlobalNamespace {
class ITimeProvider;
}
namespace UnityEngine {
class AudioSource;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CountdownController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CountdownController);
// Type: ::CountdownController
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5558))
// CS Name: ::CountdownController*
class CORDL_TYPE CountdownController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x18, size 0x8
  __declspec(property(get = __get__audioSource, put = __set__audioSource))::UnityEngine::AudioSource* _audioSource;

  /// @brief Field _countdownElementControllers, offset 0x20, size 0x8
  __declspec(property(
      get = __get__countdownElementControllers,
      put = __set__countdownElementControllers))::ArrayW<::GlobalNamespace::CountdownElementController*, ::Array<::GlobalNamespace::CountdownElementController*>*> _countdownElementControllers;

  /// @brief Field _timeProvider, offset 0x28, size 0x8
  __declspec(property(get = __get__timeProvider, put = __set__timeProvider))::GlobalNamespace::ITimeProvider* _timeProvider;

  /// @brief Field _countdownEndTime, offset 0x30, size 0x8
  __declspec(property(get = __get__countdownEndTime, put = __set__countdownEndTime)) int64_t _countdownEndTime;

  /// @brief Field _currentRemainingSecond, offset 0x38, size 0x4
  __declspec(property(get = __get__currentRemainingSecond, put = __set__currentRemainingSecond)) int32_t _currentRemainingSecond;

  /// @brief Field _gongSounded, offset 0x3c, size 0x1
  __declspec(property(get = __get__gongSounded, put = __set__gongSounded)) bool _gongSounded;

  /// @brief Field _countdownRunning, offset 0x3d, size 0x1
  __declspec(property(get = __get__countdownRunning, put = __set__countdownRunning)) bool _countdownRunning;

  /// @brief Field _countdownElementControllerQueue, offset 0x40, size 0x8
  __declspec(property(get = __get__countdownElementControllerQueue,
                      put = __set__countdownElementControllerQueue))::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>* _countdownElementControllerQueue;

  constexpr ::UnityEngine::AudioSource*& __get__audioSource();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> const& __get__audioSource() const;

  constexpr void __set__audioSource(::UnityEngine::AudioSource* value);

  constexpr ::ArrayW<::GlobalNamespace::CountdownElementController*, ::Array<::GlobalNamespace::CountdownElementController*>*>& __get__countdownElementControllers();

  constexpr ::ArrayW<::GlobalNamespace::CountdownElementController*, ::Array<::GlobalNamespace::CountdownElementController*>*> const& __get__countdownElementControllers() const;

  constexpr void __set__countdownElementControllers(::ArrayW<::GlobalNamespace::CountdownElementController*, ::Array<::GlobalNamespace::CountdownElementController*>*> value);

  constexpr ::GlobalNamespace::ITimeProvider*& __get__timeProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ITimeProvider*> const& __get__timeProvider() const;

  constexpr void __set__timeProvider(::GlobalNamespace::ITimeProvider* value);

  constexpr int64_t& __get__countdownEndTime();

  constexpr int64_t const& __get__countdownEndTime() const;

  constexpr void __set__countdownEndTime(int64_t value);

  constexpr int32_t& __get__currentRemainingSecond();

  constexpr int32_t const& __get__currentRemainingSecond() const;

  constexpr void __set__currentRemainingSecond(int32_t value);

  constexpr bool& __get__gongSounded();

  constexpr bool const& __get__gongSounded() const;

  constexpr void __set__gongSounded(bool value);

  constexpr bool& __get__countdownRunning();

  constexpr bool const& __get__countdownRunning() const;

  constexpr void __set__countdownRunning(bool value);

  constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>*& __get__countdownElementControllerQueue();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>*> const& __get__countdownElementControllerQueue() const;

  constexpr void __set__countdownElementControllerQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>* value);

  /// @brief Method Awake addr 0x22a2f54 size 0x18 virtual false final false
  inline void Awake();

  /// @brief Method Update addr 0x22a2f6c size 0x1dc virtual false final false
  inline void Update();

  /// @brief Method StartCountdown addr 0x22a31ac size 0xf4 virtual false final false
  inline void StartCountdown(int64_t countdownEndTime);

  /// @brief Method UpdateCountdown addr 0x22a32c4 size 0x68 virtual false final false
  inline void UpdateCountdown(int64_t countdownEndTime);

  /// @brief Method StopCountdown addr 0x22a332c size 0x78 virtual false final false
  inline void StopCountdown();

  static inline ::GlobalNamespace::CountdownController* New_ctor();

  /// @brief Method .ctor addr 0x22a33a4 size 0x84 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CountdownController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CountdownController(CountdownController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CountdownController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CountdownController(CountdownController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CountdownController();

public:
  /// @brief Field _audioSource, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::AudioSource* ____audioSource;

  /// @brief Field _countdownElementControllers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::CountdownElementController*, ::Array<::GlobalNamespace::CountdownElementController*>*> ____countdownElementControllers;

  /// @brief Field _timeProvider, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ITimeProvider* ____timeProvider;

  /// @brief Field _countdownEndTime, offset: 0x30, size: 0x8, def value: None
  int64_t ____countdownEndTime;

  /// @brief Field _currentRemainingSecond, offset: 0x38, size: 0x4, def value: None
  int32_t ____currentRemainingSecond;

  /// @brief Field _gongSounded, offset: 0x3c, size: 0x1, def value: None
  bool ____gongSounded;

  /// @brief Field _countdownRunning, offset: 0x3d, size: 0x1, def value: None
  bool ____countdownRunning;

  /// @brief Field _countdownElementControllerQueue, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>* ____countdownElementControllerQueue;

  /// @brief Field kGongTime offset 0xffffffff size 0x8
  static constexpr int64_t kGongTime{ static_cast<int64_t>(0x1388) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CountdownController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CountdownController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CountdownController*, "", "CountdownController");
