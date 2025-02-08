#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/IRemoteCatalogLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRemoteCatalogLoader)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace BGLib::MetaRemoteAssets {
class IRemoteCatalogLoader;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::MetaRemoteAssets::IRemoteCatalogLoader);
// Dependencies
namespace BGLib::MetaRemoteAssets {
// Is value type: false
// CS Name: BGLib.MetaRemoteAssets.IRemoteCatalogLoader
class CORDL_TYPE IRemoteCatalogLoader {
public:
  // Declarations
  /// @brief Method LoadRemoteCatalogAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* LoadRemoteCatalogAsync(::System::Threading::CancellationToken cancellationToken);

  // Ctor Parameters [CppParam { name: "", ty: "IRemoteCatalogLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRemoteCatalogLoader(IRemoteCatalogLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::MetaRemoteAssets
NEED_NO_BOX(::BGLib::MetaRemoteAssets::IRemoteCatalogLoader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::MetaRemoteAssets::IRemoteCatalogLoader*, "BGLib.MetaRemoteAssets", "IRemoteCatalogLoader");
