#pragma once
// IWYU pragma private; include "UnityEngine/CreateAssetMenuAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CreateAssetMenuAttribute)
// Forward declare root types
namespace UnityEngine {
class CreateAssetMenuAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CreateAssetMenuAttribute);
// Dependencies System.Attribute
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.CreateAssetMenuAttribute
class CORDL_TYPE CreateAssetMenuAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <fileName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fileName_k__BackingField, put = __cordl_internal_set__fileName_k__BackingField)) ::StringW _fileName_k__BackingField;

  /// @brief Field <menuName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__menuName_k__BackingField, put = __cordl_internal_set__menuName_k__BackingField)) ::StringW _menuName_k__BackingField;

  __declspec(property(put = set_fileName)) ::StringW fileName;

  __declspec(property(put = set_menuName)) ::StringW menuName;

  static inline ::UnityEngine::CreateAssetMenuAttribute* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__fileName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__fileName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__menuName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__menuName_k__BackingField();

  constexpr void __cordl_internal_set__fileName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__menuName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x48a2ec8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_fileName, addr 0x48a2ec0, size 0x8, virtual false, abstract: false, final false
  inline void set_fileName(::StringW value);

  /// @brief Method set_menuName, addr 0x48a2eb8, size 0x8, virtual false, abstract: false, final false
  inline void set_menuName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateAssetMenuAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CreateAssetMenuAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateAssetMenuAttribute(CreateAssetMenuAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateAssetMenuAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateAssetMenuAttribute(CreateAssetMenuAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10863 };

  /// @brief Field <menuName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____menuName_k__BackingField;

  /// @brief Field <fileName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____fileName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::CreateAssetMenuAttribute, ____menuName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CreateAssetMenuAttribute, ____fileName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::CreateAssetMenuAttribute, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CreateAssetMenuAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CreateAssetMenuAttribute*, "UnityEngine", "CreateAssetMenuAttribute");
