#pragma once
// IWYU pragma private; include "BeatSaber/Init/GameVersionProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__GameVersion_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameVersionProvider)
namespace BeatSaber::Init {
struct GameVersion_Content;
}
namespace BeatSaber::Init {
class GameVersion;
}
// Forward declare root types
namespace BeatSaber::Init {
class GameVersionProvider;
}
// Write type traits
MARK_REF_T(::BeatSaber::Init::GameVersionProvider*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Init::GameVersionProvider*, "BeatSaber.Init", "GameVersionProvider");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies BeatSaber.Init.GameVersion::Content, System.Nullable`1<T>, System.Object
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.GameVersionProvider
class CORDL_TYPE GameVersionProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _contentVersion, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__contentVersion, put = setStaticF__contentVersion)) ::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> _contentVersion;

  /// @brief Method GetBuildId, addr 0x3544214, size 0x98, virtual false, abstract: false, final false
  static inline uint64_t GetBuildId();

  /// @brief Method GetBuildTimeGameVersion, addr 0x3541094, size 0x19c, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion* GetBuildTimeGameVersion();

  /// @brief Method GetContentVersion, addr 0x354410c, size 0x108, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion_Content GetContentVersion();

  /// @brief Method GetVersion, addr 0x35442ac, size 0x7d8, virtual false, abstract: false, final false
  inline ::BeatSaber::Init::GameVersion* GetVersion();

  static inline ::BeatSaber::Init::GameVersionProvider* New_ctor();

  /// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
  /// @brief Method NoDomainReloadInit, addr 0x35440c0, size 0x4c, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method .ctor, addr 0x3544a84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> getStaticF__contentVersion();

  static inline void setStaticF__contentVersion(::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameVersionProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameVersionProvider", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameVersionProvider(GameVersionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameVersionProvider", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameVersionProvider(GameVersionProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23351 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Init::GameVersionProvider) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Init
