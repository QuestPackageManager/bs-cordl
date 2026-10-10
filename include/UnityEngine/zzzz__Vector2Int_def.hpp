#pragma once
// IWYU pragma private; include "UnityEngine/Vector2Int.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Int)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct Vector2Int;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Vector2Int);
DEFINE_IL2CPP_CLASS(::UnityEngine::Vector2Int, "UnityEngine", "Vector2Int");
// [DefaultMember("Item")]
// [UsedByNativeCode]
// [NativeType("Runtime/Math/Vector2Int.h")]
// [Il2CppEagerStaticClassConstruction]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Vector2Int
struct CORDL_TYPE Vector2Int {
public:
  // Declarations
  __declspec(property(get = get_magnitude)) float_t magnitude;

  /// @brief Field s_Down, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Down, put = setStaticF_s_Down)) ::UnityEngine::Vector2Int s_Down;

  /// @brief Field s_Left, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Left, put = setStaticF_s_Left)) ::UnityEngine::Vector2Int s_Left;

  /// @brief Field s_One, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_One, put = setStaticF_s_One)) ::UnityEngine::Vector2Int s_One;

  /// @brief Field s_Right, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Right, put = setStaticF_s_Right)) ::UnityEngine::Vector2Int s_Right;

  /// @brief Field s_Up, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Up, put = setStaticF_s_Up)) ::UnityEngine::Vector2Int s_Up;

  /// @brief Field s_Zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Zero, put = setStaticF_s_Zero)) ::UnityEngine::Vector2Int s_Zero;

  __declspec(property(get = get_x, put = set_x)) int32_t x;

  __declspec(property(get = get_y, put = set_y)) int32_t y;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector2Int>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Vector2Int>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f2dbdc, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f2dc68, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Vector2Int other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6f2dc90, size 0x2c, virtual false, abstract: false, final false
  inline bool Equals(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2Int const> other);

  /// @brief Method FloorToInt, addr 0x6f2dab8, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int FloorToInt(::UnityEngine::Vector2 v);

  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6f2dcbc, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Max, addr 0x6f2da88, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int Max(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f2dce0, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6f2dcf0, size 0x110, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6f2da68, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y);

  static inline ::UnityEngine::Vector2Int getStaticF_s_Down();

  static inline ::UnityEngine::Vector2Int getStaticF_s_Left();

  static inline ::UnityEngine::Vector2Int getStaticF_s_One();

  static inline ::UnityEngine::Vector2Int getStaticF_s_Right();

  static inline ::UnityEngine::Vector2Int getStaticF_s_Up();

  static inline ::UnityEngine::Vector2Int getStaticF_s_Zero();

  /// [IsReadOnly]
  /// @brief Method get_magnitude, addr 0x6f2da70, size 0x18, virtual false, abstract: false, final false
  inline float_t get_magnitude();

  /// @brief Method get_one, addr 0x6f2de4c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int get_one();

  /// [IsReadOnly]
  /// @brief Method get_x, addr 0x6f2da48, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_x();

  /// [IsReadOnly]
  /// @brief Method get_y, addr 0x6f2da58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_y();

  /// @brief Method get_zero, addr 0x6f2de00, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int get_zero();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector2Int>"
  constexpr ::System::IEquatable_1<::UnityEngine::Vector2Int>* i___System__IEquatable_1___UnityEngine__Vector2Int_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Addition, addr 0x6f2db84, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int op_Addition(::UnityEngine::Vector2Int a, ::UnityEngine::Vector2Int b);

  /// @brief Method op_Division, addr 0x6f2dbb0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int op_Division(::UnityEngine::Vector2Int a, int32_t b);

  /// @brief Method op_Equality, addr 0x6f2dbc4, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs);

  /// @brief Method op_Implicit, addr 0x6f2daa8, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector2Int v);

  /// @brief Method op_Inequality, addr 0x6f2dbd0, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs);

  /// @brief Method op_Multiply, addr 0x6f2db9c, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int op_Multiply(int32_t a, ::UnityEngine::Vector2Int b);

  static inline void setStaticF_s_Down(::UnityEngine::Vector2Int value);

  static inline void setStaticF_s_Left(::UnityEngine::Vector2Int value);

  static inline void setStaticF_s_One(::UnityEngine::Vector2Int value);

  static inline void setStaticF_s_Right(::UnityEngine::Vector2Int value);

  static inline void setStaticF_s_Up(::UnityEngine::Vector2Int value);

  static inline void setStaticF_s_Zero(::UnityEngine::Vector2Int value);

  /// @brief Method set_x, addr 0x6f2da50, size 0x8, virtual false, abstract: false, final false
  inline void set_x(int32_t value);

  /// @brief Method set_y, addr 0x6f2da60, size 0x8, virtual false, abstract: false, final false
  inline void set_y(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Int();

  // Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr Vector2Int(int32_t m_X, int32_t m_Y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9846 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_X, offset: 0x0, size: 0x4, def value: None
  int32_t m_X;

  /// @brief Field m_Y, offset: 0x4, size: 0x4, def value: None
  int32_t m_Y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Vector2Int, m_X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector2Int, m_Y) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8, "Size mismatch!");

} // namespace UnityEngine
