#pragma once
// IWYU pragma private; include "System/Numerics/DoubleUlong.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DoubleUlong)
// Forward declare root types
namespace System::Numerics {
struct DoubleUlong;
}
// Write type traits
MARK_VAL_T(::System::Numerics::DoubleUlong);
// Dependencies
namespace System::Numerics {
// Is value type: true
// CS Name: System.Numerics.DoubleUlong
struct CORDL_TYPE DoubleUlong {
public:
  // Declarations
  /// @brief Field dbl, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_dbl, put = __cordl_internal_set_dbl)) double_t dbl;

  /// @brief Field uu, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_uu, put = __cordl_internal_set_uu)) uint64_t uu;

  constexpr double_t const& __cordl_internal_get_dbl() const;

  constexpr double_t& __cordl_internal_get_dbl();

  constexpr uint64_t const& __cordl_internal_get_uu() const;

  constexpr uint64_t& __cordl_internal_get_uu();

  constexpr void __cordl_internal_set_dbl(double_t value);

  constexpr void __cordl_internal_set_uu(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DoubleUlong();

  // Ctor Parameters [CppParam { name: "dbl", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "uu", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr DoubleUlong(double_t dbl, uint64_t uu) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___dbl_padding[0x0];
      /// @brief Field dbl, offset: 0x0, size: 0x8, def value: None
      double_t ___dbl;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___dbl_padding_forAlignment[0x0];
      /// @brief Field dbl, offset: 0x0, size: 0x8, def value: None
      double_t ___dbl_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___uu_padding[0x0];
      /// @brief Field uu, offset: 0x0, size: 0x8, def value: None
      uint64_t ___uu;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___uu_padding_forAlignment[0x0];
      /// @brief Field uu, offset: 0x0, size: 0x8, def value: None
      uint64_t ___uu_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17948 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::DoubleUlong, 0x8>, "Size mismatch!");

} // namespace System::Numerics
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::DoubleUlong, "System.Numerics", "DoubleUlong");
