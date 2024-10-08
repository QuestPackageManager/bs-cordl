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
class VisualElement;
}
namespace UnityEngine::UIElements {
class __VisualElementUtils____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementUtils;
}
namespace UnityEngine::UIElements {
class __VisualElementUtils____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementUtils);
MARK_REF_PTR_T(::UnityEngine::UIElements::__VisualElementUtils____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::VisualElementUtils::<>c*
class CORDL_TYPE __VisualElementUtils____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__VisualElementUtils____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* __9__5_0;

  static inline ::UnityEngine::UIElements::__VisualElementUtils____c* New_ctor();

  /// @brief Method <AssignInspectorStyleIfNecessary>b__5_0, addr 0x4925aec, size 0x6c, virtual false, abstract: false, final false
  inline bool _AssignInspectorStyleIfNecessary_b__5_0(::UnityEngine::UIElements::VisualElement* i);

  /// @brief Method .ctor, addr 0x4925ae4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__VisualElementUtils____c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* getStaticF___9__5_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::__VisualElementUtils____c* value);

  static inline void setStaticF___9__5_0(::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VisualElementUtils____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__VisualElementUtils____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __VisualElementUtils____c(__VisualElementUtils____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__VisualElementUtils____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __VisualElementUtils____c(__VisualElementUtils____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6298 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__VisualElementUtils____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualElementUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::VisualElementUtils*
class CORDL_TYPE VisualElementUtils : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__VisualElementUtils____c;

  /// @brief Field s_FoldoutType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FoldoutType, put = setStaticF_s_FoldoutType)) ::System::Type* s_FoldoutType;

  /// @brief Field s_InspectorElementUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InspectorElementUssClassName, put = setStaticF_s_InspectorElementUssClassName)) ::StringW s_InspectorElementUssClassName;

  /// @brief Field s_usedNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_usedNames, put = setStaticF_s_usedNames)) ::System::Collections::Generic::HashSet_1<::StringW>* s_usedNames;

  /// @brief Method AssignInspectorStyleIfNecessary, addr 0x4925888, size 0x100, virtual false, abstract: false, final false
  static inline void AssignInspectorStyleIfNecessary(::UnityEngine::UIElements::VisualElement* element, ::StringW classNameToEnable);

  /// @brief Method GetFoldoutDepth, addr 0x49257a4, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t GetFoldoutDepth(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method GetUniqueName, addr 0x4925690, size 0x114, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6299 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementUtils*, "UnityEngine.UIElements", "VisualElementUtils");
NEED_NO_BOX(::UnityEngine::UIElements::__VisualElementUtils____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__VisualElementUtils____c*, "UnityEngine.UIElements", "VisualElementUtils/<>c");
