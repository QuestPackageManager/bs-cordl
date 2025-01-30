#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRManagementAnalytics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRManagementAnalytics)
namespace UnityEngine::XR::Management {
struct XRManagementAnalytics_BuildEvent;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRManagementAnalytics;
}
namespace UnityEngine::XR::Management {
struct XRManagementAnalytics_BuildEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRManagementAnalytics);
MARK_VAL_T(::UnityEngine::XR::Management::XRManagementAnalytics_BuildEvent);
// Dependencies
namespace UnityEngine::XR::Management {
// Is value type: true
// CS Name: UnityEngine.XR.Management.XRManagementAnalytics/BuildEvent
struct CORDL_TYPE XRManagementAnalytics_BuildEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRManagementAnalytics_BuildEvent();

  // Ctor Parameters [CppParam { name: "buildGuid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "buildTarget", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "buildTargetGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assigned_loaders", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
  constexpr XRManagementAnalytics_BuildEvent(::StringW buildGuid, ::StringW buildTarget, ::StringW buildTargetGroup, ::ArrayW<::StringW, ::Array<::StringW>*> assigned_loaders) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18684 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field buildGuid, offset: 0x0, size: 0x8, def value: None
  ::StringW buildGuid;

  /// @brief Field buildTarget, offset: 0x8, size: 0x8, def value: None
  ::StringW buildTarget;

  /// @brief Field buildTargetGroup, offset: 0x10, size: 0x8, def value: None
  ::StringW buildTargetGroup;

  /// @brief Field assigned_loaders, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> assigned_loaders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Management::XRManagementAnalytics_BuildEvent, buildGuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagementAnalytics_BuildEvent, buildTarget) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagementAnalytics_BuildEvent, buildTargetGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::XRManagementAnalytics_BuildEvent, assigned_loaders) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRManagementAnalytics_BuildEvent, 0x20>, "Size mismatch!");

} // namespace UnityEngine::XR::Management
// Dependencies System.Object
namespace UnityEngine::XR::Management {
// Is value type: false
// CS Name: UnityEngine.XR.Management.XRManagementAnalytics
class CORDL_TYPE XRManagementAnalytics : public ::System::Object {
public:
  // Declarations
  using BuildEvent = ::UnityEngine::XR::Management::XRManagementAnalytics_BuildEvent;

  /// @brief Method Initialize, addr 0x483373c, size 0x8, virtual false, abstract: false, final false
  static inline bool Initialize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRManagementAnalytics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRManagementAnalytics(XRManagementAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRManagementAnalytics(XRManagementAnalytics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18685 };

  /// @brief Field kEventBuild offset 0xffffffff size 0x8
  static constexpr ::ConstString kEventBuild{ u"xrmanagment_build" };

  /// @brief Field kMaxEventsPerHour offset 0xffffffff size 0x4
  static constexpr int32_t kMaxEventsPerHour{ static_cast<int32_t>(0x3e8) };

  /// @brief Field kMaxNumberOfElements offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumberOfElements{ static_cast<int32_t>(0x3e8) };

  /// @brief Field kVendorKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kVendorKey{ u"unity.xrmanagement" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRManagementAnalytics, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRManagementAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRManagementAnalytics*, "UnityEngine.XR.Management", "XRManagementAnalytics");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRManagementAnalytics_BuildEvent, "UnityEngine.XR.Management", "XRManagementAnalytics/BuildEvent");
