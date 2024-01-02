#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(SetPropertyUtility)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UI {
class SetPropertyUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::SetPropertyUtility);
// Type: UnityEngine.UI::SetPropertyUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13120))
// CS Name: ::UnityEngine.UI::SetPropertyUtility*
class CORDL_TYPE SetPropertyUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetColor, addr 0x2d8828c, size 0x48, virtual false, abstract: false, final false
  static inline bool SetColor(ByRef<::UnityEngine::Color> currentValue, ::UnityEngine::Color newValue);

  /// @brief Method SetStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SetStruct(ByRef<T> currentValue, T newValue);

  /// @brief Method SetClass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SetClass(ByRef<T> currentValue, T newValue);

  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetPropertyUtility(SetPropertyUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetPropertyUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetPropertyUtility(SetPropertyUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetPropertyUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::SetPropertyUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::SetPropertyUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::SetPropertyUtility*, "UnityEngine.UI", "SetPropertyUtility");
