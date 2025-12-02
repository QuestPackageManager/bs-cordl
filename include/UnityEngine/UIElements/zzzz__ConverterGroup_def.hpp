#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ConverterGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TypeConverterRegistry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConverterGroup)
namespace Unity::Properties {
struct PropertyPath;
}
namespace Unity::Properties {
struct VisitReturnCode;
}
namespace UnityEngine::UIElements {
struct TypeConverterRegistry;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ConverterGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ConverterGroup);
// Dependencies System.Object, UnityEngine.UIElements.TypeConverterRegistry
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

  /// @brief Field <registry>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__registry_k__BackingField,
                      put = __cordl_internal_set__registry_k__BackingField)) ::UnityEngine::UIElements::TypeConverterRegistry _registry_k__BackingField;

  __declspec(property(get = get_registry)) ::UnityEngine::UIElements::TypeConverterRegistry registry;

  static inline ::UnityEngine::UIElements::ConverterGroup* New_ctor(::StringW id, ::StringW displayName, ::StringW description);

  /// @brief Method TryConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> inline bool TryConvert(::ByRef<TSource> source, ::ByRef<TDestination> destination);

  /// @brief Method TrySetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer, typename TValue>
  inline bool TrySetValue(::ByRef<TContainer> container, ::ByRef<::Unity::Properties::PropertyPath> path, TValue value, ::ByRef<::Unity::Properties::VisitReturnCode> returnCode);

  constexpr ::StringW const& __cordl_internal_get__description_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__description_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__id_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__id_k__BackingField();

  constexpr ::UnityEngine::UIElements::TypeConverterRegistry const& __cordl_internal_get__registry_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::TypeConverterRegistry& __cordl_internal_get__registry_k__BackingField();

  constexpr void __cordl_internal_set__description_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__id_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__registry_k__BackingField(::UnityEngine::UIElements::TypeConverterRegistry value);

  /// @brief Method .ctor, addr 0x69fe008, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW id, ::StringW displayName, ::StringW description);

  /// @brief Method get_registry, addr 0x69fe000, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TypeConverterRegistry get_registry();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConverterGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConverterGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConverterGroup(ConverterGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConverterGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConverterGroup(ConverterGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4030 };

  /// @brief Field <id>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____id_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <description>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW ____description_k__BackingField;

  /// @brief Field <registry>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::TypeConverterRegistry ____registry_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ConverterGroup, ____id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ConverterGroup, ____displayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ConverterGroup, ____description_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ConverterGroup, ____registry_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ConverterGroup, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ConverterGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ConverterGroup*, "UnityEngine.UIElements", "ConverterGroup");
