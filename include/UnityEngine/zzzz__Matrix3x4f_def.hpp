#pragma once
// IWYU pragma private; include "UnityEngine/Matrix3x4f.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Matrix3x4f)
namespace UnityEngine {
struct Matrix3x4f__m_Data_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine {
struct Matrix3x4f;
}
namespace UnityEngine {
struct Matrix3x4f__m_Data_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Matrix3x4f);
MARK_VAL_T(::UnityEngine::Matrix3x4f__m_Data_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::UnityEngine::Matrix3x4f, "UnityEngine", "Matrix3x4f");
DEFINE_IL2CPP_CLASS(::UnityEngine::Matrix3x4f__m_Data_e__FixedBuffer, "UnityEngine", "Matrix3x4f/<m_Data>e__FixedBuffer");
// [UnsafeValueType]
// [CompilerGenerated]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Matrix3x4f/<m_Data>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Matrix3x4f__m_Data_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Matrix3x4f__m_Data_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
  constexpr Matrix3x4f__m_Data_e__FixedBuffer(float_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9721 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  float_t FixedElementField;

  /// @brief Size padding 0x30 - 0x4 = 0x2c, packed as 0x2c
  uint8_t _cordl_size_padding[0x2c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Matrix3x4f__m_Data_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Matrix3x4f__m_Data_e__FixedBuffer) == 0x30, "Size mismatch!");

} // namespace UnityEngine
// [NativeType("Runtime/Camera/LightProbeStructs.h")]
// Dependencies UnityEngine.Matrix3x4f::<m_Data>e__FixedBuffer
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Matrix3x4f
struct CORDL_TYPE Matrix3x4f {
public:
  // Declarations
  using _m_Data_e__FixedBuffer = ::UnityEngine::Matrix3x4f__m_Data_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Matrix3x4f();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::UnityEngine::Matrix3x4f__m_Data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
  constexpr Matrix3x4f(::UnityEngine::Matrix3x4f__m_Data_e__FixedBuffer m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9722 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// [FixedBuffer(typeof(System.Single), 12)]
  /// @brief Field m_Data, offset: 0x0, size: 0x30, def value: None
  ::UnityEngine::Matrix3x4f__m_Data_e__FixedBuffer m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Matrix3x4f, m_Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Matrix3x4f) == 0x30, "Size mismatch!");

} // namespace UnityEngine
