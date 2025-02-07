#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRResources_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRResources)
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRResources;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRResources);
// Dependencies OVR.OpenVR.IVRResources, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRResources
class CORDL_TYPE CVRResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRResources FnTable;

  /// @brief Method GetResourceFullPath, addr 0x407a844, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetResourceFullPath(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, ::System::Text::StringBuilder* pchPathBuffer, uint32_t unBufferLen);

  /// @brief Method LoadSharedResource, addr 0x407a820, size 0x24, virtual false, abstract: false, final false
  inline uint32_t LoadSharedResource(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen);

  static inline ::OVR::OpenVR::CVRResources* New_ctor(::System::IntPtr pInterface);

  constexpr ::OVR::OpenVR::IVRResources const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRResources& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRResources value);

  /// @brief Method .ctor, addr 0x407a714, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRResources(CVRResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRResources(CVRResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8891 };

  /// @brief Field FnTable, offset: 0x10, size: 0x10, def value: None
  ::OVR::OpenVR::IVRResources ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRResources, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRResources, 0x20>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRResources);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRResources*, "OVR.OpenVR", "CVRResources");
