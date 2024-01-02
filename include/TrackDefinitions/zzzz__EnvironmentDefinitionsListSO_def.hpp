#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(EnvironmentDefinitionsListSO)
namespace TrackDefinitions {
class EnvironmentTracksDefinitionSO;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace TrackDefinitions {
class EnvironmentDefinitionsListSO;
}
// Write type traits
MARK_REF_PTR_T(::TrackDefinitions::EnvironmentDefinitionsListSO);
// Type: TrackDefinitions::EnvironmentDefinitionsListSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TrackDefinitions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16055))
// CS Name: ::TrackDefinitions::EnvironmentDefinitionsListSO*
class CORDL_TYPE EnvironmentDefinitionsListSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _environmentTracksDefinitions, offset 0x18, size 0x8
  __declspec(property(get = __get__environmentTracksDefinitions,
                      put = __set__environmentTracksDefinitions))::ArrayW<::TrackDefinitions::EnvironmentTracksDefinitionSO*,
                                                                          ::Array<::TrackDefinitions::EnvironmentTracksDefinitionSO*>*> _environmentTracksDefinitions;

  __declspec(property(get = get_environmentTrackDefinitions))::System::Collections::Generic::IEnumerable_1<::TrackDefinitions::EnvironmentTracksDefinitionSO*>* environmentTrackDefinitions;

  constexpr ::ArrayW<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::Array<::TrackDefinitions::EnvironmentTracksDefinitionSO*>*>& __get__environmentTracksDefinitions();

  constexpr ::ArrayW<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::Array<::TrackDefinitions::EnvironmentTracksDefinitionSO*>*> const& __get__environmentTracksDefinitions() const;

  constexpr void __set__environmentTracksDefinitions(::ArrayW<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::Array<::TrackDefinitions::EnvironmentTracksDefinitionSO*>*> value);

  /// @brief Method get_environmentTrackDefinitions, addr 0x2a0ad6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::TrackDefinitions::EnvironmentTracksDefinitionSO*>* get_environmentTrackDefinitions();

  static inline ::TrackDefinitions::EnvironmentDefinitionsListSO* New_ctor();

  /// @brief Method .ctor, addr 0x2a0ad74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentDefinitionsListSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentDefinitionsListSO(EnvironmentDefinitionsListSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentDefinitionsListSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentDefinitionsListSO(EnvironmentDefinitionsListSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentDefinitionsListSO();

public:
  /// @brief Field _environmentTracksDefinitions, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::Array<::TrackDefinitions::EnvironmentTracksDefinitionSO*>*> ____environmentTracksDefinitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::EnvironmentDefinitionsListSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::TrackDefinitions::EnvironmentDefinitionsListSO, ____environmentTracksDefinitions) == 0x18, "Offset mismatch!");

} // namespace TrackDefinitions
NEED_NO_BOX(::TrackDefinitions::EnvironmentDefinitionsListSO);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::EnvironmentDefinitionsListSO*, "TrackDefinitions", "EnvironmentDefinitionsListSO");
