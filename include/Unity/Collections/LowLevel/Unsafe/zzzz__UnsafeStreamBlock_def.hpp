#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStreamBlock.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeStreamBlock)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStreamBlock__Data_e__FixedBuffer;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStreamBlock;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStreamBlock__Data_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock);
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE UnsafeStreamBlock__Data_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeStreamBlock__Data_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr UnsafeStreamBlock__Data_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15786 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer, 0x1>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock::<Data>e__FixedBuffer
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct CORDL_TYPE UnsafeStreamBlock {
public:
  // Declarations
  using _Data_e__FixedBuffer = ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeStreamBlock();

  // Ctor Parameters [CppParam { name: "Next", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: None }, CppParam { name: "Data", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr UnsafeStreamBlock(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* Next, ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer Data) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15787 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Next, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* Next;

  /// @brief Field Data, offset: 0x8, size: 0x1, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock, Next) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock, Data) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock, 0x10>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock, "Unity.Collections.LowLevel.Unsafe", "UnsafeStreamBlock");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock__Data_e__FixedBuffer, "Unity.Collections.LowLevel.Unsafe", "UnsafeStreamBlock/<Data>e__FixedBuffer");
