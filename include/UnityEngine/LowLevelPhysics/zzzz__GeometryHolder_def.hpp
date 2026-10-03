#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics/GeometryHolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics/zzzz__IGeometry_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryHolder)
namespace UnityEngine::LowLevelPhysics {
struct GeometryHolder__m_Data_e__FixedBuffer;
}
namespace UnityEngine::LowLevelPhysics {
struct GeometryType;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics {
struct GeometryHolder;
}
namespace UnityEngine::LowLevelPhysics {
struct GeometryHolder__m_Data_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics::GeometryHolder);
MARK_VAL_T(::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics::GeometryHolder, "UnityEngine.LowLevelPhysics", "GeometryHolder");
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer, "UnityEngine.LowLevelPhysics", "GeometryHolder/<m_Data>e__FixedBuffer");
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies
namespace UnityEngine::LowLevelPhysics {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics.GeometryHolder/<m_Data>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE GeometryHolder__m_Data_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryHolder__m_Data_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr GeometryHolder__m_Data_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19109 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x30 - 0x4 = 0x2c, packed as 0x2c
  uint8_t _cordl_size_padding[0x2c];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer) == 0x30, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics
// Dependencies UnityEngine.LowLevelPhysics.GeometryHolder::<m_Data>e__FixedBuffer, UnityEngine.LowLevelPhysics.IGeometry
namespace UnityEngine::LowLevelPhysics {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics.GeometryHolder
struct CORDL_TYPE GeometryHolder {
public:
  // Declarations
  using _m_Data_e__FixedBuffer = ::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer;

  __declspec(property(get = get_Type)) ::UnityEngine::LowLevelPhysics::GeometryType Type;

  /// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::UnityEngine::LowLevelPhysics::IGeometry*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline T As();

  /// @brief Method get_Type, addr 0x7009abc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics::GeometryType get_Type();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryHolder();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
  constexpr GeometryHolder(::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer m_Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19110 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// [FixedBuffer(typeof(System.Int32), 12)]
  /// @brief Field m_Data, offset: 0x0, size: 0x30, def value: None
  ::UnityEngine::LowLevelPhysics::GeometryHolder__m_Data_e__FixedBuffer m_Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics::GeometryHolder, m_Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics::GeometryHolder) == 0x30, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics
