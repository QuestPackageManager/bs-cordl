#pragma once
// IWYU pragma private; include "GlobalNamespace/IServerBeatmapProviderManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
CORDL_MODULE_EXPORT(IServerBeatmapProviderManager)
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class IServerBeatmapProviderManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IServerBeatmapProviderManager);
// Dependencies System.IDisposable
namespace GlobalNamespace {
// Is value type: false
// CS Name: IServerBeatmapProviderManager
class CORDL_TYPE IServerBeatmapProviderManager {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method GetServerBeatmapProvider, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IServerBeatmapProvider* GetServerBeatmapProvider();

  /// @brief Method RefreshAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RefreshAsync();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IServerBeatmapProviderManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IServerBeatmapProviderManager(IServerBeatmapProviderManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14815 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IServerBeatmapProviderManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IServerBeatmapProviderManager*, "", "IServerBeatmapProviderManager");
