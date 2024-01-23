#pragma once
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
class Type;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementUtils);
// Type: UnityEngine.UIElements::VisualElementUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6917))
// CS Name: ::UnityEngine.UIElements::VisualElementUtils*
class CORDL_TYPE VisualElementUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_usedNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_usedNames, put = setStaticF_s_usedNames))::System::Collections::Generic::HashSet_1<::StringW>* s_usedNames;

  /// @brief Field s_FoldoutType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FoldoutType, put = setStaticF_s_FoldoutType))::System::Type* s_FoldoutType;

  static inline void setStaticF_s_usedNames(::System::Collections::Generic::HashSet_1<::StringW>* value);

  static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_s_usedNames();

  static inline void setStaticF_s_FoldoutType(::System::Type* value);

  static inline ::System::Type* getStaticF_s_FoldoutType();

  /// @brief Method GetUniqueName, addr 0x2e038d0, size 0x114, virtual false, abstract: false, final false
  static inline ::StringW GetUniqueName(::StringW nameBase);

  /// @brief Method GetFoldoutDepth, addr 0x2e01fe4, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t GetFoldoutDepth(::UnityEngine::UIElements::VisualElement* element);

  /// @brief Method GetListAndFoldoutDepth, addr 0x2e039e4, size 0x114, virtual false, abstract: false, final false
  static inline int32_t GetListAndFoldoutDepth(::UnityEngine::UIElements::VisualElement* element);

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VisualElementUtils(VisualElementUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VisualElementUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VisualElementUtils(VisualElementUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualElementUtils();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementUtils*, "UnityEngine.UIElements", "VisualElementUtils");
