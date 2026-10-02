#pragma once
// IWYU pragma private; include "UnityEngine/Tetrahedron.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix3x4f_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Tetrahedron)
namespace UnityEngine {
struct Tetrahedron__indices_e__FixedBuffer;
}
namespace UnityEngine {
struct Tetrahedron__neighbors_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine {
struct Tetrahedron;
}
namespace UnityEngine {
struct Tetrahedron__indices_e__FixedBuffer;
}
namespace UnityEngine {
struct Tetrahedron__neighbors_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Tetrahedron);
MARK_VAL_T(::UnityEngine::Tetrahedron__indices_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::UnityEngine::Tetrahedron, "UnityEngine", "Tetrahedron");
DEFINE_IL2CPP_CLASS(::UnityEngine::Tetrahedron__indices_e__FixedBuffer, "UnityEngine", "Tetrahedron/<indices>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer, "UnityEngine", "Tetrahedron/<neighbors>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Tetrahedron/<indices>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Tetrahedron__indices_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tetrahedron__indices_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Tetrahedron__indices_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9723 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x10 - 0x4 = 0xc, packed as 0xc
  uint8_t _cordl_size_padding[0xc];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tetrahedron__indices_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Tetrahedron__indices_e__FixedBuffer) == 0x10, "Size mismatch!");

} // namespace UnityEngine
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Tetrahedron/<neighbors>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE Tetrahedron__neighbors_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tetrahedron__neighbors_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Tetrahedron__neighbors_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9724 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x10 - 0x4 = 0xc, packed as 0xc
  uint8_t _cordl_size_padding[0xc];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer) == 0x10, "Size mismatch!");

} // namespace UnityEngine
// [NativeType("Runtime/Camera/LightProbeStructs.h")]
// Dependencies UnityEngine.Matrix3x4f, UnityEngine.Tetrahedron::<indices>e__FixedBuffer, UnityEngine.Tetrahedron::<neighbors>e__FixedBuffer
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Tetrahedron
struct CORDL_TYPE Tetrahedron {
public:
  // Declarations
  using _indices_e__FixedBuffer = ::UnityEngine::Tetrahedron__indices_e__FixedBuffer;

  using _neighbors_e__FixedBuffer = ::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Tetrahedron();

  // Ctor Parameters [CppParam { name: "indices", ty: "::UnityEngine::Tetrahedron__indices_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "neighbors", ty:
  // "::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "matrix", ty: "::UnityEngine::Matrix3x4f", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr Tetrahedron(::UnityEngine::Tetrahedron__indices_e__FixedBuffer indices, ::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer neighbors, ::UnityEngine::Matrix3x4f matrix,
                        bool isValid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9725 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x54 };

  /// [FixedBuffer(typeof(System.Int32), 4)]
  /// @brief Field indices, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Tetrahedron__indices_e__FixedBuffer indices;

  /// [FixedBuffer(typeof(System.Int32), 4)]
  /// @brief Field neighbors, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Tetrahedron__neighbors_e__FixedBuffer neighbors;

  /// @brief Field matrix, offset: 0x20, size: 0x30, def value: None
  ::UnityEngine::Matrix3x4f matrix;

  /// @brief Field isValid, offset: 0x50, size: 0x1, def value: None
  bool isValid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tetrahedron, indices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tetrahedron, neighbors) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tetrahedron, matrix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Tetrahedron, isValid) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Tetrahedron) == 0x54, "Size mismatch!");

} // namespace UnityEngine
