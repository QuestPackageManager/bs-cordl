#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalProjector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntity_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
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
struct DecalScaleMode;
}
namespace UnityEngine {
class Material;
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
class DecalProjector;
}
namespace UnityEngine::Rendering::Universal {
class DecalProjector_DecalProjectorAction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalProjector);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalProjector/DecalProjectorAction
class CORDL_TYPE DecalProjector_DecalProjectorAction : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6639d80, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6639da0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6639d6c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Rendering::Universal::DecalProjector* decalProjector);

  static inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6639c28, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalProjector_DecalProjectorAction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalProjector_DecalProjectorAction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalProjector_DecalProjectorAction(DecalProjector_DecalProjectorAction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalProjector_DecalProjectorAction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalProjector_DecalProjectorAction(DecalProjector_DecalProjectorAction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12655 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Rendering.Universal.DecalEntity, UnityEngine.Rendering.Universal.DecalScaleMode, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalProjector
class CORDL_TYPE DecalProjector : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using DecalProjectorAction = ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction;

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

  /// @brief Field m_DecalLayerMask, offset 0x50, size 0x4
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

  /// @brief Field m_OldMaterial, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OldMaterial, put = __cordl_internal_set_m_OldMaterial)) ::UnityW<::UnityEngine::Material> m_OldMaterial;

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

  __declspec(property(get = get_renderingLayerMask, put = set_renderingLayerMask)) uint32_t renderingLayerMask;

  __declspec(property(get = get_scaleMode, put = set_scaleMode)) ::UnityEngine::Rendering::Universal::DecalScaleMode scaleMode;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector3 size;

  __declspec(property(get = get_startAngleFade, put = set_startAngleFade)) float_t startAngleFade;

  __declspec(property(get = get_uvBias, put = set_uvBias)) ::UnityEngine::Vector2 uvBias;

  __declspec(property(get = get_uvScale, put = set_uvScale)) ::UnityEngine::Vector2 uvScale;

  __declspec(property(get = get_uvScaleBias)) ::UnityEngine::Vector4 uvScaleBias;

  /// @brief Method InitMaterial, addr 0x66398e0, size 0x64, virtual false, abstract: false, final false
  inline void InitMaterial();

  /// @brief Method IsValid, addr 0x6639a34, size 0x150, virtual false, abstract: false, final false
  inline bool IsValid();

  static inline ::UnityEngine::Rendering::Universal::DecalProjector* New_ctor();

  /// @brief Method OnDisable, addr 0x66399c4, size 0x70, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x6639944, size 0x80, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x663961c, size 0xec, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method UpdateAllDecalProperties, addr 0x6639b84, size 0x68, virtual false, abstract: false, final false
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

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_OldMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_OldMaterial();

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

  constexpr void __cordl_internal_set__decalEntity_k__BackingField(::UnityEngine::Rendering::Universal::DecalEntity value);

  constexpr void __cordl_internal_set_m_DecalLayerMask(uint32_t value);

  constexpr void __cordl_internal_set_m_DrawDistance(float_t value);

  constexpr void __cordl_internal_set_m_EndAngleFade(float_t value);

  constexpr void __cordl_internal_set_m_FadeFactor(float_t value);

  constexpr void __cordl_internal_set_m_FadeScale(float_t value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_Offset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_OldMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_ScaleMode(::UnityEngine::Rendering::Universal::DecalScaleMode value);

  constexpr void __cordl_internal_set_m_Size(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_StartAngleFade(float_t value);

  constexpr void __cordl_internal_set_m_UVBias(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_UVScale(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x6639bec, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onAllDecalPropertyChange, addr 0x66391cc, size 0xd0, virtual false, abstract: false, final false
  static inline void add_onAllDecalPropertyChange(::System::Action* value);

  /// @brief Method add_onDecalAdd, addr 0x6638cf4, size 0xcc, virtual false, abstract: false, final false
  static inline void add_onDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// @brief Method add_onDecalMaterialChange, addr 0x663936c, size 0xd0, virtual false, abstract: false, final false
  static inline void add_onDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// @brief Method add_onDecalPropertyChange, addr 0x663902c, size 0xd0, virtual false, abstract: false, final false
  static inline void add_onDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// @brief Method add_onDecalRemove, addr 0x6638e8c, size 0xd0, virtual false, abstract: false, final false
  static inline void add_onDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  static inline ::UnityW<::UnityEngine::Material> getStaticF__defaultMaterial_k__BackingField();

  static inline ::System::Action* getStaticF_onAllDecalPropertyChange();

  static inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* getStaticF_onDecalAdd();

  static inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* getStaticF_onDecalMaterialChange();

  static inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* getStaticF_onDecalPropertyChange();

  static inline ::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* getStaticF_onDecalRemove();

  /// @brief Method get_decalEntity, addr 0x66395fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalEntity get_decalEntity();

  /// @brief Method get_decalOffset, addr 0x66398c4, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_decalOffset();

  /// @brief Method get_decalSize, addr 0x66398b8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_decalSize();

  /// @brief Method get_defaultMaterial, addr 0x663950c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_defaultMaterial();

  /// @brief Method get_drawDistance, addr 0x6639708, size 0x8, virtual false, abstract: false, final false
  inline float_t get_drawDistance();

  /// @brief Method get_effectiveScale, addr 0x663983c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_effectiveScale();

  /// @brief Method get_endAngleFade, addr 0x6639778, size 0x8, virtual false, abstract: false, final false
  inline float_t get_endAngleFade();

  /// @brief Method get_fadeFactor, addr 0x6639814, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fadeFactor();

  /// @brief Method get_fadeScale, addr 0x6639724, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fadeScale();

  /// @brief Method get_isSupported, addr 0x66395a8, size 0x54, virtual false, abstract: false, final false
  static inline bool get_isSupported();

  /// @brief Method get_material, addr 0x663960c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_pivot, addr 0x66397e4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_pivot();

  /// @brief Method get_renderingLayerMask, addr 0x66397c4, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_renderingLayerMask();

  /// @brief Method get_scaleMode, addr 0x66397d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalScaleMode get_scaleMode();

  /// @brief Method get_size, addr 0x66397fc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method get_startAngleFade, addr 0x663974c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_startAngleFade();

  /// @brief Method get_uvBias, addr 0x66397b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_uvBias();

  /// @brief Method get_uvScale, addr 0x66397a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_uvScale();

  /// @brief Method get_uvScaleBias, addr 0x66398d4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_uvScaleBias();

  /// @brief Method remove_onAllDecalPropertyChange, addr 0x663929c, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_onAllDecalPropertyChange(::System::Action* value);

  /// @brief Method remove_onDecalAdd, addr 0x6638dc0, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_onDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// @brief Method remove_onDecalMaterialChange, addr 0x663943c, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_onDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// @brief Method remove_onDecalPropertyChange, addr 0x66390fc, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_onDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// @brief Method remove_onDecalRemove, addr 0x6638f5c, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_onDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  static inline void setStaticF__defaultMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_onAllDecalPropertyChange(::System::Action* value);

  static inline void setStaticF_onDecalAdd(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  static inline void setStaticF_onDecalMaterialChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  static inline void setStaticF_onDecalPropertyChange(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  static inline void setStaticF_onDecalRemove(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction* value);

  /// @brief Method set_decalEntity, addr 0x6639604, size 0x8, virtual false, abstract: false, final false
  inline void set_decalEntity(::UnityEngine::Rendering::Universal::DecalEntity value);

  /// @brief Method set_defaultMaterial, addr 0x6639558, size 0x50, virtual false, abstract: false, final false
  static inline void set_defaultMaterial(::UnityEngine::Material* value);

  /// @brief Method set_drawDistance, addr 0x6639710, size 0x14, virtual false, abstract: false, final false
  inline void set_drawDistance(float_t value);

  /// @brief Method set_endAngleFade, addr 0x6639780, size 0x24, virtual false, abstract: false, final false
  inline void set_endAngleFade(float_t value);

  /// @brief Method set_fadeFactor, addr 0x663981c, size 0x20, virtual false, abstract: false, final false
  inline void set_fadeFactor(float_t value);

  /// @brief Method set_fadeScale, addr 0x663972c, size 0x20, virtual false, abstract: false, final false
  inline void set_fadeScale(float_t value);

  /// @brief Method set_material, addr 0x6639614, size 0x8, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_pivot, addr 0x66397f0, size 0xc, virtual false, abstract: false, final false
  inline void set_pivot(::UnityEngine::Vector3 value);

  /// @brief Method set_renderingLayerMask, addr 0x66397cc, size 0x8, virtual false, abstract: false, final false
  inline void set_renderingLayerMask(uint32_t value);

  /// @brief Method set_scaleMode, addr 0x66397dc, size 0x8, virtual false, abstract: false, final false
  inline void set_scaleMode(::UnityEngine::Rendering::Universal::DecalScaleMode value);

  /// @brief Method set_size, addr 0x6639808, size 0xc, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  /// @brief Method set_startAngleFade, addr 0x6639754, size 0x24, virtual false, abstract: false, final false
  inline void set_startAngleFade(float_t value);

  /// @brief Method set_uvBias, addr 0x66397bc, size 0x8, virtual false, abstract: false, final false
  inline void set_uvBias(::UnityEngine::Vector2 value);

  /// @brief Method set_uvScale, addr 0x66397ac, size 0x8, virtual false, abstract: false, final false
  inline void set_uvScale(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalProjector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalProjector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalProjector(DecalProjector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalProjector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalProjector(DecalProjector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12656 };

  /// @brief Field <decalEntity>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntity ____decalEntity_k__BackingField;

  /// @brief Field m_Material, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_DrawDistance, offset: 0x30, size: 0x4, def value: None
  float_t ___m_DrawDistance;

  /// @brief Field m_FadeScale, offset: 0x34, size: 0x4, def value: None
  float_t ___m_FadeScale;

  /// @brief Field m_StartAngleFade, offset: 0x38, size: 0x4, def value: None
  float_t ___m_StartAngleFade;

  /// @brief Field m_EndAngleFade, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_EndAngleFade;

  /// @brief Field m_UVScale, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_UVScale;

  /// @brief Field m_UVBias, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_UVBias;

  /// @brief Field m_DecalLayerMask, offset: 0x50, size: 0x4, def value: None
  uint32_t ___m_DecalLayerMask;

  /// @brief Field m_ScaleMode, offset: 0x54, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DecalScaleMode ___m_ScaleMode;

  /// @brief Field m_Offset, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Offset;

  /// @brief Field m_Size, offset: 0x64, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Size;

  /// @brief Field m_FadeFactor, offset: 0x70, size: 0x4, def value: None
  float_t ___m_FadeFactor;

  /// @brief Field m_OldMaterial, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_OldMaterial;

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

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_DecalLayerMask) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_ScaleMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_Offset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_Size) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_FadeFactor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalProjector, ___m_OldMaterial) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalProjector, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalProjector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalProjector*, "UnityEngine.Rendering.Universal", "DecalProjector");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalProjector_DecalProjectorAction*, "UnityEngine.Rendering.Universal", "DecalProjector/DecalProjectorAction");
