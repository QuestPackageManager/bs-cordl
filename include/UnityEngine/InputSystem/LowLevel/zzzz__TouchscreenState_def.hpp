#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/TouchscreenState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchscreenState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchscreenState__primaryTouchData_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchscreenState__touchData_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TouchscreenState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchscreenState__primaryTouchData_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchscreenState__touchData_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::TouchscreenState);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer);
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.TouchscreenState/<primaryTouchData>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TouchscreenState__primaryTouchData_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchscreenState__primaryTouchData_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr TouchscreenState__primaryTouchData_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8983 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x38 - 0x1 = 0x37, packed as 0x37
  uint8_t _cordl_size_padding[0x37];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer, 0x38>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.TouchscreenState/<touchData>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE TouchscreenState__touchData_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchscreenState__touchData_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr TouchscreenState__touchData_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8984 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x230 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x230 - 0x1 = 0x22f, packed as 0x22f
  uint8_t _cordl_size_padding[0x22f];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer, 0x230>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Dependencies UnityEngine.InputSystem.LowLevel.TouchscreenState::<primaryTouchData>e__FixedBuffer, UnityEngine.InputSystem.LowLevel.TouchscreenState::<touchData>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.TouchscreenState
#pragma pack(push, 0)
struct CORDL_TYPE TouchscreenState {
public:
  // Declarations
  using _primaryTouchData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer;

  using _touchData_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer;

  __declspec(property(get = get_format)) ::UnityEngine::InputSystem::Utilities::FourCC format;

  __declspec(property(get = get_primaryTouch)) ::UnityEngine::InputSystem::LowLevel::TouchState* primaryTouch;

  /// @brief Field primaryTouchData, offset 0x0, size 0x38
  __declspec(property(get = __cordl_internal_get_primaryTouchData,
                      put = __cordl_internal_set_primaryTouchData)) ::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer primaryTouchData;

  /// @brief Field touchData, offset 0x38, size 0x230
  __declspec(property(get = __cordl_internal_get_touchData, put = __cordl_internal_set_touchData)) ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer touchData;

  __declspec(property(get = get_touches)) ::UnityEngine::InputSystem::LowLevel::TouchState* touches;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer const& __cordl_internal_get_primaryTouchData() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer& __cordl_internal_get_primaryTouchData();

  constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer const& __cordl_internal_get_touchData() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer& __cordl_internal_get_touchData();

  constexpr void __cordl_internal_set_primaryTouchData(::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer value);

  constexpr void __cordl_internal_set_touchData(::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer value);

  /// @brief Method get_Format, addr 0x63904c0, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format();

  /// @brief Method get_format, addr 0x63904d8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method get_primaryTouch, addr 0x63904cc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::TouchState* get_primaryTouch();

  /// @brief Method get_touches, addr 0x63904d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::TouchState* get_touches();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchscreenState();

  // Ctor Parameters [CppParam { name: "primaryTouchData", ty: "::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer", modifiers: "", def_value: None }, CppParam {
  // name: "touchData", ty: "::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr TouchscreenState(::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer primaryTouchData,
                             ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer touchData) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___primaryTouchData_padding[0x0];
      /// @brief Field primaryTouchData, offset: 0x0, size: 0x38, def value: None
      ::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer ___primaryTouchData;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___primaryTouchData_padding_forAlignment[0x0];
      /// @brief Field primaryTouchData, offset: 0x0, size: 0x38, def value: None
      ::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer ___primaryTouchData_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x38
      uint8_t ___touchData_padding[0x38];
      /// @brief Field touchData, offset: 0x38, size: 0x230, def value: None
      ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer ___touchData;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x38 for alignment
      uint8_t ___touchData_padding_forAlignment[0x38];
      /// @brief Field touchData, offset: 0x38, size: 0x230, def value: None
      ::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer ___touchData_forAlignment;
    };
  };

public:
  /// @brief Field MaxTouches offset 0xffffffff size 0x4
  static constexpr int32_t MaxTouches{ static_cast<int32_t>(0xa) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8985 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x268 };

  /// @brief Field kTouchDataOffset offset 0xffffffff size 0x4
  static constexpr int32_t kTouchDataOffset{ static_cast<int32_t>(0x38) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::TouchscreenState, 0x268>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TouchscreenState, "UnityEngine.InputSystem.LowLevel", "TouchscreenState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TouchscreenState__primaryTouchData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel",
                       "TouchscreenState/<primaryTouchData>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TouchscreenState__touchData_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "TouchscreenState/<touchData>e__FixedBuffer");
