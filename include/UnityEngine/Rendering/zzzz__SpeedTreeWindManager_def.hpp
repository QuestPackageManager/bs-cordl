#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SpeedTreeWindManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpeedTreeWindManager)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct SpeedTreeWindParamsBufferIterator;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SpeedTreeWindManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::SpeedTreeWindManager);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SpeedTreeWindManager
class CORDL_TYPE SpeedTreeWindManager : public ::System::Object {
public:
  // Declarations
  /// @brief Method UpdateWindAndWriteBufferWindParams, addr 0x69f065c, size 0xb8, virtual false, abstract: false, final false
  static inline void UpdateWindAndWriteBufferWindParams(::System::ReadOnlySpan_1<int32_t> renderersID, ::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator windParams, bool history);

  /// @brief Method UpdateWindAndWriteBufferWindParams_Injected, addr 0x69f0714, size 0x54, virtual false, abstract: false, final false
  static inline void UpdateWindAndWriteBufferWindParams_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> renderersID,
                                                                 ::ByRef<::UnityEngine::Rendering::SpeedTreeWindParamsBufferIterator> windParams, bool history);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpeedTreeWindManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpeedTreeWindManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpeedTreeWindManager(SpeedTreeWindManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpeedTreeWindManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpeedTreeWindManager(SpeedTreeWindManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22429 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SpeedTreeWindManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::SpeedTreeWindManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SpeedTreeWindManager*, "UnityEngine.Rendering", "SpeedTreeWindManager");
