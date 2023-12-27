#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphRect)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::TextCore {
struct GlyphRect;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::GlyphRect);
// Type: UnityEngine.TextCore::GlyphRect
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15528))
// CS Name: ::UnityEngine.TextCore::GlyphRect
struct CORDL_TYPE GlyphRect {
public:
  // Declarations
  /// @brief Field s_ZeroGlyphRect, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_ZeroGlyphRect, put = setStaticF_s_ZeroGlyphRect))::UnityEngine::TextCore::GlyphRect s_ZeroGlyphRect;

  __declspec(property(get = get_x)) int32_t x;

  __declspec(property(get = get_y)) int32_t y;

  __declspec(property(get = get_width)) int32_t width;

  __declspec(property(get = get_height)) int32_t height;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::GlyphRect>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::GlyphRect>*();

  static inline void setStaticF_s_ZeroGlyphRect(::UnityEngine::TextCore::GlyphRect value);

  static inline ::UnityEngine::TextCore::GlyphRect getStaticF_s_ZeroGlyphRect();

  /// @brief Method get_x addr 0x2d205b8 size 0x8 virtual false final false
  inline int32_t get_x();

  /// @brief Method get_y addr 0x2d205c0 size 0x8 virtual false final false
  inline int32_t get_y();

  /// @brief Method get_width addr 0x2d205c8 size 0x8 virtual false final false
  inline int32_t get_width();

  /// @brief Method get_height addr 0x2d205d0 size 0x8 virtual false final false
  inline int32_t get_height();

  /// @brief Method get_zero addr 0x2d205d8 size 0x58 virtual false final false
  static inline ::UnityEngine::TextCore::GlyphRect get_zero();

  /// @brief Method .ctor addr 0x2d20630 size 0xc virtual false final false
  inline void _ctor(int32_t x, int32_t y, int32_t width, int32_t height);

  /// @brief Method GetHashCode addr 0x2d2063c size 0x64 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2d206a0 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2d20718 size 0x94 virtual true final true
  inline bool Equals(::UnityEngine::TextCore::GlyphRect other);

  // Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Width", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GlyphRect(int32_t m_X, int32_t m_Y, int32_t m_Width, int32_t m_Height) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphRect();

  /// @brief Field m_X, offset: 0x0, size: 0x4, def value: None
  int32_t m_X;

  /// @brief Field m_Y, offset: 0x4, size: 0x4, def value: None
  int32_t m_Y;

  /// @brief Field m_Width, offset: 0x8, size: 0x4, def value: None
  int32_t m_Width;

  /// @brief Field m_Height, offset: 0xc, size: 0x4, def value: None
  int32_t m_Height;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::GlyphRect, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::GlyphRect, "UnityEngine.TextCore", "GlyphRect");
