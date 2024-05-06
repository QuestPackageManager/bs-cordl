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
// Type: ::IFileStorage
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IFileStorage*
class CORDL_TYPE IFileStorage {
public:
  // Declarations
  /// @brief Method DeleteFileAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* DeleteFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method FileExistsAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<bool>* FileExistsAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method LoadFileAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* LoadFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method SaveFileAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SaveFileAsync(::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation);

  // Ctor Parameters [CppParam { name: "", ty: "IFileStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFileStorage(IFileStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFileStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFileStorage(IFileStorage const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IFileStorage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IFileStorage*, "", "IFileStorage");
