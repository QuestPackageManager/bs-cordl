#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/QueryKeyNameCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryKeyNameCommand_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryKeyNameCommand)
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryKeyNameCommand___nameBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
struct Key;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QueryKeyNameCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __QueryKeyNameCommand___nameBuffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer);
// Type: ::<nameBuffer>e__FixedBuffer
// SizeInfo { instance_size: 256, native_size: 256, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::QueryKeyNameCommand::<nameBuffer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __QueryKeyNameCommand___nameBuffer_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __QueryKeyNameCommand___nameBuffer_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __QueryKeyNameCommand___nameBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x100 - 0x1 = 0xff, packed as 0xff
  uint8_t _cordl_size_padding[0xff];

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6857 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x100 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer, 0x100>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::QueryKeyNameCommand
// SizeInfo { instance_size: 268, native_size: 268, calculated_instance_size: 268, calculated_native_size: 284, minimum_alignment: 4, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::QueryKeyNameCommand
#pragma pack(push, 0)
struct CORDL_TYPE QueryKeyNameCommand {
public:
  // Declarations
  using _nameBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer;

  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_baseCommand, put = __cordl_internal_set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field nameBuffer, offset 0xc, size 0x100
  __declspec(property(get = __cordl_internal_get_nameBuffer, put = __cordl_internal_set_nameBuffer)) ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer nameBuffer;

  /// @brief Field scanOrKeyCode, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_scanOrKeyCode, put = __cordl_internal_set_scanOrKeyCode)) int32_t scanOrKeyCode;

  __declspec(property(get = get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  /// @brief Method Create, addr 0x45a54cc, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand Create(::UnityEngine::InputSystem::Key key);

  /// @brief Method ReadKeyName, addr 0x45a548c, size 0x10, virtual false, abstract: false, final false
  inline ::StringW ReadKeyName();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __cordl_internal_get_baseCommand() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __cordl_internal_get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer const& __cordl_internal_get_nameBuffer() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer& __cordl_internal_get_nameBuffer();

  constexpr int32_t const& __cordl_internal_get_scanOrKeyCode() const;

  constexpr int32_t& __cordl_internal_get_scanOrKeyCode();

  constexpr void __cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr void __cordl_internal_set_nameBuffer(::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer value);

  constexpr void __cordl_internal_set_scanOrKeyCode(int32_t value);

  /// @brief Method get_Type, addr 0x45a545c, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic, addr 0x45a549c, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryKeyNameCommand();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "scanOrKeyCode", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "nameBuffer", ty: "::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr QueryKeyNameCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t scanOrKeyCode,
                                ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer nameBuffer) noexcept;

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
      uint8_t ___scanOrKeyCode_padding[0x8];
      /// @brief Field scanOrKeyCode, offset: 0x8, size: 0x4, def value: None
      int32_t ___scanOrKeyCode;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___scanOrKeyCode_padding_forAlignment[0x8];
      /// @brief Field scanOrKeyCode, offset: 0x8, size: 0x4, def value: None
      int32_t ___scanOrKeyCode_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___nameBuffer_padding[0xc];
      /// @brief Field nameBuffer, offset: 0xc, size: 0x100, def value: None
      ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer ___nameBuffer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___nameBuffer_padding_forAlignment[0xc];
      /// @brief Field nameBuffer, offset: 0xc, size: 0x100, def value: None
      ::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer ___nameBuffer_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6858 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10c };

  /// @brief Field kMaxNameLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNameLength{ static_cast<int32_t>(0x100) };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x10c) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand, 0x10c>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryKeyNameCommand, "UnityEngine.InputSystem.LowLevel", "QueryKeyNameCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__QueryKeyNameCommand___nameBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryKeyNameCommand/<nameBuffer>e__FixedBuffer");
