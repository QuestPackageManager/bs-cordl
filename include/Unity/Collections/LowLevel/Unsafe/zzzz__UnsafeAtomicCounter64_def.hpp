#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeAtomicCounter64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeAtomicCounter64)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAtomicCounter64;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64, "Unity.Collections.LowLevel.Unsafe", "UnsafeAtomicCounter64");
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter64
struct CORDL_TYPE UnsafeAtomicCounter64 {
public:
  // Declarations
  /// @brief Method Add, addr 0x64c85bc, size 0x5c, virtual false, abstract: false, final false
  inline int64_t Add(int64_t value);

  /// @brief Method AddSat, addr 0x64c8674, size 0x90, virtual false, abstract: false, final false
  inline int64_t AddSat(int64_t value, int64_t max);

  /// @brief Method Reset, addr 0x64c85b0, size 0xc, virtual false, abstract: false, final false
  inline void Reset(int64_t value);

  /// @brief Method Sub, addr 0x64c8618, size 0x5c, virtual false, abstract: false, final false
  inline int64_t Sub(int64_t value);

  /// @brief Method SubSat, addr 0x64c8704, size 0x90, virtual false, abstract: false, final false
  inline int64_t SubSat(int64_t value, int64_t min);

  /// @brief Method .ctor, addr 0x64c85a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* ptr);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeAtomicCounter64();

  // Ctor Parameters [CppParam { name: "Counter", ty: "int64_t*", modifiers: "", def_value: None }]
  constexpr UnsafeAtomicCounter64(int64_t* Counter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15728 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Counter, offset: 0x0, size: 0x8, def value: None
  int64_t* Counter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64, Counter) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter64) == 0x8, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
