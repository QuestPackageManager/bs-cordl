#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnicodeLineBreakingRules)
namespace UnityEngine {
class TextAsset;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13733))
// CS Name: ::UnityEngine.TextCore.Text::UnicodeLineBreakingRules*
class CORDL_TYPE UnicodeLineBreakingRules : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_UnicodeLineBreakingRules, offset 0x10, size 0x8
  __declspec(property(get = __get_m_UnicodeLineBreakingRules, put = __set_m_UnicodeLineBreakingRules))::UnityEngine::TextAsset* m_UnicodeLineBreakingRules;

  /// @brief Field m_LeadingCharacters, offset 0x18, size 0x8
  __declspec(property(get = __get_m_LeadingCharacters, put = __set_m_LeadingCharacters))::UnityEngine::TextAsset* m_LeadingCharacters;

  /// @brief Field m_FollowingCharacters, offset 0x20, size 0x8
  __declspec(property(get = __get_m_FollowingCharacters, put = __set_m_FollowingCharacters))::UnityEngine::TextAsset* m_FollowingCharacters;

  /// @brief Field m_UseModernHangulLineBreakingRules, offset 0x28, size 0x1
  __declspec(property(get = __get_m_UseModernHangulLineBreakingRules, put = __set_m_UseModernHangulLineBreakingRules)) bool m_UseModernHangulLineBreakingRules;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* s_Instance;

  /// @brief Field s_LeadingCharactersLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LeadingCharactersLookup, put = setStaticF_s_LeadingCharactersLookup))::System::Collections::Generic::HashSet_1<uint32_t>* s_LeadingCharactersLookup;

  /// @brief Field s_FollowingCharactersLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FollowingCharactersLookup,
                             put = setStaticF_s_FollowingCharactersLookup))::System::Collections::Generic::HashSet_1<uint32_t>* s_FollowingCharactersLookup;

  __declspec(property(get = get_leadingCharactersLookup))::System::Collections::Generic::HashSet_1<uint32_t>* leadingCharactersLookup;

  __declspec(property(get = get_followingCharactersLookup))::System::Collections::Generic::HashSet_1<uint32_t>* followingCharactersLookup;

  constexpr ::UnityEngine::TextAsset*& __get_m_UnicodeLineBreakingRules();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& __get_m_UnicodeLineBreakingRules() const;

  constexpr void __set_m_UnicodeLineBreakingRules(::UnityEngine::TextAsset* value);

  constexpr ::UnityEngine::TextAsset*& __get_m_LeadingCharacters();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& __get_m_LeadingCharacters() const;

  constexpr void __set_m_LeadingCharacters(::UnityEngine::TextAsset* value);

  constexpr ::UnityEngine::TextAsset*& __get_m_FollowingCharacters();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& __get_m_FollowingCharacters() const;

  constexpr void __set_m_FollowingCharacters(::UnityEngine::TextAsset* value);

  constexpr bool& __get_m_UseModernHangulLineBreakingRules();

  constexpr bool const& __get_m_UseModernHangulLineBreakingRules() const;

  constexpr void __set_m_UseModernHangulLineBreakingRules(bool value);

  static inline void setStaticF_s_Instance(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* value);

  static inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* getStaticF_s_Instance();

  static inline void setStaticF_s_LeadingCharactersLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  static inline ::System::Collections::Generic::HashSet_1<uint32_t>* getStaticF_s_LeadingCharactersLookup();

  static inline void setStaticF_s_FollowingCharactersLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  static inline ::System::Collections::Generic::HashSet_1<uint32_t>* getStaticF_s_FollowingCharactersLookup();

  /// @brief Method get_leadingCharactersLookup addr 0x2d4c538 size 0x88 virtual false final false
  inline ::System::Collections::Generic::HashSet_1<uint32_t>* get_leadingCharactersLookup();

  /// @brief Method get_followingCharactersLookup addr 0x2d4c8d4 size 0x88 virtual false final false
  inline ::System::Collections::Generic::HashSet_1<uint32_t>* get_followingCharactersLookup();

  /// @brief Method LoadLineBreakingRules addr 0x2d4c5c0 size 0x314 virtual false final false
  static inline void LoadLineBreakingRules();

  /// @brief Method GetCharacters addr 0x2d4c95c size 0xe8 virtual false final false
  static inline ::System::Collections::Generic::HashSet_1<uint32_t>* GetCharacters(::UnityEngine::TextAsset* file);

  static inline ::UnityEngine::TextCore::Text::UnicodeLineBreakingRules* New_ctor();

  /// @brief Method .ctor addr 0x2d4ca44 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UnicodeLineBreakingRules", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnicodeLineBreakingRules(UnicodeLineBreakingRules&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnicodeLineBreakingRules", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnicodeLineBreakingRules(UnicodeLineBreakingRules const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicodeLineBreakingRules();

public:
  /// @brief Field m_UnicodeLineBreakingRules, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextAsset* ___m_UnicodeLineBreakingRules;

  /// @brief Field m_LeadingCharacters, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextAsset* ___m_LeadingCharacters;

  /// @brief Field m_FollowingCharacters, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::TextAsset* ___m_FollowingCharacters;

  /// @brief Field m_UseModernHangulLineBreakingRules, offset: 0x28, size: 0x1, def value: None
  bool ___m_UseModernHangulLineBreakingRules;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::UnicodeLineBreakingRules, 0x30>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::UnicodeLineBreakingRules*, "UnityEngine.TextCore.Text", "UnicodeLineBreakingRules");
