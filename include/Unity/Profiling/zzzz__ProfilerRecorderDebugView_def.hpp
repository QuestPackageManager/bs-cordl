#pragma once
// IWYU pragma private; include "Unity\Profiling\ProfilerRecorderDebugView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProfilerRecorderDebugView)
// Forward declare root types
namespace Unity::Profiling {
class ProfilerRecorderDebugView;
}
// Write type traits
MARK_REF_T(::Unity::Profiling::ProfilerRecorderDebugView*);
DEFINE_IL2CPP_CLASS(::Unity::Profiling::ProfilerRecorderDebugView*, "Unity.Profiling", "ProfilerRecorderDebugView");
// Dependencies System.Object
namespace Unity::Profiling {
// Is value type: false
// CS Name: Unity.Profiling.ProfilerRecorderDebugView
class CORDL_TYPE ProfilerRecorderDebugView : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerRecorderDebugView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProfilerRecorderDebugView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProfilerRecorderDebugView(ProfilerRecorderDebugView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProfilerRecorderDebugView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProfilerRecorderDebugView(ProfilerRecorderDebugView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9953 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Profiling::ProfilerRecorderDebugView) == 0x10, "Size mismatch!");

} // namespace Unity::Profiling
