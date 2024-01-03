#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__SendBufferedHapticCommand_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendBufferedHapticCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::XR::Haptics {
struct __SendBufferedHapticCommand___buffer_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR::Haptics {
struct SendBufferedHapticCommand;
}
namespace UnityEngine::InputSystem::XR::Haptics {
struct __SendBufferedHapticCommand___buffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand);
MARK_VAL_T(::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer);
// Type: ::<buffer>e__FixedBuffer
// SizeInfo { instance_size: 1024, native_size: 1024, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6347))
// CS Name: ::SendBufferedHapticCommand::<buffer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __SendBufferedHapticCommand___buffer_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __SendBufferedHapticCommand___buffer_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SendBufferedHapticCommand___buffer_e__FixedBuffer();

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x400 - 0x1 = 0x3ff, packed as 0x3ff
  uint8_t _cordl_size_padding[0x3ff];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x400 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer, 0x400>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR::Haptics
// Type: UnityEngine.InputSystem.XR.Haptics::SendBufferedHapticCommand
// SizeInfo { instance_size: 1040, native_size: 1040, calculated_instance_size: 1040, calculated_native_size: 1056, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing:
// Some(0) }
namespace UnityEngine::InputSystem::XR::Haptics {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6347)), TypeDefinitionIndex(TypeDefinitionIndex(6471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6348))
// CS Name: ::UnityEngine.InputSystem.XR.Haptics::SendBufferedHapticCommand
#pragma pack(push, 0)
struct CORDL_TYPE SendBufferedHapticCommand {
public:
  // Declarations
  using _buffer_e__FixedBuffer = ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer;

  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __get_baseCommand, put = __set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field channel, offset 0x8, size 0x4
  __declspec(property(get = __get_channel, put = __set_channel)) int32_t channel;

  /// @brief Field bufferSize, offset 0xc, size 0x4
  __declspec(property(get = __get_bufferSize, put = __set_bufferSize)) int32_t bufferSize;

  /// @brief Field buffer, offset 0x10, size 0x400
  __declspec(property(get = __get_buffer, put = __set_buffer))::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer buffer;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

  constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr int32_t& __get_channel();

  constexpr int32_t const& __get_channel() const;

  constexpr void __set_channel(int32_t value);

  constexpr int32_t& __get_bufferSize();

  constexpr int32_t const& __get_bufferSize() const;

  constexpr void __set_bufferSize(int32_t value);

  constexpr ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer& __get_buffer();

  constexpr ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer const& __get_buffer() const;

  constexpr void __set_buffer(::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer value);

  /// @brief Method get_Type, addr 0x2ac9940, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic, addr 0x2ac9970, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method Create, addr 0x2ac9660, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand Create(::ArrayW<uint8_t, ::Array<uint8_t>*> rumbleBuffer);

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "channel", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty:
  // "::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr SendBufferedHapticCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t channel, int32_t bufferSize,
                                      ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer buffer) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SendBufferedHapticCommand();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___baseCommand_padding[0x0];
      /// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
      ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand ___baseCommand;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___baseCommand_padding_forAlignment[0x0];
      /// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
      ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand ___baseCommand_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___channel_padding[0x8];
      /// @brief Field channel, offset: 0x8, size: 0x4, def value: None
      int32_t ___channel;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___channel_padding_forAlignment[0x8];
      /// @brief Field channel, offset: 0x8, size: 0x4, def value: None
      int32_t ___channel_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___bufferSize_padding[0xc];
      /// @brief Field bufferSize, offset: 0xc, size: 0x4, def value: None
      int32_t ___bufferSize;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___bufferSize_padding_forAlignment[0xc];
      /// @brief Field bufferSize, offset: 0xc, size: 0x4, def value: None
      int32_t ___bufferSize_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___buffer_padding[0x10];
      /// @brief Field buffer, offset: 0x10, size: 0x400, def value: None
      ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer ___buffer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___buffer_padding_forAlignment[0x10];
      /// @brief Field buffer, offset: 0x10, size: 0x400, def value: None
      ::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer ___buffer_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x410 };

  /// @brief Field kMaxHapticBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t kMaxHapticBufferSize{ static_cast<int32_t>(0x400) };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x410) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand, 0x410>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR::Haptics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand, "UnityEngine.InputSystem.XR.Haptics", "SendBufferedHapticCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Haptics::__SendBufferedHapticCommand___buffer_e__FixedBuffer, "UnityEngine.InputSystem.XR.Haptics",
                       "SendBufferedHapticCommand/<buffer>e__FixedBuffer");
