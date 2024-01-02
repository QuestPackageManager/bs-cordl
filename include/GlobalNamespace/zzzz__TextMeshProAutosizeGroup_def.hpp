#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TextMeshProAutosizeGroup)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class TextMeshProAutosizeGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextMeshProAutosizeGroup);
// Type: ::TextMeshProAutosizeGroup
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13496))
// CS Name: ::TextMeshProAutosizeGroup*
class CORDL_TYPE TextMeshProAutosizeGroup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _texts, offset 0x18, size 0x8
  __declspec(property(get = __get__texts, put = __set__texts))::ArrayW<::TMPro::TMP_Text*, ::Array<::TMPro::TMP_Text*>*> _texts;

  constexpr ::ArrayW<::TMPro::TMP_Text*, ::Array<::TMPro::TMP_Text*>*>& __get__texts();

  constexpr ::ArrayW<::TMPro::TMP_Text*, ::Array<::TMPro::TMP_Text*>*> const& __get__texts() const;

  constexpr void __set__texts(::ArrayW<::TMPro::TMP_Text*, ::Array<::TMPro::TMP_Text*>*> value);

  /// @brief Method Start, addr 0x2115e44, size 0x108, virtual false, abstract: false, final false
  inline void Start();

  static inline ::GlobalNamespace::TextMeshProAutosizeGroup* New_ctor();

  /// @brief Method .ctor, addr 0x2115f4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextMeshProAutosizeGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextMeshProAutosizeGroup(TextMeshProAutosizeGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextMeshProAutosizeGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextMeshProAutosizeGroup(TextMeshProAutosizeGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextMeshProAutosizeGroup();

public:
  /// @brief Field _texts, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::TMPro::TMP_Text*, ::Array<::TMPro::TMP_Text*>*> ____texts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextMeshProAutosizeGroup, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TextMeshProAutosizeGroup, ____texts) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextMeshProAutosizeGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextMeshProAutosizeGroup*, "", "TextMeshProAutosizeGroup");
