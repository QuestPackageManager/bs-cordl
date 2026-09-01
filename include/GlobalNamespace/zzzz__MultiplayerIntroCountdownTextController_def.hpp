#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerIntroCountdownTextController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerIntroCountdownTextController)
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerIntroCountdownTextController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MultiplayerIntroCountdownTextController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultiplayerIntroCountdownTextController*, "", "MultiplayerIntroCountdownTextController");
// Dependencies TMPro.TextMeshPro, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerIntroCountdownTextController
class CORDL_TYPE MultiplayerIntroCountdownTextController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _texts, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__texts, put = __cordl_internal_set__texts)) ::ArrayW<::UnityW<::TMPro::TextMeshPro>> _texts;

  __declspec(property(get = get_alpha, put = set_alpha)) float_t alpha;

  __declspec(property(get = get_fontSize, put = set_fontSize)) float_t fontSize;

  __declspec(property(put = set_hide)) bool hide;

  static inline ::GlobalNamespace::MultiplayerIntroCountdownTextController* New_ctor();

  /// @brief Method SetDistances, addr 0x59da104, size 0x80, virtual false, abstract: false, final false
  inline void SetDistances(float_t distance);

  /// @brief Method SetText, addr 0x59dab14, size 0x6c, virtual false, abstract: false, final false
  inline void SetText(::StringW text);

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>> const& __cordl_internal_get__texts() const;

  constexpr ::ArrayW<::UnityW<::TMPro::TextMeshPro>>& __cordl_internal_get__texts();

  constexpr void __cordl_internal_set__texts(::ArrayW<::UnityW<::TMPro::TextMeshPro>> value);

  /// @brief Method .ctor, addr 0x59dacd0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alpha, addr 0x59d9c38, size 0x38, virtual false, abstract: false, final false
  inline float_t get_alpha();

  /// @brief Method get_fontSize, addr 0x59d9c00, size 0x38, virtual false, abstract: false, final false
  inline float_t get_fontSize();

  /// @brief Method set_alpha, addr 0x59d9ff0, size 0x9c, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

  /// @brief Method set_fontSize, addr 0x59d9f78, size 0x64, virtual false, abstract: false, final false
  inline void set_fontSize(float_t value);

  /// @brief Method set_hide, addr 0x59d9bd4, size 0x2c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6149 };

  /// @brief Field _texts, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::TMPro::TextMeshPro>> ____texts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerIntroCountdownTextController, ____texts) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultiplayerIntroCountdownTextController) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
