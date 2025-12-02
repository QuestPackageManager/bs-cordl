#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderTargetHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTargetHandle)
namespace System {
class Object;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderTargetHandle);
// Dependencies UnityEngine.Rendering.RenderTargetIdentifier
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderTargetHandle
struct CORDL_TYPE RenderTargetHandle {
public:
  // Declarations
  /// @brief Field CameraTarget, offset 0xffffffff, size 0x30
  __declspec(property(get = getStaticF_CameraTarget, put = setStaticF_CameraTarget)) ::UnityEngine::Rendering::Universal::RenderTargetHandle CameraTarget;

  __declspec(property(get = get_id, put = set_id)) int32_t id;

  __declspec(property(get = get_rtid, put = set_rtid)) ::UnityEngine::Rendering::RenderTargetIdentifier rtid;

  /// @brief Method Equals, addr 0x6698120, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6697fdc, size 0x144, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::Rendering::Universal::RenderTargetHandle other);

  /// @brief Method GetCameraTarget, addr 0x6697ca0, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::RenderTargetHandle GetCameraTarget(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method GetHashCode, addr 0x66981e8, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method HasInternalRenderTargetId, addr 0x6697f7c, size 0x60, virtual false, abstract: false, final false
  inline bool HasInternalRenderTargetId();

  /// @brief Method Identifier, addr 0x6697e70, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier Identifier();

  /// @brief Method Init, addr 0x6697df4, size 0x7c, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Rendering::RenderTargetIdentifier renderTargetIdentifier);

  /// @brief Method Init, addr 0x6697d7c, size 0x78, virtual false, abstract: false, final false
  inline void Init(::StringW shaderProperty);

  /// @brief Method .ctor, addr 0x6697a2c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RenderTargetIdentifier renderTargetIdentifier);

  /// @brief Method .ctor, addr 0x6697aa8, size 0x1f8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RTHandle* rtHandle);

  static inline ::UnityEngine::Rendering::Universal::RenderTargetHandle getStaticF_CameraTarget();

  /// @brief Method get_id, addr 0x66979f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_rtid, addr 0x6697a14, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_rtid();

  /// @brief Method op_Equality, addr 0x6698240, size 0x88, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::Universal::RenderTargetHandle c1, ::UnityEngine::Rendering::Universal::RenderTargetHandle c2);

  /// @brief Method op_Inequality, addr 0x66982c8, size 0x8c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::Universal::RenderTargetHandle c1, ::UnityEngine::Rendering::Universal::RenderTargetHandle c2);

  static inline void setStaticF_CameraTarget(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method set_id, addr 0x66979ec, size 0x8, virtual false, abstract: false, final false
  inline void set_id(int32_t value);

  /// @brief Method set_rtid, addr 0x66979fc, size 0x18, virtual false, abstract: false, final false
  inline void set_rtid(::UnityEngine::Rendering::RenderTargetIdentifier value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTargetHandle();

  // Ctor Parameters [CppParam { name: "_id_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_rtid_k__BackingField", ty:
  // "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }]
  constexpr RenderTargetHandle(int32_t _id_k__BackingField, ::UnityEngine::Rendering::RenderTargetIdentifier _rtid_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12914 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <id>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _id_k__BackingField;

  /// @brief Field <rtid>k__BackingField, offset: 0x8, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier _rtid_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderTargetHandle, _id_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderTargetHandle, _rtid_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderTargetHandle, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderTargetHandle, "UnityEngine.Rendering.Universal", "RenderTargetHandle");
