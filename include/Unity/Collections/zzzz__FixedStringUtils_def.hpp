#pragma once
// IWYU pragma private; include "Unity/Collections/FixedStringUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedStringUtils)
namespace Unity::Collections {
struct FixedStringUtils_UintFloatUnion;
}
namespace Unity::Collections {
struct ParseError;
}
// Forward declare root types
namespace Unity::Collections {
class FixedStringUtils;
}
namespace Unity::Collections {
struct FixedStringUtils_UintFloatUnion;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::FixedStringUtils);
MARK_VAL_T(::Unity::Collections::FixedStringUtils_UintFloatUnion);
// Dependencies
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedStringUtils/UintFloatUnion
struct CORDL_TYPE FixedStringUtils_UintFloatUnion {
public:
  // Declarations
  /// @brief Field floatValue, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_floatValue, put = __cordl_internal_set_floatValue)) float_t floatValue;

  /// @brief Field uintValue, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_uintValue, put = __cordl_internal_set_uintValue)) uint32_t uintValue;

  constexpr float_t const& __cordl_internal_get_floatValue() const;

  constexpr float_t& __cordl_internal_get_floatValue();

  constexpr uint32_t const& __cordl_internal_get_uintValue() const;

  constexpr uint32_t& __cordl_internal_get_uintValue();

  constexpr void __cordl_internal_set_floatValue(float_t value);

  constexpr void __cordl_internal_set_uintValue(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedStringUtils_UintFloatUnion();

  // Ctor Parameters [CppParam { name: "uintValue", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "floatValue", ty: "float_t", modifiers: "", def_value: None }]
  constexpr FixedStringUtils_UintFloatUnion(uint32_t uintValue, float_t floatValue) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___uintValue_padding[0x0];
      /// @brief Field uintValue, offset: 0x0, size: 0x4, def value: None
      uint32_t ___uintValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___uintValue_padding_forAlignment[0x0];
      /// @brief Field uintValue, offset: 0x0, size: 0x4, def value: None
      uint32_t ___uintValue_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___floatValue_padding[0x0];
      /// @brief Field floatValue, offset: 0x0, size: 0x4, def value: None
      float_t ___floatValue;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___floatValue_padding_forAlignment[0x0];
      /// @brief Field floatValue, offset: 0x0, size: 0x4, def value: None
      float_t ___floatValue_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15589 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedStringUtils_UintFloatUnion, 0x4>, "Size mismatch!");

} // namespace Unity::Collections
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedStringUtils
class CORDL_TYPE FixedStringUtils : public ::System::Object {
public:
  // Declarations
  using UintFloatUnion = ::Unity::Collections::FixedStringUtils_UintFloatUnion;

  /// @brief Method Base10ToBase2, addr 0x630b774, size 0xe4, virtual false, abstract: false, final false
  static inline ::Unity::Collections::ParseError Base10ToBase2(::ByRef<float_t> output, uint64_t mantissa10, int32_t exponent10);

  /// @brief Method Base2ToBase10, addr 0x630b858, size 0x170, virtual false, abstract: false, final false
  static inline void Base2ToBase10(::ByRef<uint64_t> mantissa10, ::ByRef<int32_t> exponent10, float_t input);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedStringUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedStringUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedStringUtils(FixedStringUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedStringUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedStringUtils(FixedStringUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15590 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedStringUtils, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::FixedStringUtils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedStringUtils*, "Unity.Collections", "FixedStringUtils");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedStringUtils_UintFloatUnion, "Unity.Collections", "FixedStringUtils/UintFloatUnion");
