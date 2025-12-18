#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Style.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Style)
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Style;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style);
// Dependencies UnityEngine.ScriptableObject
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Style
class CORDL_TYPE Style : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_Instantiated)) bool Instantiated;

  /// @brief Field _instantiated, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__instantiated, put = __cordl_internal_set__instantiated)) bool _instantiated;

  /// @brief Method Default, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Default();

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(::StringW name);

  /// @brief Method Load, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Load(::StringW name);

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style* New_ctor();

  /// @brief Method Path, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW Path();

  constexpr bool const& __cordl_internal_get__instantiated() const;

  constexpr bool& __cordl_internal_get__instantiated();

  constexpr void __cordl_internal_set__instantiated(bool value);

  /// @brief Method .ctor, addr 0x58b158c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Instantiated, addr 0x58b1694, size 0x8, virtual false, abstract: false, final false
  inline bool get_Instantiated();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Style();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Style", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Style(Style&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Style", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Style(Style const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18389 };

  /// @brief Field _instantiated, offset: 0x18, size: 0x1, def value: None
  bool ____instantiated;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style, ____instantiated) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style, 0x20>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Style*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Style");
