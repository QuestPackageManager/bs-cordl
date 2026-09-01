#pragma once
// IWYU pragma private; include "Notepad\NoteSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Notepad/zzzz__NoteURL_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NoteSO)
// Forward declare root types
namespace Notepad {
class NoteSO;
}
// Write type traits
MARK_REF_T(::Notepad::NoteSO*);
DEFINE_IL2CPP_CLASS(::Notepad::NoteSO*, "Notepad", "NoteSO");
// Dependencies Notepad.NoteURL, UnityEngine.ScriptableObject
namespace Notepad {
// Is value type: false
// CS Name: Notepad.NoteSO
class CORDL_TYPE NoteSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field content, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::StringW content;

  /// @brief Field title, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_title, put = __cordl_internal_set_title)) ::StringW title;

  /// @brief Field urls, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_urls, put = __cordl_internal_set_urls)) ::ArrayW<::Notepad::NoteURL> urls;

  static inline ::Notepad::NoteSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_content() const;

  constexpr ::StringW& __cordl_internal_get_content();

  constexpr ::StringW const& __cordl_internal_get_title() const;

  constexpr ::StringW& __cordl_internal_get_title();

  constexpr ::ArrayW<::Notepad::NoteURL> const& __cordl_internal_get_urls() const;

  constexpr ::ArrayW<::Notepad::NoteURL>& __cordl_internal_get_urls();

  constexpr void __cordl_internal_set_content(::StringW value);

  constexpr void __cordl_internal_set_title(::StringW value);

  constexpr void __cordl_internal_set_urls(::ArrayW<::Notepad::NoteURL> value);

  /// @brief Method .ctor, addr 0x331b760, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteSO(NoteSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteSO(NoteSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23745 };

  /// @brief Field title, offset: 0x18, size: 0x8, def value: None
  ::StringW ___title;

  /// @brief Field content, offset: 0x20, size: 0x8, def value: None
  ::StringW ___content;

  /// @brief Field urls, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::Notepad::NoteURL> ___urls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Notepad::NoteSO, ___title) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Notepad::NoteSO, ___content) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Notepad::NoteSO, ___urls) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Notepad::NoteSO) == 0x30, "Size mismatch!");

} // namespace Notepad
