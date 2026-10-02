#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MaterialDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialDefinition)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class MaterialDefinition_PropertyBag;
}
namespace UnityEngine::UIElements {
struct MaterialPropertyValue;
}
namespace UnityEngine::UIElements {
class PropertyBag_MaterialDefinition_MaterialProperty;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MaterialDefinition_PropertyBag;
}
namespace UnityEngine::UIElements {
class PropertyBag_MaterialDefinition_MaterialProperty;
}
namespace UnityEngine::UIElements {
struct MaterialDefinition;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::MaterialDefinition_PropertyBag*);
MARK_REF_T(::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*);
MARK_VAL_T(::UnityEngine::UIElements::MaterialDefinition);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::MaterialDefinition_PropertyBag*, "UnityEngine.UIElements", "MaterialDefinition/PropertyBag");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty*, "UnityEngine.UIElements", "MaterialDefinition/PropertyBag/MaterialProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::MaterialDefinition, "UnityEngine.UIElements", "MaterialDefinition");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.MaterialDefinition
struct CORDL_TYPE MaterialDefinition {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::MaterialDefinition_PropertyBag;

  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::MaterialDefinition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::MaterialDefinition>*();

  /// @brief Method BuildPropertyBlock, addr 0x7105dd8, size 0x298, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialPropertyBlock* BuildPropertyBlock();

  /// @brief Method Equals, addr 0x7106294, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x7106280, size 0x14, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::MaterialDefinition other);

  /// @brief Method FromMaterial, addr 0x7105ce4, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MaterialDefinition FromMaterial(::UnityEngine::Material* m);

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIToolkitAuthoringModule" })]
  /// @brief Method FromObject, addr 0x7105cec, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MaterialDefinition FromObject(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x7106314, size 0x158, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x71065b8, size 0x1d0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// @brief Method .ctor, addr 0x7105c4c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::MaterialDefinition other);

  /// @brief Method get_material, addr 0x7105c3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::MaterialDefinition>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::MaterialDefinition>* i___System__IEquatable_1___UnityEngine__UIElements__MaterialDefinition_();

  /// @brief Method op_Equality, addr 0x7106090, size 0x19c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::MaterialDefinition lhs, ::UnityEngine::UIElements::MaterialDefinition rhs);

  /// @brief Method op_Implicit, addr 0x7106278, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MaterialDefinition op_Implicit___UnityEngine__UIElements__MaterialDefinition(::UnityEngine::Material* m);

  /// @brief Method op_Inequality, addr 0x7106260, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::MaterialDefinition lhs, ::UnityEngine::UIElements::MaterialDefinition rhs);

  /// @brief Method set_material, addr 0x7105c44, size 0x8, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialDefinition();

  // Ctor Parameters [CppParam { name: "m_Material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "propertyValues", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::MaterialPropertyValue>*", modifiers: "", def_value: None, comment: None }]
  constexpr MaterialDefinition(::UnityW<::UnityEngine::Material> m_Material, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MaterialPropertyValue>* propertyValues) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5017 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// [SerializeField]
  /// @brief Field m_Material, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> m_Material;

  /// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
  /// [SerializeField]
  /// @brief Field propertyValues, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::MaterialPropertyValue>* propertyValues;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MaterialDefinition, m_Material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MaterialDefinition, propertyValues) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::MaterialDefinition) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.MaterialDefinition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MaterialDefinition/PropertyBag/MaterialProperty
class CORDL_TYPE PropertyBag_MaterialDefinition_MaterialProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::MaterialDefinition, ::UnityW<::UnityEngine::Material>> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x7106a44, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetValue(::by_ref<::UnityEngine::UIElements::MaterialDefinition> container);

  static inline ::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty* New_ctor();

  /// @brief Method SetValue, addr 0x7106a4c, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::MaterialDefinition> container, ::UnityEngine::Material* value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x71069d0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_IsReadOnly, addr 0x7106a3c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// [CompilerGenerated]
  /// @brief Method get_Name, addr 0x7106a34, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_MaterialDefinition_MaterialProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_MaterialDefinition_MaterialProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_MaterialDefinition_MaterialProperty(PropertyBag_MaterialDefinition_MaterialProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_MaterialDefinition_MaterialProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_MaterialDefinition_MaterialProperty(PropertyBag_MaterialDefinition_MaterialProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5015 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.MaterialDefinition
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MaterialDefinition/PropertyBag
class CORDL_TYPE MaterialDefinition_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::MaterialDefinition> {
public:
  // Declarations
  using MaterialProperty = ::UnityEngine::UIElements::PropertyBag_MaterialDefinition_MaterialProperty;

  static inline ::UnityEngine::UIElements::MaterialDefinition_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x7106908, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialDefinition_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialDefinition_PropertyBag", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialDefinition_PropertyBag(MaterialDefinition_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialDefinition_PropertyBag", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialDefinition_PropertyBag(MaterialDefinition_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5016 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::MaterialDefinition_PropertyBag) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
