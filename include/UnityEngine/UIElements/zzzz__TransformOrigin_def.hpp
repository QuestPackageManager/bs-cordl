#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformOrigin)
namespace System {
template <typename T> class IEquatable_1;
}
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
// Type: UnityEngine.UIElements::TransformOrigin
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7313))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7317))
// CS Name: ::UnityEngine.UIElements::TransformOrigin
struct CORDL_TYPE TransformOrigin {
public:
  // Declarations
  __declspec(property(get = get_x))::UnityEngine::UIElements::Length x;

  __declspec(property(get = get_y))::UnityEngine::UIElements::Length y;

  __declspec(property(get = get_z)) float_t z;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TransformOrigin>* i___System__IEquatable_1___UnityEngine__UIElements__TransformOrigin_();

  /// @brief Method .ctor, addr 0x2e75844, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Length x, ::UnityEngine::UIElements::Length y, float_t z);

  /// @brief Method Initial, addr 0x2e75850, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TransformOrigin Initial();

  /// @brief Method get_x, addr 0x2e75868, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_x();

  /// @brief Method get_y, addr 0x2e75870, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_y();

  /// @brief Method get_z, addr 0x2e75878, size 0x8, virtual false, abstract: false, final false
  inline float_t get_z();

  /// @brief Method op_Equality, addr 0x2e755a8, size 0x60, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::TransformOrigin lhs, ::UnityEngine::UIElements::TransformOrigin rhs);

  /// @brief Method op_Inequality, addr 0x2e75880, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TransformOrigin lhs, ::UnityEngine::UIElements::TransformOrigin rhs);

  /// @brief Method Equals, addr 0x2e758ec, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TransformOrigin other);

  /// @brief Method Equals, addr 0x2e75958, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2e75748, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2e75a28, size 0x1cc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_X", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "::UnityEngine::UIElements::Length", modifiers: "",
  // def_value: None }, CppParam { name: "m_Z", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TransformOrigin(::UnityEngine::UIElements::Length m_X, ::UnityEngine::UIElements::Length m_Y, float_t m_Z) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformOrigin();

  /// @brief Field m_X, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_X;

  /// @brief Field m_Y, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length m_Y;

  /// @brief Field m_Z, offset: 0x10, size: 0x4, def value: None
  float_t m_Z;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransformOrigin, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransformOrigin, m_X) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransformOrigin, m_Y) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransformOrigin, m_Z) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransformOrigin, "UnityEngine.UIElements", "TransformOrigin");
