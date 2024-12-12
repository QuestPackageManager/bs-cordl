#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateServerFormController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CreateServerFormController)
namespace GlobalNamespace {
struct CreateServerFormData;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
// Forward declare root types
namespace GlobalNamespace {
class CreateServerFormController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CreateServerFormController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CreateServerFormController
class CORDL_TYPE CreateServerFormController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _maxPlayersList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__maxPlayersList, put = __cordl_internal_set__maxPlayersList)) ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> _maxPlayersList;

  /// @brief Field _netDiscoverable, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__netDiscoverable, put = __cordl_internal_set__netDiscoverable)) bool _netDiscoverable;

  __declspec(property(get = get_formData)) ::GlobalNamespace::CreateServerFormData formData;

  static inline ::GlobalNamespace::CreateServerFormController* New_ctor();

  /// @brief Method Setup, addr 0x3b54544, size 0x3c, virtual false, abstract: false, final false
  inline void Setup(int32_t selectedNumberOfPlayers, bool netDiscoverable);

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& __cordl_internal_get__maxPlayersList() const;

  constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& __cordl_internal_get__maxPlayersList();

  constexpr bool const& __cordl_internal_get__netDiscoverable() const;

  constexpr bool& __cordl_internal_get__netDiscoverable();

  constexpr void __cordl_internal_set__maxPlayersList(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value);

  constexpr void __cordl_internal_set__netDiscoverable(bool value);

  /// @brief Method .ctor, addr 0x3b54580, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_formData, addr 0x3b54458, size 0xec, virtual false, abstract: false, final false
  inline ::GlobalNamespace::CreateServerFormData get_formData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateServerFormController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateServerFormController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateServerFormController(CreateServerFormController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateServerFormController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateServerFormController(CreateServerFormController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5313 };

  /// @brief Field kMaxPlayers offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPlayers{ static_cast<int32_t>(0x5) };

  /// @brief Field kMinPlayers offset 0xffffffff size 0x4
  static constexpr int32_t kMinPlayers{ static_cast<int32_t>(0x2) };

  /// @brief Field _maxPlayersList, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> ____maxPlayersList;

  /// @brief Field _netDiscoverable, offset: 0x28, size: 0x1, def value: None
  bool ____netDiscoverable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CreateServerFormController, ____maxPlayersList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreateServerFormController, ____netDiscoverable) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreateServerFormController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CreateServerFormController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreateServerFormController*, "", "CreateServerFormController");
