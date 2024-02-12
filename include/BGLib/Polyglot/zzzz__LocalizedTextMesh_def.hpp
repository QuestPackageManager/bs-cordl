#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedTextMesh)
namespace BGLib::Polyglot {
class ILocalize;
}
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
// Type: BGLib.Polyglot::LocalizedTextMesh
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15686))
// CS Name: ::BGLib.Polyglot::LocalizedTextMesh*
class CORDL_TYPE LocalizedTextMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field text, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text))::UnityW<::UnityEngine::TextMesh> text;

  /// @brief Field key, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::StringW key;

  __declspec(property(get = get_Key))::StringW Key;

  /// @brief Convert operator to "::BGLib::Polyglot::ILocalize"
  constexpr operator ::BGLib::Polyglot::ILocalize*() noexcept;

  /// @brief Convert to "::BGLib::Polyglot::ILocalize"
  constexpr ::BGLib::Polyglot::ILocalize* i___BGLib__Polyglot__ILocalize() noexcept;

  constexpr ::UnityW<::UnityEngine::TextMesh>& __cordl_internal_get_text();

  constexpr ::UnityW<::UnityEngine::TextMesh> const& __cordl_internal_get_text() const;

  constexpr void __cordl_internal_set_text(::UnityW<::UnityEngine::TextMesh> value);

  constexpr ::StringW& __cordl_internal_get_key();

  constexpr ::StringW const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::StringW value);

  /// @brief Method get_Key, addr 0xe4f238, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Key();

  /// @brief Method Reset, addr 0xe4f240, size 0x50, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Start, addr 0xe4f290, size 0x20, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnLocalize, addr 0xe4f2b0, size 0x108, virtual true, abstract: false, final true
  inline void OnLocalize(::BGLib::Polyglot::LocalizationModel* localization);

  /// @brief Method IsOppositeDirection, addr 0xe4f3b8, size 0x2c, virtual false, abstract: false, final false
  inline bool IsOppositeDirection(::UnityEngine::TextAlignment alignment, ::BGLib::Polyglot::LanguageDirection direction);

  /// @brief Method IsAlignmentRight, addr 0xe4f3e4, size 0xc, virtual false, abstract: false, final false
  inline bool IsAlignmentRight(::UnityEngine::TextAlignment alignment);

  /// @brief Method IsAlignmentLeft, addr 0xe4f3f0, size 0xc, virtual false, abstract: false, final false
  inline bool IsAlignmentLeft(::UnityEngine::TextAlignment alignment);

  static inline ::BGLib::Polyglot::LocalizedTextMesh* New_ctor();

  /// @brief Method .ctor, addr 0xe4f3fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalizedTextMesh(LocalizedTextMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalizedTextMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalizedTextMesh(LocalizedTextMesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalizedTextMesh();

public:
  /// @brief Field text, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextMesh> ___text;

  /// @brief Field key, offset: 0x20, size: 0x8, def value: None
  ::StringW ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::LocalizedTextMesh, 0x28>, "Size mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizedTextMesh, ___text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::Polyglot::LocalizedTextMesh, ___key) == 0x20, "Offset mismatch!");

} // namespace BGLib::Polyglot
NEED_NO_BOX(::BGLib::Polyglot::LocalizedTextMesh);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::LocalizedTextMesh*, "BGLib.Polyglot", "LocalizedTextMesh");
