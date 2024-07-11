#pragma once
// IWYU pragma private; include "BGLib/SaveDataCore/SaveDataResultExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SaveDataResultExtensions)
namespace BGLib::SaveDataCore {
struct SaveDataResult;
}
// Forward declare root types
namespace BGLib::SaveDataCore {
class SaveDataResultExtensions;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::SaveDataCore::SaveDataResultExtensions);
// Type: BGLib.SaveDataCore::SaveDataResultExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// Is value type: false
// CS Name: ::BGLib.SaveDataCore::SaveDataResultExtensions*
class CORDL_TYPE SaveDataResultExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsError, addr 0x1094c4c, size 0xc, virtual false, abstract: false, final false
  static inline bool IsError(::BGLib::SaveDataCore::SaveDataResult result);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SaveDataResultExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SaveDataResultExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SaveDataResultExtensions(SaveDataResultExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SaveDataResultExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SaveDataResultExtensions(SaveDataResultExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::SaveDataCore::SaveDataResultExtensions, 0x10>, "Size mismatch!");

} // namespace BGLib::SaveDataCore
NEED_NO_BOX(::BGLib::SaveDataCore::SaveDataResultExtensions);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::SaveDataCore::SaveDataResultExtensions*, "BGLib.SaveDataCore", "SaveDataResultExtensions");
