#pragma once
// IWYU pragma private; include "GlobalNamespace/AlwaysOwnedMockPlayerEntitlementResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AlwaysOwnedMockPlayerEntitlementResolver)
namespace GlobalNamespace {
struct EntitlementsStatus;
}
namespace GlobalNamespace {
class IMockPlayerEntitlementResolver;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class AlwaysOwnedMockPlayerEntitlementResolver;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver*, "", "AlwaysOwnedMockPlayerEntitlementResolver");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AlwaysOwnedMockPlayerEntitlementResolver
class CORDL_TYPE AlwaysOwnedMockPlayerEntitlementResolver : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IMockPlayerEntitlementResolver"
  constexpr operator ::GlobalNamespace::IMockPlayerEntitlementResolver*() noexcept;

  /// @brief Method GetLevelEntitlementStatusAsync, addr 0x5ed6a60, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementsStatus>* GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver* New_ctor();

  /// @brief Method .ctor, addr 0x5ed6ad0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IMockPlayerEntitlementResolver"
  constexpr ::GlobalNamespace::IMockPlayerEntitlementResolver* i___GlobalNamespace__IMockPlayerEntitlementResolver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlwaysOwnedMockPlayerEntitlementResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedMockPlayerEntitlementResolver", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlwaysOwnedMockPlayerEntitlementResolver(AlwaysOwnedMockPlayerEntitlementResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlwaysOwnedMockPlayerEntitlementResolver", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlwaysOwnedMockPlayerEntitlementResolver(AlwaysOwnedMockPlayerEntitlementResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23045 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AlwaysOwnedMockPlayerEntitlementResolver) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
