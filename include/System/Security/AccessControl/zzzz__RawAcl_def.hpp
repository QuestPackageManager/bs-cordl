#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__GenericAcl_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RawAcl)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Security::AccessControl {
class GenericAce;
}
// Forward declare root types
namespace System::Security::AccessControl {
class RawAcl;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::RawAcl);
// Type: System.Security.AccessControl::RawAcl
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3036))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3047))
// CS Name: ::System.Security.AccessControl::RawAcl*
class CORDL_TYPE RawAcl : public ::System::Security::AccessControl::GenericAcl {
public:
  // Declarations
  /// @brief Field revision, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_revision, put = __cordl_internal_set_revision)) uint8_t revision;

  /// @brief Field list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list))::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* list;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item))::System::Security::AccessControl::GenericAce* Item[];

  constexpr uint8_t& __cordl_internal_get_revision();

  constexpr uint8_t const& __cordl_internal_get_revision() const;

  constexpr void __cordl_internal_set_revision(uint8_t value);

  constexpr ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>*& __cordl_internal_get_list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>*> const& __cordl_internal_get_list() const;

  constexpr void __cordl_internal_set_list(::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* value);

  static inline ::System::Security::AccessControl::RawAcl* New_ctor(uint8_t revision, int32_t capacity);

  /// @brief Method .ctor, addr 0x24a32cc, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(uint8_t revision, int32_t capacity);

  /// @brief Method get_Count, addr 0x24a6a38, size 0x48, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x24a6a80, size 0x58, virtual true, abstract: false, final false
  inline ::System::Security::AccessControl::GenericAce* get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x24a6ad8, size 0x68, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Security::AccessControl::GenericAce* value);

  /// @brief Method InsertAce, addr 0x24a49a8, size 0xd8, virtual false, abstract: false, final false
  inline void InsertAce(int32_t index, ::System::Security::AccessControl::GenericAce* ace);

  /// @brief Method RemoveAce, addr 0x24a43f4, size 0x58, virtual false, abstract: false, final false
  inline void RemoveAce(int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "RawAcl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RawAcl(RawAcl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RawAcl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RawAcl(RawAcl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RawAcl();

public:
  /// @brief Field revision, offset: 0x10, size: 0x1, def value: None
  uint8_t ___revision;

  /// @brief Field list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* ___list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::RawAcl, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::RawAcl, ___revision) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::RawAcl, ___list) == 0x18, "Offset mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::RawAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::RawAcl*, "System.Security.AccessControl", "RawAcl");
