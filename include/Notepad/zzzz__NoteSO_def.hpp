#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Notepad::NoteSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Notepad {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16280))
// CS Name: ::Notepad::NoteSO*
class CORDL_TYPE NoteSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field title, offset 0x18, size 0x8
  __declspec(property(get = __get_title, put = __set_title))::StringW title;

  /// @brief Field content, offset 0x20, size 0x8
  __declspec(property(get = __get_content, put = __set_content))::StringW content;

  /// @brief Field urls, offset 0x28, size 0x8
  __declspec(property(get = __get_urls, put = __set_urls))::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*> urls;

  constexpr ::StringW& __get_title();

  constexpr ::StringW const& __get_title() const;

  constexpr void __set_title(::StringW value);

  constexpr ::StringW& __get_content();

  constexpr ::StringW const& __get_content() const;

  constexpr void __set_content(::StringW value);

  constexpr ::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*>& __get_urls();

  constexpr ::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*> const& __get_urls() const;

  constexpr void __set_urls(::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*> value);

  static inline ::Notepad::NoteSO* New_ctor();

  /// @brief Method .ctor, addr 0xe2648c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteSO(NoteSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteSO(NoteSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteSO();

public:
  /// @brief Field title, offset: 0x18, size: 0x8, def value: None
  ::StringW ___title;

  /// @brief Field content, offset: 0x20, size: 0x8, def value: None
  ::StringW ___content;

  /// @brief Field urls, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::Notepad::NoteURL, ::Array<::Notepad::NoteURL>*> ___urls;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Notepad::NoteSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::Notepad::NoteSO, ___title) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Notepad::NoteSO, ___content) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Notepad::NoteSO, ___urls) == 0x28, "Offset mismatch!");

} // namespace Notepad
NEED_NO_BOX(::Notepad::NoteSO);
DEFINE_IL2CPP_ARG_TYPE(::Notepad::NoteSO*, "Notepad", "NoteSO");
