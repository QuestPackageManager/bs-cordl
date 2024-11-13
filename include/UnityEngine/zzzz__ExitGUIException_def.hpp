#pragma once
// IWYU pragma private; include "UnityEngine/ExitGUIException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
CORDL_MODULE_EXPORT(ExitGUIException)
// Forward declare root types
namespace UnityEngine {
class ExitGUIException;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ExitGUIException);
// Type: UnityEngine::ExitGUIException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ExitGUIException*
class CORDL_TYPE ExitGUIException : public ::System::Exception {
public:
  // Declarations
  static inline ::UnityEngine::ExitGUIException* New_ctor();

  /// @brief Method .ctor, addr 0x487a878, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExitGUIException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExitGUIException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExitGUIException(ExitGUIException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExitGUIException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExitGUIException(ExitGUIException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ExitGUIException, 0x90>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ExitGUIException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExitGUIException*, "UnityEngine", "ExitGUIException");
