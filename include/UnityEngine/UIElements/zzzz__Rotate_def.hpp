#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Rotate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Angle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rotate)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine {
struct Quaternion;
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
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.Angle, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Rotate
struct CORDL_TYPE Rotate {
public:
  // Declarations
  __declspec(property(get = get_angle, put = set_angle)) ::UnityEngine::UIElements::Angle angle;

  __declspec(property(get = get_axis)) ::UnityEngine::Vector3 axis;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Rotate>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Rotate>*();

  /// @brief Method Equals, addr 0x4a84e30, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a84dec, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Rotate other);

  /// @brief Method GetHashCode, addr 0x4a83510, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x4a84c88, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Rotate Initial();

  /// @brief Method None, addr 0x4a84d28, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Rotate None();

  /// @brief Method ToQuaternion, addr 0x4a84f44, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion ToQuaternion();

  /// @brief Method ToString, addr 0x4a84ed0, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a84c28, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Angle angle);

  /// @brief Method get_angle, addr 0x4a84d88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Angle get_angle();

  /// @brief Method get_axis, addr 0x4a84d98, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_axis();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Rotate>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Rotate>* i___System__IEquatable_1___UnityEngine__UIElements__Rotate_();

  /// @brief Method op_Equality, addr 0x4a83220, size 0x88, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Rotate lhs, ::UnityEngine::UIElements::Rotate rhs);

  /// @brief Method op_Inequality, addr 0x4a84da4, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Rotate lhs, ::UnityEngine::UIElements::Rotate rhs);

  /// @brief Method set_angle, addr 0x4a84d90, size 0x8, virtual false, abstract: false, final false
  inline void set_angle(::UnityEngine::UIElements::Angle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Rotate();

  // Ctor Parameters [CppParam { name: "m_Angle", ty: "::UnityEngine::UIElements::Angle", modifiers: "", def_value: None }, CppParam { name: "m_Axis", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "m_IsNone", ty: "bool", modifiers: "", def_value: None }]
  constexpr Rotate(::UnityEngine::UIElements::Angle m_Angle, ::UnityEngine::Vector3 m_Axis, bool m_IsNone) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6093 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Angle, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Angle m_Angle;

  /// @brief Field m_Axis, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Axis;

  /// @brief Field m_IsNone, offset: 0x14, size: 0x1, def value: None
  bool m_IsNone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Rotate, m_Angle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Rotate, m_Axis) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Rotate, m_IsNone) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Rotate, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Rotate, "UnityEngine.UIElements", "Rotate");
