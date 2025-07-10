#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UQueryExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UQueryState_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UQueryExtensions)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UQueryExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UQueryExtensions);
// Dependencies System.Object, UnityEngine.UIElements.UQueryState`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UQueryExtensions
class CORDL_TYPE UQueryExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field SingleElementClassQuery, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SingleElementClassQuery, put = setStaticF_SingleElementClassQuery)) ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>
      SingleElementClassQuery;

  /// @brief Field SingleElementEmptyQuery, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SingleElementEmptyQuery, put = setStaticF_SingleElementEmptyQuery)) ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>
      SingleElementEmptyQuery;

  /// @brief Field SingleElementNameAndClassQuery, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SingleElementNameAndClassQuery,
                      put = setStaticF_SingleElementNameAndClassQuery)) ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>
      SingleElementNameAndClassQuery;

  /// @brief Field SingleElementNameQuery, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SingleElementNameQuery, put = setStaticF_SingleElementNameQuery)) ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>
      SingleElementNameQuery;

  /// @brief Field SingleElementTypeAndClassQuery, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SingleElementTypeAndClassQuery,
                      put = setStaticF_SingleElementTypeAndClassQuery)) ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>
      SingleElementTypeAndClassQuery;

  /// @brief Field SingleElementTypeAndNameAndClassQuery, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SingleElementTypeAndNameAndClassQuery,
                      put = setStaticF_SingleElementTypeAndNameAndClassQuery)) ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>
      SingleElementTypeAndNameAndClassQuery;

  /// @brief Field SingleElementTypeAndNameQuery, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SingleElementTypeAndNameQuery,
                      put = setStaticF_SingleElementTypeAndNameQuery)) ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>
      SingleElementTypeAndNameQuery;

  /// @brief Field SingleElementTypeQuery, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SingleElementTypeQuery, put = setStaticF_SingleElementTypeQuery)) ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*>
      SingleElementTypeQuery;

  /// @brief Method Q, addr 0x4aa0e78, size 0x40c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* Q(::UnityEngine::UIElements::VisualElement* e, ::StringW name, ::StringW className);

  /// @brief Method Q, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Q(::UnityEngine::UIElements::VisualElement* e, ::StringW name, ::StringW className);

  static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementClassQuery();

  static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementEmptyQuery();

  static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementNameAndClassQuery();

  static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementNameQuery();

  static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementTypeAndClassQuery();

  static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementTypeAndNameAndClassQuery();

  static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementTypeAndNameQuery();

  static inline ::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> getStaticF_SingleElementTypeQuery();

  static inline void setStaticF_SingleElementClassQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> value);

  static inline void setStaticF_SingleElementEmptyQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> value);

  static inline void setStaticF_SingleElementNameAndClassQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> value);

  static inline void setStaticF_SingleElementNameQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> value);

  static inline void setStaticF_SingleElementTypeAndClassQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> value);

  static inline void setStaticF_SingleElementTypeAndNameAndClassQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> value);

  static inline void setStaticF_SingleElementTypeAndNameQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> value);

  static inline void setStaticF_SingleElementTypeQuery(::UnityEngine::UIElements::UQueryState_1<::UnityEngine::UIElements::VisualElement*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UQueryExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UQueryExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UQueryExtensions(UQueryExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UQueryExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UQueryExtensions(UQueryExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6232 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UQueryExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UQueryExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UQueryExtensions*, "UnityEngine.UIElements", "UQueryExtensions");
