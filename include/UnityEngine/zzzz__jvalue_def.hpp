#pragma once
// IWYU pragma private; include "UnityEngine/jvalue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(jvalue)
// Forward declare root types
namespace UnityEngine {
struct jvalue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::jvalue);
// Dependencies System.IntPtr
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.jvalue
struct CORDL_TYPE jvalue {
public:
  // Declarations
  /// @brief Field b, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) int8_t b;

  /// @brief Field c, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) char16_t c;

  /// @brief Field d, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_d, put = __cordl_internal_set_d)) double_t d;

  /// @brief Field f, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_f, put = __cordl_internal_set_f)) float_t f;

  /// @brief Field i, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) int32_t i;

  /// @brief Field j, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_j, put = __cordl_internal_set_j)) int64_t j;

  /// @brief Field l, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_l, put = __cordl_internal_set_l)) ::System::IntPtr l;

  /// @brief Field s, offset 0x0, size 0x2
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) int16_t s;

  /// @brief Field z, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_z, put = __cordl_internal_set_z)) bool z;

  constexpr int8_t const& __cordl_internal_get_b() const;

  constexpr int8_t& __cordl_internal_get_b();

  constexpr char16_t const& __cordl_internal_get_c() const;

  constexpr char16_t& __cordl_internal_get_c();

  constexpr double_t const& __cordl_internal_get_d() const;

  constexpr double_t& __cordl_internal_get_d();

  constexpr float_t const& __cordl_internal_get_f() const;

  constexpr float_t& __cordl_internal_get_f();

  constexpr int32_t const& __cordl_internal_get_i() const;

  constexpr int32_t& __cordl_internal_get_i();

  constexpr int64_t const& __cordl_internal_get_j() const;

  constexpr int64_t& __cordl_internal_get_j();

  constexpr ::System::IntPtr const& __cordl_internal_get_l() const;

  constexpr ::System::IntPtr& __cordl_internal_get_l();

  constexpr int16_t const& __cordl_internal_get_s() const;

  constexpr int16_t& __cordl_internal_get_s();

  constexpr bool const& __cordl_internal_get_z() const;

  constexpr bool& __cordl_internal_get_z();

  constexpr void __cordl_internal_set_b(int8_t value);

  constexpr void __cordl_internal_set_c(char16_t value);

  constexpr void __cordl_internal_set_d(double_t value);

  constexpr void __cordl_internal_set_f(float_t value);

  constexpr void __cordl_internal_set_i(int32_t value);

  constexpr void __cordl_internal_set_j(int64_t value);

  constexpr void __cordl_internal_set_l(::System::IntPtr value);

  constexpr void __cordl_internal_set_s(int16_t value);

  constexpr void __cordl_internal_set_z(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr jvalue();

  // Ctor Parameters [CppParam { name: "z", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "b", ty: "int8_t", modifiers: "", def_value: None }, CppParam { name: "c", ty: "char16_t",
  // modifiers: "", def_value: None }, CppParam { name: "s", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "j", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "d", ty: "double_t", modifiers: "", def_value: None
  // }, CppParam { name: "l", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr jvalue(bool z, int8_t b, char16_t c, int16_t s, int32_t i, int64_t j, float_t f, double_t d, ::System::IntPtr l) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___z_padding[0x0];
      /// @brief Field z, offset: 0x0, size: 0x1, def value: None
      bool ___z;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___z_padding_forAlignment[0x0];
      /// @brief Field z, offset: 0x0, size: 0x1, def value: None
      bool ___z_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___b_padding[0x0];
      /// @brief Field b, offset: 0x0, size: 0x1, def value: None
      int8_t ___b;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___b_padding_forAlignment[0x0];
      /// @brief Field b, offset: 0x0, size: 0x1, def value: None
      int8_t ___b_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___c_padding[0x0];
      /// @brief Field c, offset: 0x0, size: 0x2, def value: None
      char16_t ___c;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___c_padding_forAlignment[0x0];
      /// @brief Field c, offset: 0x0, size: 0x2, def value: None
      char16_t ___c_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___s_padding[0x0];
      /// @brief Field s, offset: 0x0, size: 0x2, def value: None
      int16_t ___s;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___s_padding_forAlignment[0x0];
      /// @brief Field s, offset: 0x0, size: 0x2, def value: None
      int16_t ___s_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___i_padding[0x0];
      /// @brief Field i, offset: 0x0, size: 0x4, def value: None
      int32_t ___i;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___i_padding_forAlignment[0x0];
      /// @brief Field i, offset: 0x0, size: 0x4, def value: None
      int32_t ___i_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___j_padding[0x0];
      /// @brief Field j, offset: 0x0, size: 0x8, def value: None
      int64_t ___j;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___j_padding_forAlignment[0x0];
      /// @brief Field j, offset: 0x0, size: 0x8, def value: None
      int64_t ___j_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___f_padding[0x0];
      /// @brief Field f, offset: 0x0, size: 0x4, def value: None
      float_t ___f;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___f_padding_forAlignment[0x0];
      /// @brief Field f, offset: 0x0, size: 0x4, def value: None
      float_t ___f_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___d_padding[0x0];
      /// @brief Field d, offset: 0x0, size: 0x8, def value: None
      double_t ___d;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___d_padding_forAlignment[0x0];
      /// @brief Field d, offset: 0x0, size: 0x8, def value: None
      double_t ___d_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___l_padding[0x0];
      /// @brief Field l, offset: 0x0, size: 0x8, def value: None
      ::System::IntPtr ___l;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___l_padding_forAlignment[0x0];
      /// @brief Field l, offset: 0x0, size: 0x8, def value: None
      ::System::IntPtr ___l_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19918 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::jvalue, 0x8>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::jvalue, "UnityEngine", "jvalue");
