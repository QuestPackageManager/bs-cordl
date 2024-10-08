#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/TextEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextEvent)
namespace UnityEngine::InputSystem::LowLevel {
class IInputEventTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TextEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::TextEvent);
// Type: UnityEngine.InputSystem.LowLevel::TextEvent
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::TextEvent
#pragma pack(push, 0)
struct CORDL_TYPE TextEvent {
public:
  // Declarations
  /// @brief Field baseEvent, offset 0x0, size 0x14
  __declspec(property(get = __cordl_internal_get_baseEvent, put = __cordl_internal_set_baseEvent)) ::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent;

  /// @brief Field character, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_character, put = __cordl_internal_set_character)) int32_t character;

  __declspec(property(get = get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*();

  /// @brief Method Create, addr 0x4599570, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::TextEvent Create(int32_t deviceId, char16_t character, double_t time);

  /// @brief Method Create, addr 0x45995e8, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::LowLevel::TextEvent Create(int32_t deviceId, int32_t character, double_t time);

  /// @brief Method From, addr 0x459944c, size 0x124, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::TextEvent> From(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& __cordl_internal_get_baseEvent() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& __cordl_internal_get_baseEvent();

  constexpr int32_t const& __cordl_internal_get_character() const;

  constexpr int32_t& __cordl_internal_get_character();

  constexpr void __cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value);

  constexpr void __cordl_internal_set_character(int32_t value);

  /// @brief Method get_typeStatic, addr 0x4599440, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEvent();

  // Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: None }, CppParam { name: "character", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr TextEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, int32_t character) noexcept;

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
      uint8_t ___character_padding[0x14];
      /// @brief Field character, offset: 0x14, size: 0x4, def value: None
      int32_t ___character;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___character_padding_forAlignment[0x14];
      /// @brief Field character, offset: 0x14, size: 0x4, def value: None
      int32_t ___character_forAlignment;
    };
  };

public:
  /// @brief Field Type offset 0xffffffff size 0x4
  static constexpr int32_t Type{ static_cast<int32_t>(0x54455854) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6922 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::TextEvent, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TextEvent, "UnityEngine.InputSystem.LowLevel", "TextEvent");
