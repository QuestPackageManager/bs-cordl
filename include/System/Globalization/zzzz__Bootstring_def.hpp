#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Bootstring)
// Forward declare root types
namespace System::Globalization {
class Bootstring;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::Bootstring);
// Type: System.Globalization::Bootstring
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3724))
// CS Name: ::System.Globalization::Bootstring*
class CORDL_TYPE Bootstring : public ::System::Object {
public:
  // Declarations
  /// @brief Field delimiter, offset 0x10, size 0x2
  __declspec(property(get = __get_delimiter, put = __set_delimiter)) char16_t delimiter;

  /// @brief Field base_num, offset 0x14, size 0x4
  __declspec(property(get = __get_base_num, put = __set_base_num)) int32_t base_num;

  /// @brief Field tmin, offset 0x18, size 0x4
  __declspec(property(get = __get_tmin, put = __set_tmin)) int32_t tmin;

  /// @brief Field tmax, offset 0x1c, size 0x4
  __declspec(property(get = __get_tmax, put = __set_tmax)) int32_t tmax;

  /// @brief Field skew, offset 0x20, size 0x4
  __declspec(property(get = __get_skew, put = __set_skew)) int32_t skew;

  /// @brief Field damp, offset 0x24, size 0x4
  __declspec(property(get = __get_damp, put = __set_damp)) int32_t damp;

  /// @brief Field initial_bias, offset 0x28, size 0x4
  __declspec(property(get = __get_initial_bias, put = __set_initial_bias)) int32_t initial_bias;

  /// @brief Field initial_n, offset 0x2c, size 0x4
  __declspec(property(get = __get_initial_n, put = __set_initial_n)) int32_t initial_n;

  constexpr char16_t& __get_delimiter();

  constexpr char16_t const& __get_delimiter() const;

  constexpr void __set_delimiter(char16_t value);

  constexpr int32_t& __get_base_num();

  constexpr int32_t const& __get_base_num() const;

  constexpr void __set_base_num(int32_t value);

  constexpr int32_t& __get_tmin();

  constexpr int32_t const& __get_tmin() const;

  constexpr void __set_tmin(int32_t value);

  constexpr int32_t& __get_tmax();

  constexpr int32_t const& __get_tmax() const;

  constexpr void __set_tmax(int32_t value);

  constexpr int32_t& __get_skew();

  constexpr int32_t const& __get_skew() const;

  constexpr void __set_skew(int32_t value);

  constexpr int32_t& __get_damp();

  constexpr int32_t const& __get_damp() const;

  constexpr void __set_damp(int32_t value);

  constexpr int32_t& __get_initial_bias();

  constexpr int32_t const& __get_initial_bias() const;

  constexpr void __set_initial_bias(int32_t value);

  constexpr int32_t& __get_initial_n();

  constexpr int32_t const& __get_initial_n() const;

  constexpr void __set_initial_n(int32_t value);

  static inline ::System::Globalization::Bootstring* New_ctor(char16_t delimiter, int32_t baseNum, int32_t tmin, int32_t tmax, int32_t skew, int32_t damp, int32_t initialBias, int32_t initialN);

  /// @brief Method .ctor, addr 0x2579314, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(char16_t delimiter, int32_t baseNum, int32_t tmin, int32_t tmax, int32_t skew, int32_t damp, int32_t initialBias, int32_t initialN);

  /// @brief Method Encode, addr 0x25788b4, size 0x344, virtual false, abstract: false, final false
  inline ::StringW Encode(::StringW s, int32_t offset);

  /// @brief Method EncodeDigit, addr 0x2579380, size 0x18, virtual false, abstract: false, final false
  inline char16_t EncodeDigit(int32_t d);

  /// @brief Method DecodeDigit, addr 0x2579410, size 0x38, virtual false, abstract: false, final false
  inline int32_t DecodeDigit(char16_t c);

  /// @brief Method Adapt, addr 0x2579398, size 0x78, virtual false, abstract: false, final false
  inline int32_t Adapt(int32_t delta, int32_t numPoints, bool firstTime);

  /// @brief Method Decode, addr 0x257903c, size 0x2d8, virtual false, abstract: false, final false
  inline ::StringW Decode(::StringW s, int32_t offset);

  // Ctor Parameters [CppParam { name: "", ty: "Bootstring", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Bootstring(Bootstring&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Bootstring", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Bootstring(Bootstring const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Bootstring();

public:
  /// @brief Field delimiter, offset: 0x10, size: 0x2, def value: None
  char16_t ___delimiter;

  /// @brief Field base_num, offset: 0x14, size: 0x4, def value: None
  int32_t ___base_num;

  /// @brief Field tmin, offset: 0x18, size: 0x4, def value: None
  int32_t ___tmin;

  /// @brief Field tmax, offset: 0x1c, size: 0x4, def value: None
  int32_t ___tmax;

  /// @brief Field skew, offset: 0x20, size: 0x4, def value: None
  int32_t ___skew;

  /// @brief Field damp, offset: 0x24, size: 0x4, def value: None
  int32_t ___damp;

  /// @brief Field initial_bias, offset: 0x28, size: 0x4, def value: None
  int32_t ___initial_bias;

  /// @brief Field initial_n, offset: 0x2c, size: 0x4, def value: None
  int32_t ___initial_n;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::Bootstring, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::Bootstring, ___delimiter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Bootstring, ___base_num) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Bootstring, ___tmin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Bootstring, ___tmax) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Bootstring, ___skew) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Bootstring, ___damp) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Bootstring, ___initial_bias) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Bootstring, ___initial_n) == 0x2c, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::Bootstring);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::Bootstring*, "System.Globalization", "Bootstring");
