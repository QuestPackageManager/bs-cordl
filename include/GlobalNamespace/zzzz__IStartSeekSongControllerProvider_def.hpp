#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStartSeekSongControllerProvider)
namespace GlobalNamespace {
class IStartSeekSongController;
}
// Forward declare root types
namespace GlobalNamespace {
class IStartSeekSongControllerProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IStartSeekSongControllerProvider);
// Type: ::IStartSeekSongControllerProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5166))
// CS Name: ::IStartSeekSongControllerProvider*
class CORDL_TYPE IStartSeekSongControllerProvider {
public:
  // Declarations
  __declspec(property(get = get_songController))::GlobalNamespace::IStartSeekSongController* songController;

  /// @brief Method get_songController addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::IStartSeekSongController* get_songController();

  // Ctor Parameters [CppParam { name: "", ty: "IStartSeekSongControllerProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IStartSeekSongControllerProvider(IStartSeekSongControllerProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IStartSeekSongControllerProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStartSeekSongControllerProvider(IStartSeekSongControllerProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IStartSeekSongControllerProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStartSeekSongControllerProvider*, "", "IStartSeekSongControllerProvider");
