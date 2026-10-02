#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalProjector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntity_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalProjector)
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::Universal {
struct DecalEntity;
}
namespace UnityEngine::Rendering::Universal {
class DecalProjector_DecalProjectorAction;
}
namespace UnityEngine::Rendering::Universal {
struct DecalProjector_Version;
}
namespace UnityEngine::Rendering::Universal {
struct DecalScaleMode;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderingLayerMask;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DecalProjector_Version;
}
namespace UnityEngine::Rendering::Universal {
class DecalProjector;
}
namespace UnityEngine::Rendering::Universal {
class DecalProjector_DecalProjectorAction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DecalProjector_Version);
MARK_REF_T(::UnityEngine::Rendering::Universal::DecalProjector*);
MARK_REF_T(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::DecalProjector_Version, "UnityEngine.Rendering.Universal", "DecalProjector/Version");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::DecalProjector*, "UnityEngine.Rendering.Universal", "DecalProjector");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*, "UnityEngine.Rendering.Universal", "DecalProjector/DecalProjectorAction");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalProjector/DecalProjectorAction
class CORDL_TYPE DecalProjector_DecalProjectorAction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6c913d4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6c913f4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6c913c0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);

  static inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6c9127c, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalProjector_DecalProjectorAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalProjector_DecalProjectorAction", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalProjector_DecalProjectorAction(DecalProjector_DecalProjectorAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalProjector_DecalProjectorAction", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalProjector_DecalProjectorAction(DecalProjector_DecalProjectorAction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12902 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DecalProjector/Version
struct CORDL_TYPE DecalProjector_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DecalProjector_Version_Unwrapped
  enum struct __DecalProjector_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_RenderingLayerMask = static_cast<int32_t>(0x1),
    __E_Count = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DecalProjector_Version_Unwrapped() const noexcept {
    return static_cast<__DecalProjector_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalProjector_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr DecalProjector_Version(int32_t value__) noexcept;

  /// @brief Field Count value: I32(2)
  static ::UnityEngine::Rendering::Universal::DecalProjector_Version const Count;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::Universal::DecalProjector_Version const Initial;

  /// @brief Field RenderingLayerMask value: I32(1)
  static ::UnityEngine::Rendering::Universal::DecalProjector_Version const RenderingLayerMask;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12903 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalProjector_Version) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [ExecuteAlways]
// [AddComponentMenu("Rendering/URP Decal Projector")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rendering.Universal.DecalEntity, UnityEngine.Rendering.Universal.DecalProjector::Version, UnityEngine.Rendering.Universal.DecalScaleMode,
// UnityEngine.RenderingLayerMask, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalProjector
class CORDL_TYPE DecalProjector : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using DecalProjectorAction = ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction;

  using Version = ::UnityEngine::Rendering::Universal::DecalProjector_Version;

  /// @brief Field <decalEntity>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__decalEntity_k__BackingField,
                      put = __cordl_internal_set__decalEntity_k__BackingField)) ::UnityEngine::Rendering::Universal::DecalEntity _decalEntity_k__BackingField;

  /// @brief Field <defaultMaterial>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__defaultMaterial_k__BackingField, put = setStaticF__defaultMaterial_k__BackingField)) ::UnityW<::UnityEngine::Material> _defaultMaterial_k__BackingField;

  __declspec(property(get = get_decalEntity, put = set_decalEntity)) ::UnityEngine::Rendering::Universal::DecalEntity decalEntity;

  __declspec(property(get = get_decalOffset)) ::UnityEngine::Vector3 decalOffset;

  __declspec(property(get = get_decalSize)) ::UnityEngine::Vector3 decalSize;

  __declspec(property(get = get_drawDistance, put = set_drawDistance)) float_t drawDistance;

  __declspec(property(get = get_effectiveScale)) ::UnityEngine::Vector3 effectiveScale;

  __declspec(property(get = get_endAngleFade, put = set_endAngleFade)) float_t endAngleFade;

  __declspec(property(get = get_fadeFactor, put = set_fadeFactor)) float_t fadeFactor;

  __declspec(property(get = get_fadeScale, put = set_fadeScale)) float_t fadeScale;

  /// @brief Field m_DecalLayerMask, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DecalLayerMask, put = __cordl_internal_set_m_DecalLayerMask)) uint32_t m_DecalLayerMask;

  /// @brief Field m_DrawDistance, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DrawDistance, put = __cordl_internal_set_m_DrawDistance)) float_t m_DrawDistance;

  /// @brief Field m_EndAngleFade, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EndAngleFade, put = __cordl_internal_set_m_EndAngleFade)) float_t m_EndAngleFade;

  /// @brief Field m_FadeFactor, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FadeFactor, put = __cordl_internal_set_m_FadeFactor)) float_t m_FadeFactor;

  /// @brief Field m_FadeScale, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FadeScale, put = __cordl_internal_set_m_FadeScale)) float_t m_FadeScale;

  /// @brief Field m_Material, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material)) ::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_Offset, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Offset, put = __cordl_internal_set_m_Offset)) ::UnityEngine::Vector3 m_Offset;

  /// @brief Field m_OldDrawDistance, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OldDrawDistance, put = __cordl_internal_set_m_OldDrawDistance)) float_t m_OldDrawDistance;

  /// @brief Field m_OldEndAngleFade, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OldEndAngleFade, put = __cordl_internal_set_m_OldEndAngleFade)) float_t m_OldEndAngleFade;

  /// @brief Field m_OldFadeFactor, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OldFadeFactor, put = __cordl_internal_set_m_OldFadeFactor)) float_t m_OldFadeFactor;

  /// @brief Field m_OldFadeScale, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OldFadeScale, put = __cordl_internal_set_m_OldFadeScale)) float_t m_OldFadeScale;

  /// @brief Field m_OldMaterial, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OldMaterial, put = __cordl_internal_set_m_OldMaterial)) ::UnityW<::UnityEngine::Material> m_OldMaterial;

  /// @brief Field m_OldOffset, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get_m_OldOffset, put = __cordl_internal_set_m_OldOffset)) ::UnityEngine::Vector3 m_OldOffset;

  /// @brief Field m_OldScaleMode, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OldScaleMode, put = __cordl_internal_set_m_OldScaleMode)) ::UnityEngine::Rendering::Universal::DecalScaleMode m_OldScaleMode;

  /// @brief Field m_OldSize, offset 0xb0, size 0xc
  __declspec(property(get = __cordl_internal_get_m_OldSize, put = __cordl_internal_set_m_OldSize)) ::UnityEngine::Vector3 m_OldSize;

  /// @brief Field m_OldStartAngleFade, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OldStartAngleFade, put = __cordl_internal_set_m_OldStartAngleFade)) float_t m_OldStartAngleFade;

  /// @brief Field m_OldUVBias, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OldUVBias, put = __cordl_internal_set_m_OldUVBias)) ::UnityEngine::Vector2 m_OldUVBias;

  /// @brief Field m_OldUVScale, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OldUVScale, put = __cordl_internal_set_m_OldUVScale)) ::UnityEngine::Vector2 m_OldUVScale;

  /// @brief Field m_RenderingLayerMask, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingLayerMask, put = __cordl_internal_set_m_RenderingLayerMask)) ::UnityEngine::RenderingLayerMask m_RenderingLayerMask;

  /// @brief Field m_ScaleMode, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScaleMode, put = __cordl_internal_set_m_ScaleMode)) ::UnityEngine::Rendering::Universal::DecalScaleMode m_ScaleMode;

  /// @brief Field m_Size, offset 0x64, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Size, put = __cordl_internal_set_m_Size)) ::UnityEngine::Vector3 m_Size;

  /// @brief Field m_StartAngleFade, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StartAngleFade, put = __cordl_internal_set_m_StartAngleFade)) float_t m_StartAngleFade;

  /// @brief Field m_UVBias, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UVBias, put = __cordl_internal_set_m_UVBias)) ::UnityEngine::Vector2 m_UVBias;

  /// @brief Field m_UVScale, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UVScale, put = __cordl_internal_set_m_UVScale)) ::UnityEngine::Vector2 m_UVScale;

  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field onAllDecalPropertyChange, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onAllDecalPropertyChange, put = setStaticF_onAllDecalPropertyChange)) ::System::Action* onAllDecalPropertyChange;

  /// @brief Field onDecalAdd, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onDecalAdd, put = setStaticF_onDecalAdd)) ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* onDecalAdd;

  /// @brief Field onDecalMaterialChange, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onDecalMaterialChange, put = setStaticF_onDecalMaterialChange)) ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* onDecalMaterialChange;

  /// @brief Field onDecalPropertyChange, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onDecalPropertyChange, put = setStaticF_onDecalPropertyChange)) ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* onDecalPropertyChange;

  /// @brief Field onDecalRemove, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onDecalRemove, put = setStaticF_onDecalRemove)) ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* onDecalRemove;

  __declspec(property(get = get_pivot, put = set_pivot)) ::UnityEngine::Vector3 pivot;

  __declspec(property(get = get_renderingLayerMask, put = set_renderingLayerMask)) ::UnityEngine::RenderingLayerMask renderingLayerMask;

  __declspec(property(get = get_scaleMode, put = set_scaleMode)) ::UnityEngine::Rendering::Universal::DecalScaleMode scaleMode;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector3 size;

  __declspec(property(get = get_startAngleFade, put = set_startAngleFade)) float_t startAngleFade;

  __declspec(property(get = get_uvBias, put = set_uvBias)) ::UnityEngine::Vector2 uvBias;

  __declspec(property(get = get_uvScale, put = set_uvScale)) ::UnityEngine::Vector2 uvScale;

  __declspec(property(get = get_uvScaleBias)) ::UnityEngine::Vector4 uvScaleBias;

  /// @brief Field version, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) ::UnityEngine::Rendering::Universal::DecalProjector_Version version;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method InitMaterial, addr 0x6c90c14, size 0x64, virtual false, abstract: false, final false
  inline void InitMaterial();

  /// @brief Method IsValid, addr 0x6c90f20, size 0x150, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::UnityEngine::Rendering::Universal::DecalProjector* New_ctor();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x6c90d68, size 0x1b8, virtual false, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x6c90cf8, size 0x70, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6c90c78, size 0x80, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x6c90920, size 0x11c, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x6c910f0, size 0x80, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x6c910d8, size 0x18, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UpdateAllDecalProperties, addr 0x6c91070, size 0x68, virtual false, abstract: false, final false
  static inline void UpdateAllDecalProperties();

  constexpr ::UnityEngine::Rendering::Universal::DecalEntity const& __cordl_internal_get__decalEntity_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalEntity& __cordl_internal_get__decalEntity_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get_m_DecalLayerMask() const;

  constexpr uint32_t& __cordl_internal_get_m_DecalLayerMask();

  constexpr float_t const& __cordl_internal_get_m_DrawDistance() const;

  constexpr float_t& __cordl_internal_get_m_DrawDistance();

  constexpr float_t const& __cordl_internal_get_m_EndAngleFade() const;

  constexpr float_t& __cordl_internal_get_m_EndAngleFade();

  constexpr float_t const& __cordl_internal_get_m_FadeFactor() const;

  constexpr float_t& __cordl_internal_get_m_FadeFactor();

  constexpr float_t const& __cordl_internal_get_m_FadeScale() const;

  constexpr float_t& __cordl_internal_get_m_FadeScale();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Offset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Offset();

  constexpr float_t const& __cordl_internal_get_m_OldDrawDistance() const;

  constexpr float_t& __cordl_internal_get_m_OldDrawDistance();

  constexpr float_t const& __cordl_internal_get_m_OldEndAngleFade() const;

  constexpr float_t& __cordl_internal_get_m_OldEndAngleFade();

  constexpr float_t const& __cordl_internal_get_m_OldFadeFactor() const;

  constexpr float_t& __cordl_internal_get_m_OldFadeFactor();

  constexpr float_t const& __cordl_internal_get_m_OldFadeScale() const;

  constexpr float_t& __cordl_internal_get_m_OldFadeScale();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_OldMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_OldMaterial();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_OldOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_OldOffset();

  constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode const& __cordl_internal_get_m_OldScaleMode() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode& __cordl_internal_get_m_OldScaleMode();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_OldSize() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_OldSize();

  constexpr float_t const& __cordl_internal_get_m_OldStartAngleFade() const;

  constexpr float_t& __cordl_internal_get_m_OldStartAngleFade();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_OldUVBias() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_OldUVBias();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_OldUVScale() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_OldUVScale();

  constexpr ::UnityEngine::RenderingLayerMask const& __cordl_internal_get_m_RenderingLayerMask() const;

  constexpr ::UnityEngine::RenderingLayerMask& __cordl_internal_get_m_RenderingLayerMask();

  constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode const& __cordl_internal_get_m_ScaleMode() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScaleMode& __cordl_internal_get_m_ScaleMode();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Size() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Size();

  constexpr float_t const& __cordl_internal_get_m_StartAngleFade() const;

  constexpr float_t& __cordl_internal_get_m_StartAngleFade();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_UVBias() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_UVBias();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_UVScale() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_UVScale();

  constexpr ::UnityEngine::Rendering::Universal::DecalProjector_Version const& __cordl_internal_get_version() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalProjector_Version& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__decalEntity_k__BackingField(::UnityEngine::Rendering::Universal::DecalEntity value);

  constexpr void __cordl_internal_set_m_DecalLayerMask(uint32_t value);

  constexpr void __cordl_internal_set_m_DrawDistance(float_t value);

  constexpr void __cordl_internal_set_m_EndAngleFade(float_t value);

  constexpr void __cordl_internal_set_m_FadeFactor(float_t value);

  constexpr void __cordl_internal_set_m_FadeScale(float_t value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_Offset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_OldDrawDistance(float_t value);

  constexpr void __cordl_internal_set_m_OldEndAngleFade(float_t value);

  constexpr void __cordl_internal_set_m_OldFadeFactor(float_t value);

  constexpr void __cordl_internal_set_m_OldFadeScale(float_t value);

  constexpr void __cordl_internal_set_m_OldMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_OldOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_OldScaleMode(::UnityEngine::Rendering::Universal::DecalScaleMode value);

  constexpr void __cordl_internal_set_m_OldSize(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_OldStartAngleFade(float_t value);

  constexpr void __cordl_internal_set_m_OldUVBias(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_OldUVScale(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_RenderingLayerMask(::UnityEngine::RenderingLayerMask value);

  constexpr void __cordl_internal_set_m_ScaleMode(::UnityEngine::Rendering::Universal::DecalScaleMode value);

  constexpr void __cordl_internal_set_m_Size(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_StartAngleFade(float_t value);

  constexpr void __cordl_internal_set_m_UVBias(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_UVScale(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_version(::UnityEngine::Rendering::Universal::DecalProjector_Version value);

  /// @brief Method .ctor, addr 0x6c91170, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method add_onAllDecalPropertyChange, addr 0x6c904d0, size 0xd0, virtual false, abstract: false, final false
  static inline void add_onAllDecalPropertyChange(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method add_onDecalAdd, addr 0x6c8fff8, size 0xcc, virtual false, abstract: false, final false
  static inline void add_onDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// [CompilerGenerated]
  /// @brief Method add_onDecalMaterialChange, addr 0x6c90670, size 0xd0, virtual false, abstract: false, final false
  static inline void add_onDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// [CompilerGenerated]
  /// @brief Method add_onDecalPropertyChange, addr 0x6c90330, size 0xd0, virtual false, abstract: false, final false
  static inline void add_onDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// [CompilerGenerated]
  /// @brief Method add_onDecalRemove, addr 0x6c90190, size 0xd0, virtual false, abstract: false, final false
  static inline void add_onDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  static inline ::UnityW<::UnityEngine::Material> getStaticF__defaultMaterial_k__BackingField();

  static inline ::System::Action* getStaticF_onAllDecalPropertyChange();

  static inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* getStaticF_onDecalAdd();

  static inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* getStaticF_onDecalMaterialChange();

  static inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* getStaticF_onDecalPropertyChange();

  static inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* getStaticF_onDecalRemove();

  /// [CompilerGenerated]
  /// @brief Method get_decalEntity, addr 0x6c90900, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalEntity get_decalEntity();

  /// @brief Method get_decalOffset, addr 0x6c90bf8, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_decalOffset();

  /// @brief Method get_decalSize, addr 0x6c90bec, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_decalSize();

  /// [CompilerGenerated]
  /// @brief Method get_defaultMaterial, addr 0x6c90810, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_defaultMaterial();

  /// @brief Method get_drawDistance, addr 0x6c90a3c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_drawDistance();

  /// @brief Method get_effectiveScale, addr 0x6c90b70, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_effectiveScale();

  /// @brief Method get_endAngleFade, addr 0x6c90aac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_endAngleFade();

  /// @brief Method get_fadeFactor, addr 0x6c90b48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fadeFactor();

  /// @brief Method get_fadeScale, addr 0x6c90a58, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fadeScale();

  /// @brief Method get_isSupported, addr 0x6c908ac, size 0x54, virtual false, abstract: false, final false
  static inline bool get_isSupported();

  /// @brief Method get_material, addr 0x6c90910, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_pivot, addr 0x6c90b18, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivot();

  /// @brief Method get_renderingLayerMask, addr 0x6c90af8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderingLayerMask get_renderingLayerMask();

  /// @brief Method get_scaleMode, addr 0x6c90b08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalScaleMode get_scaleMode();

  /// @brief Method get_size, addr 0x6c90b30, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method get_startAngleFade, addr 0x6c90a80, size 0x8, virtual false, abstract: false, final false
  inline float_t get_startAngleFade();

  /// @brief Method get_uvBias, addr 0x6c90ae8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_uvBias();

  /// @brief Method get_uvScale, addr 0x6c90ad8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_uvScale();

  /// @brief Method get_uvScaleBias, addr 0x6c90c08, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_uvScaleBias();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// [CompilerGenerated]
  /// @brief Method remove_onAllDecalPropertyChange, addr 0x6c905a0, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_onAllDecalPropertyChange(::System::Action* value);

  /// [CompilerGenerated]
  /// @brief Method remove_onDecalAdd, addr 0x6c900c4, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_onDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// [CompilerGenerated]
  /// @brief Method remove_onDecalMaterialChange, addr 0x6c90740, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_onDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// [CompilerGenerated]
  /// @brief Method remove_onDecalPropertyChange, addr 0x6c90400, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_onDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// [CompilerGenerated]
  /// @brief Method remove_onDecalRemove, addr 0x6c90260, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_onDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  static inline void setStaticF__defaultMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_onAllDecalPropertyChange(::System::Action* value);

  static inline void setStaticF_onDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  static inline void setStaticF_onDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  static inline void setStaticF_onDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  static inline void setStaticF_onDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// [CompilerGenerated]
  /// @brief Method set_decalEntity, addr 0x6c90908, size 0x8, virtual false, abstract: false, final false
  inline void set_decalEntity(::UnityEngine::Rendering::Universal::DecalEntity value);

  /// [CompilerGenerated]
  /// @brief Method set_defaultMaterial, addr 0x6c9085c, size 0x50, virtual false, abstract: false, final false
  static inline void set_defaultMaterial(::UnityEngine::Material* value);

  /// @brief Method set_drawDistance, addr 0x6c90a44, size 0x14, virtual false, abstract: false, final false
  inline void set_drawDistance(float_t value);

  /// @brief Method set_endAngleFade, addr 0x6c90ab4, size 0x24, virtual false, abstract: false, final false
  inline void set_endAngleFade(float_t value);

  /// @brief Method set_fadeFactor, addr 0x6c90b50, size 0x20, virtual false, abstract: false, final false
  inline void set_fadeFactor(float_t value);

  /// @brief Method set_fadeScale, addr 0x6c90a60, size 0x20, virtual false, abstract: false, final false
  inline void set_fadeScale(float_t value);

  /// @brief Method set_material, addr 0x6c90918, size 0x8, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_pivot, addr 0x6c90b24, size 0xc, virtual false, abstract: false, final false
  inline void set_pivot(::UnityEngine::Vector3 value);

  /// @brief Method set_renderingLayerMask, addr 0x6c90b00, size 0x8, virtual false, abstract: false, final false
  inline void set_renderingLayerMask(::UnityEngine::RenderingLayerMask value);

  /// @brief Method set_scaleMode, addr 0x6c90b10, size 0x8, virtual false, abstract: false, final false
  inline void set_scaleMode(::UnityEngine::Rendering::Universal::DecalScaleMode value);

  /// @brief Method set_size, addr 0x6c90b3c, size 0xc, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  /// @brief Method set_startAngleFade, addr 0x6c90a88, size 0x24, virtual false, abstract: false, final false
  inline void set_startAngleFade(float_t value);

  /// @brief Method set_uvBias, addr 0x6c90af0, size 0x8, virtual false, abstract: false, final false
  inline void set_uvBias(::UnityEngine::Vector2 value);

  /// @brief Method set_uvScale, addr 0x6c90ae0, size 0x8, virtual false, abstract: false, final false
  inline void set_uvScale(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalProjector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalProjector", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalProjector(DecalProjector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalProjector", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalProjector(DecalProjector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12904 };

  /// [CompilerGenerated]
  /// @brief Field <decalEntity>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntity ____decalEntity_k__BackingField;

  /// [SerializeField]
  /// @brief Field m_Material, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// [SerializeField]
  /// @brief Field m_DrawDistance, offset: 0x30, size: 0x4, def value: None
  float_t ___m_DrawDistance;

  /// [SerializeField]
  /// [Range(0, 1)]
  /// @brief Field m_FadeScale, offset: 0x34, size: 0x4, def value: None
  float_t ___m_FadeScale;

  /// [SerializeField]
  /// [Range(0, 180)]
  /// @brief Field m_StartAngleFade, offset: 0x38, size: 0x4, def value: None
  float_t ___m_StartAngleFade;

  /// [SerializeField]
  /// [Range(0, 180)]
  /// @brief Field m_EndAngleFade, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_EndAngleFade;

  /// [SerializeField]
  /// @brief Field m_UVScale, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_UVScale;

  /// [SerializeField]
  /// @brief Field m_UVBias, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_UVBias;

  /// [SerializeField]
  /// @brief Field m_RenderingLayerMask, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::RenderingLayerMask ___m_RenderingLayerMask;

  /// [SerializeField]
  /// @brief Field m_ScaleMode, offset: 0x54, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DecalScaleMode ___m_ScaleMode;

  /// [SerializeField]
  /// @brief Field m_Offset, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Offset;

  /// [SerializeField]
  /// @brief Field m_Size, offset: 0x64, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Size;

  /// [SerializeField]
  /// [Range(0, 1)]
  /// @brief Field m_FadeFactor, offset: 0x70, size: 0x4, def value: None
  float_t ___m_FadeFactor;

  /// @brief Field m_OldMaterial, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_OldMaterial;

  /// @brief Field m_OldDrawDistance, offset: 0x80, size: 0x4, def value: None
  float_t ___m_OldDrawDistance;

  /// @brief Field m_OldFadeScale, offset: 0x84, size: 0x4, def value: None
  float_t ___m_OldFadeScale;

  /// @brief Field m_OldStartAngleFade, offset: 0x88, size: 0x4, def value: None
  float_t ___m_OldStartAngleFade;

  /// @brief Field m_OldEndAngleFade, offset: 0x8c, size: 0x4, def value: None
  float_t ___m_OldEndAngleFade;

  /// @brief Field m_OldUVScale, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_OldUVScale;

  /// @brief Field m_OldUVBias, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_OldUVBias;

  /// @brief Field m_OldScaleMode, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DecalScaleMode ___m_OldScaleMode;

  /// @brief Field m_OldOffset, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_OldOffset;

  /// @brief Field m_OldSize, offset: 0xb0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_OldSize;

  /// @brief Field m_OldFadeFactor, offset: 0xbc, size: 0x4, def value: None
  float_t ___m_OldFadeFactor;

  /// [SerializeField]
  /// @brief Field version, offset: 0xc0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DecalProjector_Version ___version;

  /// [SerializeField]
  /// [Obsolete("This field is only kept for migration purpose. Use m_RenderingLayersMask instead. #from(6000.2)")]
  /// @brief Field m_DecalLayerMask, offset: 0xc4, size: 0x4, def value: None
  uint32_t ___m_DecalLayerMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ____decalEntity_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_Material) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_DrawDistance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_FadeScale) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_StartAngleFade) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_EndAngleFade) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_UVScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_UVBias) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_RenderingLayerMask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_ScaleMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_Offset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_Size) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_FadeFactor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldMaterial) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldDrawDistance) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldFadeScale) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldStartAngleFade) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldEndAngleFade) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldUVScale) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldUVBias) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldScaleMode) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldOffset) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldSize) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldFadeFactor) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___version) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_DecalLayerMask) == 0xc4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalProjector) == 0xc8, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
