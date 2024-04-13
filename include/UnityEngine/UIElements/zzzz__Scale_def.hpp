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
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
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
// CS Name: ::UnityEngine.UIElements::Scale
struct CORDL_TYPE Scale {
public:
  // Declarations
  __declspec(property(get = get_value))::UnityEngine::Vector3 value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Scale>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Scale>*();

  /// @brief Method Equals, addr 0x33c4e58, size 0xbc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x33c4e0c, size 0x4c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Scale other);

  /// @brief Method GetHashCode, addr 0x33bbe44, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x33c4d68, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Scale Initial();

  /// @brief Method None, addr 0x33c04bc, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Scale None();

  /// @brief Method ToString, addr 0x33c4f14, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x33c4d54, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 scale);

  /// @brief Method get_value, addr 0x33c4dac, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Scale>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Scale>* i___System__IEquatable_1___UnityEngine__UIElements__Scale_();

  /// @brief Method op_Equality, addr 0x33bbc7c, size 0x54, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Scale lhs, ::UnityEngine::UIElements::Scale rhs);

  /// @brief Method op_Inequality, addr 0x33c4db8, size 0x54, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Scale lhs, ::UnityEngine::UIElements::Scale rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Scale();

  // Ctor Parameters [CppParam { name: "m_Scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_IsNone", ty: "bool", modifiers: "", def_value: None }]
  constexpr Scale(::UnityEngine::Vector3 m_Scale, bool m_IsNone) noexcept;

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
