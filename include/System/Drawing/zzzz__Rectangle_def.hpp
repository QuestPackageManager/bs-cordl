#pragma once
// IWYU pragma private; include "System/Drawing/Rectangle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rectangle)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Drawing {
struct Rectangle;
}
// Write type traits
MARK_VAL_T(::System::Drawing::Rectangle);
// Dependencies System.IEquatable`1<T>
namespace System::Drawing {
// Is value type: true
// CS Name: System.Drawing.Rectangle
struct CORDL_TYPE Rectangle {
public:
  // Declarations
  __declspec(property(get = get_Height)) int32_t Height;

  __declspec(property(get = get_Width)) int32_t Width;

  __declspec(property(get = get_X)) int32_t X;

  __declspec(property(get = get_Y)) int32_t Y;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::Rectangle>"
  constexpr operator ::System::IEquatable_1<::System::Drawing::Rectangle>*();

  /// @brief Method Equals, addr 0x420d090, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x420d140, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::System::Drawing::Rectangle other);

  /// @brief Method GetHashCode, addr 0x420d1c0, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x420d23c, size 0x1b4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Height, addr 0x420d088, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Height();

  /// @brief Method get_Width, addr 0x420d080, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Width();

  /// @brief Method get_X, addr 0x420d070, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_X();

  /// @brief Method get_Y, addr 0x420d078, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Y();

  /// @brief Convert to "::System::IEquatable_1<::System::Drawing::Rectangle>"
  constexpr ::System::IEquatable_1<::System::Drawing::Rectangle>* i___System__IEquatable_1___System__Drawing__Rectangle_();

  /// @brief Method op_Equality, addr 0x420d184, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Drawing::Rectangle left, ::System::Drawing::Rectangle right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Rectangle();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "width", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Rectangle(int32_t x, int32_t y, int32_t width, int32_t height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17440 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief Field width, offset: 0x8, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0xc, size: 0x4, def value: None
  int32_t height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Drawing::Rectangle, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Rectangle, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Rectangle, width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Rectangle, height) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Drawing::Rectangle, 0x10>, "Size mismatch!");

} // namespace System::Drawing
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::Rectangle, "System.Drawing", "Rectangle");
