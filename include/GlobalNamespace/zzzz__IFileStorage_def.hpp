#pragma once
// IWYU pragma private; include "GlobalNamespace/IFileStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IFileStorage)
namespace GlobalNamespace {
struct StoragePreference;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class IFileStorage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IFileStorage);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IFileStorage
class CORDL_TYPE IFileStorage {
public:
  // Declarations
  /// @brief Method DeleteFileAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* DeleteFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method FileExistsAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* FileExistsAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method LoadFileAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* LoadFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method SaveFileAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveFileAsync(::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation);

  // Ctor Parameters [CppParam { name: "", ty: "IFileStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFileStorage(IFileStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18912 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IFileStorage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IFileStorage*, "", "IFileStorage");
