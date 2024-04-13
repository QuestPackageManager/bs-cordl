#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StylePropertyCache)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheets::StylePropertyCache);
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyCache
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.StyleSheets::StylePropertyCache*
class CORDL_TYPE StylePropertyCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_NonTerminalValues, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_NonTerminalValues, put = setStaticF_s_NonTerminalValues))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_NonTerminalValues;

  /// @brief Field s_PropertySyntaxCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PropertySyntaxCache, put = setStaticF_s_PropertySyntaxCache))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* s_PropertySyntaxCache;

  /// @brief Method TryGetNonTerminalValue, addr 0x333f1ec, size 0x90, virtual false, abstract: false, final false
  static inline bool TryGetNonTerminalValue(::StringW name, ByRef<::StringW> syntax);

  /// @brief Method TryGetSyntax, addr 0x333f15c, size 0x90, virtual false, abstract: false, final false
  static inline bool TryGetSyntax(::StringW name, ByRef<::StringW> syntax);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_NonTerminalValues();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_s_PropertySyntaxCache();

  static inline void setStaticF_s_NonTerminalValues(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_s_PropertySyntaxCache(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StylePropertyCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StylePropertyCache(StylePropertyCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StylePropertyCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StylePropertyCache(StylePropertyCache const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StylePropertyCache, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StylePropertyCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StylePropertyCache*, "UnityEngine.UIElements.StyleSheets", "StylePropertyCache");
