#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StateEvent)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __StateEvent___stateData_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct StateEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __StateEvent___stateData_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::StateEvent);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer);
// Type: ::<stateData>e__FixedBuffer
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::StateEvent::<stateData>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __StateEvent___stateData_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StateEvent___stateData_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __StateEvent___stateData_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::StateEvent
// SizeInfo { instance_size: 25, native_size: 25, calculated_instance_size: 25, calculated_native_size: 41, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: Some(1) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::StateEvent
#pragma pack(push, 1)
struct CORDL_TYPE StateEvent {
public:
  // Declarations
  using _stateData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer;

  /// @brief Field baseEvent, offset 0x0, size 0x14
  __declspec(property(get = __cordl_internal_get_baseEvent, put = __cordl_internal_set_baseEvent))::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent;

  __declspec(property(get = get_state))::cordl_internals::Ptr<void> state;

  /// @brief Field stateData, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_stateData, put = __cordl_internal_set_stateData))::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer stateData;

  /// @brief Field stateFormat, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_stateFormat, put = __cordl_internal_set_stateFormat))::UnityEngine::InputSystem::Utilities::FourCC stateFormat;

  __declspec(property(get = get_stateSizeInBytes)) uint32_t stateSizeInBytes;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*();

  /// @brief Method From, addr 0x2bd7098, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint8_t> From(::UnityEngine::InputSystem::InputDevice* device, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr,
                                                                  ::Unity::Collections::Allocator allocator);

  /// @brief Method From, addr 0x2bd70a0, size 0x338, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint8_t> From(::UnityEngine::InputSystem::InputDevice* device, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr,
                                                                  ::Unity::Collections::Allocator allocator, bool useDefaultState);

  /// @brief Method From, addr 0x2bd27b0, size 0x130, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::StateEvent> From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr);

  /// @brief Method FromDefaultStateFor, addr 0x2bd73d8, size 0x8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint8_t> FromDefaultStateFor(::UnityEngine::InputSystem::InputDevice* device, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr,
                                                                                 ::Unity::Collections::Allocator allocator);

  /// @brief Method FromUnchecked, addr 0x2bd25f8, size 0x4, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::StateEvent> FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr);

  /// @brief Method GetEventSizeWithPayload, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TState> static inline int32_t GetEventSizeWithPayload();

  /// @brief Method GetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TState> inline TState GetState();

  /// @brief Method GetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TState> static inline TState GetState(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr);

  /// @brief Method ToEventPtr, addr 0x2bd7074, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __cordl_internal_get_baseEvent() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __cordl_internal_get_baseEvent();

  constexpr ::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer const& __cordl_internal_get_stateData() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer& __cordl_internal_get_stateData();

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __cordl_internal_get_stateFormat() const;

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __cordl_internal_get_stateFormat();

  constexpr void __cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value);

  constexpr void __cordl_internal_set_stateData(::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer value);

  constexpr void __cordl_internal_set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value);

  /// @brief Method get_state, addr 0x2bd706c, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> get_state();

  /// @brief Method get_stateSizeInBytes, addr 0x2bd28e0, size 0xc, virtual false, abstract: false, final false
  inline uint32_t get_stateSizeInBytes();

  /// @brief Method get_typeStatic, addr 0x2bd7078, size 0x20, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StateEvent();

  // Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "stateFormat", ty:
  // "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "stateData", ty:
  // "::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr StateEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, ::UnityEngine::InputSystem::Utilities::FourCC stateFormat,
                       ::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer stateData) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___baseEvent_padding[0x0];
      /// @brief Field baseEvent, offset: 0x0, size: 0x14, def value: None
      ::UnityEngine::InputSystem::LowLevel::InputEvent ___baseEvent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___baseEvent_padding_forAlignment[0x0];
      /// @brief Field baseEvent, offset: 0x0, size: 0x14, def value: None
      ::UnityEngine::InputSystem::LowLevel::InputEvent ___baseEvent_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___stateFormat_padding[0x14];
      /// @brief Field stateFormat, offset: 0x14, size: 0x4, def value: None
      ::UnityEngine::InputSystem::Utilities::FourCC ___stateFormat;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___stateFormat_padding_forAlignment[0x14];
      /// @brief Field stateFormat, offset: 0x14, size: 0x4, def value: None
      ::UnityEngine::InputSystem::Utilities::FourCC ___stateFormat_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___stateData_padding[0x18];
      /// @brief Field stateData, offset: 0x18, size: 0x1, def value: None
      ::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer ___stateData;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___stateData_padding_forAlignment[0x18];
      /// @brief Field stateData, offset: 0x18, size: 0x1, def value: None
      ::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer ___stateData_forAlignment;
    };
  };

public:
  /// @brief Field Type offset 0xffffffff size 0x4
  static constexpr int32_t Type{ static_cast<int32_t>(0x53544154) };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x19 };

  /// @brief Field kStateDataSizeToSubtract offset 0xffffffff size 0x4
  static constexpr int32_t kStateDataSizeToSubtract{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::StateEvent, 0x19>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::StateEvent, "UnityEngine.InputSystem.LowLevel", "StateEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__StateEvent___stateData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "StateEvent/<stateData>e__FixedBuffer");
