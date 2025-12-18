#pragma once
// IWYU pragma private; include "Unity/Collections/FixedBytes16Align8.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedBytes16Align8)
// Forward declare root types
namespace Unity::Collections {
struct FixedBytes16Align8;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::FixedBytes16Align8);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedBytes16Align8
#pragma pack(push, 0)
struct CORDL_TYPE FixedBytes16Align8 {
public:
  // Declarations
  /// @brief Field byte0000, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_byte0000, put = __cordl_internal_set_byte0000)) uint64_t byte0000;

  /// @brief Field byte0008, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_byte0008, put = __cordl_internal_set_byte0008)) uint64_t byte0008;

  constexpr uint64_t const& __cordl_internal_get_byte0000() const;

  constexpr uint64_t& __cordl_internal_get_byte0000();

  constexpr uint64_t const& __cordl_internal_get_byte0008() const;

  constexpr uint64_t& __cordl_internal_get_byte0008();

  constexpr void __cordl_internal_set_byte0000(uint64_t value);

  constexpr void __cordl_internal_set_byte0008(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedBytes16Align8();

  // Ctor Parameters [CppParam { name: "byte0000", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "byte0008", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr FixedBytes16Align8(uint64_t byte0000, uint64_t byte0008) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___byte0000_padding[0x0];
      /// @brief Field byte0000, offset: 0x0, size: 0x8, def value: None
      uint64_t ___byte0000;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___byte0000_padding_forAlignment[0x0];
      /// @brief Field byte0000, offset: 0x0, size: 0x8, def value: None
      uint64_t ___byte0000_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___byte0008_padding[0x8];
      /// @brief Field byte0008, offset: 0x8, size: 0x8, def value: None
      uint64_t ___byte0008;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___byte0008_padding_forAlignment[0x8];
      /// @brief Field byte0008, offset: 0x8, size: 0x8, def value: None
      uint64_t ___byte0008_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15564 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedBytes16Align8, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedBytes16Align8, "Unity.Collections", "FixedBytes16Align8");
