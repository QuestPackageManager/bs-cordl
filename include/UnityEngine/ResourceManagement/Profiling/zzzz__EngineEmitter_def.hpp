#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Profiling/EngineEmitter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EngineEmitter)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Array;
}
namespace System {
struct Guid;
}
namespace UnityEngine::ResourceManagement::Profiling {
class IProfilerEmitter;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Profiling {
class EngineEmitter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Profiling::EngineEmitter);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Profiling {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Profiling.EngineEmitter
class CORDL_TYPE EngineEmitter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter"
  constexpr operator ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter*() noexcept;

  /// @brief Method EmitFrameMetaData, addr 0x67044a4, size 0x4, virtual true, abstract: false, final true
  inline void EmitFrameMetaData(::System::Guid id, int32_t tag, ::System::Array* data);

  /// @brief Method InitialiseCallbacks, addr 0x67044a8, size 0x58, virtual true, abstract: false, final true
  inline void InitialiseCallbacks(::System::Action_1<float_t>* d);

  static inline ::UnityEngine::ResourceManagement::Profiling::EngineEmitter* New_ctor();

  /// @brief Method .ctor, addr 0x6704500, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsEnabled, addr 0x670447c, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Convert to "::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter"
  constexpr ::UnityEngine::ResourceManagement::Profiling::IProfilerEmitter* i___UnityEngine__ResourceManagement__Profiling__IProfilerEmitter() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EngineEmitter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EngineEmitter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EngineEmitter(EngineEmitter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EngineEmitter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EngineEmitter(EngineEmitter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18753 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Profiling::EngineEmitter, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Profiling
NEED_NO_BOX(::UnityEngine::ResourceManagement::Profiling::EngineEmitter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Profiling::EngineEmitter*, "UnityEngine.ResourceManagement.Profiling", "EngineEmitter");
