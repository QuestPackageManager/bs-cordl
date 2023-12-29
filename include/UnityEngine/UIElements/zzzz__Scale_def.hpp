#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scale)
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Scale;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Scale);
// Type: UnityEngine.UIElements::Scale
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 29, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7404))
// CS Name: ::UnityEngine.UIElements::Scale
struct CORDL_TYPE Scale {
public:
  // Declarations
  __declspec(property(get = get_value))::UnityEngine::Vector3 value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Scale>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Scale>*();

  /// @brief Method .ctor addr 0x2d0c844 size 0x14 virtual false final false
  inline void _ctor(::UnityEngine::Vector3 scale);

  /// @brief Method Initial addr 0x2d0c858 size 0x44 virtual false final false
  static inline ::UnityEngine::UIElements::Scale Initial();

  /// @brief Method None addr 0x2d07fac size 0x18 virtual false final false
  static inline ::UnityEngine::UIElements::Scale None();

  /// @brief Method get_value addr 0x2d0c89c size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_value();

  /// @brief Method op_Equality addr 0x2d0376c size 0x54 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::Scale lhs, ::UnityEngine::UIElements::Scale rhs);

  /// @brief Method op_Inequality addr 0x2d0c8a8 size 0x54 virtual false final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Scale lhs, ::UnityEngine::UIElements::Scale rhs);

  /// @brief Method Equals addr 0x2d0c8fc size 0x4c virtual true final true
  inline bool Equals(::UnityEngine::UIElements::Scale other);

  /// @brief Method Equals addr 0x2d0c948 size 0xbc virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2d03934 size 0x50 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2d0ca04 size 0x8 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "m_Scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_IsNone", ty: "bool", modifiers: "", def_value: None }]
  constexpr Scale(::UnityEngine::Vector3 m_Scale, bool m_IsNone) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Scale();

  /// @brief Field m_Scale, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Scale;

  /// @brief Field m_IsNone, offset: 0xc, size: 0x1, def value: None
  bool m_IsNone;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Scale, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scale, m_Scale) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Scale, m_IsNone) == 0xc, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Scale, "UnityEngine.UIElements", "Scale");
