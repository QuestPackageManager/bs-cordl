#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncTimeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ITimeProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SyncTimeProvider)
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SyncTimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SyncTimeProvider);
// Dependencies ITimeProvider, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SyncTimeProvider
class CORDL_TYPE SyncTimeProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSessionManager,
                      put = __cordl_internal_set__multiplayerSessionManager)) ::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  __declspec(property(get = get_time)) int64_t time;

  /// @brief Convert operator to "::GlobalNamespace::ITimeProvider"
  constexpr operator ::GlobalNamespace::ITimeProvider*() noexcept;

  static inline ::GlobalNamespace::SyncTimeProvider* New_ctor();

  constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& __cordl_internal_get__multiplayerSessionManager() const;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __cordl_internal_get__multiplayerSessionManager();

  constexpr void __cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  /// @brief Method .ctor, addr 0x39bdd4c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_time, addr 0x39bdca8, size 0xa4, virtual true, abstract: false, final true
  inline int64_t get_time();

  /// @brief Convert to "::GlobalNamespace::ITimeProvider"
  constexpr ::GlobalNamespace::ITimeProvider* i___GlobalNamespace__ITimeProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SyncTimeProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SyncTimeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SyncTimeProvider(SyncTimeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SyncTimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SyncTimeProvider(SyncTimeProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18871 };

  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SyncTimeProvider, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SyncTimeProvider, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SyncTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SyncTimeProvider*, "", "SyncTimeProvider");
