#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CSharpCodeHelpers)
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class CSharpCodeHelpers;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers);
// Type: UnityEngine.InputSystem.Utilities::CSharpCodeHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Utilities::CSharpCodeHelpers*
class CORDL_TYPE CSharpCodeHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsEmptyOrProperIdentifier, addr 0x2c55734, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsEmptyOrProperIdentifier(::StringW name);

  /// @brief Method IsEmptyOrProperNamespaceName, addr 0x2c55760, size 0xd8, virtual false, abstract: false, final false
  static inline bool IsEmptyOrProperNamespaceName(::StringW name);

  /// @brief Method IsProperIdentifier, addr 0x2c5562c, size 0x108, virtual false, abstract: false, final false
  static inline bool IsProperIdentifier(::StringW name);

  /// @brief Method MakeIdentifier, addr 0x2c55838, size 0x244, virtual false, abstract: false, final false
  static inline ::StringW MakeIdentifier(::StringW name, ::StringW suffix);

  /// @brief Method MakeTypeName, addr 0x2c55a7c, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW MakeTypeName(::StringW name, ::StringW suffix);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CSharpCodeHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CSharpCodeHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CSharpCodeHelpers(CSharpCodeHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CSharpCodeHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CSharpCodeHelpers(CSharpCodeHelpers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers*, "UnityEngine.InputSystem.Utilities", "CSharpCodeHelpers");
