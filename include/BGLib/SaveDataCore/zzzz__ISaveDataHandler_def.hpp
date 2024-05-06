#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISaveDataHandler)
namespace BGLib::SaveDataCore {
struct LoaderState;
}
namespace BGLib::SaveDataCore {
struct SaveDataResult;
}
namespace BGLib::SaveDataCore {
class VersionableSaveData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace BGLib::SaveDataCore {
class ISaveDataHandler;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::SaveDataCore::ISaveDataHandler);
// Type: BGLib.SaveDataCore::ISaveDataHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::SaveDataCore {
// Is value type: false
// CS Name: ::BGLib.SaveDataCore::ISaveDataHandler*
class CORDL_TYPE ISaveDataHandler {
public:
  // Declarations
  __declspec(property(get = get_instance))::BGLib::SaveDataCore::VersionableSaveData* instance;

  /// @brief Method GetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::BGLib::SaveDataCore::LoaderState GetState();

  /// @brief Method ResetChangesAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* ResetChangesAsync();

  /// @brief Method SaveAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::SaveDataCore::SaveDataResult>* SaveAsync(bool force);

  /// @brief Method get_instance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::BGLib::SaveDataCore::VersionableSaveData* get_instance();

  // Ctor Parameters [CppParam { name: "", ty: "ISaveDataHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISaveDataHandler(ISaveDataHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISaveDataHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISaveDataHandler(ISaveDataHandler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::SaveDataCore
NEED_NO_BOX(::BGLib::SaveDataCore::ISaveDataHandler);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::SaveDataCore::ISaveDataHandler*, "BGLib.SaveDataCore", "ISaveDataHandler");
