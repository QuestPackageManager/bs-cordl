#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransformOrigin.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformOrigin)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TransformOrigin);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.Length
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TransformOrigin
struct CORDL_TYPE TransformOrigin {
public:
  // Declarations
  __declspec(property(get = get_x, put = set_x)) ::UnityEngine::UIElements::Length x;

  __declspec(property(get = get_y, put = set_y)) ::UnityEngine::UIElements::Length y;

  __declspec(property(get = get_z)) float_t z;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>*();

  /// @brief Method Equals, addr 0x4a87cfc, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a87c90, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TransformOrigin other);

  /// @brief Method GetHashCode, addr 0x4a83630, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x4a870ec, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TransformOrigin Initial();

  /// @brief Method ToString, addr 0x4a87dcc, size 0x134, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a87bf0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Length x, ::UnityEngine::UIElements::Length y, float_t z);

  /// @brief Method get_x, addr 0x4a87bfc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_x();

  /// @brief Method get_y, addr 0x4a87c0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_y();

  /// @brief Method get_z, addr 0x4a87c1c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_z();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>* i___System__IEquatable_1___UnityEngine__UIElements__TransformOrigin_();

  /// @brief Method op_Equality, addr 0x4a832fc, size 0x60, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::TransformOrigin lhs, ::UnityEngine::UIElements::TransformOrigin rhs);

  /// @brief Method op_Inequality, addr 0x4a87c24, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TransformOrigin lhs, ::UnityEngine::UIElements::TransformOrigin rhs);

  /// @brief Method set_x, addr 0x4a87c04, size 0x8, virtual false, abstract: false, final false
  inline void set_x(::UnityEngine::UIElements::Length value);

  /// @brief Method set_y, addr 0x4a87c14, size 0x8, virtual false, abstract: false, final false
  inline void set_y(::UnityEngine::UIElements::Length value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformOrigin();

  // Ctor Parameters [CppParam { name: "m_X", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "::UnityEngine::UIElements::Length", modifiers: "",
  // def_value: None }, CppParam { name: "m_Z", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TransformOrigin(::UnityEngine::UIElements::Length m_X, ::UnityEngine::UIElements::Length m_Y, float_t m_Z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6116 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field m_X, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_X;

  /// @brief Field m_Y, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_Y;

  /// @brief Field m_Z, offset: 0x10, size: 0x4, def value: None
  float_t m_Z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TransformOrigin, m_X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransformOrigin, m_Y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransformOrigin, m_Z) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransformOrigin, 0x14>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransformOrigin, "UnityEngine.UIElements", "TransformOrigin");
