#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResultProof)
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class ResultProof;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaberAPI::DataTransferObjects::ResultProof);
// Type: BeatSaberAPI.DataTransferObjects::ResultProof
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6184))
// CS Name: ::BeatSaberAPI.DataTransferObjects::ResultProof*
class CORDL_TYPE ResultProof : public ::System::Object {
public:
  // Declarations
  /// @brief Field <proof>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__proof_k__BackingField, put = __set__proof_k__BackingField))::StringW _proof_k__BackingField;

  __declspec(property(get = get_proof, put = set_proof))::StringW proof;

  constexpr ::StringW& __get__proof_k__BackingField();

  constexpr ::StringW const& __get__proof_k__BackingField() const;

  constexpr void __set__proof_k__BackingField(::StringW value);

  /// @brief Method get_proof addr 0x21e8aec size 0x8 virtual false final false
  inline ::StringW get_proof();

  /// @brief Method set_proof addr 0x21e8af4 size 0x8 virtual false final false
  inline void set_proof(::StringW value);

  static inline ::BeatSaberAPI::DataTransferObjects::ResultProof* New_ctor();

  /// @brief Method .ctor addr 0x21e8afc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResultProof", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultProof(ResultProof&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultProof", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultProof(ResultProof const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultProof();

public:
  /// @brief Field <proof>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____proof_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::ResultProof, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::ResultProof, ____proof_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::ResultProof);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::ResultProof*, "BeatSaberAPI.DataTransferObjects", "ResultProof");
