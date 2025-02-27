#pragma once
// IWYU pragma private; include "GlobalNamespace/IServerSongPackProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IServerSongPackProvider)
namespace GlobalNamespace {
struct SongPackMask;
}
// Forward declare root types
namespace GlobalNamespace {
class IServerSongPackProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IServerSongPackProvider);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IServerSongPackProvider
class CORDL_TYPE IServerSongPackProvider {
public:
  // Declarations
  /// @brief Method DecomposeSongPackMask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::SongPackMask, ::Array<::GlobalNamespace::SongPackMask>*> DecomposeSongPackMask(::GlobalNamespace::SongPackMask songPackMask);

  // Ctor Parameters [CppParam { name: "", ty: "IServerSongPackProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IServerSongPackProvider(IServerSongPackProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14821 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IServerSongPackProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IServerSongPackProvider*, "", "IServerSongPackProvider");
