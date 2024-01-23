#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComboUIController)
namespace GlobalNamespace {
class IComboController;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class ComboUIController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ComboUIController);
// Type: ::ComboUIController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 53, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5030))
// CS Name: ::ComboUIController*
class CORDL_TYPE ComboUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _comboText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__comboText, put = __cordl_internal_set__comboText))::UnityW<::TMPro::TextMeshProUGUI> _comboText;

  /// @brief Field _animator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator))::UnityW<::UnityEngine::Animator> _animator;

  /// @brief Field _comboController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__comboController, put = __cordl_internal_set__comboController))::GlobalNamespace::IComboController* _comboController;

  /// @brief Field _comboLostId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__comboLostId, put = __cordl_internal_set__comboLostId)) int32_t _comboLostId;

  /// @brief Field _fullComboLost, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__fullComboLost, put = __cordl_internal_set__fullComboLost)) bool _fullComboLost;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__comboText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__comboText() const;

  constexpr void __cordl_internal_set__comboText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  constexpr ::GlobalNamespace::IComboController*& __cordl_internal_get__comboController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IComboController*> const& __cordl_internal_get__comboController() const;

  constexpr void __cordl_internal_set__comboController(::GlobalNamespace::IComboController* value);

  constexpr int32_t& __cordl_internal_get__comboLostId();

  constexpr int32_t const& __cordl_internal_get__comboLostId() const;

  constexpr void __cordl_internal_set__comboLostId(int32_t value);

  constexpr bool& __cordl_internal_get__fullComboLost();

  constexpr bool const& __cordl_internal_get__fullComboLost() const;

  constexpr void __cordl_internal_set__fullComboLost(bool value);

  /// @brief Method Start, addr 0x23bf9f0, size 0x88, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnEnable, addr 0x23bfd48, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x23bfd4c, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method RegisterForEvents, addr 0x23bfa78, size 0x2d0, virtual false, abstract: false, final false
  inline void RegisterForEvents();

  /// @brief Method UnregisterFromEvents, addr 0x23bfd50, size 0x1b8, virtual false, abstract: false, final false
  inline void UnregisterFromEvents();

  /// @brief Method HandleComboDidChange, addr 0x23bff08, size 0x48, virtual false, abstract: false, final false
  inline void HandleComboDidChange(int32_t combo);

  /// @brief Method HandleComboBreakingEventHappened, addr 0x23bff50, size 0x3c, virtual false, abstract: false, final false
  inline void HandleComboBreakingEventHappened();

  static inline ::GlobalNamespace::ComboUIController* New_ctor();

  /// @brief Method .ctor, addr 0x23bff8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ComboUIController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComboUIController(ComboUIController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComboUIController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComboUIController(ComboUIController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComboUIController();

public:
  /// @brief Field _comboText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____comboText;

  /// @brief Field _animator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  /// @brief Field _comboController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IComboController* ____comboController;

  /// @brief Field _comboLostId, offset: 0x30, size: 0x4, def value: None
  int32_t ____comboLostId;

  /// @brief Field _fullComboLost, offset: 0x34, size: 0x1, def value: None
  bool ____fullComboLost;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ComboUIController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboUIController, ____comboText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboUIController, ____animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboUIController, ____comboController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboUIController, ____comboLostId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboUIController, ____fullComboLost) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ComboUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ComboUIController*, "", "ComboUIController");
