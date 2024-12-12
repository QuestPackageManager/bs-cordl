#pragma once
// IWYU pragma private; include "GlobalNamespace/IMockBeatmapDataProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
CORDL_MODULE_EXPORT(IMockBeatmapDataProvider)
namespace GlobalNamespace {
class BeatmapKeyNetSerializable;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMockBeatmapDataProvider);
// Dependencies System.IDisposable
namespace GlobalNamespace {
// Is value type: false
// CS Name: IMockBeatmapDataProvider
class CORDL_TYPE IMockBeatmapDataProvider {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method GetBeatmapData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>* GetBeatmapData(::GlobalNamespace::BeatmapKeyNetSerializable* beatmap,
                                                                                                 ::System::Threading::CancellationToken cancellationToken);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IMockBeatmapDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMockBeatmapDataProvider(IMockBeatmapDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18093 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMockBeatmapDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMockBeatmapDataProvider*, "", "IMockBeatmapDataProvider");
