#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\BindablePropertyChangedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BindablePropertyChangedEventArgs)
namespace UnityEngine::UIElements {
struct BindingId;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct BindablePropertyChangedEventArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BindablePropertyChangedEventArgs);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::BindablePropertyChangedEventArgs, "UnityEngine.UIElements", "BindablePropertyChangedEventArgs");
// Dependencies UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.BindablePropertyChangedEventArgs
struct CORDL_TYPE BindablePropertyChangedEventArgs {
public:
  // Declarations
  __declspec(property(get = get_propertyName)) ::UnityEngine::UIElements::BindingId propertyName;

  /// @brief Method .ctor, addr 0x6c45430, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::by_ref<::UnityEngine::UIElements::BindingId> propertyName);

  /// @brief Method get_propertyName, addr 0x6c45438, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingId get_propertyName();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindablePropertyChangedEventArgs();

  // Ctor Parameters [CppParam { name: "m_PropertyName", ty: "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: None }]
  constexpr BindablePropertyChangedEventArgs(::UnityEngine::UIElements::BindingId m_PropertyName) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4059 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field m_PropertyName, offset: 0x0, size: 0x98, def value: None
  ::UnityEngine::UIElements::BindingId m_PropertyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindablePropertyChangedEventArgs, m_PropertyName) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::BindablePropertyChangedEventArgs) == 0x98, "Size mismatch!");

} // namespace UnityEngine::UIElements
