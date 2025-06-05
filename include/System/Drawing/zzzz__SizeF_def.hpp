#pragma once
// IWYU pragma private; include "System/Drawing/SizeF.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SizeF)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Drawing {
struct SizeF;
}
// Write type traits
MARK_VAL_T(::System::Drawing::SizeF);
// Dependencies System.IEquatable`1<T>
namespace System::Drawing {
// Is value type: true
// CS Name: System.Drawing.SizeF
struct CORDL_TYPE SizeF {
public:
  // Declarations
  __declspec(property(get = get_Height)) float_t Height;

  __declspec(property(get = get_Width)) float_t Width;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::SizeF>"
  constexpr operator ::System::IEquatable_1<::System::Drawing::SizeF>*();

  /// @brief Method Equals, addr 0x4212910, size 0x84, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4212994, size 0x1c, virtual true, abstract: false, final true
  inline bool Equals(::System::Drawing::SizeF other);

  /// @brief Method GetHashCode, addr 0x42129b0, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4212a48, size 0x108, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_Height, addr 0x4212908, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Height();

  /// @brief Method get_Width, addr 0x4212900, size 0x8, virtual false, abstract: false, final false
  inline float_t get_Width();

  /// @brief Convert to "::System::IEquatable_1<::System::Drawing::SizeF>"
  constexpr ::System::IEquatable_1<::System::Drawing::SizeF>* i___System__IEquatable_1___System__Drawing__SizeF_();

  /// @brief Method op_Equality, addr 0x42128e8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Drawing::SizeF sz1, ::System::Drawing::SizeF sz2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SizeF();

  // Ctor Parameters [CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None }]
  constexpr SizeF(float_t width, float_t height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17445 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field width, offset: 0x0, size: 0x4, def value: None
  float_t width;

  /// @brief Field height, offset: 0x4, size: 0x4, def value: None
  float_t height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Drawing::SizeF, width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::SizeF, height) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Drawing::SizeF, 0x8>, "Size mismatch!");

} // namespace System::Drawing
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::SizeF, "System.Drawing", "SizeF");
