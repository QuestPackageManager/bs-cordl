#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ConverterGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__ConversionRegistry_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ConverterGroup)
namespace Unity::Properties {
struct ConversionRegistry;
}
namespace Unity::Properties {
struct PropertyPath;
}
namespace Unity::Properties {
struct VisitReturnCode;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ConverterGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ConverterGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ConverterGroup*, "UnityEngine.UIElements", "ConverterGroup");
// Dependencies System.Object, Unity.Properties.ConversionRegistry
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ConverterGroup
class CORDL_TYPE ConverterGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Field <description>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__description_k__BackingField, put = __cordl_internal_set__description_k__BackingField)) ::StringW _description_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField)) ::StringW _displayName_k__BackingField;

  /// @brief Field <id>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__id_k__BackingField, put = __cordl_internal_set__id_k__BackingField)) ::StringW _id_k__BackingField;

  /// @brief Field m_Registry, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Registry, put = __cordl_internal_set_m_Registry)) ::Unity::Properties::ConversionRegistry m_Registry;

  __declspec(property(get = get_registerRef)) ::Unity::Properties::ConversionRegistry registerRef;

  __declspec(property(get = get_registry)) ::Unity::Properties::ConversionRegistry registry;

  static inline ::UnityEngine::UIElements::ConverterGroup* New_ctor(::StringW id, ::StringW displayName, ::StringW description);

  /// @brief Method TryConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> inline bool TryConvert(::by_ref<TSource> source, ::by_ref<TDestination> destination);

  /// @brief Method TrySetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer, typename TValue>
  inline bool TrySetValue(::by_ref<TContainer> container, /* [IsReadOnly] */ ::by_ref<::Unity::Properties::PropertyPath> path, TValue value, ::by_ref<::Unity::Properties::VisitReturnCode> returnCode);

  constexpr ::StringW const& __cordl_internal_get__description_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__description_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__id_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__id_k__BackingField();

  constexpr ::Unity::Properties::ConversionRegistry const& __cordl_internal_get_m_Registry() const;

  constexpr ::Unity::Properties::ConversionRegistry& __cordl_internal_get_m_Registry();

  constexpr void __cordl_internal_set__description_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__id_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_m_Registry(::Unity::Properties::ConversionRegistry value);

  /// @brief Method .ctor, addr 0x7087fdc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW id, ::StringW displayName, ::StringW description);

  /// @brief Method get_registerRef, addr 0x7087fd4, size 0x8, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Properties::ConversionRegistry> get_registerRef();

  /// @brief Method get_registry, addr 0x7087fc8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Properties::ConversionRegistry get_registry();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConverterGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConverterGroup", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConverterGroup(ConverterGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConverterGroup", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConverterGroup(ConverterGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4032 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <id>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____id_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <displayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <description>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____description_k__BackingField;

  /// @brief Field m_Registry, offset: 0x28, size: 0x10, def value: None
  ::Unity::Properties::ConversionRegistry ___m_Registry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ConverterGroup, ____id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ConverterGroup, ____displayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ConverterGroup, ____description_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ConverterGroup, ___m_Registry) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ConverterGroup) == 0x38, "Size mismatch!");

} // namespace UnityEngine::UIElements
