#pragma once
// IWYU pragma private; include "System/Security/AccessControl/RawAcl.hpp"
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
// Dependencies System.Security.AccessControl.GenericAcl
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: System.Security.AccessControl.RawAcl
class CORDL_TYPE RawAcl : public ::System::Security::AccessControl::GenericAcl {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Security::AccessControl::GenericAce* Item[];

  /// @brief Field list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* list;

  /// @brief Field revision, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_revision, put = __cordl_internal_set_revision)) uint8_t revision;

  /// @brief Method InsertAce, addr 0x3cc67e8, size 0xd4, virtual false, abstract: false, final false
  inline void InsertAce(int32_t index, ::System::Security::AccessControl::GenericAce* ace);

  static inline ::System::Security::AccessControl::RawAcl* New_ctor(uint8_t revision, int32_t capacity);

  /// @brief Method RemoveAce, addr 0x3cc626c, size 0x58, virtual false, abstract: false, final false
  inline void RemoveAce(int32_t index);

  constexpr ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>*& __cordl_internal_get_list();

  constexpr uint8_t const& __cordl_internal_get_revision() const;

  constexpr uint8_t& __cordl_internal_get_revision();

  constexpr void __cordl_internal_set_list(::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* value);

  constexpr void __cordl_internal_set_revision(uint8_t value);

  /// @brief Method .ctor, addr 0x3cc51a8, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(uint8_t revision, int32_t capacity);

  /// @brief Method get_Count, addr 0x3cc8770, size 0x48, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x3cc87b8, size 0x58, virtual true, abstract: false, final false
  inline ::System::Security::AccessControl::GenericAce* get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x3cc8810, size 0x68, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Security::AccessControl::GenericAce* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RawAcl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RawAcl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RawAcl(RawAcl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RawAcl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RawAcl(RawAcl const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3046 };

  /// @brief Field revision, offset: 0x10, size: 0x1, def value: None
  uint8_t ___revision;

  /// @brief Field list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Security::AccessControl::GenericAce*>* ___list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::AccessControl::RawAcl, ___revision) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::RawAcl, ___list) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::RawAcl, 0x20>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::RawAcl);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::RawAcl*, "System.Security.AccessControl", "RawAcl");
