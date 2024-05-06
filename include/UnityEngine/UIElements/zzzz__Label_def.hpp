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
class __Label__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Label__UxmlTraits;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class __Label__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __Label__UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Label);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Label__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__Label__UxmlTraits);
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Label::UxmlFactory*
class CORDL_TYPE __Label__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Label*, ::UnityEngine::UIElements::__Label__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Label__UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x35661bc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Label__UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Label__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Label__UxmlFactory(__Label__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Label__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Label__UxmlFactory(__Label__UxmlFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Label__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlTraits
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::Label::UxmlTraits*
class CORDL_TYPE __Label__UxmlTraits : public ::UnityEngine::UIElements::__TextElement__UxmlTraits {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__Label__UxmlTraits* New_ctor();

  /// @brief Method .ctor, addr 0x3572794, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Label__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Label__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Label__UxmlTraits(__Label__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Label__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Label__UxmlTraits(__Label__UxmlTraits const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Label__UxmlTraits, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Label
// SizeInfo { instance_size: 1144, native_size: -1, calculated_instance_size: 1144, calculated_native_size: 1140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::Label*
class CORDL_TYPE Label : public ::UnityEngine::UIElements::TextElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::__Label__UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::__Label__UxmlTraits;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  static inline ::UnityEngine::UIElements::Label* New_ctor();

  static inline ::UnityEngine::UIElements::Label* New_ctor(::StringW text);

  /// @brief Method .ctor, addr 0x35726e4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x356843c, size 0xb8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Label, 0x478>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::Label);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Label*, "UnityEngine.UIElements", "Label");
NEED_NO_BOX(::UnityEngine::UIElements::__Label__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Label__UxmlFactory*, "UnityEngine.UIElements", "Label/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__Label__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Label__UxmlTraits*, "UnityEngine.UIElements", "Label/UxmlTraits");
