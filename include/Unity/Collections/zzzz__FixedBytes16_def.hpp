#pragma once
// IWYU pragma private; include "Unity/Collections/FixedBytes16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedBytes16)
// Forward declare root types
namespace Unity::Collections {
struct FixedBytes16;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::FixedBytes16);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedBytes16
#pragma pack(push, 0)
struct CORDL_TYPE FixedBytes16 {
public:
  // Declarations
  /// @brief Field byte0000, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0000, put = __cordl_internal_set_byte0000)) uint8_t byte0000;

  /// @brief Field byte0001, offset 0x1, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0001, put = __cordl_internal_set_byte0001)) uint8_t byte0001;

  /// @brief Field byte0002, offset 0x2, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0002, put = __cordl_internal_set_byte0002)) uint8_t byte0002;

  /// @brief Field byte0003, offset 0x3, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0003, put = __cordl_internal_set_byte0003)) uint8_t byte0003;

  /// @brief Field byte0004, offset 0x4, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0004, put = __cordl_internal_set_byte0004)) uint8_t byte0004;

  /// @brief Field byte0005, offset 0x5, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0005, put = __cordl_internal_set_byte0005)) uint8_t byte0005;

  /// @brief Field byte0006, offset 0x6, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0006, put = __cordl_internal_set_byte0006)) uint8_t byte0006;

  /// @brief Field byte0007, offset 0x7, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0007, put = __cordl_internal_set_byte0007)) uint8_t byte0007;

  /// @brief Field byte0008, offset 0x8, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0008, put = __cordl_internal_set_byte0008)) uint8_t byte0008;

  /// @brief Field byte0009, offset 0x9, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0009, put = __cordl_internal_set_byte0009)) uint8_t byte0009;

  /// @brief Field byte0010, offset 0xa, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0010, put = __cordl_internal_set_byte0010)) uint8_t byte0010;

  /// @brief Field byte0011, offset 0xb, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0011, put = __cordl_internal_set_byte0011)) uint8_t byte0011;

  /// @brief Field byte0012, offset 0xc, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0012, put = __cordl_internal_set_byte0012)) uint8_t byte0012;

  /// @brief Field byte0013, offset 0xd, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0013, put = __cordl_internal_set_byte0013)) uint8_t byte0013;

  /// @brief Field byte0014, offset 0xe, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0014, put = __cordl_internal_set_byte0014)) uint8_t byte0014;

  /// @brief Field byte0015, offset 0xf, size 0x1
  __declspec(property(get = __cordl_internal_get_byte0015, put = __cordl_internal_set_byte0015)) uint8_t byte0015;

  constexpr uint8_t const& __cordl_internal_get_byte0000() const;

  constexpr uint8_t& __cordl_internal_get_byte0000();

  constexpr uint8_t const& __cordl_internal_get_byte0001() const;

  constexpr uint8_t& __cordl_internal_get_byte0001();

  constexpr uint8_t const& __cordl_internal_get_byte0002() const;

  constexpr uint8_t& __cordl_internal_get_byte0002();

  constexpr uint8_t const& __cordl_internal_get_byte0003() const;

  constexpr uint8_t& __cordl_internal_get_byte0003();

  constexpr uint8_t const& __cordl_internal_get_byte0004() const;

  constexpr uint8_t& __cordl_internal_get_byte0004();

  constexpr uint8_t const& __cordl_internal_get_byte0005() const;

  constexpr uint8_t& __cordl_internal_get_byte0005();

  constexpr uint8_t const& __cordl_internal_get_byte0006() const;

  constexpr uint8_t& __cordl_internal_get_byte0006();

  constexpr uint8_t const& __cordl_internal_get_byte0007() const;

  constexpr uint8_t& __cordl_internal_get_byte0007();

  constexpr uint8_t const& __cordl_internal_get_byte0008() const;

  constexpr uint8_t& __cordl_internal_get_byte0008();

  constexpr uint8_t const& __cordl_internal_get_byte0009() const;

  constexpr uint8_t& __cordl_internal_get_byte0009();

  constexpr uint8_t const& __cordl_internal_get_byte0010() const;

  constexpr uint8_t& __cordl_internal_get_byte0010();

  constexpr uint8_t const& __cordl_internal_get_byte0011() const;

  constexpr uint8_t& __cordl_internal_get_byte0011();

  constexpr uint8_t const& __cordl_internal_get_byte0012() const;

  constexpr uint8_t& __cordl_internal_get_byte0012();

  constexpr uint8_t const& __cordl_internal_get_byte0013() const;

  constexpr uint8_t& __cordl_internal_get_byte0013();

  constexpr uint8_t const& __cordl_internal_get_byte0014() const;

  constexpr uint8_t& __cordl_internal_get_byte0014();

  constexpr uint8_t const& __cordl_internal_get_byte0015() const;

  constexpr uint8_t& __cordl_internal_get_byte0015();

  constexpr void __cordl_internal_set_byte0000(uint8_t value);

  constexpr void __cordl_internal_set_byte0001(uint8_t value);

  constexpr void __cordl_internal_set_byte0002(uint8_t value);

  constexpr void __cordl_internal_set_byte0003(uint8_t value);

  constexpr void __cordl_internal_set_byte0004(uint8_t value);

  constexpr void __cordl_internal_set_byte0005(uint8_t value);

  constexpr void __cordl_internal_set_byte0006(uint8_t value);

  constexpr void __cordl_internal_set_byte0007(uint8_t value);

  constexpr void __cordl_internal_set_byte0008(uint8_t value);

  constexpr void __cordl_internal_set_byte0009(uint8_t value);

  constexpr void __cordl_internal_set_byte0010(uint8_t value);

  constexpr void __cordl_internal_set_byte0011(uint8_t value);

  constexpr void __cordl_internal_set_byte0012(uint8_t value);

  constexpr void __cordl_internal_set_byte0013(uint8_t value);

  constexpr void __cordl_internal_set_byte0014(uint8_t value);

  constexpr void __cordl_internal_set_byte0015(uint8_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedBytes16();

  // Ctor Parameters [CppParam { name: "byte0000", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0001", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "byte0002", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0003", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0004", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "byte0005", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0006", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "byte0007", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0008", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0009", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "byte0010", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0011", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "byte0012", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0013", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "byte0014", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "byte0015", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr FixedBytes16(uint8_t byte0000, uint8_t byte0001, uint8_t byte0002, uint8_t byte0003, uint8_t byte0004, uint8_t byte0005, uint8_t byte0006, uint8_t byte0007, uint8_t byte0008,
                         uint8_t byte0009, uint8_t byte0010, uint8_t byte0011, uint8_t byte0012, uint8_t byte0013, uint8_t byte0014, uint8_t byte0015) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___byte0000_padding[0x0];
      /// @brief Field byte0000, offset: 0x0, size: 0x1, def value: None
      uint8_t ___byte0000;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___byte0000_padding_forAlignment[0x0];
      /// @brief Field byte0000, offset: 0x0, size: 0x1, def value: None
      uint8_t ___byte0000_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1
      uint8_t ___byte0001_padding[0x1];
      /// @brief Field byte0001, offset: 0x1, size: 0x1, def value: None
      uint8_t ___byte0001;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1 for alignment
      uint8_t ___byte0001_padding_forAlignment[0x1];
      /// @brief Field byte0001, offset: 0x1, size: 0x1, def value: None
      uint8_t ___byte0001_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___byte0002_padding[0x2];
      /// @brief Field byte0002, offset: 0x2, size: 0x1, def value: None
      uint8_t ___byte0002;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___byte0002_padding_forAlignment[0x2];
      /// @brief Field byte0002, offset: 0x2, size: 0x1, def value: None
      uint8_t ___byte0002_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3
      uint8_t ___byte0003_padding[0x3];
      /// @brief Field byte0003, offset: 0x3, size: 0x1, def value: None
      uint8_t ___byte0003;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3 for alignment
      uint8_t ___byte0003_padding_forAlignment[0x3];
      /// @brief Field byte0003, offset: 0x3, size: 0x1, def value: None
      uint8_t ___byte0003_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___byte0004_padding[0x4];
      /// @brief Field byte0004, offset: 0x4, size: 0x1, def value: None
      uint8_t ___byte0004;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___byte0004_padding_forAlignment[0x4];
      /// @brief Field byte0004, offset: 0x4, size: 0x1, def value: None
      uint8_t ___byte0004_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x5
      uint8_t ___byte0005_padding[0x5];
      /// @brief Field byte0005, offset: 0x5, size: 0x1, def value: None
      uint8_t ___byte0005;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x5 for alignment
      uint8_t ___byte0005_padding_forAlignment[0x5];
      /// @brief Field byte0005, offset: 0x5, size: 0x1, def value: None
      uint8_t ___byte0005_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x6
      uint8_t ___byte0006_padding[0x6];
      /// @brief Field byte0006, offset: 0x6, size: 0x1, def value: None
      uint8_t ___byte0006;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x6 for alignment
      uint8_t ___byte0006_padding_forAlignment[0x6];
      /// @brief Field byte0006, offset: 0x6, size: 0x1, def value: None
      uint8_t ___byte0006_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x7
      uint8_t ___byte0007_padding[0x7];
      /// @brief Field byte0007, offset: 0x7, size: 0x1, def value: None
      uint8_t ___byte0007;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x7 for alignment
      uint8_t ___byte0007_padding_forAlignment[0x7];
      /// @brief Field byte0007, offset: 0x7, size: 0x1, def value: None
      uint8_t ___byte0007_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___byte0008_padding[0x8];
      /// @brief Field byte0008, offset: 0x8, size: 0x1, def value: None
      uint8_t ___byte0008;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___byte0008_padding_forAlignment[0x8];
      /// @brief Field byte0008, offset: 0x8, size: 0x1, def value: None
      uint8_t ___byte0008_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x9
      uint8_t ___byte0009_padding[0x9];
      /// @brief Field byte0009, offset: 0x9, size: 0x1, def value: None
      uint8_t ___byte0009;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x9 for alignment
      uint8_t ___byte0009_padding_forAlignment[0x9];
      /// @brief Field byte0009, offset: 0x9, size: 0x1, def value: None
      uint8_t ___byte0009_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___byte0010_padding[0xa];
      /// @brief Field byte0010, offset: 0xa, size: 0x1, def value: None
      uint8_t ___byte0010;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___byte0010_padding_forAlignment[0xa];
      /// @brief Field byte0010, offset: 0xa, size: 0x1, def value: None
      uint8_t ___byte0010_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xb
      uint8_t ___byte0011_padding[0xb];
      /// @brief Field byte0011, offset: 0xb, size: 0x1, def value: None
      uint8_t ___byte0011;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xb for alignment
      uint8_t ___byte0011_padding_forAlignment[0xb];
      /// @brief Field byte0011, offset: 0xb, size: 0x1, def value: None
      uint8_t ___byte0011_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___byte0012_padding[0xc];
      /// @brief Field byte0012, offset: 0xc, size: 0x1, def value: None
      uint8_t ___byte0012;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___byte0012_padding_forAlignment[0xc];
      /// @brief Field byte0012, offset: 0xc, size: 0x1, def value: None
      uint8_t ___byte0012_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xd
      uint8_t ___byte0013_padding[0xd];
      /// @brief Field byte0013, offset: 0xd, size: 0x1, def value: None
      uint8_t ___byte0013;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xd for alignment
      uint8_t ___byte0013_padding_forAlignment[0xd];
      /// @brief Field byte0013, offset: 0xd, size: 0x1, def value: None
      uint8_t ___byte0013_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xe
      uint8_t ___byte0014_padding[0xe];
      /// @brief Field byte0014, offset: 0xe, size: 0x1, def value: None
      uint8_t ___byte0014;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xe for alignment
      uint8_t ___byte0014_padding_forAlignment[0xe];
      /// @brief Field byte0014, offset: 0xe, size: 0x1, def value: None
      uint8_t ___byte0014_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xf
      uint8_t ___byte0015_padding[0xf];
      /// @brief Field byte0015, offset: 0xf, size: 0x1, def value: None
      uint8_t ___byte0015;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xf for alignment
      uint8_t ___byte0015_padding_forAlignment[0xf];
      /// @brief Field byte0015, offset: 0xf, size: 0x1, def value: None
      uint8_t ___byte0015_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15551 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedBytes16, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedBytes16, "Unity.Collections", "FixedBytes16");
