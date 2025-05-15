#pragma once
// IWYU pragma private; include "BGLib/Polyglot/LocalizedTextMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__ILocalize_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedTextMesh)
namespace BGLib::Polyglot {
struct LanguageDirection;
}
namespace BGLib::Polyglot {
class LocalizationModel;
}
namespace UnityEngine {
struct TextAlignment;
}
namespace UnityEngine {
class TextMesh;
}
// Forward declare root types
namespace BGLib::Polyglot {
class LocalizedTextMesh;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::Polyglot::LocalizedTextMesh);
// Dependencies BGLib.Polyglot.ILocalize, UnityEngine.MonoBehaviour
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.LocalizedTextMesh
class CORDL_TYPE LocalizedTextMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_Key)) ::StringW Key;

  /// @brief Field key, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key)) ::StringW key;

  /// @brief Field text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text)) ::UnityW<::UnityEngine::TextMesh> text;

  /// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
  constexpr operator ::BGLib::Polyglot::ILocalize*() noexcept;

  /// @brief Method IsAlignmentLeft, addr 0x22b1c6c, size 0xc, virtual false, abstract: false, final false
  inline bool IsAlignmentLeft(::UnityEngine::TextAlignment alignment);

  /// @brief Method IsAlignmentRight, addr 0x22b1c60, size 0xc, virtual false, abstract: false, final false
  inline bool IsAlignmentRight(::UnityEngine::TextAlignment alignment);

  /// @brief Method IsOppositeDirection, addr 0x22b1c38, size 0x28, virtual false, abstract: false, final false
  inline bool IsOppositeDirection(::UnityEngine::TextAlignment alignment, ::BGLib::Polyglot::LanguageDirection direction);

  static inline ::BGLib::Polyglot::LocalizedTextMesh* New_ctor();

  /// @brief Method OnLocalize, addr 0x22b1b38, size 0x100, virtual true, abstract: false, final true
  inline void OnLocalize(::BGLib::Polyglot::LocalizationModel* localization);

  /// @brief Method Reset, addr 0x22b1ac8, size 0x50, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Start, addr 0x22b1b18, size 0x20, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::StringW const& __cordl_internal_get_key() const;

  constexpr ::StringW& __cordl_internal_get_key();

  constexpr ::UnityW<::UnityEngine::TextMesh> const& __cordl_internal_get_text() const;

  constexpr ::UnityW<::UnityEngine::TextMesh>& __cordl_internal_get_text();

  constexpr void __cordl_internal_set_key(::StringW value);

  constexpr void __cordl_internal_set_text(::UnityW<::UnityEngine::TextMesh> value);

  /// @brief Method .ctor, addr 0x22b1c78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Key, addr 0x22b1ac0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Key();

  /// @brief Convert to "::BGLib::Polyglot::ILocalize"
  constexpr ::BGLib::Polyglot::ILocalize* i___BGLib__Polyglot__ILocalize() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextMesh(LocalizedTextMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextMesh(LocalizedTextMesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18067 };

  /// @brief Field text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextMesh> ___text;

  /// @brief Field key, offset: 0x28, size: 0x8, def value: None
  ::StringW ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::Polyglot::LocalizedTextMesh, ___text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizedTextMesh, ___key) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizedTextMesh, 0x30>, "Size mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizedTextMesh);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizedTextMesh*, "BGLib.Polyglot", "LocalizedTextMesh");
