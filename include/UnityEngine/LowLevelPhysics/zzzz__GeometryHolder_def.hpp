#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics/GeometryHolder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryHolder)
namespace UnityEngine::LowLevelPhysics {
struct GeometryHolder__m_Blob_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics {
struct GeometryHolder;
}
namespace UnityEngine::LowLevelPhysics {
struct GeometryHolder__m_Blob_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LowLevelPhysics::GeometryHolder);
MARK_VAL_T(::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer);
// Dependencies
namespace UnityEngine::LowLevelPhysics {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics.GeometryHolder/<m_Blob>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE GeometryHolder__m_Blob_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryHolder__m_Blob_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr GeometryHolder__m_Blob_e__FixedBuffer(uint32_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18646 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  uint32_t FixedElementField;

  /// @brief Size padding 0x18 - 0x4 = 0x14, packed as 0x14
  uint8_t _cordl_size_padding[0x14];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer, 0x18>, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics
// Dependencies System.IntPtr, UnityEngine.LowLevelPhysics.GeometryHolder::<m_Blob>e__FixedBuffer
namespace UnityEngine::LowLevelPhysics {
// Is value type: true
// CS Name: UnityEngine.LowLevelPhysics.GeometryHolder
struct CORDL_TYPE GeometryHolder {
public:
  // Declarations
  using _m_Blob_e__FixedBuffer = ::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer;

  /// @brief Method As, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T As();

  // Ctor Parameters []
  // @brief default ctor
  constexpr GeometryHolder();

  // Ctor Parameters [CppParam { name: "m_Type", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DataStart", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_FakePointer0", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_FakePointer1", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Blob",
  // ty: "::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr GeometryHolder(int32_t m_Type, uint32_t m_DataStart, ::System::IntPtr m_FakePointer0, ::System::IntPtr m_FakePointer1,
                           ::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer m_Blob) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18647 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_Type, offset: 0x0, size: 0x4, def value: None
  int32_t m_Type;

  /// @brief Field m_DataStart, offset: 0x4, size: 0x4, def value: None
  uint32_t m_DataStart;

  /// @brief Field m_FakePointer0, offset: 0x8, size: 0x8, def value: None
  ::System::IntPtr m_FakePointer0;

  /// @brief Field m_FakePointer1, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr m_FakePointer1;

  /// @brief Field m_Blob, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer m_Blob;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics::GeometryHolder, m_Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics::GeometryHolder, m_DataStart) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics::GeometryHolder, m_FakePointer0) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics::GeometryHolder, m_FakePointer1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics::GeometryHolder, m_Blob) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::LowLevelPhysics::GeometryHolder, 0x30>, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevelPhysics::GeometryHolder, "UnityEngine.LowLevelPhysics", "GeometryHolder");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevelPhysics::GeometryHolder__m_Blob_e__FixedBuffer, "UnityEngine.LowLevelPhysics", "GeometryHolder/<m_Blob>e__FixedBuffer");
