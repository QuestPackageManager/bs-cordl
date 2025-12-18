#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StylePropertyUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StylePropertyUtil)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleEnumType;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct UsageHints;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyUtil;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StylePropertyUtil);
// Dependencies System.Object
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyUtil
class CORDL_TYPE StylePropertyUtil : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_AnimatableProperties, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_AnimatableProperties,
                      put = setStaticF_s_AnimatableProperties)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* s_AnimatableProperties;

  /// @brief Field s_AnimatableWithUsageHintProperties, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_AnimatableWithUsageHintProperties,
                      put = setStaticF_s_AnimatableWithUsageHintProperties)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId,
                                                                                                                          ::UnityEngine::UIElements::UsageHints>* s_AnimatableWithUsageHintProperties;

  /// @brief Field s_CSharpNameToUssName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CSharpNameToUssName, put = setStaticF_s_CSharpNameToUssName)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_CSharpNameToUssName;

  /// @brief Field s_IdToName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_IdToName,
                      put = setStaticF_s_IdToName)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::StringW>* s_IdToName;

  /// @brief Field s_NameToId, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_NameToId,
                      put = setStaticF_s_NameToId)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyId>* s_NameToId;

  /// @brief Field s_UssNameToCSharpName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UssNameToCSharpName, put = setStaticF_s_UssNameToCSharpName)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_UssNameToCSharpName;

  /// @brief Method IsAnimatable, addr 0x6b410f0, size 0x88, virtual false, abstract: false, final false
  static inline bool IsAnimatable(::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method IsMatchingShorthand, addr 0x6b40f00, size 0x1f0, virtual false, abstract: false, final false
  static inline bool IsMatchingShorthand(::UnityEngine::UIElements::StyleSheets::StylePropertyId shorthand, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id);

  /// @brief Method TryGetEnumIntValue, addr 0x6b3dc90, size 0x1260, virtual false, abstract: false, final false
  static inline bool TryGetEnumIntValue(::UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, ::StringW value, ::ByRef<int32_t> intValue);

  static inline ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* getStaticF_s_AnimatableProperties();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::UsageHints>*
  getStaticF_s_AnimatableWithUsageHintProperties();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_CSharpNameToUssName();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::StringW>* getStaticF_s_IdToName();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyId>* getStaticF_s_NameToId();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_UssNameToCSharpName();

  static inline void setStaticF_s_AnimatableProperties(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::StyleSheets::StylePropertyId>* value);

  static inline void
  setStaticF_s_AnimatableWithUsageHintProperties(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::UsageHints>* value);

  static inline void setStaticF_s_CSharpNameToUssName(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_s_IdToName(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::StringW>* value);

  static inline void setStaticF_s_NameToId(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyId>* value);

  static inline void setStaticF_s_UssNameToCSharpName(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyUtil();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyUtil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyUtil(StylePropertyUtil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyUtil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyUtil(StylePropertyUtil const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5451 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StylePropertyUtil, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StylePropertyUtil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyUtil*, "UnityEngine.UIElements.StyleSheets", "StylePropertyUtil");
