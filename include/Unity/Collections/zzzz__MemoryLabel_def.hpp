#pragma once
// IWYU pragma private; include "Unity/Collections/MemoryLabel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryLabel)
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace Unity::Collections {
struct MemoryLabel;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::MemoryLabel);
DEFINE_IL2CPP_CLASS(::Unity::Collections::MemoryLabel, "Unity.Collections", "MemoryLabel");
// [IsReadOnly]
// Dependencies System.IntPtr, Unity.Collections.Allocator
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.MemoryLabel
#pragma pack(push, 0)
struct CORDL_TYPE MemoryLabel {
public:
  // Declarations
  __declspec(property(get = get_IsCreated)) bool IsCreated;

  /// @brief Method IsNullOrEmpty, addr 0x6eb18ac, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::StringW str);

  /// @brief Method IsNullOrEmpty__Unmanaged, addr 0x6eb18d8, size 0x10, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty__Unmanaged(uint8_t* name, int32_t nameLen);

  /// @brief Method SupportsAllocator, addr 0x6eb18c8, size 0x10, virtual false, abstract: false, final false
  static inline bool SupportsAllocator(::Unity::Collections::Allocator allocator);

  /// @brief Method .ctor, addr 0x6eb17c8, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::StringW areaName, ::StringW objectName, ::Unity::Collections::Allocator allocator);

  /// @brief Method get_IsCreated, addr 0x6eb18e8, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryLabel();

  // Ctor Parameters [CppParam { name: "pointer", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "allocator", ty: "::Unity::Collections::Allocator",
  // modifiers: "", def_value: None, comment: None }]
  constexpr MemoryLabel(::System::IntPtr pointer, ::Unity::Collections::Allocator allocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9557 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [NativeDisableUnsafePtrRestriction]
  /// @brief Field pointer, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr pointer;

  /// @brief Field allocator, offset: 0x8, size: 0x4, def value: None
  ::Unity::Collections::Allocator allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Collections::MemoryLabel, pointer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::MemoryLabel, allocator) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::MemoryLabel) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
