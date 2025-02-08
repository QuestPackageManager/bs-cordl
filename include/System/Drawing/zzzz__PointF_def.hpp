#pragma once
// IWYU pragma private; include "System/Drawing/PointF.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointF)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Drawing {
struct PointF;
}
// Write type traits
MARK_VAL_T(::System::Drawing::PointF);
// Dependencies System.IEquatable`1<T>
namespace System::Drawing {
// Is value type: true
// CS Name: System.Drawing.PointF
struct CORDL_TYPE PointF {
public:
  // Declarations
  __declspec(property(get = get_X)) float_t X;

  __declspec(property(get = get_Y)) float_t Y;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::PointF>"
  constexpr operator ::System::IEquatable_1<::System::Drawing::PointF>*();

  /// @brief Method Equals, addr 0x4216240, size 0x84, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x42162c4, size 0x1c, virtual true, abstract: false, final true
  inline bool Equals(::System::Drawing::PointF other);

  /// @brief Method GetHashCode, addr 0x42162e0, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4216378, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_X, addr 0x4216218, size 0x8, virtual false, abstract: false, final false
  inline float_t get_X();

  /// @brief Method get_Y, addr 0x4216220, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Y();

  /// @brief Convert to "::System::IEquatable_1<::System::Drawing::PointF>"
  constexpr ::System::IEquatable_1<::System::Drawing::PointF>* i___System__IEquatable_1___System__Drawing__PointF_();

  /// @brief Method op_Equality, addr 0x4216228, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Drawing::PointF left, ::System::Drawing::PointF right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointF();

  // Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }]
  constexpr PointF(float_t x, float_t y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17434 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  float_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  float_t y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Drawing::PointF, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::PointF, y) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Drawing::PointF, 0x8>, "Size mismatch!");

} // namespace System::Drawing
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::PointF, "System.Drawing", "PointF");
