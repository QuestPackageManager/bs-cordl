#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IVolumeDebugSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IVolumeDebugSettings)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
class VolumeStack;
}
namespace UnityEngine::Rendering {
class Volume;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IVolumeDebugSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IVolumeDebugSettings);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IVolumeDebugSettings
class CORDL_TYPE IVolumeDebugSettings {
public:
  // Declarations
  __declspec(property(get = get_cameras)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>* cameras;

  __declspec(property(get = get_selectedCamera)) ::UnityW<::UnityEngine::Camera> selectedCamera;

  __declspec(property(get = get_selectedCameraIndex, put = set_selectedCameraIndex)) int32_t selectedCameraIndex;

  __declspec(property(get = get_selectedCameraLayerMask)) ::UnityEngine::LayerMask selectedCameraLayerMask;

  __declspec(property(get = get_selectedCameraPosition)) ::UnityEngine::Vector3 selectedCameraPosition;

  __declspec(property(get = get_selectedCameraVolumeStack)) ::UnityEngine::Rendering::VolumeStack* selectedCameraVolumeStack;

  __declspec(property(get = get_selectedComponent, put = set_selectedComponent)) int32_t selectedComponent;

  __declspec(property(get = get_selectedComponentType, put = set_selectedComponentType)) ::System::Type* selectedComponentType;

  /// @brief Method GetVolumeWeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t GetVolumeWeight(::UnityEngine::Rendering::Volume* volume);

  /// @brief Method GetVolumes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*> GetVolumes();

  /// @brief Method RefreshVolumes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool RefreshVolumes(::ArrayW<::UnityEngine::Rendering::Volume*, ::Array<::UnityEngine::Rendering::Volume*>*> newVolumes);

  /// @brief Method VolumeHasInfluence, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool VolumeHasInfluence(::UnityEngine::Rendering::Volume* volume);

  /// @brief Method get_cameras, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>* get_cameras();

  /// @brief Method get_selectedCamera, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_selectedCamera();

  /// @brief Method get_selectedCameraIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_selectedCameraIndex();

  /// @brief Method get_selectedCameraLayerMask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::LayerMask get_selectedCameraLayerMask();

  /// @brief Method get_selectedCameraPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_selectedCameraPosition();

  /// @brief Method get_selectedCameraVolumeStack, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeStack* get_selectedCameraVolumeStack();

  /// @brief Method get_selectedComponent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_selectedComponent();

  /// @brief Method get_selectedComponentType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_selectedComponentType();

  /// @brief Method set_selectedCameraIndex, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_selectedCameraIndex(int32_t value);

  /// @brief Method set_selectedComponent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_selectedComponent(int32_t value);

  /// @brief Method set_selectedComponentType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_selectedComponentType(::System::Type* value);

  // Ctor Parameters [CppParam { name: "", ty: "IVolumeDebugSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVolumeDebugSettings(IVolumeDebugSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12018 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IVolumeDebugSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IVolumeDebugSettings*, "UnityEngine.Rendering", "IVolumeDebugSettings");
