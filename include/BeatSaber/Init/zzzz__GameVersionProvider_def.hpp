#pragma once
// IWYU pragma private; include "BeatSaber/Init/GameVersionProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
namespace OculusStudios::Platform::Core {
class IPlatform;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace BeatSaber::Init {
class GameVersionProvider;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Init::GameVersionProvider);
// Dependencies BeatSaber.Init.GameVersion::Content, System.Nullable`1<T>, System.Object
namespace BeatSaber::Init {
// Is value type: false
// CS Name: BeatSaber.Init.GameVersionProvider
class CORDL_TYPE GameVersionProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _contentVersion, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__contentVersion, put = setStaticF__contentVersion)) ::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> _contentVersion;

  /// @brief Field _platform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::OculusStudios::Platform::Core::IPlatform* _platform;

  /// @brief Field _versionTask, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__versionTask, put = __cordl_internal_set__versionTask)) ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* _versionTask;

  /// @brief Method GetBuildId, addr 0x31c7c88, size 0x98, virtual false, abstract: false, final false
  static inline uint64_t GetBuildId();

  /// @brief Method GetBuildTimeGameVersion, addr 0x31c7d20, size 0x19c, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion* GetBuildTimeGameVersion();

  /// @brief Method GetContentVersion, addr 0x31c7b80, size 0x108, virtual false, abstract: false, final false
  static inline ::BeatSaber::Init::GameVersion_Content GetContentVersion();

  /// @brief Method GetVersion, addr 0x31c7ebc, size 0x7d8, virtual false, abstract: false, final false
  inline ::BeatSaber::Init::GameVersion* GetVersion();

  static inline ::BeatSaber::Init::GameVersionProvider* New_ctor();

  /// @brief Method NoDomainReloadInit, addr 0x31c7b34, size 0x4c, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get__platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get__platform();

  constexpr ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* const& __cordl_internal_get__versionTask() const;

  constexpr ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>*& __cordl_internal_get__versionTask();

  constexpr void __cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value);

  constexpr void __cordl_internal_set__versionTask(::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* value);

  /// @brief Method .ctor, addr 0x31c8694, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> getStaticF__contentVersion();

  static inline void setStaticF__contentVersion(::System::Nullable_1<::BeatSaber::Init::GameVersion_Content> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameVersionProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameVersionProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameVersionProvider(GameVersionProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameVersionProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameVersionProvider(GameVersionProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22396 };

  /// @brief Field _versionTask, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::BeatSaber::Init::GameVersion*>* ____versionTask;

  /// @brief Field _platform, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ____platform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Init::GameVersionProvider, ____versionTask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Init::GameVersionProvider, ____platform) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Init::GameVersionProvider, 0x20>, "Size mismatch!");

} // namespace BeatSaber::Init
NEED_NO_BOX(::BeatSaber::Init::GameVersionProvider);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Init::GameVersionProvider*, "BeatSaber.Init", "GameVersionProvider");
