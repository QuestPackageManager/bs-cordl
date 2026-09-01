#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeLightControllerSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CompositeLightControllerSet)
namespace GlobalNamespace {
class CompositeLightControllerData;
}
namespace GlobalNamespace {
class CompositeModification;
}
namespace GlobalNamespace {
class LightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeLightControllerSet;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CompositeLightControllerSet*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CompositeLightControllerSet*, "", "CompositeLightControllerSet");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompositeLightControllerSet
class CORDL_TYPE CompositeLightControllerSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field _description, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__description, put = __cordl_internal_set__description)) ::StringW _description;

  /// @brief Field _displayName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName, put = __cordl_internal_set__displayName)) ::StringW _displayName;

  /// @brief Field _editorCategory, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__editorCategory, put = __cordl_internal_set__editorCategory)) ::StringW _editorCategory;

  /// @brief Field _editorName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__editorName, put = __cordl_internal_set__editorName)) ::StringW _editorName;

  /// @brief Field _lightControllerData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightControllerData, put = __cordl_internal_set__lightControllerData)) ::GlobalNamespace::CompositeLightControllerData* _lightControllerData;

  /// @brief Field _lightGroup, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightGroup, put = __cordl_internal_set__lightGroup)) ::UnityW<::GlobalNamespace::LightGroup> _lightGroup;

  /// @brief Field _modification, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__modification, put = __cordl_internal_set__modification)) ::GlobalNamespace::CompositeModification* _modification;

  __declspec(property(get = get_description)) ::StringW description;

  __declspec(property(get = get_displayName)) ::StringW displayName;

  __declspec(property(get = get_editorCategory)) ::StringW editorCategory;

  __declspec(property(get = get_editorName)) ::StringW editorName;

  __declspec(property(get = get_lightControllerData)) ::GlobalNamespace::CompositeLightControllerData* lightControllerData;

  __declspec(property(get = get_lightGroup)) ::UnityW<::GlobalNamespace::LightGroup> lightGroup;

  __declspec(property(get = get_modification)) ::GlobalNamespace::CompositeModification* modification;

  static inline ::GlobalNamespace::CompositeLightControllerSet* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__description() const;

  constexpr ::StringW& __cordl_internal_get__description();

  constexpr ::StringW const& __cordl_internal_get__displayName() const;

  constexpr ::StringW& __cordl_internal_get__displayName();

  constexpr ::StringW const& __cordl_internal_get__editorCategory() const;

  constexpr ::StringW& __cordl_internal_get__editorCategory();

  constexpr ::StringW const& __cordl_internal_get__editorName() const;

  constexpr ::StringW& __cordl_internal_get__editorName();

  constexpr ::GlobalNamespace::CompositeLightControllerData* const& __cordl_internal_get__lightControllerData() const;

  constexpr ::GlobalNamespace::CompositeLightControllerData*& __cordl_internal_get__lightControllerData();

  constexpr ::UnityW<::GlobalNamespace::LightGroup> const& __cordl_internal_get__lightGroup() const;

  constexpr ::UnityW<::GlobalNamespace::LightGroup>& __cordl_internal_get__lightGroup();

  constexpr ::GlobalNamespace::CompositeModification* const& __cordl_internal_get__modification() const;

  constexpr ::GlobalNamespace::CompositeModification*& __cordl_internal_get__modification();

  constexpr void __cordl_internal_set__description(::StringW value);

  constexpr void __cordl_internal_set__displayName(::StringW value);

  constexpr void __cordl_internal_set__editorCategory(::StringW value);

  constexpr void __cordl_internal_set__editorName(::StringW value);

  constexpr void __cordl_internal_set__lightControllerData(::GlobalNamespace::CompositeLightControllerData* value);

  constexpr void __cordl_internal_set__lightGroup(::UnityW<::GlobalNamespace::LightGroup> value);

  constexpr void __cordl_internal_set__modification(::GlobalNamespace::CompositeModification* value);

  /// @brief Method .ctor, addr 0x599307c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_description, addr 0x59932e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_description();

  /// @brief Method get_displayName, addr 0x59932dc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_editorCategory, addr 0x59932f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_editorCategory();

  /// @brief Method get_editorName, addr 0x59932ec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_editorName();

  /// @brief Method get_lightControllerData, addr 0x59932cc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::CompositeLightControllerData* get_lightControllerData();

  /// @brief Method get_lightGroup, addr 0x59932d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LightGroup> get_lightGroup();

  /// @brief Method get_modification, addr 0x59932c4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::CompositeModification* get_modification();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeLightControllerSet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightControllerSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeLightControllerSet(CompositeLightControllerSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeLightControllerSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeLightControllerSet(CompositeLightControllerSet const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5829 };

  /// @brief Field _modification, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::CompositeModification* ____modification;

  /// @brief Field _lightControllerData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::CompositeLightControllerData* ____lightControllerData;

  /// @brief Field _lightGroup, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightGroup> ____lightGroup;

  /// @brief Field _displayName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____displayName;

  /// @brief Field _description, offset: 0x30, size: 0x8, def value: None
  ::StringW ____description;

  /// @brief Field _editorName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____editorName;

  /// @brief Field _editorCategory, offset: 0x40, size: 0x8, def value: None
  ::StringW ____editorCategory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CompositeLightControllerSet, ____modification) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerSet, ____lightControllerData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerSet, ____lightGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerSet, ____displayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerSet, ____description) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerSet, ____editorName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLightControllerSet, ____editorCategory) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CompositeLightControllerSet) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
