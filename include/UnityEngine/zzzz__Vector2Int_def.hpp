#pragma once
// IWYU pragma private; include "UnityEngine/Vector2Int.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2Int)
namespace System {
class IFormatProvider;
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
// Dependencies System.IEquatable`1<T>, System.IFormattable
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Vector2Int
struct CORDL_TYPE Vector2Int {
public:
  // Declarations
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

  /// @brief Method Equals, addr 0x48a45d4, size 0x88, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x48a465c, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Vector2Int other);

  /// @brief Method FloorToInt, addr 0x48a44ec, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int FloorToInt(::UnityEngine::Vector2 v);

  /// @brief Method GetHashCode, addr 0x48a4684, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x48a46cc, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x48a46dc, size 0x178, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x48a44d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y);

  static inline ::UnityEngine::Vector2Int getStaticF_s_Down();

  static inline ::UnityEngine::Vector2Int getStaticF_s_Left();

  static inline ::UnityEngine::Vector2Int getStaticF_s_One();

  static inline ::UnityEngine::Vector2Int getStaticF_s_Right();

  static inline ::UnityEngine::Vector2Int getStaticF_s_Up();

  static inline ::UnityEngine::Vector2Int getStaticF_s_Zero();

  /// @brief Method get_x, addr 0x48a44b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_x();

  /// @brief Method get_y, addr 0x48a44c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_y();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector2Int>"
  constexpr ::System::IEquatable_1<::UnityEngine::Vector2Int>* i___System__IEquatable_1___UnityEngine__Vector2Int_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x48a45b4, size 0x20, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Vector2Int lhs, ::UnityEngine::Vector2Int rhs);

  /// @brief Method op_Implicit, addr 0x48a44dc, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::UnityEngine::Vector2Int v);

  static inline void setStaticF_s_Down(::UnityEngine::Vector2Int value);

  static inline void setStaticF_s_Left(::UnityEngine::Vector2Int value);

  static inline void setStaticF_s_One(::UnityEngine::Vector2Int value);

  static inline void setStaticF_s_Right(::UnityEngine::Vector2Int value);

  static inline void setStaticF_s_Up(::UnityEngine::Vector2Int value);

  static inline void setStaticF_s_Zero(::UnityEngine::Vector2Int value);

  /// @brief Method set_x, addr 0x48a44bc, size 0x8, virtual false, abstract: false, final false
  inline void set_x(int32_t value);

  /// @brief Method set_y, addr 0x48a44cc, size 0x8, virtual false, abstract: false, final false
  inline void set_y(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Int();

  // Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Vector2Int(int32_t m_X, int32_t m_Y) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10825 };

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

static_assert(::cordl_internals::size_check_v<::UnityEngine::Vector2Int, 0x8>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector2Int, "UnityEngine", "Vector2Int");
