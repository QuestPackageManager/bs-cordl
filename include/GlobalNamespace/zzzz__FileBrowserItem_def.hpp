#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileBrowserItem)
// Forward declare root types
namespace GlobalNamespace {
class FileBrowserItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileBrowserItem);
// Type: ::FileBrowserItem
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4191))
// CS Name: ::FileBrowserItem*
class CORDL_TYPE FileBrowserItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field <displayName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField))::StringW _displayName_k__BackingField;

  /// @brief Field <fullPath>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fullPath_k__BackingField, put = __cordl_internal_set__fullPath_k__BackingField))::StringW _fullPath_k__BackingField;

  /// @brief Field <isDirectory>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isDirectory_k__BackingField, put = __cordl_internal_set__isDirectory_k__BackingField)) bool _isDirectory_k__BackingField;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_fullPath, put = set_fullPath))::StringW fullPath;

  __declspec(property(get = get_isDirectory, put = set_isDirectory)) bool isDirectory;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr ::StringW& __cordl_internal_get__fullPath_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__fullPath_k__BackingField() const;

  constexpr void __cordl_internal_set__fullPath_k__BackingField(::StringW value);

  constexpr bool& __cordl_internal_get__isDirectory_k__BackingField();

  constexpr bool const& __cordl_internal_get__isDirectory_k__BackingField() const;

  constexpr void __cordl_internal_set__isDirectory_k__BackingField(bool value);

  /// @brief Method get_displayName, addr 0x2323750, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method set_displayName, addr 0x2323758, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method get_fullPath, addr 0x2323760, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_fullPath();

  /// @brief Method set_fullPath, addr 0x2323768, size 0x8, virtual false, abstract: false, final false
  inline void set_fullPath(::StringW value);

  /// @brief Method get_isDirectory, addr 0x2323770, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDirectory();

  /// @brief Method set_isDirectory, addr 0x2323778, size 0xc, virtual false, abstract: false, final false
  inline void set_isDirectory(bool value);

  static inline ::GlobalNamespace::FileBrowserItem* New_ctor(::StringW displayName, ::StringW fullPath, bool isDirectory);

  /// @brief Method .ctor, addr 0x2323784, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW fullPath, bool isDirectory);

  // Ctor Parameters [CppParam { name: "", ty: "FileBrowserItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileBrowserItem(FileBrowserItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileBrowserItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileBrowserItem(FileBrowserItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileBrowserItem();

public:
  /// @brief Field <displayName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field <fullPath>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____fullPath_k__BackingField;

  /// @brief Field <isDirectory>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____isDirectory_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileBrowserItem, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserItem, ____displayName_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserItem, ____fullPath_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserItem, ____isDirectory_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileBrowserItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileBrowserItem*, "", "FileBrowserItem");
