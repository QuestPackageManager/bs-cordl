#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DisposeHelper)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DisposeHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DisposeHelper);
// Type: UnityEngine.UIElements::DisposeHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6879))
// CS Name: ::UnityEngine.UIElements::DisposeHelper*
class CORDL_TYPE DisposeHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method NotifyDisposedUsed, addr 0x2df9994, size 0xc8, virtual false, abstract: false, final false
  static inline void NotifyDisposedUsed(::System::IDisposable* disposable);

  // Ctor Parameters [CppParam { name: "", ty: "DisposeHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisposeHelper(DisposeHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisposeHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisposeHelper(DisposeHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisposeHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DisposeHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DisposeHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DisposeHelper*, "UnityEngine.UIElements", "DisposeHelper");
