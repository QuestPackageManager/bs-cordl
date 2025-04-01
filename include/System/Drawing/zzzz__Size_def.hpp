#pragma once
// IWYU pragma private; include "System/Drawing/Size.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Size)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Drawing {
struct Size;
}
// Write type traits
MARK_VAL_T(::System::Drawing::Size);
// Dependencies System.IEquatable`1<T>
namespace System::Drawing {
// Is value type: true
// CS Name: System.Drawing.Size
struct CORDL_TYPE Size {
public:
  // Declarations
  __declspec(property(get = get_Height)) int32_t Height;

  __declspec(property(get = get_Width)) int32_t Width;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::Size>"
  constexpr operator ::System::IEquatable_1<::System::Drawing::Size>*();

  /// @brief Method Equals, addr 0x420d7e0, size 0x84, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x420d864, size 0x20, virtual true, abstract: false, final true
  inline bool Equals(::System::Drawing::Size other);

  /// @brief Method GetHashCode, addr 0x420d884, size 0x60, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x420d8e4, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Height, addr 0x420d7d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Height();

  /// @brief Method get_Width, addr 0x420d7d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Width();

  /// @brief Convert to "::System::IEquatable_1<::System::Drawing::Size>"
  constexpr ::System::IEquatable_1<::System::Drawing::Size>* i___System__IEquatable_1___System__Drawing__Size_();

  /// @brief Method op_Equality, addr 0x420d7b0, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Drawing::Size sz1, ::System::Drawing::Size sz2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Size();

  // Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Size(int32_t width, int32_t height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17442 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field width, offset: 0x0, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x4, size: 0x4, def value: None
  int32_t height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Drawing::Size, width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Size, height) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Drawing::Size, 0x8>, "Size mismatch!");

} // namespace System::Drawing
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::Size, "System.Drawing", "Size");
