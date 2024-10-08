#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputDeviceCommand.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceCommand)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand);
// Type: UnityEngine.InputSystem.LowLevel::InputDeviceCommand
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputDeviceCommand
#pragma pack(push, 0)
struct CORDL_TYPE InputDeviceCommand {
public:
  // Declarations
  __declspec(property(get = get_payloadPtr)) ::cordl_internals::Ptr<void> payloadPtr;

  __declspec(property(get = get_payloadSizeInBytes)) int32_t payloadSizeInBytes;

  /// @brief Field sizeInBytes, offset 0x4, size 0x4
  __declspec(property(get = __cordl_internal_get_sizeInBytes, put = __cordl_internal_set_sizeInBytes)) int32_t sizeInBytes;

  /// @brief Field type, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::UnityEngine::InputSystem::Utilities::FourCC type;

  __declspec(property(get = get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  /// @brief Method AllocateNative, addr 0x45909d0, size 0xb0, virtual false, abstract: false, final false
  static inline ::Unity::Collections::NativeArray_1<uint8_t> AllocateNative(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t payloadSize);

  constexpr int32_t const& __cordl_internal_get_sizeInBytes() const;

  constexpr int32_t& __cordl_internal_get_sizeInBytes();

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __cordl_internal_get_type() const;

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_sizeInBytes(int32_t value);

  constexpr void __cordl_internal_set_type(::UnityEngine::InputSystem::Utilities::FourCC value);

  /// @brief Method .ctor, addr 0x45904f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t sizeInBytes);

  /// @brief Method get_payloadPtr, addr 0x45909c8, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> get_payloadPtr();

  /// @brief Method get_payloadSizeInBytes, addr 0x45909bc, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_payloadSizeInBytes();

  /// @brief Method get_typeStatic, addr 0x4590a80, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceCommand();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "sizeInBytes", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr InputDeviceCommand(::UnityEngine::InputSystem::Utilities::FourCC type, int32_t sizeInBytes) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___type_padding[0x0];
      /// @brief Field type, offset: 0x0, size: 0x4, def value: None
      ::UnityEngine::InputSystem::Utilities::FourCC ___type;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___type_padding_forAlignment[0x0];
      /// @brief Field type, offset: 0x0, size: 0x4, def value: None
      ::UnityEngine::InputSystem::Utilities::FourCC ___type_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___sizeInBytes_padding[0x4];
      /// @brief Field sizeInBytes, offset: 0x4, size: 0x4, def value: None
      int32_t ___sizeInBytes;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___sizeInBytes_padding_forAlignment[0x4];
      /// @brief Field sizeInBytes, offset: 0x4, size: 0x4, def value: None
      int32_t ___sizeInBytes_forAlignment;
    };
  };

public:
  /// @brief Field BaseCommandSize offset 0xffffffff size 0x4
  static constexpr int32_t BaseCommandSize{ static_cast<int32_t>(0x8) };

  /// @brief Field GenericFailure offset 0xffffffff size 0x8
  static constexpr int64_t GenericFailure{ static_cast<int64_t>(0xffffffffffffffff) };

  /// @brief Field GenericSuccess offset 0xffffffff size 0x8
  static constexpr int64_t GenericSuccess{ static_cast<int64_t>(0x1) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6846 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field kBaseCommandSize offset 0xffffffff size 0x4
  static constexpr int32_t kBaseCommandSize{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand, "UnityEngine.InputSystem.LowLevel", "InputDeviceCommand");
