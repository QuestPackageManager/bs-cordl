#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalizedTextMesh)
namespace UnityEngine {
class TextMesh;
}
namespace Polyglot {
struct LanguageDirection;
}
namespace Polyglot {
class ILocalize;
}
namespace UnityEngine {
struct TextAlignment;
}
// Forward declare root types
namespace Polyglot {
class LocalizedTextMesh;
}
// Write type traits
MARK_REF_PTR_T(::Polyglot::LocalizedTextMesh);
// Type: Polyglot::LocalizedTextMesh
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15566))
// CS Name: ::Polyglot::LocalizedTextMesh*
class CORDL_TYPE LocalizedTextMesh : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field text, offset 0x18, size 0x8
  __declspec(property(get = __get_text, put = __set_text))::UnityEngine::TextMesh* text;

  /// @brief Field key, offset 0x20, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::StringW key;

  __declspec(property(get = get_Key))::StringW Key;

  /// @brief Convert operator to "::Polyglot::ILocalize"
  constexpr operator ::Polyglot::ILocalize*() noexcept;

  constexpr ::UnityEngine::TextMesh*& __get_text();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextMesh*> const& __get_text() const;

  constexpr void __set_text(::UnityEngine::TextMesh* value);

  constexpr ::StringW& __get_key();

  constexpr ::StringW const& __get_key() const;

  constexpr void __set_key(::StringW value);

  /// @brief Method get_Key, addr 0x2805b04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Key();

  /// @brief Method Reset, addr 0x2805b0c, size 0x50, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Start, addr 0x2805b5c, size 0x20, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnLocalize, addr 0x2805b7c, size 0xf8, virtual true, abstract: false, final true
  inline void OnLocalize();

  /// @brief Method IsOppositeDirection, addr 0x2805c74, size 0x2c, virtual false, abstract: false, final false
  inline bool IsOppositeDirection(::UnityEngine::TextAlignment alignment, ::Polyglot::LanguageDirection direction);

  /// @brief Method IsAlignmentRight, addr 0x2805ca0, size 0xc, virtual false, abstract: false, final false
  inline bool IsAlignmentRight(::UnityEngine::TextAlignment alignment);

  /// @brief Method IsAlignmentLeft, addr 0x2805cac, size 0xc, virtual false, abstract: false, final false
  inline bool IsAlignmentLeft(::UnityEngine::TextAlignment alignment);

  static inline ::Polyglot::LocalizedTextMesh* New_ctor();

  /// @brief Method .ctor, addr 0x2805cb8, size 0x8, virtual false, abstract: false, final false
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
  ::UnityEngine::TextMesh* ___text;

  /// @brief Field key, offset: 0x20, size: 0x8, def value: None
  ::StringW ___key;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::LocalizedTextMesh, 0x28>, "Size mismatch!");

static_assert(offsetof(::Polyglot::LocalizedTextMesh, ___text) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Polyglot::LocalizedTextMesh, ___key) == 0x20, "Offset mismatch!");

} // namespace Polyglot
NEED_NO_BOX(::Polyglot::LocalizedTextMesh);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::LocalizedTextMesh*, "Polyglot", "LocalizedTextMesh");
