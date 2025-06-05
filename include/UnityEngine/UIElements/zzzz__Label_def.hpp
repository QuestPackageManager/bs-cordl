#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Label.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Label)
namespace UnityEngine::UIElements {
class Label_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Label_UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class Label_UxmlFactory;
}
namespace UnityEngine::UIElements {
class Label_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Label);
MARK_REF_PTR_T(::UnityEngine::UIElements::Label_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::Label_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Label/UxmlFactory
class CORDL_TYPE Label_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Label*, ::UnityEngine::UIElements::Label_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Label_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x49f2dd4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Label_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Label_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Label_UxmlFactory(Label_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Label_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Label_UxmlFactory(Label_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5623 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Label_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Label/UxmlTraits
class CORDL_TYPE Label_UxmlTraits : public ::UnityEngine::UIElements::TextElement_UxmlTraits {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::Label_UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x49f2e1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Label_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Label_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Label_UxmlTraits(Label_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Label_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Label_UxmlTraits(Label_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5624 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Label_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TextElement
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.Label
class CORDL_TYPE Label : public ::UnityEngine::UIElements::TextElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::Label_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::Label_UxmlTraits;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  static inline ::UnityEngine::UIElements::Label* New_ctor();

  static inline ::UnityEngine::UIElements::Label* New_ctor(::StringW text);

  /// @brief Method .ctor, addr 0x49f2c6c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49f2cbc, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::StringW text);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_ussClassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Label();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Label", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Label(Label&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Label", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Label(Label const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5625 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Label, 0x4a0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Label);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Label*, "UnityEngine.UIElements", "Label");
NEED_NO_BOX(::UnityEngine::UIElements::Label_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Label_UxmlFactory*, "UnityEngine.UIElements", "Label/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::Label_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Label_UxmlTraits*, "UnityEngine.UIElements", "Label/UxmlTraits");
