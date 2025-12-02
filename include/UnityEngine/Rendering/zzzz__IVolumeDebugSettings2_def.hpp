#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IVolumeDebugSettings2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IVolumeDebugSettings2)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::Rendering {
class IVolumeDebugSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IVolumeDebugSettings2;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IVolumeDebugSettings2);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IVolumeDebugSettings2
class CORDL_TYPE IVolumeDebugSettings2 {
public:
  // Declarations
  __declspec(property(get = get_targetRenderPipeline)) ::System::Type* targetRenderPipeline;

  __declspec(property(get = get_volumeComponentsPathAndType)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* volumeComponentsPathAndType;

  /// @brief Convert operator to "::UnityEngine::Rendering::IVolumeDebugSettings"
  constexpr operator ::UnityEngine::Rendering::IVolumeDebugSettings*() noexcept;

  /// @brief Method get_targetRenderPipeline, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_targetRenderPipeline();

  /// @brief Method get_volumeComponentsPathAndType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* get_volumeComponentsPathAndType();

  /// @brief Convert to "::UnityEngine::Rendering::IVolumeDebugSettings"
  constexpr ::UnityEngine::Rendering::IVolumeDebugSettings* i___UnityEngine__Rendering__IVolumeDebugSettings() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IVolumeDebugSettings2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVolumeDebugSettings2(IVolumeDebugSettings2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12019 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IVolumeDebugSettings2);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IVolumeDebugSettings2*, "UnityEngine.Rendering", "IVolumeDebugSettings2");
