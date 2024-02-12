#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__AttitudeSensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidRotationVector)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidRotationVector;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidRotationVector);
// Type: UnityEngine.InputSystem.Android::AndroidRotationVector
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 352, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5537))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5699))
// CS Name: ::UnityEngine.InputSystem.Android::AndroidRotationVector*
class CORDL_TYPE AndroidRotationVector : public ::UnityEngine::InputSystem::AttitudeSensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidRotationVector* New_ctor();

  /// @brief Method .ctor, addr 0x2ae7574, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AndroidRotationVector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidRotationVector(AndroidRotationVector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidRotationVector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidRotationVector(AndroidRotationVector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidRotationVector();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidRotationVector, 0x160>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidRotationVector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidRotationVector*, "UnityEngine.InputSystem.Android", "AndroidRotationVector");
