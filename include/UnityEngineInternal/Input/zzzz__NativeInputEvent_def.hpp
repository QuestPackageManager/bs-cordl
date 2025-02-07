#pragma once
// IWYU pragma private; include "UnityEngineInternal/Input/NativeInputEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngineInternal/Input/zzzz__NativeInputEventType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeInputEvent)
// Forward declare root types
namespace UnityEngineInternal::Input {
struct NativeInputEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::Input::NativeInputEvent);
// Dependencies UnityEngineInternal.Input.NativeInputEventType
namespace UnityEngineInternal::Input {
// Is value type: true
// CS Name: UnityEngineInternal.Input.NativeInputEvent
#pragma pack(push, 1)
struct CORDL_TYPE NativeInputEvent {
public:
  // Declarations
  /// @brief Field deviceId, offset 0x6, size 0x2
  __declspec(property(get = __cordl_internal_get_deviceId, put = __cordl_internal_set_deviceId)) uint16_t deviceId;

  /// @brief Field eventId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_eventId, put = __cordl_internal_set_eventId)) int32_t eventId;

  /// @brief Field sizeInBytes, offset 0x4, size 0x2
  __declspec(property(get = __cordl_internal_get_sizeInBytes, put = __cordl_internal_set_sizeInBytes)) uint16_t sizeInBytes;

  /// @brief Field time, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) double_t time;

  /// @brief Field type, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::UnityEngineInternal::Input::NativeInputEventType type;

  constexpr uint16_t const& __cordl_internal_get_deviceId() const;

  constexpr uint16_t& __cordl_internal_get_deviceId();

  constexpr int32_t const& __cordl_internal_get_eventId() const;

  constexpr int32_t& __cordl_internal_get_eventId();

  constexpr uint16_t const& __cordl_internal_get_sizeInBytes() const;

  constexpr uint16_t& __cordl_internal_get_sizeInBytes();

  constexpr double_t const& __cordl_internal_get_time() const;

  constexpr double_t& __cordl_internal_get_time();

  constexpr ::UnityEngineInternal::Input::NativeInputEventType const& __cordl_internal_get_type() const;

  constexpr ::UnityEngineInternal::Input::NativeInputEventType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_deviceId(uint16_t value);

  constexpr void __cordl_internal_set_eventId(int32_t value);

  constexpr void __cordl_internal_set_sizeInBytes(uint16_t value);

  constexpr void __cordl_internal_set_time(double_t value);

  constexpr void __cordl_internal_set_type(::UnityEngineInternal::Input::NativeInputEventType value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeInputEvent();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngineInternal::Input::NativeInputEventType", modifiers: "", def_value: None }, CppParam { name: "sizeInBytes", ty: "uint16_t", modifiers:
  // "", def_value: None }, CppParam { name: "deviceId", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name:
  // "eventId", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NativeInputEvent(::UnityEngineInternal::Input::NativeInputEventType type, uint16_t sizeInBytes, uint16_t deviceId, double_t time, int32_t eventId) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___type_padding[0x0];
      /// @brief Field type, offset: 0x0, size: 0x4, def value: None
      ::UnityEngineInternal::Input::NativeInputEventType ___type;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___type_padding_forAlignment[0x0];
      /// @brief Field type, offset: 0x0, size: 0x4, def value: None
      ::UnityEngineInternal::Input::NativeInputEventType ___type_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___sizeInBytes_padding[0x4];
      /// @brief Field sizeInBytes, offset: 0x4, size: 0x2, def value: None
      uint16_t ___sizeInBytes;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___sizeInBytes_padding_forAlignment[0x4];
      /// @brief Field sizeInBytes, offset: 0x4, size: 0x2, def value: None
      uint16_t ___sizeInBytes_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___deviceId_padding[0x6];
      /// @brief Field deviceId, offset: 0x6, size: 0x2, def value: None
      uint16_t ___deviceId;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___deviceId_padding_forAlignment[0x6];
      /// @brief Field deviceId, offset: 0x6, size: 0x2, def value: None
      uint16_t ___deviceId_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___time_padding[0x8];
      /// @brief Field time, offset: 0x8, size: 0x8, def value: None
      double_t ___time;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___time_padding_forAlignment[0x8];
      /// @brief Field time, offset: 0x8, size: 0x8, def value: None
      double_t ___time_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___eventId_padding[0x10];
      /// @brief Field eventId, offset: 0x10, size: 0x4, def value: None
      int32_t ___eventId;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___eventId_padding_forAlignment[0x10];
      /// @brief Field eventId, offset: 0x10, size: 0x4, def value: None
      int32_t ___eventId_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18983 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field structSize offset 0xffffffff size 0x4
  static constexpr int32_t structSize{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeInputEvent, 0x14>, "Size mismatch!");

} // namespace UnityEngineInternal::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputEvent, "UnityEngineInternal.Input", "NativeInputEvent");
