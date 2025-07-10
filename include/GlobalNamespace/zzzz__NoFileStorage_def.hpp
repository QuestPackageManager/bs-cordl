#pragma once
// IWYU pragma private; include "GlobalNamespace/NoFileStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoFileStorage)
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
class NoFileStorage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoFileStorage);
// Dependencies IFileStorage, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoFileStorage
class CORDL_TYPE NoFileStorage : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IFileStorage"
  constexpr operator ::GlobalNamespace::IFileStorage*() noexcept;

  /// @brief Method DeleteFileAsync, addr 0x22a5d08, size 0x88, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DeleteFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method FileExistsAsync, addr 0x22a5d90, size 0x68, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* FileExistsAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method LoadFileAsync, addr 0x22a5ca0, size 0x68, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* LoadFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  static inline ::GlobalNamespace::NoFileStorage* New_ctor();

  /// @brief Method SaveFileAsync, addr 0x22a5c18, size 0x88, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SaveFileAsync(::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method .ctor, addr 0x22a5df8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IFileStorage"
  constexpr ::GlobalNamespace::IFileStorage* i___GlobalNamespace__IFileStorage() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoFileStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoFileStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoFileStorage(NoFileStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoFileStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoFileStorage(NoFileStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18913 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoFileStorage, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoFileStorage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoFileStorage*, "", "NoFileStorage");
