#pragma once
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
// Type: UnityEngine::CreateAssetMenuAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10216))
// CS Name: ::UnityEngine::CreateAssetMenuAttribute*
class CORDL_TYPE CreateAssetMenuAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <menuName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__menuName_k__BackingField, put = __set__menuName_k__BackingField))::StringW _menuName_k__BackingField;

  /// @brief Field <fileName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__fileName_k__BackingField, put = __set__fileName_k__BackingField))::StringW _fileName_k__BackingField;

  __declspec(property(put = set_menuName))::StringW menuName;

  __declspec(property(put = set_fileName))::StringW fileName;

  constexpr ::StringW& __get__menuName_k__BackingField();

  constexpr ::StringW const& __get__menuName_k__BackingField() const;

  constexpr void __set__menuName_k__BackingField(::StringW value);

  constexpr ::StringW& __get__fileName_k__BackingField();

  constexpr ::StringW const& __get__fileName_k__BackingField() const;

  constexpr void __set__fileName_k__BackingField(::StringW value);

  /// @brief Method set_menuName, addr 0x2cd281c, size 0x8, virtual false, abstract: false, final false
  inline void set_menuName(::StringW value);

  /// @brief Method set_fileName, addr 0x2cd2824, size 0x8, virtual false, abstract: false, final false
  inline void set_fileName(::StringW value);

  static inline ::UnityEngine::CreateAssetMenuAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2cd282c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CreateAssetMenuAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CreateAssetMenuAttribute(CreateAssetMenuAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CreateAssetMenuAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CreateAssetMenuAttribute(CreateAssetMenuAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateAssetMenuAttribute();

public:
  /// @brief Field <menuName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____menuName_k__BackingField;

  /// @brief Field <fileName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____fileName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CreateAssetMenuAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CreateAssetMenuAttribute, ____menuName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CreateAssetMenuAttribute, ____fileName_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CreateAssetMenuAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CreateAssetMenuAttribute*, "UnityEngine", "CreateAssetMenuAttribute");
