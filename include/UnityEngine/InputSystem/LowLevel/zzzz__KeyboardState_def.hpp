#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/KeyboardState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__KeyboardState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyboardState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __KeyboardState___keys_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
struct Key;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct KeyboardState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __KeyboardState___keys_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::KeyboardState);
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer);
// Type: ::<keys>e__FixedBuffer
// SizeInfo { instance_size: 14, native_size: 14, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::KeyboardState::<keys>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __KeyboardState___keys_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __KeyboardState___keys_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __KeyboardState___keys_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0xe - 0x1 = 0xd, packed as 0xd
  uint8_t _cordl_size_padding[0xd];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer, 0xe>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::KeyboardState
// SizeInfo { instance_size: 14, native_size: 14, calculated_instance_size: 14, calculated_native_size: 30, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::KeyboardState
struct CORDL_TYPE KeyboardState {
public:
  // Declarations
  using _keys_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer;

  __declspec(property(get = get_format))::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method Press, addr 0x3158064, size 0xc, virtual false, abstract: false, final false
  inline void Press(::UnityEngine::InputSystem::Key key);

  /// @brief Method Release, addr 0x3158070, size 0xc, virtual false, abstract: false, final false
  inline void Release(::UnityEngine::InputSystem::Key key);

  /// @brief Method Set, addr 0x3158058, size 0xc, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::InputSystem::Key key, bool state);

  /// @brief Method .ctor, addr 0x3157f90, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::InputSystem::Key, ::Array<::UnityEngine::InputSystem::Key>*> pressedKeys);

  /// @brief Method get_Format, addr 0x3157f60, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format();

  /// @brief Method get_format, addr 0x315807c, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardState();

  // Ctor Parameters [CppParam { name: "keys", ty: "::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr KeyboardState(::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer keys) noexcept;

  /// @brief Field keys, offset: 0x0, size: 0xe, def value: None
  ::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer keys;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe };

  /// @brief Field kSizeInBits offset 0xffffffff size 0x4
  static constexpr int32_t kSizeInBits{ static_cast<int32_t>(0x6e) };

  /// @brief Field kSizeInBytes offset 0xffffffff size 0x4
  static constexpr int32_t kSizeInBytes{ static_cast<int32_t>(0xe) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::KeyboardState, 0xe>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::KeyboardState, keys) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::KeyboardState, "UnityEngine.InputSystem.LowLevel", "KeyboardState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::__KeyboardState___keys_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "KeyboardState/<keys>e__FixedBuffer");
