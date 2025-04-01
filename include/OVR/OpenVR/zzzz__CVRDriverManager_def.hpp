#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRDriverManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRDriverManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRDriverManager)
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRDriverManager;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRDriverManager);
// Dependencies OVR.OpenVR.IVRDriverManager, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRDriverManager
class CORDL_TYPE CVRDriverManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRDriverManager FnTable;

  /// @brief Method GetDriverCount, addr 0x4071534, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetDriverCount();

  /// @brief Method GetDriverHandle, addr 0x407157c, size 0x24, virtual false, abstract: false, final false
  inline uint64_t GetDriverHandle(::StringW pchDriverName);

  /// @brief Method GetDriverName, addr 0x4071558, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetDriverName(uint32_t nDriver, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  static inline ::OVR::OpenVR::CVRDriverManager* New_ctor(::System::IntPtr pInterface);

  constexpr ::OVR::OpenVR::IVRDriverManager const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRDriverManager& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRDriverManager value);

  /// @brief Method .ctor, addr 0x4071420, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRDriverManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRDriverManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRDriverManager(CVRDriverManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRDriverManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRDriverManager(CVRDriverManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8893 };

  /// @brief Field FnTable, offset: 0x10, size: 0x18, def value: None
  ::OVR::OpenVR::IVRDriverManager ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRDriverManager, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRDriverManager, 0x28>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRDriverManager);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRDriverManager*, "OVR.OpenVR", "CVRDriverManager");
