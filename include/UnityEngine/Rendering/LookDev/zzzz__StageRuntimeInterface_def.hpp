#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LookDev/StageRuntimeInterface.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StageRuntimeInterface)
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace UnityEngine::Rendering::LookDev {
class StageRuntimeInterface;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::LookDev::StageRuntimeInterface);
// Dependencies System.Object
namespace UnityEngine::Rendering::LookDev {
// Is value type: false
// CS Name: UnityEngine.Rendering.LookDev.StageRuntimeInterface
class CORDL_TYPE StageRuntimeInterface : public ::System::Object {
public:
  // Declarations
  /// @brief Field SRPData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_SRPData, put = __cordl_internal_set_SRPData)) ::System::Object* SRPData;

  __declspec(property(get = get_camera)) ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field m_AddGameObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AddGameObject, put = __cordl_internal_set_m_AddGameObject)) ::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* m_AddGameObject;

  /// @brief Field m_GetCamera, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GetCamera, put = __cordl_internal_set_m_GetCamera)) ::System::Func_1<::UnityW<::UnityEngine::Camera>>* m_GetCamera;

  /// @brief Field m_GetSunLight, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GetSunLight, put = __cordl_internal_set_m_GetSunLight)) ::System::Func_1<::UnityW<::UnityEngine::Light>>* m_GetSunLight;

  __declspec(property(get = get_sunLight)) ::UnityW<::UnityEngine::Light> sunLight;

  /// @brief Method AddGameObject, addr 0x65df4cc, size 0x24, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> AddGameObject(bool persistent);

  static inline ::UnityEngine::Rendering::LookDev::StageRuntimeInterface* New_ctor(::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* AddGameObject,
                                                                                   ::System::Func_1<::UnityW<::UnityEngine::Camera>>* GetCamera,
                                                                                   ::System::Func_1<::UnityW<::UnityEngine::Light>>* GetSunLight);

  constexpr ::System::Object* const& __cordl_internal_get_SRPData() const;

  constexpr ::System::Object*& __cordl_internal_get_SRPData();

  constexpr ::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_AddGameObject() const;

  constexpr ::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_AddGameObject();

  constexpr ::System::Func_1<::UnityW<::UnityEngine::Camera>>* const& __cordl_internal_get_m_GetCamera() const;

  constexpr ::System::Func_1<::UnityW<::UnityEngine::Camera>>*& __cordl_internal_get_m_GetCamera();

  constexpr ::System::Func_1<::UnityW<::UnityEngine::Light>>* const& __cordl_internal_get_m_GetSunLight() const;

  constexpr ::System::Func_1<::UnityW<::UnityEngine::Light>>*& __cordl_internal_get_m_GetSunLight();

  constexpr void __cordl_internal_set_SRPData(::System::Object* value);

  constexpr void __cordl_internal_set_m_AddGameObject(::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_m_GetCamera(::System::Func_1<::UnityW<::UnityEngine::Camera>>* value);

  constexpr void __cordl_internal_set_m_GetSunLight(::System::Func_1<::UnityW<::UnityEngine::Light>>* value);

  /// @brief Method .ctor, addr 0x65df4c0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* AddGameObject, ::System::Func_1<::UnityW<::UnityEngine::Camera>>* GetCamera,
                    ::System::Func_1<::UnityW<::UnityEngine::Light>>* GetSunLight);

  /// @brief Method get_camera, addr 0x65df4f0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_camera();

  /// @brief Method get_sunLight, addr 0x65df510, size 0x20, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Light> get_sunLight();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StageRuntimeInterface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StageRuntimeInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StageRuntimeInterface(StageRuntimeInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StageRuntimeInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StageRuntimeInterface(StageRuntimeInterface const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12477 };

  /// @brief Field m_AddGameObject, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<bool, ::UnityW<::UnityEngine::GameObject>>* ___m_AddGameObject;

  /// @brief Field m_GetCamera, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<::UnityW<::UnityEngine::Camera>>* ___m_GetCamera;

  /// @brief Field m_GetSunLight, offset: 0x20, size: 0x8, def value: None
  ::System::Func_1<::UnityW<::UnityEngine::Light>>* ___m_GetSunLight;

  /// @brief Field SRPData, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___SRPData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LookDev::StageRuntimeInterface, ___m_AddGameObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LookDev::StageRuntimeInterface, ___m_GetCamera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LookDev::StageRuntimeInterface, ___m_GetSunLight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::LookDev::StageRuntimeInterface, ___SRPData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LookDev::StageRuntimeInterface, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::LookDev
NEED_NO_BOX(::UnityEngine::Rendering::LookDev::StageRuntimeInterface);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LookDev::StageRuntimeInterface*, "UnityEngine.Rendering.LookDev", "StageRuntimeInterface");
