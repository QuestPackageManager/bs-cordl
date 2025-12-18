#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolSceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSceneSetupData)
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSceneSetupData);
// Dependencies SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolSceneSetupData
class CORDL_TYPE RecordingToolSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field taskCompletionSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_taskCompletionSource, put = __cordl_internal_set_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>* taskCompletionSource;

  static inline ::GlobalNamespace::RecordingToolSceneSetupData* New_ctor();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_taskCompletionSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_taskCompletionSource();

  constexpr void __cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value);

  /// @brief Method .ctor, addr 0x577a328, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSceneSetupData(RecordingToolSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSceneSetupData(RecordingToolSceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6816 };

  /// @brief Field taskCompletionSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<bool>* ___taskCompletionSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolSceneSetupData, ___taskCompletionSource) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSceneSetupData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSceneSetupData*, "", "RecordingToolSceneSetupData");
