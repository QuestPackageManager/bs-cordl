#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MockRemoteCatalogLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockRemoteCatalogLoader)
namespace BGLib::MetaRemoteAssets {
class IRemoteCatalogLoader;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace BGLib::MetaRemoteAssets {
class MockRemoteCatalogLoader;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader);
// Dependencies System.Object
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.MockRemoteCatalogLoader
class CORDL_TYPE MockRemoteCatalogLoader : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::BGLib::MetaRemoteAssets::IRemoteCatalogLoader"
  constexpr operator ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*() noexcept;

  /// @brief Method LoadRemoteCatalogAsync, addr 0x31f2944, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* LoadRemoteCatalogAsync(::System::Threading::CancellationToken cancellationToken);

  static inline ::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader* New_ctor();

  /// @brief Method .ctor, addr 0x31f29b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BGLib::MetaRemoteAssets::IRemoteCatalogLoader"
  constexpr ::BGLib::MetaRemoteAssets::IRemoteCatalogLoader* i___BGLib__MetaRemoteAssets__IRemoteCatalogLoader() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockRemoteCatalogLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockRemoteCatalogLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockRemoteCatalogLoader(MockRemoteCatalogLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockRemoteCatalogLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockRemoteCatalogLoader(MockRemoteCatalogLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22201 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader, 0x10>, "Size mismatch!");

} // namespace BGLib::MetaRemoteAssets
NEED_NO_BOX(::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::MockRemoteCatalogLoader*, "BGLib.MetaRemoteAssets", "MockRemoteCatalogLoader");
