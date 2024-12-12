#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerIntroCountdownTextController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerIntroCountdownTextController)
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerIntroCountdownTextController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerIntroCountdownTextController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerIntroCountdownTextController
class CORDL_TYPE MultiplayerIntroCountdownTextController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _texts, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__texts, put = __cordl_internal_set__texts)) ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> _texts;

  __declspec(property(get = get_alpha, put = set_alpha)) float_t alpha;

  __declspec(property(get = get_fontSize, put = set_fontSize)) float_t fontSize;

  __declspec(property(put = set_hide)) bool hide;

  static inline ::GlobalNamespace::MultiplayerIntroCountdownTextController* New_ctor();

  /// @brief Method SetDistances, addr 0x3bd2710, size 0x88, virtual false, abstract: false, final false
  inline void SetDistances(float_t distance);

  /// @brief Method SetText, addr 0x3bd30a4, size 0x70, virtual false, abstract: false, final false
  inline void SetText(::StringW text);

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> const& __cordl_internal_get__texts() const;

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*>& __cordl_internal_get__texts();

  constexpr void __cordl_internal_set__texts(::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> value);

  /// @brief Method .ctor, addr 0x3bd3268, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alpha, addr 0x3bd21c0, size 0x40, virtual false, abstract: false, final false
  inline float_t get_alpha();

  /// @brief Method get_fontSize, addr 0x3bd2188, size 0x38, virtual false, abstract: false, final false
  inline float_t get_fontSize();

  /// @brief Method set_alpha, addr 0x3bd2618, size 0x80, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

  /// @brief Method set_fontSize, addr 0x3bd2590, size 0x70, virtual false, abstract: false, final false
  inline void set_fontSize(float_t value);

  /// @brief Method set_hide, addr 0x3bd215c, size 0x2c, virtual false, abstract: false, final false
  inline void set_hide(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerIntroCountdownTextController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdownTextController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerIntroCountdownTextController(MultiplayerIntroCountdownTextController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdownTextController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerIntroCountdownTextController(MultiplayerIntroCountdownTextController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4573 };

  /// @brief Field _texts, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshPro>, ::Array<::UnityW<::TMPro::TextMeshPro>>*> ____texts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdownTextController, ____texts) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerIntroCountdownTextController, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerIntroCountdownTextController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerIntroCountdownTextController*, "", "MultiplayerIntroCountdownTextController");
