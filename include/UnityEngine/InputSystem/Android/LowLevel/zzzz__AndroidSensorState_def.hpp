#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AndroidSensorState)
namespace UnityEngine::InputSystem::Android::LowLevel {
struct __AndroidSensorState___data_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorState;
}
namespace UnityEngine::InputSystem::Android::LowLevel {
struct __AndroidSensorState___data_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState);
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer);
// Type: ::<data>e__FixedBuffer
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: ::AndroidSensorState::<data>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __AndroidSensorState___data_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AndroidSensorState___data_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __AndroidSensorState___data_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x40 - 0x4 = 0x3c, packed as 0x3c
  uint8_t _cordl_size_padding[0x3c];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidSensorState
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidSensorState
struct CORDL_TYPE AndroidSensorState {
public:
  // Declarations
  using _data_e__FixedBuffer = ::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer;

  __declspec(property(get = get_format))::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Field kFormat, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kFormat, put = setStaticF_kFormat))::UnityEngine::InputSystem::Utilities::FourCC kFormat;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method WithData, addr 0x301a6d0, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState WithData(::ArrayW<float_t, ::Array<float_t>*> data);

  static inline ::UnityEngine::InputSystem::Utilities::FourCC getStaticF_kFormat();

  /// @brief Method get_format, addr 0x301a7a0, size 0x58, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  static inline void setStaticF_kFormat(::UnityEngine::InputSystem::Utilities::FourCC value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidSensorState();

  // Ctor Parameters [CppParam { name: "data", ty: "::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr AndroidSensorState(::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer data) noexcept;

  /// @brief Field data, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState, data) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer, "UnityEngine.InputSystem.Android.LowLevel",
                       "AndroidSensorState/<data>e__FixedBuffer");
