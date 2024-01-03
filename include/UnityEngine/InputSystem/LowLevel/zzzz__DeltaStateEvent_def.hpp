#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeltaStateEvent)
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
struct __DeltaStateEvent___stateData_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct DeltaStateEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __DeltaStateEvent___stateData_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::DeltaStateEvent);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer);
// Type: ::<stateData>e__FixedBuffer
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6520))
// CS Name: ::DeltaStateEvent::<stateData>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __DeltaStateEvent___stateData_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __DeltaStateEvent___stateData_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeltaStateEvent___stateData_e__FixedBuffer();

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::DeltaStateEvent
// SizeInfo { instance_size: 29, native_size: 29, calculated_instance_size: 29, calculated_native_size: 45, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: Some(1) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6520)), TypeDefinitionIndex(TypeDefinitionIndex(6667)), TypeDefinitionIndex(TypeDefinitionIndex(6530))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6521))
// CS Name: ::UnityEngine.InputSystem.LowLevel::DeltaStateEvent
#pragma pack(push, 1)
struct CORDL_TYPE DeltaStateEvent {
public:
  // Declarations
  using _stateData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer;

  /// @brief Field baseEvent, offset 0x0, size 0x14
  __declspec(property(get = __get_baseEvent, put = __set_baseEvent))::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent;

  /// @brief Field stateFormat, offset 0x14, size 0x4
  __declspec(property(get = __get_stateFormat, put = __set_stateFormat))::UnityEngine::InputSystem::Utilities::FourCC stateFormat;

  /// @brief Field stateOffset, offset 0x18, size 0x4
  __declspec(property(get = __get_stateOffset, put = __set_stateOffset)) uint32_t stateOffset;

  /// @brief Field stateData, offset 0x1c, size 0x1
  __declspec(property(get = __get_stateData, put = __set_stateData))::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer stateData;

  __declspec(property(get = get_deltaStateSizeInBytes)) uint32_t deltaStateSizeInBytes;

  __declspec(property(get = get_deltaState))::cordl_internals::Ptr<void> deltaState;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __get_baseEvent();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __get_baseEvent() const;

  constexpr void __set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value);

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __get_stateFormat();

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __get_stateFormat() const;

  constexpr void __set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value);

  constexpr uint32_t& __get_stateOffset();

  constexpr uint32_t const& __get_stateOffset() const;

  constexpr void __set_stateOffset(uint32_t value);

  constexpr ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer& __get_stateData();

  constexpr ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer const& __get_stateData() const;

  constexpr void __set_stateData(::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer value);

  /// @brief Method get_deltaStateSizeInBytes, addr 0x2ae9570, size 0xc, virtual false, abstract: false, final false
  inline uint32_t get_deltaStateSizeInBytes();

  /// @brief Method get_deltaState, addr 0x2ae957c, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> get_deltaState();

  /// @brief Method get_typeStatic, addr 0x2ae9584, size 0x20, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method ToEventPtr, addr 0x2ae95a4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr ToEventPtr();

  /// @brief Method From, addr 0x2ae95a8, size 0x130, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent> From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr);

  /// @brief Method FromUnchecked, addr 0x2ae96d8, size 0x4, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent> FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr);

  /// @brief Method From, addr 0x2ae96dc, size 0x318, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint8_t> From(::UnityEngine::InputSystem::InputControl* control, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr,
                                                                  ::Unity::Collections::Allocator allocator);

  // Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "stateFormat", ty:
  // "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "stateOffset", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "stateData",
  // ty: "::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr DeltaStateEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, ::UnityEngine::InputSystem::Utilities::FourCC stateFormat, uint32_t stateOffset,
                            ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer stateData) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DeltaStateEvent();

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
      uint8_t ___stateOffset_padding[0x18];
      /// @brief Field stateOffset, offset: 0x18, size: 0x4, def value: None
      uint32_t ___stateOffset;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___stateOffset_padding_forAlignment[0x18];
      /// @brief Field stateOffset, offset: 0x18, size: 0x4, def value: None
      uint32_t ___stateOffset_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___stateData_padding[0x1c];
      /// @brief Field stateData, offset: 0x1c, size: 0x1, def value: None
      ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer ___stateData;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___stateData_padding_forAlignment[0x1c];
      /// @brief Field stateData, offset: 0x1c, size: 0x1, def value: None
      ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer ___stateData_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1d };

  /// @brief Field Type offset 0xffffffff size 0x4
  static constexpr int32_t Type{ static_cast<int32_t>(0x444c5441) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent, 0x1d>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::DeltaStateEvent, "UnityEngine.InputSystem.LowLevel", "DeltaStateEvent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "DeltaStateEvent/<stateData>e__FixedBuffer");
