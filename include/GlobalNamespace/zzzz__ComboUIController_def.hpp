#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComboUIController)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class Animator;
}
namespace GlobalNamespace {
class IComboController;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5135))
// CS Name: ::ComboUIController*
class CORDL_TYPE ComboUIController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _comboText, offset 0x18, size 0x8
  __declspec(property(get = __get__comboText, put = __set__comboText))::TMPro::TextMeshProUGUI* _comboText;

  /// @brief Field _animator, offset 0x20, size 0x8
  __declspec(property(get = __get__animator, put = __set__animator))::UnityEngine::Animator* _animator;

  /// @brief Field _comboController, offset 0x28, size 0x8
  __declspec(property(get = __get__comboController, put = __set__comboController))::GlobalNamespace::IComboController* _comboController;

  /// @brief Field _comboLostId, offset 0x30, size 0x4
  __declspec(property(get = __get__comboLostId, put = __set__comboLostId)) int32_t _comboLostId;

  /// @brief Field _fullComboLost, offset 0x34, size 0x1
  __declspec(property(get = __get__fullComboLost, put = __set__fullComboLost)) bool _fullComboLost;

  constexpr ::TMPro::TextMeshProUGUI*& __get__comboText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__comboText() const;

  constexpr void __set__comboText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::Animator*& __get__animator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& __get__animator() const;

  constexpr void __set__animator(::UnityEngine::Animator* value);

  constexpr ::GlobalNamespace::IComboController*& __get__comboController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IComboController*> const& __get__comboController() const;

  constexpr void __set__comboController(::GlobalNamespace::IComboController* value);

  constexpr int32_t& __get__comboLostId();

  constexpr int32_t const& __get__comboLostId() const;

  constexpr void __set__comboLostId(int32_t value);

  constexpr bool& __get__fullComboLost();

  constexpr bool const& __get__fullComboLost() const;

  constexpr void __set__fullComboLost(bool value);

  /// @brief Method Start addr 0x2286684 size 0x88 virtual false final false
  inline void Start();

  /// @brief Method OnEnable addr 0x22869dc size 0x4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x22869e0 size 0x4 virtual false final false
  inline void OnDisable();

  /// @brief Method RegisterForEvents addr 0x228670c size 0x2d0 virtual false final false
  inline void RegisterForEvents();

  /// @brief Method UnregisterFromEvents addr 0x22869e4 size 0x1b8 virtual false final false
  inline void UnregisterFromEvents();

  /// @brief Method HandleComboDidChange addr 0x2286b9c size 0x48 virtual false final false
  inline void HandleComboDidChange(int32_t combo);

  /// @brief Method HandleComboBreakingEventHappened addr 0x2286be4 size 0x3c virtual false final false
  inline void HandleComboBreakingEventHappened();

  static inline ::GlobalNamespace::ComboUIController* New_ctor();

  /// @brief Method .ctor addr 0x2286c20 size 0x8 virtual false final false
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
  ::TMPro::TextMeshProUGUI* ____comboText;

  /// @brief Field _animator, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Animator* ____animator;

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
