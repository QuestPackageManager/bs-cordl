#pragma once
// IWYU pragma private; include "BeatSaber/TrackDefinitions/DataModels/EnvironmentTrackDefinitionsListModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentTrackDefinitionsListModel)
namespace BeatSaber::TrackDefinitions::DataModels {
class EnvironmentTrackDefinitionModel;
}
namespace BeatSaber::TrackDefinitions::DataModels {
class EnvironmentTrackDefinitionsListModel___c;
}
namespace BeatSaber::TrackDefinitions {
class EnvironmentTracksDefinitionSO;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace BeatSaber::TrackDefinitions::DataModels {
class EnvironmentTrackDefinitionsListModel;
}
namespace BeatSaber::TrackDefinitions::DataModels {
class EnvironmentTrackDefinitionsListModel___c;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c);
// Dependencies System.Object
namespace BeatSaber::TrackDefinitions::DataModels {
// Is value type: false
// CS Name: BeatSaber.TrackDefinitions.DataModels.EnvironmentTrackDefinitionsListModel/<>c
class CORDL_TYPE EnvironmentTrackDefinitionsListModel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0,
                      put = setStaticF___9__1_0)) ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* __9__1_0;

  /// @brief Field <>9__1_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_1, put = setStaticF___9__1_1)) ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>,
                                                                                              ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* __9__1_1;

  static inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c* New_ctor();

  /// @brief Method <.ctor>b__1_0, addr 0x2284ea0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> __ctor_b__1_0(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition);

  /// @brief Method <.ctor>b__1_1, addr 0x2284eb8, size 0x58, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* __ctor_b__1_1(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition);

  /// @brief Method .ctor, addr 0x2284e98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* getStaticF___9__1_0();

  static inline ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*
  getStaticF___9__1_1();

  static inline void setStaticF___9(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  static inline void
  setStaticF___9__1_1(::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTrackDefinitionsListModel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTrackDefinitionsListModel___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentTrackDefinitionsListModel___c(EnvironmentTrackDefinitionsListModel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTrackDefinitionsListModel___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentTrackDefinitionsListModel___c(EnvironmentTrackDefinitionsListModel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18640 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c, 0x10>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions::DataModels
// Dependencies System.Object
namespace BeatSaber::TrackDefinitions::DataModels {
// Is value type: false
// CS Name: BeatSaber.TrackDefinitions.DataModels.EnvironmentTrackDefinitionsListModel
class CORDL_TYPE EnvironmentTrackDefinitionsListModel : public ::System::Object {
public:
  // Declarations
  using __c = ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c;

  __declspec(property(get = get_Item)) ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* Item[];

  /// @brief Field _environmentTracksTypeMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentTracksTypeMap, put = __cordl_internal_set__environmentTracksTypeMap)) ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* _environmentTracksTypeMap;

  static inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>* environmentTrackDefinitions);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* const&
  __cordl_internal_get__environmentTracksTypeMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*&
  __cordl_internal_get__environmentTracksTypeMap();

  constexpr void __cordl_internal_set__environmentTracksTypeMap(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* value);

  /// @brief Method .ctor, addr 0x22830d8, size 0x1a0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>* environmentTrackDefinitions);

  /// @brief Method get_Item, addr 0x2284dcc, size 0x70, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* get_Item(::GlobalNamespace::EnvironmentInfoSO* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTrackDefinitionsListModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTrackDefinitionsListModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentTrackDefinitionsListModel(EnvironmentTrackDefinitionsListModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTrackDefinitionsListModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentTrackDefinitionsListModel(EnvironmentTrackDefinitionsListModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18641 };

  /// @brief Field _environmentTracksTypeMap, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*
      ____environmentTracksTypeMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel, ____environmentTracksTypeMap) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel, 0x18>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions::DataModels
NEED_NO_BOX(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel*, "BeatSaber.TrackDefinitions.DataModels", "EnvironmentTrackDefinitionsListModel");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel___c*, "BeatSaber.TrackDefinitions.DataModels", "EnvironmentTrackDefinitionsListModel/<>c");
