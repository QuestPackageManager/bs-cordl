#pragma once
// IWYU pragma private; include "System/Drawing/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Color)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Drawing {
struct Color;
}
// Write type traits
MARK_VAL_T(::System::Drawing::Color);
// Type: System.Drawing::Color
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Drawing {
// Is value type: true
// CS Name: ::System.Drawing::Color
struct CORDL_TYPE Color {
public:
  // Declarations
  __declspec(property(get = get_A)) uint8_t A;

  __declspec(property(get = get_B)) uint8_t B;

  __declspec(property(get = get_G)) uint8_t G;

  __declspec(property(get = get_IsKnownColor)) bool IsKnownColor;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_R)) uint8_t R;

  __declspec(property(get = get_Value)) int64_t Value;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Drawing::Color>"
  constexpr operator ::System::IEquatable_1<::System::Drawing::Color>*();

  /// @brief Method Equals, addr 0x41aec4c, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x41aecdc, size 0x48, virtual true, abstract: false, final true
  inline bool Equals(::System::Drawing::Color other);

  /// @brief Method GetHashCode, addr 0x41aed24, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x41ae9cc, size 0x238, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_A, addr 0x41ae920, size 0x14, virtual false, abstract: false, final false
  inline uint8_t get_A();

  /// @brief Method get_B, addr 0x41ae910, size 0x10, virtual false, abstract: false, final false
  inline uint8_t get_B();

  /// @brief Method get_G, addr 0x41ae8fc, size 0x14, virtual false, abstract: false, final false
  inline uint8_t get_G();

  /// @brief Method get_IsKnownColor, addr 0x41ae934, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsKnownColor();

  /// @brief Method get_Name, addr 0x41ae940, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_R, addr 0x41ae8b4, size 0x14, virtual false, abstract: false, final false
  inline uint8_t get_R();

  /// @brief Method get_Value, addr 0x41ae8c8, size 0x34, virtual false, abstract: false, final false
  inline int64_t get_Value();

  /// @brief Convert to "::System::IEquatable_1<::System::Drawing::Color>"
  constexpr ::System::IEquatable_1<::System::Drawing::Color>* i___System__IEquatable_1___System__Drawing__Color_();

  /// @brief Method op_Equality, addr 0x41aec04, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Drawing::Color left, ::System::Drawing::Color right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Color();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name:
  // "knownColor", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "state", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr Color(::StringW name, int64_t value, int16_t knownColor, int16_t state) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  int64_t value;

  /// @brief Field knownColor, offset: 0x10, size: 0x2, def value: None
  int16_t knownColor;

  /// @brief Field state, offset: 0x12, size: 0x2, def value: None
  int16_t state;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17383 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Drawing::Color, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Drawing::Color, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Color, value) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Color, knownColor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Drawing::Color, state) == 0x12, "Offset mismatch!");

} // namespace System::Drawing
DEFINE_IL2CPP_ARG_TYPE(::System::Drawing::Color, "System.Drawing", "Color");
