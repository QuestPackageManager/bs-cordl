#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/QueryPairedUserAccountCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QueryPairedUserAccountCommand)
namespace UnityEngine::InputSystem::LowLevel {
struct QueryPairedUserAccountCommand_Result;
}
namespace UnityEngine::InputSystem::LowLevel {
struct QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct QueryPairedUserAccountCommand_Result;
}
namespace UnityEngine::InputSystem::LowLevel {
struct QueryPairedUserAccountCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/Result
struct CORDL_TYPE QueryPairedUserAccountCommand_Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int64_t;

  /// @brief Nested struct __QueryPairedUserAccountCommand_Result_Unwrapped
  enum struct __QueryPairedUserAccountCommand_Result_Unwrapped : int64_t {
    __E_DevicePairedToUserAccount = static_cast<int64_t>(0x2),
    __E_UserAccountSelectionInProgress = static_cast<int64_t>(0x4),
    __E_UserAccountSelectionComplete = static_cast<int64_t>(0x8),
    __E_UserAccountSelectionCanceled = static_cast<int64_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __QueryPairedUserAccountCommand_Result_Unwrapped() const noexcept {
    return static_cast<__QueryPairedUserAccountCommand_Result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int64_t() const noexcept {
    return static_cast<int64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryPairedUserAccountCommand_Result();

  // Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr QueryPairedUserAccountCommand_Result(int64_t value__) noexcept;

  /// @brief Field DevicePairedToUserAccount value: I64(2)
  static ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result const DevicePairedToUserAccount;

  /// @brief Field UserAccountSelectionCanceled value: I64(16)
  static ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result const UserAccountSelectionCanceled;

  /// @brief Field UserAccountSelectionComplete value: I64(8)
  static ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result const UserAccountSelectionComplete;

  /// @brief Field UserAccountSelectionInProgress value: I64(4)
  static ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result const UserAccountSelectionInProgress;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6889 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  int64_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6890 };

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
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer, 0x200>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6891 };

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
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer, 0x200>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies UnityEngine.InputSystem.LowLevel.IInputDeviceCommandInfo, UnityEngine.InputSystem.LowLevel.InputDeviceCommand,
// UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::<idBuffer>e__FixedBuffer, UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::<nameBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand
#pragma pack(push, 0)
struct CORDL_TYPE QueryPairedUserAccountCommand {
public:
  // Declarations
  using Result = ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result;

  using _idBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer;

  using _nameBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer;

  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_baseCommand, put = __cordl_internal_set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field handle, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle)) uint64_t handle;

  __declspec(property(get = get_id, put = set_id)) ::StringW id;

  /// @brief Field idBuffer, offset 0x210, size 0x200
  __declspec(property(get = __cordl_internal_get_idBuffer, put = __cordl_internal_set_idBuffer)) ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer idBuffer;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  /// @brief Field nameBuffer, offset 0x10, size 0x200
  __declspec(property(get = __cordl_internal_get_nameBuffer,
                      put = __cordl_internal_set_nameBuffer)) ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer nameBuffer;

  __declspec(property(get = get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  /// @brief Method Create, addr 0x4608140, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand Create();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __cordl_internal_get_baseCommand() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __cordl_internal_get_baseCommand();

  constexpr uint64_t const& __cordl_internal_get_handle() const;

  constexpr uint64_t& __cordl_internal_get_handle();

  constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer const& __cordl_internal_get_idBuffer() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer& __cordl_internal_get_idBuffer();

  constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer const& __cordl_internal_get_nameBuffer() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer& __cordl_internal_get_nameBuffer();

  constexpr void __cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr void __cordl_internal_set_handle(uint64_t value);

  constexpr void __cordl_internal_set_idBuffer(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer value);

  constexpr void __cordl_internal_set_nameBuffer(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer value);

  /// @brief Method get_Type, addr 0x4607ea0, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_id, addr 0x4607ed0, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_id();

  /// @brief Method get_name, addr 0x4607ff0, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_typeStatic, addr 0x4608110, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo();

  /// @brief Method set_id, addr 0x4607ee0, size 0x110, virtual false, abstract: false, final false
  inline void set_id(::StringW value);

  /// @brief Method set_name, addr 0x4608000, size 0x110, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr QueryPairedUserAccountCommand();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "handle", ty: "uint64_t",
  // modifiers: "", def_value: None }, CppParam { name: "nameBuffer", ty: "::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer", modifiers: "", def_value:
  // None }, CppParam { name: "idBuffer", ty: "::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr QueryPairedUserAccountCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint64_t handle,
                                          ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer nameBuffer,
                                          ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer idBuffer) noexcept;

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
      uint8_t ___handle_padding[0x8];
      /// @brief Field handle, offset: 0x8, size: 0x8, def value: None
      uint64_t ___handle;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___handle_padding_forAlignment[0x8];
      /// @brief Field handle, offset: 0x8, size: 0x8, def value: None
      uint64_t ___handle_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___nameBuffer_padding[0x10];
      /// @brief Field nameBuffer, offset: 0x10, size: 0x200, def value: None
      ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer ___nameBuffer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___nameBuffer_padding_forAlignment[0x10];
      /// @brief Field nameBuffer, offset: 0x10, size: 0x200, def value: None
      ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer ___nameBuffer_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x210
      uint8_t ___idBuffer_padding[0x210];
      /// @brief Field idBuffer, offset: 0x210, size: 0x200, def value: None
      ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer ___idBuffer;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x210 for alignment
      uint8_t ___idBuffer_padding_forAlignment[0x210];
      /// @brief Field idBuffer, offset: 0x210, size: 0x200, def value: None
      ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer ___idBuffer_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6892 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x410 };

  /// @brief Field kMaxIdLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxIdLength{ static_cast<int32_t>(0x100) };

  /// @brief Field kMaxNameLength offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNameLength{ static_cast<int32_t>(0x100) };

  /// @brief Field kSize offset 0xffffffff size 0x4
  static constexpr int32_t kSize{ static_cast<int32_t>(0x410) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand, 0x410>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand_Result, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand/Result");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__idBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel",
                       "QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand__nameBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel",
                       "QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer");
