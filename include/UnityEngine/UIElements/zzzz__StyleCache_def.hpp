#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleCache)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct ComputedTransitionProperty;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleCache);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StyleCache
class CORDL_TYPE StyleCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_ComputedStyleCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ComputedStyleCache,
                      put = setStaticF_s_ComputedStyleCache)) ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::UIElements::ComputedStyle>* s_ComputedStyleCache;

  /// @brief Field s_ComputedTransitionsCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ComputedTransitionsCache, put = setStaticF_s_ComputedTransitionsCache)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty, ::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*>>* s_ComputedTransitionsCache;

  /// @brief Field s_StyleVariableContextCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_StyleVariableContextCache,
                      put =
                          setStaticF_s_StyleVariableContextCache)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::StyleVariableContext*>* s_StyleVariableContextCache;

  /// @brief Method SetValue, addr 0x49a25f8, size 0x90, virtual false, abstract: false, final false
  static inline void SetValue(int32_t hash, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty, ::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*> data);

  /// @brief Method SetValue, addr 0x49a24d8, size 0x90, virtual false, abstract: false, final false
  static inline void SetValue(int32_t hash, ::UnityEngine::UIElements::StyleVariableContext* data);

  /// @brief Method SetValue, addr 0x49a2384, size 0xc4, virtual false, abstract: false, final false
  static inline void SetValue(int64_t hash, ::ByRef<::UnityEngine::UIElements::ComputedStyle> data);

  /// @brief Method TryGetValue, addr 0x49a2568, size 0x90, virtual false, abstract: false, final false
  static inline bool TryGetValue(int32_t hash, ::ByRef<::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty, ::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*>> data);

  /// @brief Method TryGetValue, addr 0x49a2448, size 0x90, virtual false, abstract: false, final false
  static inline bool TryGetValue(int32_t hash, ::ByRef<::UnityEngine::UIElements::StyleVariableContext*> data);

  /// @brief Method TryGetValue, addr 0x49a22f4, size 0x90, virtual false, abstract: false, final false
  static inline bool TryGetValue(int64_t hash, ::ByRef<::UnityEngine::UIElements::ComputedStyle> data);

  static inline ::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::UIElements::ComputedStyle>* getStaticF_s_ComputedStyleCache();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty, ::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*>>*
  getStaticF_s_ComputedTransitionsCache();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::StyleVariableContext*>* getStaticF_s_StyleVariableContextCache();

  static inline void setStaticF_s_ComputedStyleCache(::System::Collections::Generic::Dictionary_2<int64_t, ::UnityEngine::UIElements::ComputedStyle>* value);

  static inline void setStaticF_s_ComputedTransitionsCache(
      ::System::Collections::Generic::Dictionary_2<int32_t, ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty, ::Array<::UnityEngine::UIElements::ComputedTransitionProperty>*>>* value);

  static inline void setStaticF_s_StyleVariableContextCache(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::StyleVariableContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleCache(StyleCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleCache(StyleCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6340 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleCache, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleCache*, "UnityEngine.UIElements", "StyleCache");
