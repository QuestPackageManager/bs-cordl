#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeDebugSettings_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeDebugSettings_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
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
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
template <typename T> class VolumeDebugSettings_1___c__DisplayClass22_0;
}
namespace UnityEngine::Rendering {
template <typename T> class VolumeDebugSettings_1___c;
}
namespace UnityEngine::Rendering {
class VolumeParameter;
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
template <typename T> class VolumeDebugSettings_1;
}
namespace UnityEngine::Rendering {
template <typename T> class VolumeDebugSettings_1___c;
}
namespace UnityEngine::Rendering {
template <typename T> class VolumeDebugSettings_1___c__DisplayClass22_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::VolumeDebugSettings_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::VolumeDebugSettings_1___c);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::VolumeDebugSettings_1___c__DisplayClass22_0);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeDebugSettings`1/<>c<T>
class CORDL_TYPE VolumeDebugSettings_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::VolumeDebugSettings_1___c<T>* __9;

  /// @brief Field <>9__34_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__34_0, put = setStaticF___9__34_0)) ::System::Func_2<::UnityW<::UnityEngine::Rendering::Volume>, bool>* __9__34_0;

  /// @brief Field <>9__36_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__36_0, put = setStaticF___9__36_0)) ::System::Func_2<::System::Reflection::FieldInfo*, bool>* __9__36_0;

  /// @brief Field <>9__43_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__43_0, put = setStaticF___9__43_0)) ::System::Func_2<::System::Type*, bool>* __9__43_0;

  /// @brief Field <>9__43_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__43_1, put = setStaticF___9__43_1)) ::System::Func_2<::System::Type*, bool>* __9__43_1;

  /// @brief Field <>9__43_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__43_2, put = setStaticF___9__43_2)) ::System::Func_2<::System::Type*, ::StringW>* __9__43_2;

  static inline ::UnityEngine::Rendering::VolumeDebugSettings_1___c<T>* New_ctor();

  /// @brief Method <GetStates>b__36_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _GetStates_b__36_0(::System::Reflection::FieldInfo* t);

  /// @brief Method <GetVolumes>b__34_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _GetVolumes_b__34_0(::UnityEngine::Rendering::Volume* v);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_componentTypes>b__43_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _get_componentTypes_b__43_0(::System::Type* t);

  /// @brief Method <get_componentTypes>b__43_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _get_componentTypes_b__43_1(::System::Type* t);

  /// @brief Method <get_componentTypes>b__43_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW _get_componentTypes_b__43_2(::System::Type* t);

  static inline ::UnityEngine::Rendering::VolumeDebugSettings_1___c<T>* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::UnityEngine::Rendering::Volume>, bool>* getStaticF___9__34_0();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* getStaticF___9__36_0();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__43_0();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__43_1();

  static inline ::System::Func_2<::System::Type*, ::StringW>* getStaticF___9__43_2();

  static inline void setStaticF___9(::UnityEngine::Rendering::VolumeDebugSettings_1___c<T>* value);

  static inline void setStaticF___9__34_0(::System::Func_2<::UnityW<::UnityEngine::Rendering::Volume>, bool>* value);

  static inline void setStaticF___9__36_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value);

  static inline void setStaticF___9__43_0(::System::Func_2<::System::Type*, bool>* value);

  static inline void setStaticF___9__43_1(::System::Func_2<::System::Type*, bool>* value);

  static inline void setStaticF___9__43_2(::System::Func_2<::System::Type*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeDebugSettings_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeDebugSettings_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeDebugSettings_1___c(VolumeDebugSettings_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeDebugSettings_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeDebugSettings_1___c(VolumeDebugSettings_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12030 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeDebugSettings`1/<>c__DisplayClass22_0<T>
class CORDL_TYPE VolumeDebugSettings_1___c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::System::Type* value;

  static inline ::UnityEngine::Rendering::VolumeDebugSettings_1___c__DisplayClass22_0<T>* New_ctor();

  constexpr ::System::Type* const& __cordl_internal_get_value() const;

  constexpr ::System::Type*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::System::Type* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <set_selectedComponentType>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _set_selectedComponentType_b__0(::System::ValueTuple_2<::StringW, ::System::Type*> t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeDebugSettings_1___c__DisplayClass22_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeDebugSettings_1___c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeDebugSettings_1___c__DisplayClass22_0(VolumeDebugSettings_1___c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeDebugSettings_1___c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeDebugSettings_1___c__DisplayClass22_0(VolumeDebugSettings_1___c__DisplayClass22_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12031 };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeDebugSettings`1<T>
class CORDL_TYPE VolumeDebugSettings_1 : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::VolumeDebugSettings_1___c<T>;

  using __c__DisplayClass22_0 = ::UnityEngine::Rendering::VolumeDebugSettings_1___c__DisplayClass22_0<T>;

  /// @brief Field <additionalCameraDatas>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__additionalCameraDatas_k__BackingField,
                      put = setStaticF__additionalCameraDatas_k__BackingField)) ::System::Collections::Generic::List_1<T>* _additionalCameraDatas_k__BackingField;

  /// @brief Field <selectedComponent>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedComponent_k__BackingField, put = __cordl_internal_set__selectedComponent_k__BackingField)) int32_t _selectedComponent_k__BackingField;

  /// @brief Field <targetRenderPipeline>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__targetRenderPipeline_k__BackingField,
                      put = __cordl_internal_set__targetRenderPipeline_k__BackingField)) ::System::Type* _targetRenderPipeline_k__BackingField;

  __declspec(property(get = get_cameras)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>* cameras;

  /// @brief Field m_Cameras, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Cameras, put = __cordl_internal_set_m_Cameras)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* m_Cameras;

  /// @brief Field m_CamerasArray, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CamerasArray, put = __cordl_internal_set_m_CamerasArray)) ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*>
      m_CamerasArray;

  /// @brief Field m_SelectedCameraIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectedCameraIndex, put = __cordl_internal_set_m_SelectedCameraIndex)) int32_t m_SelectedCameraIndex;

  /// @brief Field s_ComponentTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ComponentTypes, put = setStaticF_s_ComponentTypes)) ::System::Collections::Generic::List_1<::System::Type*>* s_ComponentTypes;

  /// @brief Field savedStates, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_savedStates, put = __cordl_internal_set_savedStates)) ::System::Object* savedStates;

  __declspec(property(get = get_selectedCamera)) ::UnityW<::UnityEngine::Camera> selectedCamera;

  __declspec(property(get = get_selectedCameraIndex, put = set_selectedCameraIndex)) int32_t selectedCameraIndex;

  __declspec(property(get = get_selectedCameraLayerMask)) ::UnityEngine::LayerMask selectedCameraLayerMask;

  __declspec(property(get = get_selectedCameraPosition)) ::UnityEngine::Vector3 selectedCameraPosition;

  __declspec(property(get = get_selectedCameraVolumeStack)) ::UnityEngine::Rendering::VolumeStack* selectedCameraVolumeStack;

  __declspec(property(get = get_selectedComponent, put = set_selectedComponent)) int32_t selectedComponent;

  __declspec(property(get = get_selectedComponentType, put = set_selectedComponentType)) ::System::Type* selectedComponentType;

  __declspec(property(get = get_targetRenderPipeline)) ::System::Type* targetRenderPipeline;

  __declspec(property(get = get_volumeComponentsPathAndType)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* volumeComponentsPathAndType;

  /// @brief Field volumes, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_volumes,
                      put = __cordl_internal_set_volumes)) ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*>
      volumes;

  /// @brief Field weights, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_weights, put = __cordl_internal_set_weights)) ::ArrayW<float_t, ::Array<float_t>*> weights;

  /// @brief Convert operator to "::UnityEngine::Rendering::IVolumeDebugSettings"
  constexpr operator ::UnityEngine::Rendering::IVolumeDebugSettings*() noexcept;

  /// @brief Method ChangedStates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ChangedStates(::System::Object* newStates);

  /// @brief Method ComponentDisplayName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::StringW ComponentDisplayName(::System::Type* component);

  /// @brief Method ComputeWeight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t ComputeWeight(::UnityEngine::Rendering::Volume* volume, ::UnityEngine::Vector3 triggerPos);

  /// @brief Method GetParameter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeParameter* GetParameter(::UnityEngine::Rendering::VolumeComponent* component, ::System::Reflection::FieldInfo* field);

  /// @brief Method GetParameter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeParameter* GetParameter(::System::Reflection::FieldInfo* field);

  /// @brief Method GetParameter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeParameter* GetParameter(::UnityEngine::Rendering::Volume* volume, ::System::Reflection::FieldInfo* field);

  /// @brief Method GetStates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* GetStates();

  /// @brief Method GetVolumeWeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline float_t GetVolumeWeight(::UnityEngine::Rendering::Volume* volume);

  /// @brief Method GetVolumes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*> GetVolumes();

  static inline ::UnityEngine::Rendering::VolumeDebugSettings_1<T>* New_ctor();

  /// @brief Method RefreshVolumes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool RefreshVolumes(::ArrayW<::UnityEngine::Rendering::Volume*, ::Array<::UnityEngine::Rendering::Volume*>*> newVolumes);

  /// @brief Method RegisterCamera, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void RegisterCamera(T additionalCamera);

  /// @brief Method UnRegisterCamera, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void UnRegisterCamera(T additionalCamera);

  /// @brief Method VolumeHasInfluence, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool VolumeHasInfluence(::UnityEngine::Rendering::Volume* volume);

  constexpr int32_t const& __cordl_internal_get__selectedComponent_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__selectedComponent_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__targetRenderPipeline_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__targetRenderPipeline_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* const& __cordl_internal_get_m_Cameras() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*& __cordl_internal_get_m_Cameras();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> const& __cordl_internal_get_m_CamerasArray() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*>& __cordl_internal_get_m_CamerasArray();

  constexpr int32_t const& __cordl_internal_get_m_SelectedCameraIndex() const;

  constexpr int32_t& __cordl_internal_get_m_SelectedCameraIndex();

  constexpr ::System::Object* const& __cordl_internal_get_savedStates() const;

  constexpr ::System::Object*& __cordl_internal_get_savedStates();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*> const& __cordl_internal_get_volumes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*>& __cordl_internal_get_volumes();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_weights() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_weights();

  constexpr void __cordl_internal_set__selectedComponent_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__targetRenderPipeline_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set_m_Cameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* value);

  constexpr void __cordl_internal_set_m_CamerasArray(::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> value);

  constexpr void __cordl_internal_set_m_SelectedCameraIndex(int32_t value);

  constexpr void __cordl_internal_set_savedStates(::System::Object* value);

  constexpr void __cordl_internal_set_volumes(::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*> value);

  constexpr void __cordl_internal_set_weights(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<T>* getStaticF__additionalCameraDatas_k__BackingField();

  static inline ::System::Collections::Generic::List_1<::System::Type*>* getStaticF_s_ComponentTypes();

  /// @brief Method get_additionalCameraDatas, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<T>* get_additionalCameraDatas();

  /// @brief Method get_cameras, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Camera>>* get_cameras();

  /// @brief Method get_componentTypes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Type*>* get_componentTypes();

  /// @brief Method get_selectedCamera, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Camera> get_selectedCamera();

  /// @brief Method get_selectedCameraIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_selectedCameraIndex();

  /// @brief Method get_selectedCameraLayerMask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::LayerMask get_selectedCameraLayerMask();

  /// @brief Method get_selectedCameraPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_selectedCameraPosition();

  /// @brief Method get_selectedCameraVolumeStack, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeStack* get_selectedCameraVolumeStack();

  /// @brief Method get_selectedComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_selectedComponent();

  /// @brief Method get_selectedComponentType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* get_selectedComponentType();

  /// @brief Method get_targetRenderPipeline, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_targetRenderPipeline();

  /// @brief Method get_volumeComponentsPathAndType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, ::System::Type*>>* get_volumeComponentsPathAndType();

  /// @brief Convert to "::UnityEngine::Rendering::IVolumeDebugSettings"
  constexpr ::UnityEngine::Rendering::IVolumeDebugSettings* i___UnityEngine__Rendering__IVolumeDebugSettings() noexcept;

  static inline void setStaticF__additionalCameraDatas_k__BackingField(::System::Collections::Generic::List_1<T>* value);

  static inline void setStaticF_s_ComponentTypes(::System::Collections::Generic::List_1<::System::Type*>* value);

  /// @brief Method set_additionalCameraDatas, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void set_additionalCameraDatas(::System::Collections::Generic::List_1<T>* value);

  /// @brief Method set_selectedCameraIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_selectedCameraIndex(int32_t value);

  /// @brief Method set_selectedComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_selectedComponent(int32_t value);

  /// @brief Method set_selectedComponentType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_selectedComponentType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeDebugSettings_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeDebugSettings_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeDebugSettings_1(VolumeDebugSettings_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeDebugSettings_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeDebugSettings_1(VolumeDebugSettings_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12032 };

  /// @brief Field <selectedComponent>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____selectedComponent_k__BackingField;

  /// @brief Field m_SelectedCameraIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_SelectedCameraIndex;

  /// @brief Field m_CamerasArray, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*> ___m_CamerasArray;

  /// @brief Field m_Cameras, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* ___m_Cameras;

  /// @brief Field <targetRenderPipeline>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ____targetRenderPipeline_k__BackingField;

  /// @brief Field weights, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___weights;

  /// @brief Field volumes, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Rendering::Volume>, ::Array<::UnityW<::UnityEngine::Rendering::Volume>>*> ___volumes;

  /// @brief Field savedStates, offset: 0x40, size: 0x8, def value: None
  ::System::Object* ___savedStates;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::VolumeDebugSettings_1, "UnityEngine.Rendering", "VolumeDebugSettings`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::VolumeDebugSettings_1___c, "UnityEngine.Rendering", "VolumeDebugSettings`1/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::VolumeDebugSettings_1___c__DisplayClass22_0, "UnityEngine.Rendering", "VolumeDebugSettings`1/<>c__DisplayClass22_0");
