#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeComponent)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
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
namespace UnityEngine::Rendering {
class VolumeComponent_Indent;
}
namespace UnityEngine::Rendering {
class VolumeComponent___c;
}
namespace UnityEngine::Rendering {
class VolumeParameter;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VolumeComponent;
}
namespace UnityEngine::Rendering {
class VolumeComponent_Indent;
}
namespace UnityEngine::Rendering {
class VolumeComponent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeComponent);
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeComponent_Indent);
MARK_REF_PTR_T(::UnityEngine::Rendering::VolumeComponent___c);
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeComponent/Indent
class CORDL_TYPE VolumeComponent_Indent : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field relativeAmount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_relativeAmount, put = __cordl_internal_set_relativeAmount)) int32_t relativeAmount;

  static inline ::UnityEngine::Rendering::VolumeComponent_Indent* New_ctor(int32_t relativeAmount);

  constexpr int32_t const& __cordl_internal_get_relativeAmount() const;

  constexpr int32_t& __cordl_internal_get_relativeAmount();

  constexpr void __cordl_internal_set_relativeAmount(int32_t value);

  /// @brief Method .ctor, addr 0x66154a8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t relativeAmount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeComponent_Indent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponent_Indent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeComponent_Indent(VolumeComponent_Indent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponent_Indent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeComponent_Indent(VolumeComponent_Indent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12301 };

  /// @brief Field relativeAmount, offset: 0x18, size: 0x4, def value: None
  int32_t ___relativeAmount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeComponent_Indent, ___relativeAmount) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeComponent_Indent, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeComponent/<>c
class CORDL_TYPE VolumeComponent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::VolumeComponent___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* __9__10_0;

  static inline ::UnityEngine::Rendering::VolumeComponent___c* New_ctor();

  /// @brief Method <FindParameters>b__10_0, addr 0x661550c, size 0x24, virtual false, abstract: false, final false
  inline int32_t _FindParameters_b__10_0(::System::Reflection::FieldInfo* t);

  /// @brief Method .ctor, addr 0x6615508, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::VolumeComponent___c* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* getStaticF___9__10_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::VolumeComponent___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::System::Reflection::FieldInfo*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeComponent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeComponent___c(VolumeComponent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeComponent___c(VolumeComponent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12302 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeComponent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VolumeComponent
class CORDL_TYPE VolumeComponent : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using Indent = ::UnityEngine::Rendering::VolumeComponent_Indent;

  using __c = ::UnityEngine::Rendering::VolumeComponent___c;

  /// @brief Field <displayName>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField)) ::StringW _displayName_k__BackingField;

  /// @brief Field active, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_active, put = __cordl_internal_set_active)) bool active;

  __declspec(property(get = get_displayName, put = set_displayName)) ::StringW displayName;

  /// @brief Field m_ParameterReadOnlyCollection, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ParameterReadOnlyCollection,
      put = __cordl_internal_set_m_ParameterReadOnlyCollection)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* m_ParameterReadOnlyCollection;

  /// @brief Field parameterList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_parameterList,
                      put = __cordl_internal_set_parameterList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>* parameterList;

  __declspec(property(get = get_parameters)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* parameters;

  /// @brief Method AnyPropertiesIsOverridden, addr 0x661529c, size 0xb0, virtual false, abstract: false, final false
  inline bool AnyPropertiesIsOverridden();

  /// @brief Method FindParameters, addr 0x6614264, size 0x63c, virtual false, abstract: false, final false
  static inline void FindParameters(::System::Object* o, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>* parameters,
                                    ::System::Func_2<::System::Reflection::FieldInfo*, bool>* filter);

  /// @brief Method GetHashCode, addr 0x66151e8, size 0xb4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::VolumeComponent* New_ctor();

  /// @brief Method OnDestroy, addr 0x661534c, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x6614ab4, size 0x104, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x66148a0, size 0x214, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Override, addr 0x6614bb8, size 0x130, virtual true, abstract: false, final false
  inline void Override(::UnityEngine::Rendering::VolumeComponent* state, float_t interpFactor);

  /// @brief Method Release, addr 0x6615350, size 0xb4, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SetAllOverridesTo, addr 0x6614ce8, size 0x10, virtual false, abstract: false, final false
  inline void SetAllOverridesTo(bool state);

  /// @brief Method SetOverridesTo, addr 0x6614cf8, size 0x3d0, virtual false, abstract: false, final false
  inline void SetOverridesTo(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Rendering::VolumeParameter*>* enumerable, bool state);

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr bool const& __cordl_internal_get_active() const;

  constexpr bool& __cordl_internal_get_active();

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* const& __cordl_internal_get_m_ParameterReadOnlyCollection() const;

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>*& __cordl_internal_get_m_ParameterReadOnlyCollection();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>* const& __cordl_internal_get_parameterList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>*& __cordl_internal_get_parameterList();

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_active(bool value);

  constexpr void __cordl_internal_set_m_ParameterReadOnlyCollection(::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* value);

  constexpr void __cordl_internal_set_parameterList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>* value);

  /// @brief Method .ctor, addr 0x6615404, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_displayName, addr 0x66141f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_parameters, addr 0x6614200, size 0x64, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* get_parameters();

  /// @brief Method set_displayName, addr 0x66141f8, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VolumeComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VolumeComponent(VolumeComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VolumeComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VolumeComponent(VolumeComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12303 };

  /// @brief Field active, offset: 0x18, size: 0x1, def value: None
  bool ___active;

  /// @brief Field <displayName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field parameterList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeParameter*>* ___parameterList;

  /// @brief Field m_ParameterReadOnlyCollection, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* ___m_ParameterReadOnlyCollection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VolumeComponent, ___active) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeComponent, ____displayName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeComponent, ___parameterList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VolumeComponent, ___m_ParameterReadOnlyCollection) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VolumeComponent, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::VolumeComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeComponent*, "UnityEngine.Rendering", "VolumeComponent");
NEED_NO_BOX(::UnityEngine::Rendering::VolumeComponent_Indent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeComponent_Indent*, "UnityEngine.Rendering", "VolumeComponent/Indent");
NEED_NO_BOX(::UnityEngine::Rendering::VolumeComponent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VolumeComponent___c*, "UnityEngine.Rendering", "VolumeComponent/<>c");
