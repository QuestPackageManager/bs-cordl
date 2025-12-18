#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlNamespaceDefinition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlNamespaceDefinition)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UxmlNamespaceDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UxmlNamespaceDefinition);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.UxmlNamespaceDefinition
struct CORDL_TYPE UxmlNamespaceDefinition {
public:
  // Declarations
  /// @brief Field <Empty>k__BackingField, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__Empty_k__BackingField, put = setStaticF__Empty_k__BackingField)) ::UnityEngine::UIElements::UxmlNamespaceDefinition _Empty_k__BackingField;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>*();

  /// @brief Method Equals, addr 0x6af4a24, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6af49ac, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::UxmlNamespaceDefinition other);

  /// @brief Method GetHashCode, addr 0x6af4ab8, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::UIElements::UxmlNamespaceDefinition getStaticF__Empty_k__BackingField();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>* i___System__IEquatable_1___UnityEngine__UIElements__UxmlNamespaceDefinition_();

  /// @brief Method op_Equality, addr 0x6af4958, size 0x54, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::UxmlNamespaceDefinition lhs, ::UnityEngine::UIElements::UxmlNamespaceDefinition rhs);

  static inline void setStaticF__Empty_k__BackingField(::UnityEngine::UIElements::UxmlNamespaceDefinition value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlNamespaceDefinition();

  // Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "resolvedNamespace", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr UxmlNamespaceDefinition(::StringW prefix, ::StringW resolvedNamespace) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5188 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field resolvedNamespace, offset: 0x8, size: 0x8, def value: None
  ::StringW resolvedNamespace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlNamespaceDefinition, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UxmlNamespaceDefinition, resolvedNamespace) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlNamespaceDefinition, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlNamespaceDefinition, "UnityEngine.UIElements", "UxmlNamespaceDefinition");
