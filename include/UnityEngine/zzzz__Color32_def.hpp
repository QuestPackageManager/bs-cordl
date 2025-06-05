#pragma once
// IWYU pragma private; include "UnityEngine/Color32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Color32)
namespace System {
class IFormatProvider;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
struct Color32;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Color32);
// Dependencies System.IFormattable
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Color32
struct CORDL_TYPE Color32 {
public:
  // Declarations
  __declspec(property(get = get_Item)) uint8_t Item[];

  /// @brief Field a, offset 0x3, size 0x1
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a)) uint8_t a;

  /// @brief Field b, offset 0x2, size 0x1
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) uint8_t b;

  /// @brief Field g, offset 0x1, size 0x1
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) uint8_t g;

  /// @brief Field r, offset 0x0, size 0x1
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) uint8_t r;

  /// @brief Field rgba, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_rgba, put = __cordl_internal_set_rgba)) int32_t rgba;

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Lerp, addr 0x489dd14, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 Lerp(::UnityEngine::Color32 a, ::UnityEngine::Color32 b, float_t t);

  /// @brief Method ToString, addr 0x489dec0, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x489ded0, size 0x1dc, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  constexpr uint8_t const& __cordl_internal_get_a() const;

  constexpr uint8_t& __cordl_internal_get_a();

  constexpr uint8_t const& __cordl_internal_get_b() const;

  constexpr uint8_t& __cordl_internal_get_b();

  constexpr uint8_t const& __cordl_internal_get_g() const;

  constexpr uint8_t& __cordl_internal_get_g();

  constexpr uint8_t const& __cordl_internal_get_r() const;

  constexpr uint8_t& __cordl_internal_get_r();

  constexpr int32_t const& __cordl_internal_get_rgba() const;

  constexpr int32_t& __cordl_internal_get_rgba();

  constexpr void __cordl_internal_set_a(uint8_t value);

  constexpr void __cordl_internal_set_b(uint8_t value);

  constexpr void __cordl_internal_set_g(uint8_t value);

  constexpr void __cordl_internal_set_r(uint8_t value);

  constexpr void __cordl_internal_set_rgba(int32_t value);

  /// @brief Method .ctor, addr 0x489da00, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(uint8_t r, uint8_t g, uint8_t b, uint8_t a);

  /// @brief Method get_Item, addr 0x489ddf0, size 0xd0, virtual false, abstract: false, final false
  inline uint8_t get_Item(int32_t index);

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Implicit, addr 0x489dcd8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::UnityEngine::Color32 c);

  /// @brief Method op_Implicit, addr 0x489da14, size 0x2c4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 op_Implicit___UnityEngine__Color32(::UnityEngine::Color c);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Color32();

  // Ctor Parameters [CppParam { name: "rgba", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "r", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "g", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "a", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr Color32(int32_t rgba, uint8_t r, uint8_t g, uint8_t b, uint8_t a) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___rgba_padding[0x0];
      /// @brief Field rgba, offset: 0x0, size: 0x4, def value: None
      int32_t ___rgba;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___rgba_padding_forAlignment[0x0];
      /// @brief Field rgba, offset: 0x0, size: 0x4, def value: None
      int32_t ___rgba_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___r_padding[0x0];
      /// @brief Field r, offset: 0x0, size: 0x1, def value: None
      uint8_t ___r;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___r_padding_forAlignment[0x0];
      /// @brief Field r, offset: 0x0, size: 0x1, def value: None
      uint8_t ___r_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1
      uint8_t ___g_padding[0x1];
      /// @brief Field g, offset: 0x1, size: 0x1, def value: None
      uint8_t ___g;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1 for alignment
      uint8_t ___g_padding_forAlignment[0x1];
      /// @brief Field g, offset: 0x1, size: 0x1, def value: None
      uint8_t ___g_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x2
      uint8_t ___b_padding[0x2];
      /// @brief Field b, offset: 0x2, size: 0x1, def value: None
      uint8_t ___b;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x2 for alignment
      uint8_t ___b_padding_forAlignment[0x2];
      /// @brief Field b, offset: 0x2, size: 0x1, def value: None
      uint8_t ___b_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x3
      uint8_t ___a_padding[0x3];
      /// @brief Field a, offset: 0x3, size: 0x1, def value: None
      uint8_t ___a;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x3 for alignment
      uint8_t ___a_padding_forAlignment[0x3];
      /// @brief Field a, offset: 0x3, size: 0x1, def value: None
      uint8_t ___a_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10814 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Color32, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Color32, "UnityEngine", "Color32");
