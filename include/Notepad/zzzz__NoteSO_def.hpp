#pragma once
// IWYU pragma private; include "Notepad/NoteSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoteSO)
namespace Notepad {
struct NoteURL;
}
// Forward declare root types
namespace Notepad {
class NoteSO;
}
// Write type traits
MARK_REF_PTR_T(::Notepad::NoteSO);
// Dependencies UnityEngine.ScriptableObject
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
  __declspec(property(get = __cordl_internal_get_urls, put = __cordl_internal_set_urls)) ::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*> urls;

  static inline ::Notepad::NoteSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_content() const;

  constexpr ::StringW& __cordl_internal_get_content();

  constexpr ::StringW const& __cordl_internal_get_title() const;

  constexpr ::StringW& __cordl_internal_get_title();

  constexpr ::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*> const& __cordl_internal_get_urls() const;

  constexpr ::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*>& __cordl_internal_get_urls();

  constexpr void __cordl_internal_set_content(::StringW value);

  constexpr void __cordl_internal_set_title(::StringW value);

  constexpr void __cordl_internal_set_urls(::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*> value);

  /// @brief Method .ctor, addr 0x3223760, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23382 };

  /// @brief Field title, offset: 0x18, size: 0x8, def value: None
  ::StringW ___title;

  /// @brief Field content, offset: 0x20, size: 0x8, def value: None
  ::StringW ___content;

  /// @brief Field urls, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*> ___urls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Notepad::NoteSO, ___title) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Notepad::NoteSO, ___content) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Notepad::NoteSO, ___urls) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Notepad::NoteSO, 0x30>, "Size mismatch!");

} // namespace Notepad
NEED_NO_BOX(::Notepad::NoteSO);
DEFINE_IL2CPP_ARG_TYPE(::Notepad::NoteSO*, "Notepad", "NoteSO");
