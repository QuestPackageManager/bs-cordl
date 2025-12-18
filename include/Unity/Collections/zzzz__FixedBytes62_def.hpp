#pragma once
// IWYU pragma private; include "Unity/Collections/FixedBytes62.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__FixedBytes16_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedBytes62)
// Forward declare root types
namespace Unity::Collections {
struct FixedBytes62;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::FixedBytes62);
// Dependencies Unity.Collections.FixedBytes16
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedBytes62
#pragma pack(push, 0)
struct CORDL_TYPE FixedBytes62 {
public:
  // Declarations
  /// @brief Field byte0048, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0048, put = __cordl_internal_set_byte0048)) uint8_t byte0048;

  /// @brief Field byte0049, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0049, put = __cordl_internal_set_byte0049)) uint8_t byte0049;

  /// @brief Field byte0050, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0050, put = __cordl_internal_set_byte0050)) uint8_t byte0050;

  /// @brief Field byte0051, offset 0x33, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0051, put = __cordl_internal_set_byte0051)) uint8_t byte0051;

  /// @brief Field byte0052, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0052, put = __cordl_internal_set_byte0052)) uint8_t byte0052;

  /// @brief Field byte0053, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0053, put = __cordl_internal_set_byte0053)) uint8_t byte0053;

  /// @brief Field byte0054, offset 0x36, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0054, put = __cordl_internal_set_byte0054)) uint8_t byte0054;

  /// @brief Field byte0055, offset 0x37, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0055, put = __cordl_internal_set_byte0055)) uint8_t byte0055;

  /// @brief Field byte0056, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0056, put = __cordl_internal_set_byte0056)) uint8_t byte0056;

  /// @brief Field byte0057, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0057, put = __cordl_internal_set_byte0057)) uint8_t byte0057;

  /// @brief Field byte0058, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0058, put = __cordl_internal_set_byte0058)) uint8_t byte0058;

  /// @brief Field byte0059, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0059, put = __cordl_internal_set_byte0059)) uint8_t byte0059;

  /// @brief Field byte0060, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0060, put = __cordl_internal_set_byte0060)) uint8_t byte0060;

  /// @brief Field byte0061, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0061, put = __cordl_internal_set_byte0061)) uint8_t byte0061;

  /// @brief Field offset0000, offset 0x0, size 0x10
  __declspec(property(get = __cordl_internal_get_offset0000, put = __cordl_internal_set_offset0000)) ::Unity::Collections::FixedBytes16 offset0000;

  /// @brief Field offset0016, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_offset0016, put = __cordl_internal_set_offset0016)) ::Unity::Collections::FixedBytes16 offset0016;

  /// @brief Field offset0032, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_offset0032, put = __cordl_internal_set_offset0032)) ::Unity::Collections::FixedBytes16 offset0032;

  constexpr uint8_t const& __cordl_internal_get_byte0048() const;

  constexpr uint8_t& __cordl_internal_get_byte0048();

  constexpr uint8_t const& __cordl_internal_get_byte0049() const;

  constexpr uint8_t& __cordl_internal_get_byte0049();

  constexpr uint8_t const& __cordl_internal_get_byte0050() const;

  constexpr uint8_t& __cordl_internal_get_byte0050();

  constexpr uint8_t const& __cordl_internal_get_byte0051() const;

  constexpr uint8_t& __cordl_internal_get_byte0051();

  constexpr uint8_t const& __cordl_internal_get_byte0052() const;

  constexpr uint8_t& __cordl_internal_get_byte0052();

  constexpr uint8_t const& __cordl_internal_get_byte0053() const;

  constexpr uint8_t& __cordl_internal_get_byte0053();

  constexpr uint8_t const& __cordl_internal_get_byte0054() const;

  constexpr uint8_t& __cordl_internal_get_byte0054();

  constexpr uint8_t const& __cordl_internal_get_byte0055() const;

  constexpr uint8_t& __cordl_internal_get_byte0055();

  constexpr uint8_t const& __cordl_internal_get_byte0056() const;

  constexpr uint8_t& __cordl_internal_get_byte0056();

  constexpr uint8_t const& __cordl_internal_get_byte0057() const;

  constexpr uint8_t& __cordl_internal_get_byte0057();

  constexpr uint8_t const& __cordl_internal_get_byte0058() const;

  constexpr uint8_t& __cordl_internal_get_byte0058();

  constexpr uint8_t const& __cordl_internal_get_byte0059() const;

  constexpr uint8_t& __cordl_internal_get_byte0059();

  constexpr uint8_t const& __cordl_internal_get_byte0060() const;

  constexpr uint8_t& __cordl_internal_get_byte0060();

  constexpr uint8_t const& __cordl_internal_get_byte0061() const;

  constexpr uint8_t& __cordl_internal_get_byte0061();

  constexpr ::Unity::Collections::FixedBytes16 const& __cordl_internal_get_offset0000() const;

  constexpr ::Unity::Collections::FixedBytes16& __cordl_internal_get_offset0000();

  constexpr ::Unity::Collections::FixedBytes16 const& __cordl_internal_get_offset0016() const;

  constexpr ::Unity::Collections::FixedBytes16& __cordl_internal_get_offset0016();

  constexpr ::Unity::Collections::FixedBytes16 const& __cordl_internal_get_offset0032() const;

  constexpr ::Unity::Collections::FixedBytes16& __cordl_internal_get_offset0032();

  constexpr void __cordl_internal_set_byte0048(uint8_t value);

  constexpr void __cordl_internal_set_byte0049(uint8_t value);

  constexpr void __cordl_internal_set_byte0050(uint8_t value);

  constexpr void __cordl_internal_set_byte0051(uint8_t value);

  constexpr void __cordl_internal_set_byte0052(uint8_t value);

  constexpr void __cordl_internal_set_byte0053(uint8_t value);

  constexpr void __cordl_internal_set_byte0054(uint8_t value);

  constexpr void __cordl_internal_set_byte0055(uint8_t value);

  constexpr void __cordl_internal_set_byte0056(uint8_t value);

  constexpr void __cordl_internal_set_byte0057(uint8_t value);

  constexpr void __cordl_internal_set_byte0058(uint8_t value);

  constexpr void __cordl_internal_set_byte0059(uint8_t value);

  constexpr void __cordl_internal_set_byte0060(uint8_t value);

  constexpr void __cordl_internal_set_byte0061(uint8_t value);

  constexpr void __cordl_internal_set_offset0000(::Unity::Collections::FixedBytes16 value);

  constexpr void __cordl_internal_set_offset0016(::Unity::Collections::FixedBytes16 value);

  constexpr void __cordl_internal_set_offset0032(::Unity::Collections::FixedBytes16 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedBytes62();

  // Ctor Parameters [CppParam { name: "offset0000", ty: "::Unity::Collections::FixedBytes16", modifiers: "", def_value: None }, CppParam { name: "offset0016", ty:
  // "::Unity::Collections::FixedBytes16", modifiers: "", def_value: None }, CppParam { name: "offset0032", ty: "::Unity::Collections::FixedBytes16", modifiers: "", def_value: None }, CppParam { name:
  // "byte0048", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0049", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0050", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "byte0051", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0052", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "byte0053", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0054", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0055", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "byte0056", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0057", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "byte0058", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0059", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0060", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "byte0061", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr FixedBytes62(::Unity::Collections::FixedBytes16 offset0000, ::Unity::Collections::FixedBytes16 offset0016, ::Unity::Collections::FixedBytes16 offset0032, uint8_t byte0048,
                         uint8_t byte0049, uint8_t byte0050, uint8_t byte0051, uint8_t byte0052, uint8_t byte0053, uint8_t byte0054, uint8_t byte0055, uint8_t byte0056, uint8_t byte0057,
                         uint8_t byte0058, uint8_t byte0059, uint8_t byte0060, uint8_t byte0061) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___offset0000_padding[0x0];
      /// @brief Field offset0000, offset: 0x0, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16 ___offset0000;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___offset0000_padding_forAlignment[0x0];
      /// @brief Field offset0000, offset: 0x0, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16 ___offset0000_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___offset0016_padding[0x10];
      /// @brief Field offset0016, offset: 0x10, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16 ___offset0016;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___offset0016_padding_forAlignment[0x10];
      /// @brief Field offset0016, offset: 0x10, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16 ___offset0016_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x20
      uint8_t ___offset0032_padding[0x20];
      /// @brief Field offset0032, offset: 0x20, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16 ___offset0032;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x20 for alignment
      uint8_t ___offset0032_padding_forAlignment[0x20];
      /// @brief Field offset0032, offset: 0x20, size: 0x10, def value: None
      ::Unity::Collections::FixedBytes16 ___offset0032_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x30
      uint8_t ___byte0048_padding[0x30];
      /// @brief Field byte0048, offset: 0x30, size: 0x1, def value: None
      uint8_t ___byte0048;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x30 for alignment
      uint8_t ___byte0048_padding_forAlignment[0x30];
      /// @brief Field byte0048, offset: 0x30, size: 0x1, def value: None
      uint8_t ___byte0048_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x31
      uint8_t ___byte0049_padding[0x31];
      /// @brief Field byte0049, offset: 0x31, size: 0x1, def value: None
      uint8_t ___byte0049;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x31 for alignment
      uint8_t ___byte0049_padding_forAlignment[0x31];
      /// @brief Field byte0049, offset: 0x31, size: 0x1, def value: None
      uint8_t ___byte0049_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x32
      uint8_t ___byte0050_padding[0x32];
      /// @brief Field byte0050, offset: 0x32, size: 0x1, def value: None
      uint8_t ___byte0050;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x32 for alignment
      uint8_t ___byte0050_padding_forAlignment[0x32];
      /// @brief Field byte0050, offset: 0x32, size: 0x1, def value: None
      uint8_t ___byte0050_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x33
      uint8_t ___byte0051_padding[0x33];
      /// @brief Field byte0051, offset: 0x33, size: 0x1, def value: None
      uint8_t ___byte0051;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x33 for alignment
      uint8_t ___byte0051_padding_forAlignment[0x33];
      /// @brief Field byte0051, offset: 0x33, size: 0x1, def value: None
      uint8_t ___byte0051_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x34
      uint8_t ___byte0052_padding[0x34];
      /// @brief Field byte0052, offset: 0x34, size: 0x1, def value: None
      uint8_t ___byte0052;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x34 for alignment
      uint8_t ___byte0052_padding_forAlignment[0x34];
      /// @brief Field byte0052, offset: 0x34, size: 0x1, def value: None
      uint8_t ___byte0052_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x35
      uint8_t ___byte0053_padding[0x35];
      /// @brief Field byte0053, offset: 0x35, size: 0x1, def value: None
      uint8_t ___byte0053;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x35 for alignment
      uint8_t ___byte0053_padding_forAlignment[0x35];
      /// @brief Field byte0053, offset: 0x35, size: 0x1, def value: None
      uint8_t ___byte0053_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x36
      uint8_t ___byte0054_padding[0x36];
      /// @brief Field byte0054, offset: 0x36, size: 0x1, def value: None
      uint8_t ___byte0054;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x36 for alignment
      uint8_t ___byte0054_padding_forAlignment[0x36];
      /// @brief Field byte0054, offset: 0x36, size: 0x1, def value: None
      uint8_t ___byte0054_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x37
      uint8_t ___byte0055_padding[0x37];
      /// @brief Field byte0055, offset: 0x37, size: 0x1, def value: None
      uint8_t ___byte0055;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x37 for alignment
      uint8_t ___byte0055_padding_forAlignment[0x37];
      /// @brief Field byte0055, offset: 0x37, size: 0x1, def value: None
      uint8_t ___byte0055_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x38
      uint8_t ___byte0056_padding[0x38];
      /// @brief Field byte0056, offset: 0x38, size: 0x1, def value: None
      uint8_t ___byte0056;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x38 for alignment
      uint8_t ___byte0056_padding_forAlignment[0x38];
      /// @brief Field byte0056, offset: 0x38, size: 0x1, def value: None
      uint8_t ___byte0056_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x39
      uint8_t ___byte0057_padding[0x39];
      /// @brief Field byte0057, offset: 0x39, size: 0x1, def value: None
      uint8_t ___byte0057;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x39 for alignment
      uint8_t ___byte0057_padding_forAlignment[0x39];
      /// @brief Field byte0057, offset: 0x39, size: 0x1, def value: None
      uint8_t ___byte0057_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3a
      uint8_t ___byte0058_padding[0x3a];
      /// @brief Field byte0058, offset: 0x3a, size: 0x1, def value: None
      uint8_t ___byte0058;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3a for alignment
      uint8_t ___byte0058_padding_forAlignment[0x3a];
      /// @brief Field byte0058, offset: 0x3a, size: 0x1, def value: None
      uint8_t ___byte0058_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3b
      uint8_t ___byte0059_padding[0x3b];
      /// @brief Field byte0059, offset: 0x3b, size: 0x1, def value: None
      uint8_t ___byte0059;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3b for alignment
      uint8_t ___byte0059_padding_forAlignment[0x3b];
      /// @brief Field byte0059, offset: 0x3b, size: 0x1, def value: None
      uint8_t ___byte0059_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3c
      uint8_t ___byte0060_padding[0x3c];
      /// @brief Field byte0060, offset: 0x3c, size: 0x1, def value: None
      uint8_t ___byte0060;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3c for alignment
      uint8_t ___byte0060_padding_forAlignment[0x3c];
      /// @brief Field byte0060, offset: 0x3c, size: 0x1, def value: None
      uint8_t ___byte0060_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3d
      uint8_t ___byte0061_padding[0x3d];
      /// @brief Field byte0061, offset: 0x3d, size: 0x1, def value: None
      uint8_t ___byte0061;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3d for alignment
      uint8_t ___byte0061_padding_forAlignment[0x3d];
      /// @brief Field byte0061, offset: 0x3d, size: 0x1, def value: None
      uint8_t ___byte0061_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15574 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3e };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedBytes62, 0x3e>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedBytes62, "Unity.Collections", "FixedBytes62");
