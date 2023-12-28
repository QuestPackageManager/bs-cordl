#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rotate)
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Rotate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Rotate);
// Type: UnityEngine.UIElements::Rotate
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 37, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7305)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7295))
// CS Name: ::UnityEngine.UIElements::Rotate
struct CORDL_TYPE Rotate {
public:
  // Declarations
  __declspec(property(get = get_angle, put = set_angle))::UnityEngine::UIElements::Angle angle;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Rotate>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Rotate>*();

  /// @brief Method .ctor addr 0x2e702a4 size 0x60 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::Angle angle);

  /// @brief Method Initial addr 0x2e70304 size 0x8c virtual false final false
  static inline ::UnityEngine::UIElements::Rotate Initial();

  /// @brief Method None addr 0x2e70398 size 0x70 virtual false final false
  static inline ::UnityEngine::UIElements::Rotate None();

  /// @brief Method get_angle addr 0x2e70408 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::Angle get_angle();

  /// @brief Method set_angle addr 0x2e70410 size 0x8 virtual false final false
  inline void set_angle(::UnityEngine::UIElements::Angle value);

  /// @brief Method op_Equality addr 0x2e70418 size 0x84 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::Rotate lhs, ::UnityEngine::UIElements::Rotate rhs);

  /// @brief Method op_Inequality addr 0x2e704c4 size 0x48 virtual false final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Rotate lhs, ::UnityEngine::UIElements::Rotate rhs);

  /// @brief Method Equals addr 0x2e7050c size 0x44 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::Rotate other);

  /// @brief Method Equals addr 0x2e70550 size 0xa0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2e705f0 size 0x98 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2e706b0 size 0x68 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToQuaternion addr 0x2e708f0 size 0x20 virtual false final false
  inline ::UnityEngine::Quaternion ToQuaternion();

  // Ctor Parameters [CppParam { name: "m_Angle", ty: "::UnityEngine::UIElements::Angle", modifiers: "", def_value: None }, CppParam { name: "m_Axis", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "m_IsNone", ty: "bool", modifiers: "", def_value: None }]
  constexpr Rotate(::UnityEngine::UIElements::Angle m_Angle, ::UnityEngine::Vector3 m_Axis, bool m_IsNone) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Rotate();

  /// @brief Field m_Angle, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Angle m_Angle;

  /// @brief Field m_Axis, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Axis;

  /// @brief Field m_IsNone, offset: 0x14, size: 0x1, def value: None
  bool m_IsNone;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Rotate, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Rotate, "UnityEngine.UIElements", "Rotate");
