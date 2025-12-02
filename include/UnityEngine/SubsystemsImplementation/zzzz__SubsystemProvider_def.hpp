#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemsImplementation/SubsystemProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SubsystemProvider)
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
class SubsystemProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemsImplementation::SubsystemProvider);
// Dependencies System.Object
namespace UnityEngine::SubsystemsImplementation {
// Is value type: false
// CS Name: UnityEngine.SubsystemsImplementation.SubsystemProvider
class CORDL_TYPE SubsystemProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Running, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Running, put = __cordl_internal_set_m_Running)) bool m_Running;

  constexpr bool const& __cordl_internal_get_m_Running() const;

  constexpr bool& __cordl_internal_get_m_Running();

  constexpr void __cordl_internal_set_m_Running(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubsystemProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemProvider(SubsystemProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemProvider(SubsystemProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22513 };

  /// @brief Field m_Running, offset: 0x10, size: 0x1, def value: None
  bool ___m_Running;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SubsystemsImplementation::SubsystemProvider, ___m_Running) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemsImplementation::SubsystemProvider, 0x18>, "Size mismatch!");

} // namespace UnityEngine::SubsystemsImplementation
NEED_NO_BOX(::UnityEngine::SubsystemsImplementation::SubsystemProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemsImplementation::SubsystemProvider*, "UnityEngine.SubsystemsImplementation", "SubsystemProvider");
