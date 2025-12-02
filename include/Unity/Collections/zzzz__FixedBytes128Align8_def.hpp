#pragma once
// IWYU pragma private; include "Unity/Collections/FixedBytes128Align8.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__FixedBytes16Align8_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FixedBytes128Align8)
// Forward declare root types
namespace Unity::Collections {
struct FixedBytes128Align8;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::FixedBytes128Align8);
// Dependencies Unity.Collections.FixedBytes16Align8
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedBytes128Align8
#pragma pack(push, 0)
struct CORDL_TYPE FixedBytes128Align8 {
public:
  // Declarations
  /// @brief Field offset0000, offset 0x0, size 0x10
  __declspec(property(get = __cordl_internal_get_offset0000, put = __cordl_internal_set_offset0000)) ::Unity::Collections::FixedBytes16Align8 offset0000;

  /// @brief Field offset0016, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_offset0016, put = __cordl_internal_set_offset0016)) ::Unity::Collections::FixedBytes16Align8 offset0016;

  /// @brief Field offset0032, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_offset0032, put = __cordl_internal_set_offset0032)) ::Unity::Collections::FixedBytes16Align8 offset0032;

  /// @brief Field offset0048, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_offset0048, put = __cordl_internal_set_offset0048)) ::Unity::Collections::FixedBytes16Align8 offset0048;

  /// @brief Field offset0064, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_offset0064, put = __cordl_internal_set_offset0064)) ::Unity::Collections::FixedBytes16Align8 offset0064;

  /// @brief Field offset0080, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_offset0080, put = __cordl_internal_set_offset0080)) ::Unity::Collections::FixedBytes16Align8 offset0080;

  /// @brief Field offset0096, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_offset0096, put = __cordl_internal_set_offset0096)) ::Unity::Collections::FixedBytes16Align8 offset0096;

  /// @brief Field offset0112, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_offset0112, put = __cordl_internal_set_offset0112)) ::Unity::Collections::FixedBytes16Align8 offset0112;

  constexpr ::Unity::Collections::FixedBytes16Align8 const& __cordl_internal_get_offset0000() const;

  constexpr ::Unity::Collections::FixedBytes16Align8& __cordl_internal_get_offset0000();

  constexpr ::Unity::Collections::FixedBytes16Align8 const& __cordl_internal_get_offset0016() const;

  constexpr ::Unity::Collections::FixedBytes16Align8& __cordl_internal_get_offset0016();

  constexpr ::Unity::Collections::FixedBytes16Align8 const& __cordl_internal_get_offset0032() const;

  constexpr ::Unity::Collections::FixedBytes16Align8& __cordl_internal_get_offset0032();

  constexpr ::Unity::Collections::FixedBytes16Align8 const& __cordl_internal_get_offset0048() const;

  constexpr ::Unity::Collections::FixedBytes16Align8& __cordl_internal_get_offset0048();

  constexpr ::Unity::Collections::FixedBytes16Align8 const& __cordl_internal_get_offset0064() const;

  constexpr ::Unity::Collections::FixedBytes16Align8& __cordl_internal_get_offset0064();

  constexpr ::Unity::Collections::FixedBytes16Align8 const& __cordl_internal_get_offset0080() const;

  constexpr ::Unity::Collections::FixedBytes16Align8& __cordl_internal_get_offset0080();

  constexpr ::Unity::Collections::FixedBytes16Align8 const& __cordl_internal_get_offset0096() const;

  constexpr ::Unity::Collections::FixedBytes16Align8& __cordl_internal_get_offset0096();

  constexpr ::Unity::Collections::FixedBytes16Align8 const& __cordl_internal_get_offset0112() const;

  constexpr ::Unity::Collections::FixedBytes16Align8& __cordl_internal_get_offset0112();

  constexpr void __cordl_internal_set_offset0000(::Unity::Collections::FixedBytes16Align8 value);

  constexpr void __cordl_internal_set_offset0016(::Unity::Collections::FixedBytes16Align8 value);

  constexpr void __cordl_internal_set_offset0032(::Unity::Collections::FixedBytes16Align8 value);

  constexpr void __cordl_internal_set_offset0048(::Unity::Collections::FixedBytes16Align8 value);

  constexpr void __cordl_internal_set_offset0064(::Unity::Collections::FixedBytes16Align8 value);

  constexpr void __cordl_internal_set_offset0080(::Unity::Collections::FixedBytes16Align8 value);

  constexpr void __cordl_internal_set_offset0096(::Unity::Collections::FixedBytes16Align8 value);

  constexpr void __cordl_internal_set_offset0112(::Unity::Collections::FixedBytes16Align8 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedBytes128Align8();

  // Ctor Parameters [CppParam { name: "offset0000", ty: "::Unity::Collections::FixedBytes16Align8", modifiers: "", def_value: None }, CppParam { name: "offset0016", ty:
  // "::Unity::Collections::FixedBytes16Align8", modifiers: "", def_value: None }, CppParam { name: "offset0032", ty: "::Unity::Collections::FixedBytes16Align8", modifiers: "", def_value: None },
  // CppParam { name: "offset0048", ty: "::Unity::Collections::FixedBytes16Align8", modifiers: "", def_value: None }, CppParam { name: "offset0064", ty: "::Unity::Collections::FixedBytes16Align8",
  // modifiers: "", def_value: None }, CppParam { name: "offset0080", ty: "::Unity::Collections::FixedBytes16Align8", modifiers: "", def_value: None }, CppParam { name: "offset0096", ty:
  // "::Unity::Collections::FixedBytes16Align8", modifiers: "", def_value: None }, CppParam { name: "offset0112", ty: "::Unity::Collections::FixedBytes16Align8", modifiers: "", def_value: None }]
  constexpr FixedBytes128Align8(::Unity::Collections::FixedBytes16Align8 offset0000, ::Unity::Collections::FixedBytes16Align8 offset0016, ::Unity::Collections::FixedBytes16Align8 offset0032,
                                ::Unity::Collections::FixedBytes16Align8 offset0048, ::Unity::Collections::FixedBytes16Align8 offset0064, ::Unity::Collections::FixedBytes16Align8 offset0080,
                                ::Unity::Collections::FixedBytes16Align8 offset0096, ::Unity::Collections::FixedBytes16Align8 offset0112) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___offset0000_padding[0x0];
      /// @brief Field offset0000, offset: 0x0, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0000;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___offset0000_padding_forAlignment[0x0];
      /// @brief Field offset0000, offset: 0x0, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0000_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___offset0016_padding[0x10];
      /// @brief Field offset0016, offset: 0x10, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0016;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___offset0016_padding_forAlignment[0x10];
      /// @brief Field offset0016, offset: 0x10, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0016_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x20
      uint8_t ___offset0032_padding[0x20];
      /// @brief Field offset0032, offset: 0x20, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0032;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x20 for alignment
      uint8_t ___offset0032_padding_forAlignment[0x20];
      /// @brief Field offset0032, offset: 0x20, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0032_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x30
      uint8_t ___offset0048_padding[0x30];
      /// @brief Field offset0048, offset: 0x30, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0048;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x30 for alignment
      uint8_t ___offset0048_padding_forAlignment[0x30];
      /// @brief Field offset0048, offset: 0x30, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0048_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x40
      uint8_t ___offset0064_padding[0x40];
      /// @brief Field offset0064, offset: 0x40, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0064;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x40 for alignment
      uint8_t ___offset0064_padding_forAlignment[0x40];
      /// @brief Field offset0064, offset: 0x40, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0064_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x50
      uint8_t ___offset0080_padding[0x50];
      /// @brief Field offset0080, offset: 0x50, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0080;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x50 for alignment
      uint8_t ___offset0080_padding_forAlignment[0x50];
      /// @brief Field offset0080, offset: 0x50, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0080_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x60
      uint8_t ___offset0096_padding[0x60];
      /// @brief Field offset0096, offset: 0x60, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0096;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x60 for alignment
      uint8_t ___offset0096_padding_forAlignment[0x60];
      /// @brief Field offset0096, offset: 0x60, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0096_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x70
      uint8_t ___offset0112_padding[0x70];
      /// @brief Field offset0112, offset: 0x70, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0112;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x70 for alignment
      uint8_t ___offset0112_padding_forAlignment[0x70];
      /// @brief Field offset0112, offset: 0x70, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16Align8 ___offset0112_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15554 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedBytes128Align8, 0x80>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedBytes128Align8, "Unity.Collections", "FixedBytes128Align8");
