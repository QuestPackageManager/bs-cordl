#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/QueryUserIdCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryUserIdCommand)
namespace UnityEngine::InputSystem::LowLevel {
struct QueryUserIdCommand__idBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QueryUserIdCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct QueryUserIdCommand__idBuffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.QueryUserIdCommand/<idBuffer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE QueryUserIdCommand__idBuffer_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryUserIdCommand__idBuffer_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr QueryUserIdCommand__idBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6889 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x200 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x200 - 0x1 = 0x1ff, packed as 0x1ff
  uint8_t _cordl_size_padding[0x1ff];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer, 0x200>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies UnityEngine.InputSystem.LowLevel.IInputDeviceCommandInfo, UnityEngine.InputSystem.LowLevel.InputDeviceCommand,
// UnityEngine.InputSystem.LowLevel.QueryUserIdCommand::<idBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.QueryUserIdCommand
#pragma pack(push, 0)
struct CORDL_TYPE QueryUserIdCommand {
public:
  // Declarations
  using _idBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer;

  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_baseCommand, put = __cordl_internal_set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field idBuffer, offset 0x8, size 0x200
  __declspec(property(get = __cordl_internal_get_idBuffer, put = __cordl_internal_set_idBuffer)) ::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer idBuffer;

  __declspec(property(get = get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  /// @brief Method Create, addr 0x4606c40, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand Create();

  /// @brief Method ReadId, addr 0x4606c00, size 0x10, virtual false, abstract: false, final false
  inline ::StringW ReadId();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __cordl_internal_get_baseCommand() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __cordl_internal_get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer const& __cordl_internal_get_idBuffer() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer& __cordl_internal_get_idBuffer();

  constexpr void __cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr void __cordl_internal_set_idBuffer(::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer value);

  /// @brief Method get_Type, addr 0x4606bd0, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic, addr 0x4606c10, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryUserIdCommand();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "idBuffer", ty:
  // "::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr QueryUserIdCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand,
                               ::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer idBuffer) noexcept;

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
      uint8_t ___idBuffer_padding[0x8];
      /// @brief Field idBuffer, offset: 0x8, size: 0x200, def value: None
      ::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer ___idBuffer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___idBuffer_padding_forAlignment[0x8];
      /// @brief Field idBuffer, offset: 0x8, size: 0x200, def value: None
      ::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer ___idBuffer_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6890 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x208 };

  /// @brief Field kMaxIdLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxIdLength{ static_cast<int32_t>(0x100) };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x208) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand, 0x208>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand, "UnityEngine.InputSystem.LowLevel", "QueryUserIdCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryUserIdCommand__idBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryUserIdCommand/<idBuffer>e__FixedBuffer");
