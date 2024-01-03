#pragma once
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
// Type: ::CreateServerFormController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5564))
// CS Name: ::CreateServerFormController*
class CORDL_TYPE CreateServerFormController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _maxPlayersList, offset 0x18, size 0x8
  __declspec(property(get = __get__maxPlayersList, put = __set__maxPlayersList))::GlobalNamespace::FormattedFloatListSettingsController* _maxPlayersList;

  /// @brief Field _netDiscoverable, offset 0x20, size 0x1
  __declspec(property(get = __get__netDiscoverable, put = __set__netDiscoverable)) bool _netDiscoverable;

  __declspec(property(get = get_formData))::GlobalNamespace::CreateServerFormData formData;

  constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& __get__maxPlayersList();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const& __get__maxPlayersList() const;

  constexpr void __set__maxPlayersList(::GlobalNamespace::FormattedFloatListSettingsController* value);

  constexpr bool& __get__netDiscoverable();

  constexpr bool const& __get__netDiscoverable() const;

  constexpr void __set__netDiscoverable(bool value);

  /// @brief Method get_formData, addr 0x22a3a9c, size 0xf0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::CreateServerFormData get_formData();

  /// @brief Method Setup, addr 0x22a3b8c, size 0x48, virtual false, abstract: false, final false
  inline void Setup(int32_t selectedNumberOfPlayers, bool netDiscoverable);

  static inline ::GlobalNamespace::CreateServerFormController* New_ctor();

  /// @brief Method .ctor, addr 0x22a3bec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CreateServerFormController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateServerFormController(CreateServerFormController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateServerFormController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateServerFormController(CreateServerFormController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateServerFormController();

public:
  /// @brief Field _maxPlayersList, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::FormattedFloatListSettingsController* ____maxPlayersList;

  /// @brief Field _netDiscoverable, offset: 0x20, size: 0x1, def value: None
  bool ____netDiscoverable;

  /// @brief Field kMinPlayers offset 0xffffffff size 0x4
  static constexpr int32_t kMinPlayers{ static_cast<int32_t>(0x2) };

  /// @brief Field kMaxPlayers offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPlayers{ static_cast<int32_t>(0x5) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreateServerFormController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CreateServerFormController, ____maxPlayersList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CreateServerFormController, ____netDiscoverable) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CreateServerFormController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreateServerFormController*, "", "CreateServerFormController");
