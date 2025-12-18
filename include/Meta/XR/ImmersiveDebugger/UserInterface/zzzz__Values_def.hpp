#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Values.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
CORDL_MODULE_EXPORT(Values)
namespace Meta::XR::ImmersiveDebugger::Manager {
class Watch;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class TextStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Value;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Values;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Values);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Values
class CORDL_TYPE Values : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  __declspec(property(put = set_BackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> BackgroundStyle;

  __declspec(property(get = get_GetValues)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>* GetValues;

  __declspec(property(put = set_TextStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle> TextStyle;

  __declspec(property(get = get_Watch, put = set_Watch)) ::Meta::XR::ImmersiveDebugger::Manager::Watch* Watch;

  /// @brief Field <Watch>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__Watch_k__BackingField, put = __cordl_internal_set__Watch_k__BackingField)) ::Meta::XR::ImmersiveDebugger::Manager::Watch* _Watch_k__BackingField;

  /// @brief Field _values, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__values,
                      put = __cordl_internal_set__values)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>* _values;

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Values* New_ctor();

  /// @brief Method Setup, addr 0x58a5704, size 0x3d8, virtual false, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::Manager::Watch* watch);

  /// @brief Method Update, addr 0x58a8580, size 0x17c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch* const& __cordl_internal_get__Watch_k__BackingField() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch*& __cordl_internal_get__Watch_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>* const& __cordl_internal_get__values() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>*& __cordl_internal_get__values();

  constexpr void __cordl_internal_set__Watch_k__BackingField(::Meta::XR::ImmersiveDebugger::Manager::Watch* value);

  constexpr void __cordl_internal_set__values(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>* value);

  /// @brief Method .ctor, addr 0x58a86fc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GetValues, addr 0x58a8334, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>* get_GetValues();

  /// @brief Method get_Watch, addr 0x58a833c, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Manager::Watch* get_Watch();

  /// @brief Method set_BackgroundStyle, addr 0x58a834c, size 0x114, virtual false, abstract: false, final false
  inline void set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_TextStyle, addr 0x58a8460, size 0x120, virtual false, abstract: false, final false
  inline void set_TextStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle* value);

  /// @brief Method set_Watch, addr 0x58a8344, size 0x8, virtual false, abstract: false, final false
  inline void set_Watch(::Meta::XR::ImmersiveDebugger::Manager::Watch* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Values();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Values", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Values(Values&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Values", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Values(Values const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18353 };

  /// @brief Field _values, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>* ____values;

  /// @brief Field <Watch>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::Watch* ____Watch_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Values, ____values) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Values, ____Watch_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Values, 0x80>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Values);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Values*, "Meta.XR.ImmersiveDebugger.UserInterface", "Values");
