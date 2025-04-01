#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VisualElementUtils)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
class Type;
}
namespace UnityEngine::UIElements {
class VisualElementUtils___c;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementUtils;
}
namespace UnityEngine::UIElements {
class VisualElementUtils___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementUtils);
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementUtils___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementUtils/<>c
class CORDL_TYPE VisualElementUtils___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::VisualElementUtils___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* __9__5_0;

  static inline ::UnityEngine::UIElements::VisualElementUtils___c* New_ctor();

  /// @brief Method <AssignInspectorStyleIfNecessary>b__5_0, addr 0x499b5e0, size 0x6c, virtual false, abstract: false, final false
  inline bool _AssignInspectorStyleIfNecessary_b__5_0(::UnityEngine::UIElements::VisualElement* i);

  /// @brief Method .ctor, addr 0x499b5d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::VisualElementUtils___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* getStaticF___9__5_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::VisualElementUtils___c* value);

  static inline void setStaticF___9__5_0(::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementUtils___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementUtils___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementUtils___c(VisualElementUtils___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementUtils___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementUtils___c(VisualElementUtils___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6333 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementUtils___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.VisualElementUtils
class CORDL_TYPE VisualElementUtils : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::VisualElementUtils___c;

  /// @brief Field s_FoldoutType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FoldoutType, put = setStaticF_s_FoldoutType)) ::System::Type* s_FoldoutType;

  /// @brief Field s_InspectorElementUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_InspectorElementUssClassName, put = setStaticF_s_InspectorElementUssClassName)) ::StringW s_InspectorElementUssClassName;

  /// @brief Field s_usedNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_usedNames, put = setStaticF_s_usedNames)) ::System::Collections::Generic::HashSet_1<::StringW>* s_usedNames;

  /// @brief Method AssignInspectorStyleIfNecessary, addr 0x499b37c, size 0x100, virtual false, abstract: false, final false
  static inline void AssignInspectorStyleIfNecessary(::UnityEngine::UIElements::VisualElement* element, ::StringW classNameToEnable);

  /// @brief Method GetFoldoutDepth, addr 0x499b298, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t GetFoldoutDepth(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method GetUniqueName, addr 0x499b184, size 0x114, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueName(::StringW nameBase);

  static inline ::System::Type* getStaticF_s_FoldoutType();

  static inline ::StringW getStaticF_s_InspectorElementUssClassName();

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_s_usedNames();

  static inline void setStaticF_s_FoldoutType(::System::Type* value);

  static inline void setStaticF_s_InspectorElementUssClassName(::StringW value);

  static inline void setStaticF_s_usedNames(::System::Collections::Generic::HashSet_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VisualElementUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementUtils(VisualElementUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementUtils(VisualElementUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6334 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementUtils*, "UnityEngine.UIElements", "VisualElementUtils");
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementUtils___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementUtils___c*, "UnityEngine.UIElements", "VisualElementUtils/<>c");
