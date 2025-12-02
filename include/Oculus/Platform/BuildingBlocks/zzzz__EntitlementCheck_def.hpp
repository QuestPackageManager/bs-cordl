#pragma once
// IWYU pragma private; include "Oculus/Platform/BuildingBlocks/EntitlementCheck.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EntitlementCheck)
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform {
class Message;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Oculus::Platform::BuildingBlocks {
class EntitlementCheck;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::BuildingBlocks::EntitlementCheck);
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Platform::BuildingBlocks {
// Is value type: false
// CS Name: Oculus.Platform.BuildingBlocks.EntitlementCheck
class CORDL_TYPE EntitlementCheck : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field UserFailedEntitlementCheck, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_UserFailedEntitlementCheck, put = __cordl_internal_set_UserFailedEntitlementCheck)) ::System::Action* UserFailedEntitlementCheck;

  /// @brief Field UserPassedEntitlementCheck, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_UserPassedEntitlementCheck, put = __cordl_internal_set_UserPassedEntitlementCheck)) ::System::Action* UserPassedEntitlementCheck;

  /// @brief Field quitAppOnNotEntitled, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_quitAppOnNotEntitled, put = __cordl_internal_set_quitAppOnNotEntitled)) bool quitAppOnNotEntitled;

  /// @brief Method EntitlementCheckCallback, addr 0x5bde608, size 0xec, virtual false, abstract: false, final false
  inline void EntitlementCheckCallback(::Oculus::Platform::Message* msg);

  static inline ::Oculus::Platform::BuildingBlocks::EntitlementCheck* New_ctor();

  /// @brief Method PerformUserEntitlementCheck, addr 0x5bde12c, size 0x22c, virtual false, abstract: false, final false
  inline void PerformUserEntitlementCheck();

  /// @brief Method PlatformInitializeCallback, addr 0x5bde358, size 0x2b0, virtual false, abstract: false, final false
  inline void PlatformInitializeCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* msg);

  /// @brief Method QuitAppOnFailure, addr 0x5bde6f4, size 0xa0, virtual false, abstract: false, final false
  inline void QuitAppOnFailure();

  /// @brief Method Start, addr 0x5bde068, size 0xc4, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::System::Action* const& __cordl_internal_get_UserFailedEntitlementCheck() const;

  constexpr ::System::Action*& __cordl_internal_get_UserFailedEntitlementCheck();

  constexpr ::System::Action* const& __cordl_internal_get_UserPassedEntitlementCheck() const;

  constexpr ::System::Action*& __cordl_internal_get_UserPassedEntitlementCheck();

  constexpr bool const& __cordl_internal_get_quitAppOnNotEntitled() const;

  constexpr bool& __cordl_internal_get_quitAppOnNotEntitled();

  constexpr void __cordl_internal_set_UserFailedEntitlementCheck(::System::Action* value);

  constexpr void __cordl_internal_set_UserPassedEntitlementCheck(::System::Action* value);

  constexpr void __cordl_internal_set_quitAppOnNotEntitled(bool value);

  /// @brief Method .ctor, addr 0x5bde794, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_UserFailedEntitlementCheck, addr 0x5bdddb8, size 0xac, virtual false, abstract: false, final false
  inline void add_UserFailedEntitlementCheck(::System::Action* value);

  /// @brief Method add_UserPassedEntitlementCheck, addr 0x5bddf10, size 0xac, virtual false, abstract: false, final false
  inline void add_UserPassedEntitlementCheck(::System::Action* value);

  /// @brief Method remove_UserFailedEntitlementCheck, addr 0x5bdde64, size 0xac, virtual false, abstract: false, final false
  inline void remove_UserFailedEntitlementCheck(::System::Action* value);

  /// @brief Method remove_UserPassedEntitlementCheck, addr 0x5bddfbc, size 0xac, virtual false, abstract: false, final false
  inline void remove_UserPassedEntitlementCheck(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntitlementCheck();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EntitlementCheck", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntitlementCheck(EntitlementCheck&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntitlementCheck", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntitlementCheck(EntitlementCheck const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18061 };

  /// @brief Field quitAppOnNotEntitled, offset: 0x20, size: 0x1, def value: None
  bool ___quitAppOnNotEntitled;

  /// @brief Field UserFailedEntitlementCheck, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___UserFailedEntitlementCheck;

  /// @brief Field UserPassedEntitlementCheck, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___UserPassedEntitlementCheck;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::BuildingBlocks::EntitlementCheck, ___quitAppOnNotEntitled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::BuildingBlocks::EntitlementCheck, ___UserFailedEntitlementCheck) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::BuildingBlocks::EntitlementCheck, ___UserPassedEntitlementCheck) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::BuildingBlocks::EntitlementCheck, 0x38>, "Size mismatch!");

} // namespace Oculus::Platform::BuildingBlocks
NEED_NO_BOX(::Oculus::Platform::BuildingBlocks::EntitlementCheck);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::BuildingBlocks::EntitlementCheck*, "Oculus.Platform.BuildingBlocks", "EntitlementCheck");
