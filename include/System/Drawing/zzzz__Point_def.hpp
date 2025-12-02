#pragma once
// IWYU pragma private; include "System/Drawing/Point.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Point)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Drawing {
struct Point;
}
// Write type traits
MARK_VAL_T(::System::Drawing::Point);
// Dependencies
namespace System::Drawing {
// Is value type: true
// CS Name: System.Drawing.Point
struct CORDL_TYPE Point {
public:
  // Declarations
  __declspec(property(get = get_X)) int32_t X;

  __declspec(property(get = get_Y)) int32_t Y;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::Point>"
  constexpr operator ::System::IEquatable_1<::System::Drawing::Point>*();

  /// @brief Method Equals, addr 0x5eb8bdc, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5eb8c58, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::System::Drawing::Point other);

  /// @brief Method GetHashCode, addr 0x5eb8c68, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x5eb8ccc, size 0x130, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_X, addr 0x5eb8bc0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_X();

  /// @brief Method get_Y, addr 0x5eb8bc8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Y();

  /// @brief Convert to "::System::IEquatable_1<::System::Drawing::Point>"
  constexpr ::System::IEquatable_1<::System::Drawing::Point>* i___System__IEquatable_1___System__Drawing__Point_();

  /// @brief Method op_Equality, addr 0x5eb8bd0, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Drawing::Point left, ::System::Drawing::Point right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Point();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Point(int32_t x, int32_t y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21302 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Drawing::Point, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Point, y) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Drawing::Point, 0x8>, "Size mismatch!");

} // namespace System::Drawing
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::Point, "System.Drawing", "Point");
