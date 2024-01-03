#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3Int)
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
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Vector3Int;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Vector3Int);
// Type: UnityEngine::Vector3Int
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10247))
// CS Name: ::UnityEngine::Vector3Int
struct CORDL_TYPE Vector3Int {
public:
  // Declarations
  /// @brief Field s_Zero, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_s_Zero, put = setStaticF_s_Zero))::UnityEngine::Vector3Int s_Zero;

  /// @brief Field s_One, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_s_One, put = setStaticF_s_One))::UnityEngine::Vector3Int s_One;

  /// @brief Field s_Up, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_s_Up, put = setStaticF_s_Up))::UnityEngine::Vector3Int s_Up;

  /// @brief Field s_Down, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_s_Down, put = setStaticF_s_Down))::UnityEngine::Vector3Int s_Down;

  /// @brief Field s_Left, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_s_Left, put = setStaticF_s_Left))::UnityEngine::Vector3Int s_Left;

  /// @brief Field s_Right, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_s_Right, put = setStaticF_s_Right))::UnityEngine::Vector3Int s_Right;

  /// @brief Field s_Forward, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_s_Forward, put = setStaticF_s_Forward))::UnityEngine::Vector3Int s_Forward;

  /// @brief Field s_Back, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_s_Back, put = setStaticF_s_Back))::UnityEngine::Vector3Int s_Back;

  __declspec(property(get = get_x, put = set_x)) int32_t x;

  __declspec(property(get = get_y, put = set_y)) int32_t y;

  __declspec(property(get = get_z, put = set_z)) int32_t z;

  __declspec(property(get = get_Item)) int32_t Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Vector3Int>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Vector3Int>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Vector3Int>"
  constexpr ::System::IEquatable_1<::UnityEngine::Vector3Int>* i___System__IEquatable_1___UnityEngine__Vector3Int_();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  static inline void setStaticF_s_Zero(::UnityEngine::Vector3Int value);

  static inline ::UnityEngine::Vector3Int getStaticF_s_Zero();

  static inline void setStaticF_s_One(::UnityEngine::Vector3Int value);

  static inline ::UnityEngine::Vector3Int getStaticF_s_One();

  static inline void setStaticF_s_Up(::UnityEngine::Vector3Int value);

  static inline ::UnityEngine::Vector3Int getStaticF_s_Up();

  static inline void setStaticF_s_Down(::UnityEngine::Vector3Int value);

  static inline ::UnityEngine::Vector3Int getStaticF_s_Down();

  static inline void setStaticF_s_Left(::UnityEngine::Vector3Int value);

  static inline ::UnityEngine::Vector3Int getStaticF_s_Left();

  static inline void setStaticF_s_Right(::UnityEngine::Vector3Int value);

  static inline ::UnityEngine::Vector3Int getStaticF_s_Right();

  static inline void setStaticF_s_Forward(::UnityEngine::Vector3Int value);

  static inline ::UnityEngine::Vector3Int getStaticF_s_Forward();

  static inline void setStaticF_s_Back(::UnityEngine::Vector3Int value);

  static inline ::UnityEngine::Vector3Int getStaticF_s_Back();

  /// @brief Method get_x, addr 0x2cd81c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_x();

  /// @brief Method set_x, addr 0x2cd81c8, size 0x8, virtual false, abstract: false, final false
  inline void set_x(int32_t value);

  /// @brief Method get_y, addr 0x2cd81d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_y();

  /// @brief Method set_y, addr 0x2cd81d8, size 0x8, virtual false, abstract: false, final false
  inline void set_y(int32_t value);

  /// @brief Method get_z, addr 0x2cd81e0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_z();

  /// @brief Method set_z, addr 0x2cd81e8, size 0x8, virtual false, abstract: false, final false
  inline void set_z(int32_t value);

  /// @brief Method .ctor, addr 0x2cd81f0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t x, int32_t y, int32_t z);

  /// @brief Method get_Item, addr 0x2cd81fc, size 0xf0, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Method Min, addr 0x2cd82ec, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3Int Min(::UnityEngine::Vector3Int lhs, ::UnityEngine::Vector3Int rhs);

  /// @brief Method Max, addr 0x2cd8318, size 0x2c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3Int Max(::UnityEngine::Vector3Int lhs, ::UnityEngine::Vector3Int rhs);

  /// @brief Method op_Implicit, addr 0x2cd8344, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::Vector3Int v);

  /// @brief Method op_Addition, addr 0x2cd8358, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3Int op_Addition(::UnityEngine::Vector3Int a, ::UnityEngine::Vector3Int b);

  /// @brief Method op_Equality, addr 0x2cd8374, size 0x30, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Vector3Int lhs, ::UnityEngine::Vector3Int rhs);

  /// @brief Method Equals, addr 0x2cd83a4, size 0x9c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x2cd8440, size 0x38, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Vector3Int other);

  /// @brief Method GetHashCode, addr 0x2cd8478, size 0x78, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2cd84f0, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2ccb7f4, size 0x1c4, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method get_one, addr 0x2cd84fc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3Int get_one();

  // Ctor Parameters [CppParam { name: "m_X", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Z", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr Vector3Int(int32_t m_X, int32_t m_Y, int32_t m_Z) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Int();

  /// @brief Field m_X, offset: 0x0, size: 0x4, def value: None
  int32_t m_X;

  /// @brief Field m_Y, offset: 0x4, size: 0x4, def value: None
  int32_t m_Y;

  /// @brief Field m_Z, offset: 0x8, size: 0x4, def value: None
  int32_t m_Z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Vector3Int, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Vector3Int, m_X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector3Int, m_Y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Vector3Int, m_Z) == 0x8, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Vector3Int, "UnityEngine", "Vector3Int");
