#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EasingFunction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EasingMode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EasingFunction)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct EasingMode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EasingFunction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EasingFunction);
// Dependencies System.IEquatable`1<T>, UnityEngine.UIElements.EasingMode
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.EasingFunction
struct CORDL_TYPE EasingFunction {
public:
  // Declarations
  __declspec(property(get = get_mode)) ::UnityEngine::UIElements::EasingMode mode;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>*();

  /// @brief Method Equals, addr 0x4a6bde4, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a6bdd4, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::EasingFunction other);

  /// @brief Method GetHashCode, addr 0x4a6ab20, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4a6be5c, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a6bdc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::EasingMode mode);

  /// @brief Method get_mode, addr 0x4a6bdb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EasingMode get_mode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>* i___System__IEquatable_1___UnityEngine__UIElements__EasingFunction_();

  /// @brief Method op_Equality, addr 0x4a6bdc8, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::EasingFunction lhs, ::UnityEngine::UIElements::EasingFunction rhs);

  /// @brief Method op_Implicit, addr 0x4a6af40, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::EasingFunction op_Implicit___UnityEngine__UIElements__EasingFunction(::UnityEngine::UIElements::EasingMode easingMode);

  // Ctor Parameters []
  // @brief default ctor
  constexpr EasingFunction();

  // Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::UIElements::EasingMode", modifiers: "", def_value: None }]
  constexpr EasingFunction(::UnityEngine::UIElements::EasingMode m_Mode) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6063 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Mode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::EasingMode m_Mode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EasingFunction, m_Mode) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EasingFunction, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EasingFunction, "UnityEngine.UIElements", "EasingFunction");
