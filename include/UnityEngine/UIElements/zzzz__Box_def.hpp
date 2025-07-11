#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Box.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UxmlFactory_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Box)
namespace UnityEngine::UIElements {
class Box_UxmlFactory;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Box;
}
namespace UnityEngine::UIElements {
class Box_UxmlFactory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Box);
MARK_REF_PTR_T(::UnityEngine::UIElements::Box_UxmlFactory);
// Dependencies UnityEngine.UIElements.UxmlFactory`1<TCreatedType>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Box/UxmlFactory
class CORDL_TYPE Box_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_1<::UnityEngine::UIElements::Box*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Box_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x498d63c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Box_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Box_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Box_UxmlFactory(Box_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Box_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Box_UxmlFactory(Box_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5529 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Box_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.VisualElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Box
class CORDL_TYPE Box : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::Box_UxmlFactory;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  static inline ::UnityEngine::UIElements::Box* New_ctor();

  /// @brief Method .ctor, addr 0x498d548, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Box();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Box", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Box(Box&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Box", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Box(Box const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5530 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Box, 0x3c8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Box);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Box*, "UnityEngine.UIElements", "Box");
NEED_NO_BOX(::UnityEngine::UIElements::Box_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Box_UxmlFactory*, "UnityEngine.UIElements", "Box/UxmlFactory");
