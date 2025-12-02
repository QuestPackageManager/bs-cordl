#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/InstallationRoutineCheckpoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InstallationRoutineCheckpoint)
namespace Meta::XR::BuildingBlocks {
class VariantCheckpoint;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
class InstallationRoutineCheckpoint;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint);
// Dependencies System.Object
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.InstallationRoutineCheckpoint
class CORDL_TYPE InstallationRoutineCheckpoint : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_InstallationRoutineId)) ::StringW InstallationRoutineId;

  __declspec(property(get = get_InstallationVariants)) ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* InstallationVariants;

  /// @brief Field _installationRoutineId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__installationRoutineId, put = __cordl_internal_set__installationRoutineId)) ::StringW _installationRoutineId;

  /// @brief Field _installationVariants, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__installationVariants,
                      put = __cordl_internal_set__installationVariants)) ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* _installationVariants;

  static inline ::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint* New_ctor(::StringW installationRoutineId,
                                                                                    ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* installationVariants);

  constexpr ::StringW const& __cordl_internal_get__installationRoutineId() const;

  constexpr ::StringW& __cordl_internal_get__installationRoutineId();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* const& __cordl_internal_get__installationVariants() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>*& __cordl_internal_get__installationVariants();

  constexpr void __cordl_internal_set__installationRoutineId(::StringW value);

  constexpr void __cordl_internal_set__installationVariants(::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* value);

  /// @brief Method .ctor, addr 0x582649c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW installationRoutineId, ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* installationVariants);

  /// @brief Method get_InstallationRoutineId, addr 0x582648c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InstallationRoutineId();

  /// @brief Method get_InstallationVariants, addr 0x5826494, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* get_InstallationVariants();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstallationRoutineCheckpoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstallationRoutineCheckpoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstallationRoutineCheckpoint(InstallationRoutineCheckpoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstallationRoutineCheckpoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstallationRoutineCheckpoint(InstallationRoutineCheckpoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21161 };

  /// @brief Field _installationRoutineId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____installationRoutineId;

  /// @brief Field _installationVariants, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::VariantCheckpoint*>* ____installationVariants;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint, ____installationRoutineId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint, ____installationVariants) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint, 0x20>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
NEED_NO_BOX(::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::InstallationRoutineCheckpoint*, "Meta.XR.BuildingBlocks", "InstallationRoutineCheckpoint");
