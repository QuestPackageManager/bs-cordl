#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSheetCache)
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements::StyleSheets {
class __StyleSheetCache__SheetHandleKeyComparer;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements::StyleSheets {
struct __StyleSheetCache__SheetHandleKey;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StyleSheetCache;
}
namespace UnityEngine::UIElements::StyleSheets {
class __StyleSheetCache__SheetHandleKeyComparer;
}
namespace UnityEngine::UIElements::StyleSheets {
struct __StyleSheetCache__SheetHandleKey;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StyleSheetCache);
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKeyComparer);
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey);
// Type: ::SheetHandleKey
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7561))
// CS Name: ::StyleSheetCache::SheetHandleKey
struct CORDL_TYPE __StyleSheetCache__SheetHandleKey {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2c85db0 size 0x34 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::StyleSheet* sheet, int32_t index);

  // Ctor Parameters [CppParam { name: "sheetInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __StyleSheetCache__SheetHandleKey(int32_t sheetInstanceID, int32_t index) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __StyleSheetCache__SheetHandleKey();

  /// @brief Field sheetInstanceID, offset: 0x0, size: 0x4, def value: None
  int32_t sheetInstanceID;

  /// @brief Field index, offset: 0x4, size: 0x4, def value: None
  int32_t index;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey, sheetInstanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey, index) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
// Type: ::SheetHandleKeyComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7562))
// CS Name: ::StyleSheetCache::SheetHandleKeyComparer*
class CORDL_TYPE __StyleSheetCache__SheetHandleKeyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey>*() noexcept;

  /// @brief Method Equals addr 0x2c85de4 size 0x20 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey x, ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey y);

  /// @brief Method GetHashCode addr 0x2c85e04 size 0x40 virtual true final true
  inline int32_t GetHashCode(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey key);

  static inline ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKeyComparer* New_ctor();

  /// @brief Method .ctor addr 0x2c85e44 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__StyleSheetCache__SheetHandleKeyComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StyleSheetCache__SheetHandleKeyComparer(__StyleSheetCache__SheetHandleKeyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StyleSheetCache__SheetHandleKeyComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StyleSheetCache__SheetHandleKeyComparer(__StyleSheetCache__SheetHandleKeyComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StyleSheetCache__SheetHandleKeyComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKeyComparer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
// Type: UnityEngine.UIElements.StyleSheets::StyleSheetCache
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7563))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StyleSheetCache*
class CORDL_TYPE StyleSheetCache : public ::System::Object {
public:
  // Declarations
  using SheetHandleKeyComparer = ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKeyComparer;

  using SheetHandleKey = ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey;

  /// @brief Field s_Comparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Comparer, put = setStaticF_s_Comparer))::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKeyComparer* s_Comparer;

  /// @brief Field s_RulePropertyIdsCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RulePropertyIdsCache, put = setStaticF_s_RulePropertyIdsCache))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,
      ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>* s_RulePropertyIdsCache;

  static inline void setStaticF_s_Comparer(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKeyComparer* value);

  static inline ::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKeyComparer* getStaticF_s_Comparer();

  static inline void setStaticF_s_RulePropertyIdsCache(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,
                                                   ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey,
                                                             ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>>*
  getStaticF_s_RulePropertyIdsCache();

  /// @brief Method GetPropertyIds addr 0x2c7fdec size 0x1b0 virtual false final false
  static inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>
  GetPropertyIds(::UnityEngine::UIElements::StyleSheet* sheet, int32_t ruleIndex);

  /// @brief Method GetPropertyIds addr 0x2c85bfc size 0xe0 virtual false final false
  static inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>
  GetPropertyIds(::UnityEngine::UIElements::StyleRule* rule);

  /// @brief Method GetPropertyId addr 0x2c85b08 size 0xf4 virtual false final false
  static inline ::UnityEngine::UIElements::StyleSheets::StylePropertyId GetPropertyId(::UnityEngine::UIElements::StyleRule* rule, int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleSheetCache(StyleSheetCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleSheetCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleSheetCache(StyleSheetCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleSheetCache();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleSheetCache, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StyleSheetCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSheetCache*, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache");
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKeyComparer*, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKeyComparer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::__StyleSheetCache__SheetHandleKey, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKey");
