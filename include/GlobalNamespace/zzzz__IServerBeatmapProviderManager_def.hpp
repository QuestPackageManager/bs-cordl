#pragma once
// IWYU pragma private; include "GlobalNamespace/IServerBeatmapProviderManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IServerBeatmapProviderManager)
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IServerBeatmapProviderManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IServerBeatmapProviderManager);
// Type: ::IServerBeatmapProviderManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IServerBeatmapProviderManager*
class CORDL_TYPE IServerBeatmapProviderManager {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method GetServerBeatmapProvider, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::IServerBeatmapProvider* GetServerBeatmapProvider();

  /// @brief Method RefreshAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* RefreshAsync();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IServerBeatmapProviderManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IServerBeatmapProviderManager(IServerBeatmapProviderManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IServerBeatmapProviderManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IServerBeatmapProviderManager(IServerBeatmapProviderManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IServerBeatmapProviderManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IServerBeatmapProviderManager*, "", "IServerBeatmapProviderManager");
