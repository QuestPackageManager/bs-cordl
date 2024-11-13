#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/UnicodeLineBreakingRules.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnicodeLineBreakingRules)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class UnicodeLineBreakingRules;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules);
// Type: UnityEngine.TextCore.Text::UnicodeLineBreakingRules
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::UnicodeLineBreakingRules*
class CORDL_TYPE UnicodeLineBreakingRules : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_followingCharacters)) ::UnityW<::UnityEngine::TextAsset> followingCharacters;

  __declspec(property(get = get_followingCharactersLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* followingCharactersLookup;

  __declspec(property(get = get_leadingCharacters)) ::UnityW<::UnityEngine::TextAsset> leadingCharacters;

  __declspec(property(get = get_leadingCharactersLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* leadingCharactersLookup;

  /// @brief Field m_FollowingCharacters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FollowingCharacters, put = __cordl_internal_set_m_FollowingCharacters)) ::UnityW<::UnityEngine::TextAsset> m_FollowingCharacters;

  /// @brief Field m_FollowingCharactersLookup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FollowingCharactersLookup,
                      put = __cordl_internal_set_m_FollowingCharactersLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_FollowingCharactersLookup;

  /// @brief Field m_LeadingCharacters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LeadingCharacters, put = __cordl_internal_set_m_LeadingCharacters)) ::UnityW<::UnityEngine::TextAsset> m_LeadingCharacters;

  /// @brief Field m_LeadingCharactersLookup, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LeadingCharactersLookup,
                      put = __cordl_internal_set_m_LeadingCharactersLookup)) ::System::Collections::Generic::HashSet_1<uint32_t>* m_LeadingCharactersLookup;

  /// @brief Field m_UnicodeLineBreakingRules, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnicodeLineBreakingRules, put = __cordl_internal_set_m_UnicodeLineBreakingRules)) ::UnityW<::UnityEngine::TextAsset> m_UnicodeLineBreakingRules;

  /// @brief Field m_UseModernHangulLineBreakingRules, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseModernHangulLineBreakingRules, put = __cordl_internal_set_m_UseModernHangulLineBreakingRules)) bool m_UseModernHangulLineBreakingRules;

  __declspec(property(get = get_useModernHangulLineBreakingRules)) bool useModernHangulLineBreakingRules;

  /// @brief Method GetCharacters, addr 0x48ec178, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<uint32_t>* GetCharacters(::UnityEngine::TextAsset* file);

  /// @brief Method LoadLineBreakingRules, addr 0x48e9f54, size 0x1e4, virtual false, abstract: false, final false
  inline void LoadLineBreakingRules();

  /// @brief Method LoadLineBreakingRules, addr 0x48ebf74, size 0x1d4, virtual false, abstract: false, final false
  inline void LoadLineBreakingRules(::UnityEngine::TextAsset* leadingRules, ::UnityEngine::TextAsset* followingRules);

  static inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* New_ctor();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_FollowingCharacters() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_FollowingCharacters();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get_m_FollowingCharactersLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& __cordl_internal_get_m_FollowingCharactersLookup() const;

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_LeadingCharacters() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_LeadingCharacters();

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __cordl_internal_get_m_LeadingCharactersLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& __cordl_internal_get_m_LeadingCharactersLookup() const;

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_UnicodeLineBreakingRules() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_UnicodeLineBreakingRules();

  constexpr bool const& __cordl_internal_get_m_UseModernHangulLineBreakingRules() const;

  constexpr bool& __cordl_internal_get_m_UseModernHangulLineBreakingRules();

  constexpr void __cordl_internal_set_m_FollowingCharacters(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_FollowingCharactersLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_LeadingCharacters(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_LeadingCharactersLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_UnicodeLineBreakingRules(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_UseModernHangulLineBreakingRules(bool value);

  /// @brief Method .ctor, addr 0x48e9f4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_followingCharacters, addr 0x48ebf44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_followingCharacters();

  /// @brief Method get_followingCharactersLookup, addr 0x48ec148, size 0x28, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<uint32_t>* get_followingCharactersLookup();

  /// @brief Method get_leadingCharacters, addr 0x48ebf3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::TextAsset> get_leadingCharacters();

  /// @brief Method get_leadingCharactersLookup, addr 0x48ebf4c, size 0x28, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<uint32_t>* get_leadingCharactersLookup();

  /// @brief Method get_useModernHangulLineBreakingRules, addr 0x48ec170, size 0x8, virtual false, abstract: false, final false
  inline bool get_useModernHangulLineBreakingRules();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicodeLineBreakingRules();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnicodeLineBreakingRules", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnicodeLineBreakingRules(UnicodeLineBreakingRules&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnicodeLineBreakingRules", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnicodeLineBreakingRules(UnicodeLineBreakingRules const&) = delete;

  /// @brief Field m_UnicodeLineBreakingRules, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___m_UnicodeLineBreakingRules;

  /// @brief Field m_LeadingCharacters, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___m_LeadingCharacters;

  /// @brief Field m_FollowingCharacters, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___m_FollowingCharacters;

  /// @brief Field m_UseModernHangulLineBreakingRules, offset: 0x28, size: 0x1, def value: None
  bool ___m_UseModernHangulLineBreakingRules;

  /// @brief Field m_LeadingCharactersLookup, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_LeadingCharactersLookup;

  /// @brief Field m_FollowingCharactersLookup, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_FollowingCharactersLookup;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15261 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, ___m_UnicodeLineBreakingRules) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, ___m_LeadingCharacters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, ___m_FollowingCharacters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, ___m_UseModernHangulLineBreakingRules) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, ___m_LeadingCharactersLookup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, ___m_FollowingCharactersLookup) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*, "UnityEngine.TextCore.Text", "UnicodeLineBreakingRules");
