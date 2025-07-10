#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IMECompositionEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMECompositionEvent)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::IMECompositionEvent);
// Dependencies UnityEngine.InputSystem.LowLevel.IInputEventTypeInfo, UnityEngine.InputSystem.LowLevel.IMECompositionString, UnityEngine.InputSystem.LowLevel.InputEvent
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.IMECompositionEvent
#pragma pack(push, 0)
struct CORDL_TYPE IMECompositionEvent {
public:
  // Declarations
  /// @brief Field baseEvent, offset 0x0, size 0x14
  __declspec(property(get = __cordl_internal_get_baseEvent, put = __cordl_internal_set_baseEvent)) ::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent;

  /// @brief Field compositionString, offset 0x14, size 0x84
  __declspec(property(get = __cordl_internal_get_compositionString, put = __cordl_internal_set_compositionString)) ::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString;

  __declspec(property(get = get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*();

  /// @brief Method Create, addr 0x4609d40, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::IMECompositionEvent Create(int32_t deviceId, ::StringW compositionString, double_t time);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __cordl_internal_get_baseEvent() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __cordl_internal_get_baseEvent();

  constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString const& __cordl_internal_get_compositionString() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString& __cordl_internal_get_compositionString();

  constexpr void __cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value);

  constexpr void __cordl_internal_set_compositionString(::UnityEngine::InputSystem::LowLevel::IMECompositionString value);

  /// @brief Method get_typeStatic, addr 0x4609d34, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr IMECompositionEvent();

  // Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "compositionString", ty:
  // "::UnityEngine::InputSystem::LowLevel::IMECompositionString", modifiers: "", def_value: None }]
  constexpr IMECompositionEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, ::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString) noexcept;

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
      uint8_t ___compositionString_padding[0x14];
      /// @brief Field compositionString, offset: 0x14, size: 0x84, def value: None
      ::UnityEngine::InputSystem::LowLevel::IMECompositionString ___compositionString;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___compositionString_padding_forAlignment[0x14];
      /// @brief Field compositionString, offset: 0x14, size: 0x84, def value: None
      ::UnityEngine::InputSystem::LowLevel::IMECompositionString ___compositionString_forAlignment;
    };
  };

public:
  /// @brief Field Type offset 0xffffffff size 0x4
  static constexpr int32_t Type{ static_cast<int32_t>(0x494d4553) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6936 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field kIMECharBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t kIMECharBufferSize{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::IMECompositionEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IMECompositionEvent, "UnityEngine.InputSystem.LowLevel", "IMECompositionEvent");
