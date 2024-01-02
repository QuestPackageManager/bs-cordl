#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EntitlementCheck)
namespace Oculus::Platform {
class Message;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Oculus::Platform::Samples::EntitlementCheck {
class EntitlementCheck;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Samples::EntitlementCheck::EntitlementCheck);
// Type: Oculus.Platform.Samples.EntitlementCheck::EntitlementCheck
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Oculus::Platform::Samples::EntitlementCheck {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13493))
// CS Name: ::Oculus.Platform.Samples.EntitlementCheck::EntitlementCheck*
class CORDL_TYPE EntitlementCheck : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field exitAppOnFailure, offset 0x18, size 0x1
  __declspec(property(get = __get_exitAppOnFailure, put = __set_exitAppOnFailure)) bool exitAppOnFailure;

  /// @brief Field UserFailedEntitlementCheck, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UserFailedEntitlementCheck, put = setStaticF_UserFailedEntitlementCheck))::System::Action* UserFailedEntitlementCheck;

  /// @brief Field UserPassedEntitlementCheck, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UserPassedEntitlementCheck, put = setStaticF_UserPassedEntitlementCheck))::System::Action* UserPassedEntitlementCheck;

  constexpr bool& __get_exitAppOnFailure();

  constexpr bool const& __get_exitAppOnFailure() const;

  constexpr void __set_exitAppOnFailure(bool value);

  static inline void setStaticF_UserFailedEntitlementCheck(::System::Action* value);

  static inline ::System::Action* getStaticF_UserFailedEntitlementCheck();

  static inline void setStaticF_UserPassedEntitlementCheck(::System::Action* value);

  static inline ::System::Action* getStaticF_UserPassedEntitlementCheck();

  /// @brief Method add_UserFailedEntitlementCheck, addr 0x270c32c, size 0xb8, virtual false, abstract: false, final false
  static inline void add_UserFailedEntitlementCheck(::System::Action* value);

  /// @brief Method remove_UserFailedEntitlementCheck, addr 0x270c3e4, size 0xb8, virtual false, abstract: false, final false
  static inline void remove_UserFailedEntitlementCheck(::System::Action* value);

  /// @brief Method add_UserPassedEntitlementCheck, addr 0x270c49c, size 0xbc, virtual false, abstract: false, final false
  static inline void add_UserPassedEntitlementCheck(::System::Action* value);

  /// @brief Method remove_UserPassedEntitlementCheck, addr 0x270c558, size 0xbc, virtual false, abstract: false, final false
  static inline void remove_UserPassedEntitlementCheck(::System::Action* value);

  /// @brief Method Start, addr 0x270c614, size 0x1b4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method EntitlementCheckCallback, addr 0x270ca44, size 0x30, virtual false, abstract: false, final false
  inline void EntitlementCheckCallback(::Oculus::Platform::Message* msg);

  /// @brief Method HandleEntitlementCheckResult, addr 0x270c7c8, size 0x27c, virtual false, abstract: false, final false
  inline void HandleEntitlementCheckResult(bool result);

  static inline ::Oculus::Platform::Samples::EntitlementCheck::EntitlementCheck* New_ctor();

  /// @brief Method .ctor, addr 0x270ca74, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EntitlementCheck", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntitlementCheck(EntitlementCheck&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntitlementCheck", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntitlementCheck(EntitlementCheck const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntitlementCheck();

public:
  /// @brief Field exitAppOnFailure, offset: 0x18, size: 0x1, def value: None
  bool ___exitAppOnFailure;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Samples::EntitlementCheck::EntitlementCheck, 0x20>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Samples::EntitlementCheck::EntitlementCheck, ___exitAppOnFailure) == 0x18, "Offset mismatch!");

} // namespace Oculus::Platform::Samples::EntitlementCheck
NEED_NO_BOX(::Oculus::Platform::Samples::EntitlementCheck::EntitlementCheck);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Samples::EntitlementCheck::EntitlementCheck*, "Oculus.Platform.Samples.EntitlementCheck", "EntitlementCheck");
