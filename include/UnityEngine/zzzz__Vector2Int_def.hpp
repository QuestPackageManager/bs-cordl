#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Int)
namespace System {
class Object;
}
namespace System {
class IFormattable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
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
// Type: UnityEngine::Vector2Int
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10171))
// CS Name: ::UnityEngine::Vector2Int
struct CORDL_TYPE Vector2Int {
public:
  // Declarations
  /// @brief Field s_Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Zero, put = setStaticF_s_Zero))::UnityEngine::Vector2Int s_Zero;

  /// @brief Field s_One, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_One, put = setStaticF_s_One))::UnityEngine::Vector2Int s_One;

  /// @brief Field s_Up, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Up, put = setStaticF_s_Up))::UnityEngine::Vector2Int s_Up;

  /// @brief Field s_Down, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Down, put = setStaticF_s_Down))::UnityEngine::Vector2Int s_Down;

  /// @brief Field s_Left, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Left, put = setStaticF_s_Left))::UnityEngine::Vector2Int s_Left;

  /// @brief Field s_Right, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Right, put = setStaticF_s_Right))::UnityEngine::Vector2Int s_Right;

  __declspec(property(get = get_x, put = set_x)) int32_t x;

  __declspec(property(get = get_y, put = set_y)) int32_t y;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector2Int>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Vector2Int>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  static inline void setStaticF_s_Zero(::UnityEngine::Vector2Int value);

  static inline ::UnityEngine::Vector2Int getStaticF_s_Zero();

  static inline void setStaticF_s_One(::UnityEngine::Vector2Int value);

  static inline ::UnityEngine::Vector2Int getStaticF_s_One();

  static inline void setStaticF_s_Up(::UnityEngine::Vector2Int value);

  static inline ::UnityEngine::Vector2Int getStaticF_s_Up();

  static inline void setStaticF_s_Down(::UnityEngine::Vector2Int value);

  static inline ::UnityEngine::Vector2Int getStaticF_s_Down();

  static inline void setStaticF_s_Left(::UnityEngine::Vector2Int value);

  static inline ::UnityEngine::Vector2Int getStaticF_s_Left();

  static inline void setStaticF_s_Right(::UnityEngine::Vector2Int value);

  static inline ::UnityEngine::Vector2Int getStaticF_s_Right();

  /// @brief Method get_x addr 0x2b6f1f4 size 0x8 virtual false final false
  inline int32_t get_x();

  /// @brief Method set_x addr 0x2b6f1fc size 0x8 virtual false final false
  inline void set_x(int32_t value);

  /// @brief Method get_y addr 0x2b6f204 size 0x8 virtual false final false
  inline int32_t get_y();

  /// @brief Method set_y addr 0x2b6f20c size 0x8 virtual false final false
  inline void set_y(int32_t value);

  /// @brief Method .ctor addr 0x2b6f214 size 0x8 virtual false final false
  inline void _ctor(int32_t x, int32_t y);

  /// @brief Method op_Implicit addr 0x2b6f21c size 0x10 virtual false final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector2Int v);

  /// @brief Method FloorToInt addr 0x2b6f22c size 0xf8 virtual false final false
  static inline ::UnityEngine::Vector2Int FloorToInt(::UnityEngine::Vector2 v);

  /// @brief Method op_Equality addr 0x2b6f324 size 0x20 virtual false final false
  static inline bool op_Equality(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs);

  /// @brief Method Equals addr 0x2b6f344 size 0x88 virtual true final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals addr 0x2b6f3cc size 0x28 virtual true final true
  inline bool Equals(::UnityEngine::Vector2Int other);

  /// @brief Method GetHashCode addr 0x2b6f3f4 size 0x48 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2b6f43c size 0xc virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x2b6f448 size 0x17c virtual true final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  // Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Vector2Int(int32_t m_X, int32_t m_Y) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Int();

  /// @brief Field m_X, offset: 0x0, size: 0x4, def value: None
  int32_t m_X;

  /// @brief Field m_Y, offset: 0x4, size: 0x4, def value: None
  int32_t m_Y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Vector2Int, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Vector2Int, m_X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector2Int, m_Y) == 0x4, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector2Int, "UnityEngine", "Vector2Int");
