#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRIOBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRIOBuffer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRIOBuffer)
namespace OVR::OpenVR {
struct EIOBufferError;
}
namespace OVR::OpenVR {
struct EIOBufferMode;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRIOBuffer;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRIOBuffer);
// Dependencies OVR.OpenVR.IVRIOBuffer, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRIOBuffer
class CORDL_TYPE CVRIOBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRIOBuffer FnTable;

  /// @brief Method Close, addr 0x4076a30, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Close(uint64_t ulBuffer);

  static inline ::OVR::OpenVR::CVRIOBuffer* New_ctor(::System::IntPtr pInterface);

  /// @brief Method Open, addr 0x4076a08, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Open(::StringW pchPath, ::OVR::OpenVR::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, ::ByRef<uint64_t> pulBuffer);

  /// @brief Method PropertyContainer, addr 0x4076aa0, size 0x24, virtual false, abstract: false, final false
  inline uint64_t PropertyContainer(uint64_t ulBuffer);

  /// @brief Method Read, addr 0x4076a54, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Read(uint64_t ulBuffer, ::System::IntPtr pDst, uint32_t unBytes, ::ByRef<uint32_t> punRead);

  /// @brief Method Write, addr 0x4076a7c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EIOBufferError Write(uint64_t ulBuffer, ::System::IntPtr pSrc, uint32_t unBytes);

  constexpr ::OVR::OpenVR::IVRIOBuffer const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRIOBuffer& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRIOBuffer value);

  /// @brief Method .ctor, addr 0x40768f4, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRIOBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRIOBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRIOBuffer(CVRIOBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRIOBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRIOBuffer(CVRIOBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8895 };

  /// @brief Field FnTable, offset: 0x10, size: 0x28, def value: None
  ::OVR::OpenVR::IVRIOBuffer ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRIOBuffer, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRIOBuffer, 0x38>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRIOBuffer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRIOBuffer*, "OVR.OpenVR", "CVRIOBuffer");
