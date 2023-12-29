#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SyncTimeProvider)
namespace GlobalNamespace {
class ITimeProvider;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SyncTimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SyncTimeProvider);
// Type: ::SyncTimeProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5477))
// CS Name: ::SyncTimeProvider*
class CORDL_TYPE SyncTimeProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSessionManager, offset 0x10, size 0x8
  __declspec(property(get = __get__multiplayerSessionManager, put = __set__multiplayerSessionManager))::GlobalNamespace::IMultiplayerSessionManager* _multiplayerSessionManager;

  __declspec(property(get = get_time)) float_t time;

  /// @brief Convert operator to "::GlobalNamespace::ITimeProvider"
  constexpr operator ::GlobalNamespace::ITimeProvider*() noexcept;

  constexpr ::GlobalNamespace::IMultiplayerSessionManager*& __get__multiplayerSessionManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& __get__multiplayerSessionManager() const;

  constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value);

  /// @brief Method get_time addr 0x2129960 size 0xa4 virtual true final true
  inline float_t get_time();

  static inline ::GlobalNamespace::SyncTimeProvider* New_ctor();

  /// @brief Method .ctor addr 0x2129a04 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SyncTimeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SyncTimeProvider(SyncTimeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SyncTimeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SyncTimeProvider(SyncTimeProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SyncTimeProvider();

public:
  /// @brief Field _multiplayerSessionManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IMultiplayerSessionManager* ____multiplayerSessionManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SyncTimeProvider, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncTimeProvider, ____multiplayerSessionManager) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SyncTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SyncTimeProvider*, "", "SyncTimeProvider");
