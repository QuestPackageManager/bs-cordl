#pragma once
// IWYU pragma private; include "GlobalNamespace/NoFileStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoFileStorage)
namespace GlobalNamespace {
class IFileStorage;
}
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
// Type: ::NoFileStorage
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoFileStorage*
class CORDL_TYPE NoFileStorage : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IFileStorage"
  constexpr operator ::GlobalNamespace::IFileStorage*() noexcept;

  /// @brief Method DeleteFileAsync, addr 0x107a128, size 0x88, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DeleteFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method FileExistsAsync, addr 0x107a1b0, size 0x68, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* FileExistsAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method LoadFileAsync, addr 0x107a0c0, size 0x68, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* LoadFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  static inline ::GlobalNamespace::NoFileStorage* New_ctor();

  /// @brief Method SaveFileAsync, addr 0x107a038, size 0x88, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SaveFileAsync(::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method .ctor, addr 0x107a218, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoFileStorage, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoFileStorage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoFileStorage*, "", "NoFileStorage");
