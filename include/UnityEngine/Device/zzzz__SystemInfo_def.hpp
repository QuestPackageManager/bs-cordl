#pragma once
// IWYU pragma private; include "UnityEngine/Device/SystemInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SystemInfo)
namespace UnityEngine {
struct DeviceType;
}
// Forward declare root types
namespace UnityEngine::Device {
class SystemInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Device::SystemInfo);
// Dependencies System.Object
namespace UnityEngine::Device {
// Is value type: false
// CS Name: UnityEngine.Device.SystemInfo
class CORDL_TYPE SystemInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_deviceModel, addr 0x69ae2a4, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW get_deviceModel();

  /// @brief Method get_deviceType, addr 0x69ae2a8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::DeviceType get_deviceType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemInfo(SystemInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemInfo(SystemInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Device::SystemInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Device
NEED_NO_BOX(::UnityEngine::Device::SystemInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Device::SystemInfo*, "UnityEngine.Device", "SystemInfo");
