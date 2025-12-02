#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/CowatchViewer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CowatchViewer)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class CowatchViewer;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::CowatchViewer);
// Dependencies System.Object
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: Oculus.Platform.Models.CowatchViewer
class CORDL_TYPE CowatchViewer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data)) ::StringW Data;

  /// @brief Field Id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) uint64_t Id;

  static inline ::Oculus::Platform::Models::CowatchViewer* New_ctor(::System::IntPtr o);

  constexpr ::StringW const& __cordl_internal_get_Data() const;

  constexpr ::StringW& __cordl_internal_get_Data();

  constexpr uint64_t const& __cordl_internal_get_Id() const;

  constexpr uint64_t& __cordl_internal_get_Id();

  constexpr void __cordl_internal_set_Data(::StringW value);

  constexpr void __cordl_internal_set_Id(uint64_t value);

  /// @brief Method .ctor, addr 0x5bda310, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CowatchViewer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CowatchViewer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CowatchViewer(CowatchViewer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CowatchViewer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CowatchViewer(CowatchViewer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17990 };

  /// @brief Field Data, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Data;

  /// @brief Field Id, offset: 0x18, size: 0x8, def value: None
  uint64_t ___Id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Models::CowatchViewer, ___Data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::CowatchViewer, ___Id) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::CowatchViewer, 0x20>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::CowatchViewer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::CowatchViewer*, "Oculus.Platform.Models", "CowatchViewer");
