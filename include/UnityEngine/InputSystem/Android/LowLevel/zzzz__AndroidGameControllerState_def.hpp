#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/LowLevel/AndroidGameControllerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidGameControllerState)
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidAxis;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidGameControllerState_Variants;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidGameControllerState__axis_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidGameControllerState__buttons_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidKeyCode;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
class AndroidGameControllerState_Variants;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidGameControllerState;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidGameControllerState__axis_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidGameControllerState__buttons_e__FixedBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer);
// Dependencies System.Object
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState/Variants
class CORDL_TYPE AndroidGameControllerState_Variants : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants* New_ctor();

  /// @brief Method .ctor, addr 0x46083e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGameControllerState_Variants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidGameControllerState_Variants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidGameControllerState_Variants(AndroidGameControllerState_Variants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidGameControllerState_Variants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidGameControllerState_Variants(AndroidGameControllerState_Variants const&) = delete;

  /// @brief Field DPadAxes offset 0xffffffff size 0x8
  static constexpr ::ConstString DPadAxes{ u"DpadAxes" };

  /// @brief Field DPadButtons offset 0xffffffff size 0x8
  static constexpr ::ConstString DPadButtons{ u"DpadButtons" };

  /// @brief Field Gamepad offset 0xffffffff size 0x8
  static constexpr ::ConstString Gamepad{ u"Gamepad" };

  /// @brief Field Joystick offset 0xffffffff size 0x8
  static constexpr ::ConstString Joystick{ u"Joystick" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
// Dependencies
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState/<axis>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE AndroidGameControllerState__axis_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGameControllerState__axis_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr AndroidGameControllerState__axis_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6855 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc0 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0xc0 - 0x4 = 0xbc, packed as 0xbc
  uint8_t _cordl_size_padding[0xbc];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer, 0xc0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
// Dependencies
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState/<buttons>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE AndroidGameControllerState__buttons_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGameControllerState__buttons_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr AndroidGameControllerState__buttons_e__FixedBuffer(uint32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6856 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  uint32_t FixedElementField;

  /// @brief Size padding 0x1c - 0x4 = 0x18, packed as 0x18
  uint8_t _cordl_size_padding[0x18];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
// Dependencies UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState::<axis>e__FixedBuffer, UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState::<buttons>e__FixedBuffer,
// UnityEngine.InputSystem.LowLevel.IInputStateTypeInfo, UnityEngine.InputSystem.Utilities.FourCC
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidGameControllerState
struct CORDL_TYPE AndroidGameControllerState {
public:
  // Declarations
  using Variants = ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants;

  using _axis_e__FixedBuffer = ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer;

  using _buttons_e__FixedBuffer = ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer;

  __declspec(property(get = get_format)) ::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Field kFormat, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kFormat, put = setStaticF_kFormat)) ::UnityEngine::InputSystem::Utilities::FourCC kFormat;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method WithAxis, addr 0x4608358, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState WithAxis(::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis axis, float_t value);

  /// @brief Method WithButton, addr 0x4608314, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState WithButton(::UnityEngine::InputSystem::Android::LowLevel::AndroidKeyCode code, bool value);

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_kFormat();

  /// @brief Method get_format, addr 0x46082bc, size 0x58, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  static inline void setStaticF_kFormat(::UnityEngine::InputSystem::Utilities::FourCC value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidGameControllerState();

  // Ctor Parameters [CppParam { name: "buttons", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer", modifiers: "", def_value: None }, CppParam {
  // name: "axis", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr AndroidGameControllerState(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer buttons,
                                       ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer axis) noexcept;

  /// @brief Field MaxAxes offset 0xffffffff size 0x4
  static constexpr int32_t MaxAxes{ static_cast<int32_t>(0x30) };

  /// @brief Field MaxButtons offset 0xffffffff size 0x4
  static constexpr int32_t MaxButtons{ static_cast<int32_t>(0xdc) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6857 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xdc };

  /// @brief Field kAxisOffset offset 0xffffffff size 0x4
  static constexpr uint32_t kAxisOffset{ static_cast<uint32_t>(0x1cu) };

  /// @brief Field buttons, offset: 0x0, size: 0x1c, def value: None
  ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer buttons;

  /// @brief Field axis, offset: 0x1c, size: 0xc0, def value: None
  ::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer axis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, buttons) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, axis) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, 0xdc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
NEED_NO_BOX(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState_Variants*, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState/Variants");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState, "UnityEngine.InputSystem.Android.LowLevel", "AndroidGameControllerState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__axis_e__FixedBuffer, "UnityEngine.InputSystem.Android.LowLevel",
                       "AndroidGameControllerState/<axis>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidGameControllerState__buttons_e__FixedBuffer, "UnityEngine.InputSystem.Android.LowLevel",
                       "AndroidGameControllerState/<buttons>e__FixedBuffer");
