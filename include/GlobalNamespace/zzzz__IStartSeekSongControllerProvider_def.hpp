#pragma once
// IWYU pragma private; include "GlobalNamespace/IStartSeekSongControllerProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::GlobalNamespace::IStartSeekSongControllerProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IStartSeekSongControllerProvider*, "", "IStartSeekSongControllerProvider");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IStartSeekSongControllerProvider
class CORDL_TYPE IStartSeekSongControllerProvider {
public:
  // Declarations
  __declspec(property(get = get_songController)) ::GlobalNamespace::IStartSeekSongController* songController;

  /// @brief Method get_songController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IStartSeekSongController* get_songController();

  // Ctor Parameters [CppParam { name: "", ty: "IStartSeekSongControllerProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IStartSeekSongControllerProvider(IStartSeekSongControllerProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6077 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
