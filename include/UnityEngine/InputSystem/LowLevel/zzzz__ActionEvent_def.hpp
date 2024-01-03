#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__ActionEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActionEvent)
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
struct __ActionEvent___m_ValueData_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct ActionEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __ActionEvent___m_ValueData_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::ActionEvent);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer);
// Type: ::<m_ValueData>e__FixedBuffer
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6518))
// CS Name: ::ActionEvent::<m_ValueData>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __ActionEvent___m_ValueData_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __ActionEvent___m_ValueData_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ActionEvent___m_ValueData_e__FixedBuffer();

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::ActionEvent
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 37, calculated_native_size: 53, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6518)), TypeDefinitionIndex(TypeDefinitionIndex(6530))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6519))
// CS Name: ::UnityEngine.InputSystem.LowLevel::ActionEvent
#pragma pack(push, 0)
struct CORDL_TYPE ActionEvent {
public:
  // Declarations
  using _m_ValueData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer;

  /// @brief Field baseEvent, offset 0x0, size 0x14
  __declspec(property(get = __get_baseEvent, put = __set_baseEvent))::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent;

  /// @brief Field m_ControlIndex, offset 0x14, size 0x2
  __declspec(property(get = __get_m_ControlIndex, put = __set_m_ControlIndex)) uint16_t m_ControlIndex;

  /// @brief Field m_BindingIndex, offset 0x16, size 0x2
  __declspec(property(get = __get_m_BindingIndex, put = __set_m_BindingIndex)) uint16_t m_BindingIndex;

  /// @brief Field m_InteractionIndex, offset 0x18, size 0x2
  __declspec(property(get = __get_m_InteractionIndex, put = __set_m_InteractionIndex)) uint16_t m_InteractionIndex;

  /// @brief Field m_StateIndex, offset 0x1a, size 0x1
  __declspec(property(get = __get_m_StateIndex, put = __set_m_StateIndex)) uint8_t m_StateIndex;

  /// @brief Field m_Phase, offset 0x1b, size 0x1
  __declspec(property(get = __get_m_Phase, put = __set_m_Phase)) uint8_t m_Phase;

  /// @brief Field m_StartTime, offset 0x1c, size 0x8
  __declspec(property(get = __get_m_StartTime, put = __set_m_StartTime)) double_t m_StartTime;

  /// @brief Field m_ValueData, offset 0x24, size 0x1
  __declspec(property(get = __get_m_ValueData, put = __set_m_ValueData))::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer m_ValueData;

  __declspec(property(get = get_startTime, put = set_startTime)) double_t startTime;

  __declspec(property(get = get_phase, put = set_phase))::UnityEngine::InputSystem::InputActionPhase phase;

  __declspec(property(get = get_valueData))::cordl_internals::Ptr<uint8_t> valueData;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_stateIndex, put = set_stateIndex)) int32_t stateIndex;

  __declspec(property(get = get_controlIndex, put = set_controlIndex)) int32_t controlIndex;

  __declspec(property(get = get_bindingIndex, put = set_bindingIndex)) int32_t bindingIndex;

  __declspec(property(get = get_interactionIndex, put = set_interactionIndex)) int32_t interactionIndex;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __get_baseEvent();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __get_baseEvent() const;

  constexpr void __set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value);

  constexpr uint16_t& __get_m_ControlIndex();

  constexpr uint16_t const& __get_m_ControlIndex() const;

  constexpr void __set_m_ControlIndex(uint16_t value);

  constexpr uint16_t& __get_m_BindingIndex();

  constexpr uint16_t const& __get_m_BindingIndex() const;

  constexpr void __set_m_BindingIndex(uint16_t value);

  constexpr uint16_t& __get_m_InteractionIndex();

  constexpr uint16_t const& __get_m_InteractionIndex() const;

  constexpr void __set_m_InteractionIndex(uint16_t value);

  constexpr uint8_t& __get_m_StateIndex();

  constexpr uint8_t const& __get_m_StateIndex() const;

  constexpr void __set_m_StateIndex(uint8_t value);

  constexpr uint8_t& __get_m_Phase();

  constexpr uint8_t const& __get_m_Phase() const;

  constexpr void __set_m_Phase(uint8_t value);

  constexpr double_t& __get_m_StartTime();

  constexpr double_t const& __get_m_StartTime() const;

  constexpr void __set_m_StartTime(double_t value);

  constexpr ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer& __get_m_ValueData();

  constexpr ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer const& __get_m_ValueData() const;

  constexpr void __set_m_ValueData(::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer value);

  /// @brief Method get_Type, addr 0x2ae91d0, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_startTime, addr 0x2ae9200, size 0x8, virtual false, abstract: false, final false
  inline double_t get_startTime();

  /// @brief Method set_startTime, addr 0x2ae9208, size 0x8, virtual false, abstract: false, final false
  inline void set_startTime(double_t value);

  /// @brief Method get_phase, addr 0x2ae9210, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionPhase get_phase();

  /// @brief Method set_phase, addr 0x2ae9218, size 0x8, virtual false, abstract: false, final false
  inline void set_phase(::UnityEngine::InputSystem::InputActionPhase value);

  /// @brief Method get_valueData, addr 0x2ae9220, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<uint8_t> get_valueData();

  /// @brief Method get_valueSizeInBytes, addr 0x2ae9228, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method get_stateIndex, addr 0x2ae923c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stateIndex();

  /// @brief Method set_stateIndex, addr 0x2ae9244, size 0x64, virtual false, abstract: false, final false
  inline void set_stateIndex(int32_t value);

  /// @brief Method get_controlIndex, addr 0x2ae92a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_controlIndex();

  /// @brief Method set_controlIndex, addr 0x2ae92b0, size 0x64, virtual false, abstract: false, final false
  inline void set_controlIndex(int32_t value);

  /// @brief Method get_bindingIndex, addr 0x2ae9314, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_bindingIndex();

  /// @brief Method set_bindingIndex, addr 0x2ae931c, size 0x64, virtual false, abstract: false, final false
  inline void set_bindingIndex(int32_t value);

  /// @brief Method get_interactionIndex, addr 0x2ae9380, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_interactionIndex();

  /// @brief Method set_interactionIndex, addr 0x2ae9394, size 0x74, virtual false, abstract: false, final false
  inline void set_interactionIndex(int32_t value);

  /// @brief Method ToEventPtr, addr 0x2ae9408, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr();

  /// @brief Method get_typeStatic, addr 0x2ae940c, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method GetEventSizeWithValueSize, addr 0x2ae943c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetEventSizeWithValueSize(int32_t valueSizeInBytes);

  /// @brief Method From, addr 0x2ae9444, size 0x12c, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::ActionEvent> From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr);

  // Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "m_ControlIndex", ty: "uint16_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_BindingIndex", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_StateIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_StartTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_ValueData", ty: "::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer", modifiers:
  // "", def_value: None }]
  constexpr ActionEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, uint16_t m_ControlIndex, uint16_t m_BindingIndex, uint16_t m_InteractionIndex, uint8_t m_StateIndex,
                        uint8_t m_Phase, double_t m_StartTime, ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer m_ValueData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ActionEvent();

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
      uint8_t ___m_ControlIndex_padding[0x14];
      /// @brief Field m_ControlIndex, offset: 0x14, size: 0x2, def value: None
      uint16_t ___m_ControlIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___m_ControlIndex_padding_forAlignment[0x14];
      /// @brief Field m_ControlIndex, offset: 0x14, size: 0x2, def value: None
      uint16_t ___m_ControlIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x16
      uint8_t ___m_BindingIndex_padding[0x16];
      /// @brief Field m_BindingIndex, offset: 0x16, size: 0x2, def value: None
      uint16_t ___m_BindingIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x16 for alignment
      uint8_t ___m_BindingIndex_padding_forAlignment[0x16];
      /// @brief Field m_BindingIndex, offset: 0x16, size: 0x2, def value: None
      uint16_t ___m_BindingIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___m_InteractionIndex_padding[0x18];
      /// @brief Field m_InteractionIndex, offset: 0x18, size: 0x2, def value: None
      uint16_t ___m_InteractionIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___m_InteractionIndex_padding_forAlignment[0x18];
      /// @brief Field m_InteractionIndex, offset: 0x18, size: 0x2, def value: None
      uint16_t ___m_InteractionIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1a
      uint8_t ___m_StateIndex_padding[0x1a];
      /// @brief Field m_StateIndex, offset: 0x1a, size: 0x1, def value: None
      uint8_t ___m_StateIndex;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1a for alignment
      uint8_t ___m_StateIndex_padding_forAlignment[0x1a];
      /// @brief Field m_StateIndex, offset: 0x1a, size: 0x1, def value: None
      uint8_t ___m_StateIndex_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1b
      uint8_t ___m_Phase_padding[0x1b];
      /// @brief Field m_Phase, offset: 0x1b, size: 0x1, def value: None
      uint8_t ___m_Phase;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1b for alignment
      uint8_t ___m_Phase_padding_forAlignment[0x1b];
      /// @brief Field m_Phase, offset: 0x1b, size: 0x1, def value: None
      uint8_t ___m_Phase_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___m_StartTime_padding[0x1c];
      /// @brief Field m_StartTime, offset: 0x1c, size: 0x8, def value: None
      double_t ___m_StartTime;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___m_StartTime_padding_forAlignment[0x1c];
      /// @brief Field m_StartTime, offset: 0x1c, size: 0x8, def value: None
      double_t ___m_StartTime_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x24
      uint8_t ___m_ValueData_padding[0x24];
      /// @brief Field m_ValueData, offset: 0x24, size: 0x1, def value: None
      ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer ___m_ValueData;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x24 for alignment
      uint8_t ___m_ValueData_padding_forAlignment[0x24];
      /// @brief Field m_ValueData, offset: 0x24, size: 0x1, def value: None
      ::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer ___m_ValueData_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::ActionEvent, 0x28>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::ActionEvent, "UnityEngine.InputSystem.LowLevel", "ActionEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__ActionEvent___m_ValueData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "ActionEvent/<m_ValueData>e__FixedBuffer");
