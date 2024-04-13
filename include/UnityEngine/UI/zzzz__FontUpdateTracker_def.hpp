#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FontUpdateTracker)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UI {
class FontUpdateTracker;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::FontUpdateTracker);
// Type: UnityEngine.UI::FontUpdateTracker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::FontUpdateTracker*
class CORDL_TYPE FontUpdateTracker : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Tracked, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_m_Tracked,
      put = setStaticF_m_Tracked))::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Font>, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::Text>>*>* m_Tracked;

  /// @brief Method RebuildForFont, addr 0x32a95f4, size 0x1a4, virtual false, abstract: false, final false
  static inline void RebuildForFont(::UnityEngine::Font* f);

  /// @brief Method TrackText, addr 0x32a93a4, size 0x250, virtual false, abstract: false, final false
  static inline void TrackText(::UnityEngine::UI::Text* t);

  /// @brief Method UntrackText, addr 0x32a9798, size 0x20c, virtual false, abstract: false, final false
  static inline void UntrackText(::UnityEngine::UI::Text* t);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Font>, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::Text>>*>* getStaticF_m_Tracked();

  static inline void
  setStaticF_m_Tracked(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Font>, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::UI::Text>>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontUpdateTracker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FontUpdateTracker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontUpdateTracker(FontUpdateTracker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontUpdateTracker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontUpdateTracker(FontUpdateTracker const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::FontUpdateTracker, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::FontUpdateTracker);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::FontUpdateTracker*, "UnityEngine.UI", "FontUpdateTracker");
