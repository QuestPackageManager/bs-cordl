#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/IProfilerEmitter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IProfilerEmitter)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Array;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Profiling {
class IProfilerEmitter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter);
// Dependencies
namespace UnityEngine::ResourceManagement::Profiling {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Profiling.IProfilerEmitter
class CORDL_TYPE IProfilerEmitter {
public:
  // Declarations
  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  /// @brief Method EmitFrameMetaData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EmitFrameMetaData(::System::Guid id, int32_t tag, ::System::Array* data);

  /// @brief Method InitialiseCallbacks, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InitialiseCallbacks(::System::Action_1<float_t>* onLateUpdateDelegate);

  /// @brief Method get_IsEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsEnabled();

  // Ctor Parameters [CppParam { name: "", ty: "IProfilerEmitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProfilerEmitter(IProfilerEmitter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18759 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Profiling
NEED_NO_BOX(::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*, "UnityEngine.ResourceManagement.Profiling", "IProfilerEmitter");
