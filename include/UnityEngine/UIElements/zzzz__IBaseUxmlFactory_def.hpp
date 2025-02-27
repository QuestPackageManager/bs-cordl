#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IBaseUxmlFactory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBaseUxmlFactory)
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IBaseUxmlFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IBaseUxmlFactory);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IBaseUxmlFactory
class CORDL_TYPE IBaseUxmlFactory {
public:
  // Declarations
  __declspec(property(get = get_uxmlQualifiedName)) ::StringW uxmlQualifiedName;

  __declspec(property(get = get_uxmlType)) ::System::Type* uxmlType;

  /// @brief Method AcceptsAttributeBag, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  /// @brief Method get_uxmlQualifiedName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_uxmlQualifiedName();

  /// @brief Method get_uxmlType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_uxmlType();

  // Ctor Parameters [CppParam { name: "", ty: "IBaseUxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBaseUxmlFactory(IBaseUxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6273 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IBaseUxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IBaseUxmlFactory*, "UnityEngine.UIElements", "IBaseUxmlFactory");
