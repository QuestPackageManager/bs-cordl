#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CountingBloomFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CountingBloomFilter)
namespace UnityEngine::UIElements {
struct CountingBloomFilter__m_Counters_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct CountingBloomFilter;
}
namespace UnityEngine::UIElements {
struct CountingBloomFilter__m_Counters_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::CountingBloomFilter);
MARK_VAL_T(::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.CountingBloomFilter/<m_Counters>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE CountingBloomFilter__m_Counters_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CountingBloomFilter__m_Counters_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr CountingBloomFilter__m_Counters_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5728 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4000 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x4000 - 0x1 = 0x3fff, packed as 0x3fff
  uint8_t _cordl_size_padding[0x3fff];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer, 0x4000>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.CountingBloomFilter::<m_Counters>e__FixedBuffer
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.CountingBloomFilter
struct CORDL_TYPE CountingBloomFilter {
public:
  // Declarations
  using _m_Counters_e__FixedBuffer = ::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer;

  /// @brief Method AdjustSlot, addr 0x4a1470c, size 0x2c, virtual false, abstract: false, final false
  inline void AdjustSlot(uint32_t index, bool increment);

  /// @brief Method ContainsHash, addr 0x4a147c0, size 0x28, virtual false, abstract: false, final false
  inline bool ContainsHash(uint32_t hash);

  /// @brief Method Hash1, addr 0x4a14738, size 0x8, virtual false, abstract: false, final false
  inline uint32_t Hash1(uint32_t hash);

  /// @brief Method Hash2, addr 0x4a14740, size 0x8, virtual false, abstract: false, final false
  inline uint32_t Hash2(uint32_t hash);

  /// @brief Method InsertHash, addr 0x4a14758, size 0x38, virtual false, abstract: false, final false
  inline void InsertHash(uint32_t hash);

  /// @brief Method IsSlotEmpty, addr 0x4a14748, size 0x10, virtual false, abstract: false, final false
  inline bool IsSlotEmpty(uint32_t index);

  /// @brief Method RemoveHash, addr 0x4a14790, size 0x30, virtual false, abstract: false, final false
  inline void RemoveHash(uint32_t hash);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CountingBloomFilter();

  // Ctor Parameters [CppParam { name: "m_Counters", ty: "::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr CountingBloomFilter(::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer m_Counters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5729 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4000 };

  /// @brief Field m_Counters, offset: 0x0, size: 0x4000, def value: None
  ::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer m_Counters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::CountingBloomFilter, m_Counters) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CountingBloomFilter, 0x4000>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CountingBloomFilter, "UnityEngine.UIElements", "CountingBloomFilter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CountingBloomFilter__m_Counters_e__FixedBuffer, "UnityEngine.UIElements", "CountingBloomFilter/<m_Counters>e__FixedBuffer");
