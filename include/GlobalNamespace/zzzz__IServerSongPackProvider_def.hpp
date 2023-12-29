#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::IServerSongPackProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12733))
// CS Name: ::IServerSongPackProvider*
class CORDL_TYPE IServerSongPackProvider {
public:
  // Declarations
  /// @brief Method DecomposeSongPackMask addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::GlobalNamespace::SongPackMask, ::Array<::GlobalNamespace::SongPackMask>*> DecomposeSongPackMask(::GlobalNamespace::SongPackMask songPackMask);

  // Ctor Parameters [CppParam { name: "", ty: "IServerSongPackProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IServerSongPackProvider(IServerSongPackProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IServerSongPackProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IServerSongPackProvider(IServerSongPackProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IServerSongPackProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IServerSongPackProvider*, "", "IServerSongPackProvider");
