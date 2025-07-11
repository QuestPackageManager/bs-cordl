#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/DeviceResetEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceResetEvent)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct DeviceResetEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::DeviceResetEvent);
// Dependencies UnityEngine.InputSystem.LowLevel.IInputEventTypeInfo, UnityEngine.InputSystem.LowLevel.InputEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.DeviceResetEvent
#pragma pack(push, 0)
struct CORDL_TYPE DeviceResetEvent {
public:
  // Declarations
  /// @brief Field baseEvent, offset 0x0, size 0x14
  __declspec(property(get = __cordl_internal_get_baseEvent, put = __cordl_internal_set_baseEvent)) ::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent;

  /// @brief Field hardReset, offset 0x8, size 0x1
  __declspec(property(get = __cordl_internal_get_hardReset, put = __cordl_internal_set_hardReset)) bool hardReset;

  __declspec(property(get = get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*();

  /// @brief Method Create, addr 0x4609ca8, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent Create(int32_t deviceId, bool hardReset, double_t time);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __cordl_internal_get_baseEvent() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __cordl_internal_get_baseEvent();

  constexpr bool const& __cordl_internal_get_hardReset() const;

  constexpr bool& __cordl_internal_get_hardReset();

  constexpr void __cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value);

  constexpr void __cordl_internal_set_hardReset(bool value);

  /// @brief Method get_typeStatic, addr 0x4609c9c, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DeviceResetEvent();

  // Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "hardReset", ty: "bool", modifiers: "",
  // def_value: None }]
  constexpr DeviceResetEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, bool hardReset) noexcept;

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
      /// @brief Padding field 0x8
      uint8_t ___hardReset_padding[0x8];
      /// @brief Field hardReset, offset: 0x8, size: 0x1, def value: None
      bool ___hardReset;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___hardReset_padding_forAlignment[0x8];
      /// @brief Field hardReset, offset: 0x8, size: 0x1, def value: None
      bool ___hardReset_forAlignment;
    };
  };

public:
  /// @brief Field Type offset 0xffffffff size 0x4
  static constexpr int32_t Type{ static_cast<int32_t>(0x44525354) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6934 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent, 0x14>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::DeviceResetEvent, "UnityEngine.InputSystem.LowLevel", "DeviceResetEvent");
