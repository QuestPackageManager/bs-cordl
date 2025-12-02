#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LookDev/IDataProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDataProvider)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::Rendering::LookDev {
struct Sky;
}
namespace UnityEngine::Rendering::LookDev {
class StageRuntimeInterface;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering::LookDev {
class IDataProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::LookDev::IDataProvider);
// Dependencies
namespace UnityEngine::Rendering::LookDev {
// Is value type: false
// CS Name: UnityEngine.Rendering.LookDev.IDataProvider
class CORDL_TYPE IDataProvider {
public:
  // Declarations
  __declspec(property(get = get_supportedDebugModes)) ::System::Collections::Generic::IEnumerable_1<::StringW>* supportedDebugModes;

  /// @brief Method Cleanup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Cleanup(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* SRI);

  /// @brief Method FirstInitScene, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void FirstInitScene(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage);

  /// @brief Method GetShadowMask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetShadowMask(::ByRef<::UnityEngine::RenderTexture*> output, ::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage);

  /// @brief Method OnBeginRendering, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnBeginRendering(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage);

  /// @brief Method OnEndRendering, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnEndRendering(::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage);

  /// @brief Method UpdateDebugMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateDebugMode(int32_t debugIndex);

  /// @brief Method UpdateSky, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateSky(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::LookDev::Sky sky, ::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage);

  /// @brief Method get_supportedDebugModes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_supportedDebugModes();

  // Ctor Parameters [CppParam { name: "", ty: "IDataProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDataProvider(IDataProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12475 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::LookDev
NEED_NO_BOX(::UnityEngine::Rendering::LookDev::IDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LookDev::IDataProvider*, "UnityEngine.Rendering.LookDev", "IDataProvider");
