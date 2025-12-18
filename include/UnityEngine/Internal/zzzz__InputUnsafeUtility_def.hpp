#pragma once
// IWYU pragma private; include "UnityEngine/Internal/InputUnsafeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUnsafeUtility)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Internal {
class InputUnsafeUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Internal::InputUnsafeUtility);
// Dependencies System.Object
namespace UnityEngine::Internal {
// Is value type: false
// CS Name: UnityEngine.Internal.InputUnsafeUtility
class CORDL_TYPE InputUnsafeUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAxis, addr 0x69960b0, size 0x128, virtual false, abstract: false, final false
  static inline float_t GetAxis(::StringW axisName);

  /// @brief Method GetAxisRaw, addr 0x69961dc, size 0x128, virtual false, abstract: false, final false
  static inline float_t GetAxisRaw(::StringW axisName);

  /// @brief Method GetAxisRaw_Injected, addr 0x699832c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetAxisRaw_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> axisName);

  /// @brief Method GetAxisRaw__Unmanaged, addr 0x6998368, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetAxisRaw__Unmanaged(uint8_t* axisName, int32_t axisNameLen);

  /// @brief Method GetAxis_Injected, addr 0x69982ac, size 0x3c, virtual false, abstract: false, final false
  static inline float_t GetAxis_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> axisName);

  /// @brief Method GetAxis__Unmanaged, addr 0x69982e8, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetAxis__Unmanaged(uint8_t* axisName, int32_t axisNameLen);

  /// @brief Method GetButton, addr 0x6996308, size 0x130, virtual false, abstract: false, final false
  static inline bool GetButton(::StringW buttonName);

  /// @brief Method GetButtonDown, addr 0x699643c, size 0x130, virtual false, abstract: false, final false
  static inline bool GetButtonDown(::StringW buttonName);

  /// @brief Method GetButtonDown_Injected, addr 0x699842c, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetButtonDown_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> buttonName);

  /// @brief Method GetButtonDown__Unmanaged, addr 0x6998468, size 0x44, virtual false, abstract: false, final false
  static inline uint8_t GetButtonDown__Unmanaged(uint8_t* buttonName, int32_t buttonNameLen);

  /// @brief Method GetButtonUp__Unmanaged, addr 0x69984ac, size 0x44, virtual false, abstract: false, final false
  static inline bool GetButtonUp__Unmanaged(uint8_t* buttonName, int32_t buttonNameLen);

  /// @brief Method GetButton_Injected, addr 0x69983ac, size 0x3c, virtual false, abstract: false, final false
  static inline bool GetButton_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> buttonName);

  /// @brief Method GetButton__Unmanaged, addr 0x69983e8, size 0x44, virtual false, abstract: false, final false
  static inline bool GetButton__Unmanaged(uint8_t* buttonName, int32_t buttonNameLen);

  /// @brief Method GetKeyDownString__Unmanaged, addr 0x6998268, size 0x44, virtual false, abstract: false, final false
  static inline bool GetKeyDownString__Unmanaged(uint8_t* name, int32_t nameLen);

  /// @brief Method GetKeyString__Unmanaged, addr 0x69981e0, size 0x44, virtual false, abstract: false, final false
  static inline bool GetKeyString__Unmanaged(uint8_t* name, int32_t nameLen);

  /// @brief Method GetKeyUpString__Unmanaged, addr 0x6998224, size 0x44, virtual false, abstract: false, final false
  static inline bool GetKeyUpString__Unmanaged(uint8_t* name, int32_t nameLen);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUnsafeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputUnsafeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputUnsafeUtility(InputUnsafeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputUnsafeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputUnsafeUtility(InputUnsafeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22414 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Internal::InputUnsafeUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Internal
NEED_NO_BOX(::UnityEngine::Internal::InputUnsafeUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal::InputUnsafeUtility*, "UnityEngine.Internal", "InputUnsafeUtility");
