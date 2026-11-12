#pragma once
// IWYU pragma private; include "Unity/Collections/BitField64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitField64)
// Forward declare root types
namespace Unity::Collections {
struct BitField64;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::BitField64);
DEFINE_IL2CPP_CLASS(::Unity::Collections::BitField64, "Unity.Collections", "BitField64");
// [DebuggerTypeProxy(typeof(Unity.Collections.BitField64DebugView))]
// [GenerateTestsForBurstCompatibility]
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.BitField64
struct CORDL_TYPE BitField64 {
public:
  // Declarations
  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckArgs, addr 0x69124ac, size 0xbc, virtual false, abstract: false, final false
  static inline void CheckArgs(int32_t pos, int32_t numBits);

  /// @brief Method Clear, addr 0x6912310, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CountBits, addr 0x69123f0, size 0x14, virtual false, abstract: false, final false
  inline int32_t CountBits();

  /// @brief Method CountLeadingZeros, addr 0x6912404, size 0x50, virtual false, abstract: false, final false
  inline int32_t CountLeadingZeros();

  /// @brief Method CountTrailingZeros, addr 0x6912454, size 0x58, virtual false, abstract: false, final false
  inline int32_t CountTrailingZeros();

  /// @brief Method GetBits, addr 0x691236c, size 0x1c, virtual false, abstract: false, final false
  inline uint64_t GetBits(int32_t pos, int32_t numBits);

  /// @brief Method IsSet, addr 0x6912388, size 0x10, virtual false, abstract: false, final false
  inline bool IsSet(int32_t pos);

  /// @brief Method SetBits, addr 0x6912318, size 0x24, virtual false, abstract: false, final false
  inline void SetBits(int32_t pos, bool value);

  /// @brief Method SetBits, addr 0x691233c, size 0x30, virtual false, abstract: false, final false
  inline void SetBits(int32_t pos, bool value, int32_t numBits);

  /// @brief Method TestAll, addr 0x69123d0, size 0x20, virtual false, abstract: false, final false
  inline bool TestAll(int32_t pos, int32_t numBits);

  /// @brief Method TestAny, addr 0x69123b4, size 0x1c, virtual false, abstract: false, final false
  inline bool TestAny(int32_t pos, int32_t numBits);

  /// @brief Method TestNone, addr 0x6912398, size 0x1c, virtual false, abstract: false, final false
  inline bool TestNone(int32_t pos, int32_t numBits);

  /// @brief Method .ctor, addr 0x6912308, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t initialValue);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BitField64();

  // Ctor Parameters [CppParam { name: "Value", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
  constexpr BitField64(uint64_t Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15836 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Value, offset: 0x0, size: 0x8, def value: None
  uint64_t Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::BitField64, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::BitField64) == 0x8, "Size mismatch!");

} // namespace Unity::Collections
