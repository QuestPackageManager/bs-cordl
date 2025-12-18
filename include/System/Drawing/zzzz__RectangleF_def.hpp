#pragma once
// IWYU pragma private; include "System/Drawing/RectangleF.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RectangleF)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Drawing {
struct RectangleF;
}
// Write type traits
MARK_VAL_T(::System::Drawing::RectangleF);
// Dependencies
namespace System::Drawing {
// Is value type: true
// CS Name: System.Drawing.RectangleF
struct CORDL_TYPE RectangleF {
public:
  // Declarations
  __declspec(property(get = get_Height)) float_t Height;

  __declspec(property(get = get_Width)) float_t Width;

  __declspec(property(get = get_X)) float_t X;

  __declspec(property(get = get_Y)) float_t Y;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::RectangleF>"
  constexpr operator ::System::IEquatable_1<::System::Drawing::RectangleF>*();

  /// @brief Method Equals, addr 0x5f20f64, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5f21014, size 0x30, virtual true, abstract: false, final true
  inline bool Equals(::System::Drawing::RectangleF other);

  /// @brief Method GetHashCode, addr 0x5f2106c, size 0x100, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x5f2116c, size 0x1c8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Height, addr 0x5f20f5c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Height();

  /// @brief Method get_Width, addr 0x5f20f54, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Width();

  /// @brief Method get_X, addr 0x5f20f44, size 0x8, virtual false, abstract: false, final false
  inline float_t get_X();

  /// @brief Method get_Y, addr 0x5f20f4c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Y();

  /// @brief Convert to "::System::IEquatable_1<::System::Drawing::RectangleF>"
  constexpr ::System::IEquatable_1<::System::Drawing::RectangleF>* i___System__IEquatable_1___System__Drawing__RectangleF_();

  /// @brief Method op_Equality, addr 0x5f21044, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Drawing::RectangleF left, ::System::Drawing::RectangleF right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RectangleF();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None }]
  constexpr RectangleF(float_t x, float_t y, float_t width, float_t height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21332 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  /// @brief Field width, offset: 0x8, size: 0x4, def value: None
  float_t width;

  /// @brief Field height, offset: 0xc, size: 0x4, def value: None
  float_t height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Drawing::RectangleF, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::RectangleF, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::RectangleF, width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::RectangleF, height) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Drawing::RectangleF, 0x10>, "Size mismatch!");

} // namespace System::Drawing
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::RectangleF, "System.Drawing", "RectangleF");
