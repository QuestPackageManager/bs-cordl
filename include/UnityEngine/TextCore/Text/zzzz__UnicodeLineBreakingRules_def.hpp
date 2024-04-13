#pragma once
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::UnicodeLineBreakingRules*
class CORDL_TYPE UnicodeLineBreakingRules : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_followingCharactersLookup))::System::Collections::Generic::HashSet_1<uint32_t>* followingCharactersLookup;

  __declspec(property(get = get_leadingCharactersLookup))::System::Collections::Generic::HashSet_1<uint32_t>* leadingCharactersLookup;

  /// @brief Field m_FollowingCharacters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FollowingCharacters, put = __cordl_internal_set_m_FollowingCharacters))::UnityW<::UnityEngine::TextAsset> m_FollowingCharacters;

  /// @brief Field m_LeadingCharacters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LeadingCharacters, put = __cordl_internal_set_m_LeadingCharacters))::UnityW<::UnityEngine::TextAsset> m_LeadingCharacters;

  /// @brief Field m_UnicodeLineBreakingRules, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnicodeLineBreakingRules, put = __cordl_internal_set_m_UnicodeLineBreakingRules))::UnityW<::UnityEngine::TextAsset> m_UnicodeLineBreakingRules;

  /// @brief Field m_UseModernHangulLineBreakingRules, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseModernHangulLineBreakingRules, put = __cordl_internal_set_m_UseModernHangulLineBreakingRules)) bool m_UseModernHangulLineBreakingRules;

  /// @brief Field s_FollowingCharactersLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FollowingCharactersLookup,
                             put = setStaticF_s_FollowingCharactersLookup))::System::Collections::Generic::HashSet_1<uint32_t>* s_FollowingCharactersLookup;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* s_Instance;

  /// @brief Field s_LeadingCharactersLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LeadingCharactersLookup, put = setStaticF_s_LeadingCharactersLookup))::System::Collections::Generic::HashSet_1<uint32_t>* s_LeadingCharactersLookup;

  /// @brief Method GetCharacters, addr 0x329a17c, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::HashSet_1<uint32_t>* GetCharacters(::UnityEngine::TextAsset* file);

  /// @brief Method LoadLineBreakingRules, addr 0x3299de0, size 0x314, virtual false, abstract: false, final false
  static inline void LoadLineBreakingRules();

  static inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* New_ctor();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_FollowingCharacters() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_FollowingCharacters();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_LeadingCharacters() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_LeadingCharacters();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_UnicodeLineBreakingRules() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_UnicodeLineBreakingRules();

  constexpr bool const& __cordl_internal_get_m_UseModernHangulLineBreakingRules() const;

  constexpr bool& __cordl_internal_get_m_UseModernHangulLineBreakingRules();

  constexpr void __cordl_internal_set_m_FollowingCharacters(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_LeadingCharacters(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_UnicodeLineBreakingRules(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_UseModernHangulLineBreakingRules(bool value);

  /// @brief Method .ctor, addr 0x329a264, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::HashSet_1<uint32_t>* getStaticF_s_FollowingCharactersLookup();

  static inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* getStaticF_s_Instance();

  static inline ::System::Collections::Generic::HashSet_1<uint32_t>* getStaticF_s_LeadingCharactersLookup();

  /// @brief Method get_followingCharactersLookup, addr 0x329a0f4, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<uint32_t>* get_followingCharactersLookup();

  /// @brief Method get_leadingCharactersLookup, addr 0x3299d58, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<uint32_t>* get_leadingCharactersLookup();

  static inline void setStaticF_s_FollowingCharactersLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  static inline void setStaticF_s_Instance(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* value);

  static inline void setStaticF_s_LeadingCharactersLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, ___m_UnicodeLineBreakingRules) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, ___m_LeadingCharacters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, ___m_FollowingCharacters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, ___m_UseModernHangulLineBreakingRules) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*, "UnityEngine.TextCore.Text", "UnicodeLineBreakingRules");
