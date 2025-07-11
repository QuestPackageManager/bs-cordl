#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngineInternal/Input/zzzz__NativeInputEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputEvent)
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputEvent);
// Dependencies UnityEngineInternal.Input.NativeInputEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.InputEvent
#pragma pack(push, 1)
struct CORDL_TYPE InputEvent {
public:
  // Declarations
  __declspec(property(get = get_deviceId, put = set_deviceId)) int32_t deviceId;

  __declspec(property(get = get_eventId, put = set_eventId)) int32_t eventId;

  __declspec(property(get = get_handled, put = set_handled)) bool handled;

  __declspec(property(get = get_internalTime, put = set_internalTime)) double_t internalTime;

  /// @brief Field m_Event, offset 0x0, size 0x14
  __declspec(property(get = __cordl_internal_get_m_Event, put = __cordl_internal_set_m_Event)) ::UnityEngineInternal::Input::NativeInputEvent m_Event;

  __declspec(property(get = get_sizeInBytes, put = set_sizeInBytes)) uint32_t sizeInBytes;

  __declspec(property(get = get_time, put = set_time)) double_t time;

  __declspec(property(get = get_type, put = set_type)) ::UnityEngine::InputSystem::Utilities::FourCC type;

  /// @brief Method Equals, addr 0x460a620, size 0x54, virtual false, abstract: false, final false
  static inline bool Equals(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> first, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> second);

  /// @brief Method GetNextInMemory, addr 0x460a498, size 0x1c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> GetNextInMemory(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> currentPtr);

  /// @brief Method GetNextInMemoryChecked, addr 0x460a4b4, size 0xe4, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> GetNextInMemoryChecked(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent> currentPtr,
                                                                                                                ::ByRef<::UnityEngine::InputSystem::LowLevel::InputEventBuffer> buffer);

  /// @brief Method ToString, addr 0x460a234, size 0x264, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngineInternal::Input::NativeInputEvent const& __cordl_internal_get_m_Event() const;

  constexpr ::UnityEngineInternal::Input::NativeInputEvent& __cordl_internal_get_m_Event();

  constexpr void __cordl_internal_set_m_Event(::UnityEngineInternal::Input::NativeInputEvent value);

  /// @brief Method .ctor, addr 0x4609a98, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t sizeInBytes, int32_t deviceId, double_t time);

  /// @brief Method get_deviceId, addr 0x460a138, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_deviceId();

  /// @brief Method get_eventId, addr 0x460a118, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_eventId();

  /// @brief Method get_handled, addr 0x460a20c, size 0xc, virtual false, abstract: false, final false
  inline bool get_handled();

  /// @brief Method get_internalTime, addr 0x460a1fc, size 0x8, virtual false, abstract: false, final false
  inline double_t get_internalTime();

  /// @brief Method get_sizeInBytes, addr 0x4609268, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_sizeInBytes();

  /// @brief Method get_time, addr 0x460a148, size 0x54, virtual false, abstract: false, final false
  inline double_t get_time();

  /// @brief Method get_type, addr 0x460a068, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_type();

  /// @brief Method set_deviceId, addr 0x460a140, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceId(int32_t value);

  /// @brief Method set_eventId, addr 0x460a124, size 0x14, virtual false, abstract: false, final false
  inline void set_eventId(int32_t value);

  /// @brief Method set_handled, addr 0x460a218, size 0x1c, virtual false, abstract: false, final false
  inline void set_handled(bool value);

  /// @brief Method set_internalTime, addr 0x460a204, size 0x8, virtual false, abstract: false, final false
  inline void set_internalTime(double_t value);

  /// @brief Method set_sizeInBytes, addr 0x460a078, size 0xa0, virtual false, abstract: false, final false
  inline void set_sizeInBytes(uint32_t value);

  /// @brief Method set_time, addr 0x460a19c, size 0x60, virtual false, abstract: false, final false
  inline void set_time(double_t value);

  /// @brief Method set_type, addr 0x460a070, size 0x8, virtual false, abstract: false, final false
  inline void set_type(::UnityEngine::InputSystem::Utilities::FourCC value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputEvent();

  // Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngineInternal::Input::NativeInputEvent", modifiers: "", def_value: None }]
  constexpr InputEvent(::UnityEngineInternal::Input::NativeInputEvent m_Event) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_Event_padding[0x0];
      /// @brief Field m_Event, offset: 0x0, size: 0x14, def value: None
      ::UnityEngineInternal::Input::NativeInputEvent ___m_Event;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_Event_padding_forAlignment[0x0];
      /// @brief Field m_Event, offset: 0x0, size: 0x14, def value: None
      ::UnityEngineInternal::Input::NativeInputEvent ___m_Event_forAlignment;
    };
  };

public:
  /// @brief Field InvalidEventId offset 0xffffffff size 0x4
  static constexpr int32_t InvalidEventId{ static_cast<int32_t>(0x0) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6940 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field kAlignment offset 0xffffffff size 0x4
  static constexpr int32_t kAlignment{ static_cast<int32_t>(0x4) };

  /// @brief Field kBaseEventSize offset 0xffffffff size 0x4
  static constexpr int32_t kBaseEventSize{ static_cast<int32_t>(0x14) };

  /// @brief Field kHandledMask offset 0xffffffff size 0x4
  static constexpr uint32_t kHandledMask{ static_cast<uint32_t>(0x80000000u) };

  /// @brief Field kIdMask offset 0xffffffff size 0x4
  static constexpr uint32_t kIdMask{ static_cast<uint32_t>(0x7fffffffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputEvent, 0x14>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputEvent, "UnityEngine.InputSystem.LowLevel", "InputEvent");
