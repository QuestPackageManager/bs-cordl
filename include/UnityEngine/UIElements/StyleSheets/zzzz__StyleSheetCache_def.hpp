#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleSheetCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSheetCache)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetCache_SheetHandleKeyComparer;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleSheetCache_SheetHandleKey;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetCache;
}
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetCache_SheetHandleKeyComparer;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleSheetCache_SheetHandleKey;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StyleSheetCache);
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer);
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey);
// Dependencies
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetCache/SheetHandleKey
struct CORDL_TYPE StyleSheetCache_SheetHandleKey {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x49d80f4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheet* sheet, int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheetCache_SheetHandleKey();

  // Ctor Parameters [CppParam { name: "sheetInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleSheetCache_SheetHandleKey(int32_t sheetInstanceID, int32_t index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6455 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field sheetInstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t sheetInstanceID;

  /// @brief Field index, offset: 0x4, size: 0x4, def value: None
  int32_t index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, sheetInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, index) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
// Dependencies System.Collections.Generic.IEqualityComparer`1<T>, System.Object, UnityEngine.UIElements.StyleSheets.StyleSheetCache::SheetHandleKey
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetCache/SheetHandleKeyComparer
class CORDL_TYPE StyleSheetCache_SheetHandleKeyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>*() noexcept;

  /// @brief Method Equals, addr 0x49d83d0, size 0x20, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey x, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey y);

  /// @brief Method GetHashCode, addr 0x49d83f0, size 0x3c, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey key);

  static inline ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* New_ctor();

  /// @brief Method .ctor, addr 0x49d83c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey>*
  i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__UIElements__StyleSheets__StyleSheetCache_SheetHandleKey_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheetCache_SheetHandleKeyComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache_SheetHandleKeyComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSheetCache_SheetHandleKeyComparer(StyleSheetCache_SheetHandleKeyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache_SheetHandleKeyComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSheetCache_SheetHandleKeyComparer(StyleSheetCache_SheetHandleKeyComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
// Dependencies System.Object
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleSheets.StyleSheetCache
class CORDL_TYPE StyleSheetCache : public ::System::Object {
public:
  // Declarations
  using SheetHandleKey = ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey;

  using SheetHandleKeyComparer = ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer;

  /// @brief Field s_Comparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Comparer, put = setStaticF_s_Comparer)) ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* s_Comparer;

  /// @brief Field s_RulePropertyIdsCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RulePropertyIdsCache, put = setStaticF_s_RulePropertyIdsCache)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey,
      ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>* s_RulePropertyIdsCache;

  /// @brief Method GetPropertyId, addr 0x49d8128, size 0xf0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId GetPropertyId(::UnityEngine::UIElements::StyleRule* rule, int32_t index);

  /// @brief Method GetPropertyIds, addr 0x49d8218, size 0xe0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>
  GetPropertyIds(::UnityEngine::UIElements::StyleRule* rule);

  /// @brief Method GetPropertyIds, addr 0x49d383c, size 0x1bc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>
  GetPropertyIds(::UnityEngine::UIElements::StyleSheet* sheet, int32_t ruleIndex);

  static inline ::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* getStaticF_s_Comparer();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey,
                                                             ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>*
  getStaticF_s_RulePropertyIdsCache();

  static inline void setStaticF_s_Comparer(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer* value);

  static inline void setStaticF_s_RulePropertyIdsCache(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey,
                                                   ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheetCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSheetCache(StyleSheetCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSheetCache(StyleSheetCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleSheetCache, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StyleSheetCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSheetCache*, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache");
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKeyComparer*, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKeyComparer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSheetCache_SheetHandleKey, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKey");
