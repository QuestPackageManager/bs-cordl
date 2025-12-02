#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/VariantCheckpoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VariantCheckpoint)
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class VariantCheckpoint;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::VariantCheckpoint);
// Dependencies System.Object
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.VariantCheckpoint
class CORDL_TYPE VariantCheckpoint : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_MemberName)) ::StringW MemberName;

  __declspec(property(get = get_Value)) ::StringW Value;

  /// @brief Field _memberName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__memberName, put = __cordl_internal_set__memberName)) ::StringW _memberName;

  /// @brief Field _value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::StringW _value;

  static inline ::Meta::XR::BuildingBlocks::VariantCheckpoint* New_ctor(::StringW memberName, ::StringW value);

  constexpr ::StringW const& __cordl_internal_get__memberName() const;

  constexpr ::StringW& __cordl_internal_get__memberName();

  constexpr ::StringW const& __cordl_internal_get__value() const;

  constexpr ::StringW& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__memberName(::StringW value);

  constexpr void __cordl_internal_set__value(::StringW value);

  /// @brief Method .ctor, addr 0x58264b4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW memberName, ::StringW value);

  /// @brief Method get_MemberName, addr 0x58264a4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MemberName();

  /// @brief Method get_Value, addr 0x58264ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VariantCheckpoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VariantCheckpoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VariantCheckpoint(VariantCheckpoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VariantCheckpoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VariantCheckpoint(VariantCheckpoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21162 };

  /// @brief Field _memberName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____memberName;

  /// @brief Field _value, offset: 0x18, size: 0x8, def value: None
  ::StringW ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::VariantCheckpoint, ____memberName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::VariantCheckpoint, ____value) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::VariantCheckpoint, 0x20>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::VariantCheckpoint);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::VariantCheckpoint*, "Meta.XR.BuildingBlocks", "VariantCheckpoint");
