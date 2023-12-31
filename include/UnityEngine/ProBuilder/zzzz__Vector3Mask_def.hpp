#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3Mask)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct Vector3Mask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::Vector3Mask);
// Type: UnityEngine.ProBuilder::Vector3Mask
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12217))
// CS Name: ::UnityEngine.ProBuilder::Vector3Mask
struct CORDL_TYPE Vector3Mask {
public:
  // Declarations
  /// @brief Field XYZ, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_XYZ, put = setStaticF_XYZ))::UnityEngine::ProBuilder::Vector3Mask XYZ;

  __declspec(property(get = get_x)) float_t x;

  __declspec(property(get = get_y)) float_t y;

  __declspec(property(get = get_z)) float_t z;

  __declspec(property(get = get_active)) int32_t active;

  __declspec(property(get = get_Item, put = set_Item)) float_t Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>"
  constexpr ::System::IEquatable_1<::UnityEngine::ProBuilder::Vector3Mask>* i___System__IEquatable_1___UnityEngine__ProBuilder__Vector3Mask_();

  static inline void setStaticF_XYZ(::UnityEngine::ProBuilder::Vector3Mask value);

  static inline ::UnityEngine::ProBuilder::Vector3Mask getStaticF_XYZ();

  /// @brief Method get_x, addr 0x2b80750, size 0x18, virtual false, abstract: false, final false
  inline float_t get_x();

  /// @brief Method get_y, addr 0x2b80768, size 0x18, virtual false, abstract: false, final false
  inline float_t get_y();

  /// @brief Method get_z, addr 0x2b80780, size 0x18, virtual false, abstract: false, final false
  inline float_t get_z();

  /// @brief Method .ctor, addr 0x2b80798, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 v, float_t epsilon);

  /// @brief Method .ctor, addr 0x2b807cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint8_t mask);

  /// @brief Method ToString, addr 0x2b807d4, size 0xec, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_active, addr 0x2b808c0, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_active();

  /// @brief Method op_Implicit, addr 0x2b808dc, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Implicit___UnityEngine__Vector3(::UnityEngine::ProBuilder::Vector3Mask mask);

  /// @brief Method op_Explicit, addr 0x2b80900, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vector3Mask op_Explicit___UnityEngine__ProBuilder__Vector3Mask(::UnityEngine::Vector3 v);

  /// @brief Method op_BitwiseOr, addr 0x2b80938, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vector3Mask op_BitwiseOr(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right);

  /// @brief Method op_BitwiseAnd, addr 0x2b80944, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vector3Mask op_BitwiseAnd(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right);

  /// @brief Method op_ExclusiveOr, addr 0x2b80950, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vector3Mask op_ExclusiveOr(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right);

  /// @brief Method op_Multiply, addr 0x2b8095c, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::ProBuilder::Vector3Mask mask, float_t value);

  /// @brief Method op_Multiply, addr 0x2b80990, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::ProBuilder::Vector3Mask mask, ::UnityEngine::Vector3 value);

  /// @brief Method op_Multiply, addr 0x2b809c0, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 op_Multiply(::UnityEngine::Quaternion rotation, ::UnityEngine::ProBuilder::Vector3Mask mask);

  /// @brief Method op_Equality, addr 0x2b80afc, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right);

  /// @brief Method op_Inequality, addr 0x2b80b0c, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::ProBuilder::Vector3Mask left, ::UnityEngine::ProBuilder::Vector3Mask right);

  /// @brief Method get_Item, addr 0x2b80b74, size 0x60, virtual false, abstract: false, final false
  inline float_t get_Item(int32_t i);

  /// @brief Method set_Item, addr 0x2b80bd4, size 0x74, virtual false, abstract: false, final false
  inline void set_Item(int32_t i, float_t value);

  /// @brief Method Equals, addr 0x2b80c48, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::ProBuilder::Vector3Mask other);

  /// @brief Method Equals, addr 0x2b80c58, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2b80cd0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "m_Mask", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr Vector3Mask(uint8_t m_Mask) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3Mask();

  /// @brief Field m_Mask, offset: 0x0, size: 0x1, def value: None
  uint8_t m_Mask;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field X offset 0xffffffff size 0x1
  static constexpr uint8_t X{ static_cast<uint8_t>(0x1u) };

  /// @brief Field Y offset 0xffffffff size 0x1
  static constexpr uint8_t Y{ static_cast<uint8_t>(0x2u) };

  /// @brief Field Z offset 0xffffffff size 0x1
  static constexpr uint8_t Z{ static_cast<uint8_t>(0x4u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Vector3Mask, 0x1>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Vector3Mask, m_Mask) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Vector3Mask, "UnityEngine.ProBuilder", "Vector3Mask");
