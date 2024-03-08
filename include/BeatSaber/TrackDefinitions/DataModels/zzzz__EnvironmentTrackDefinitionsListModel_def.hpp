#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentTrackDefinitionsListModel)
namespace BeatSaber::TrackDefinitions::DataModels {
class EnvironmentTrackDefinitionModel;
}
namespace BeatSaber::TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionsListModel____c;
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
class __EnvironmentTrackDefinitionsListModel____c;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel);
MARK_REF_PTR_T(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions::DataModels {
// Is value type: false
// CS Name: ::EnvironmentTrackDefinitionsListModel::<>c*
class CORDL_TYPE __EnvironmentTrackDefinitionsListModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__1_0,
               put = setStaticF___9__1_0))::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* __9__1_0;

  /// @brief Field <>9__1_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_1, put = setStaticF___9__1_1))::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>,
                                                                                                    ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* __9__1_1;

  static inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c* New_ctor();

  /// @brief Method <.ctor>b__1_0, addr 0xea0bf0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> __ctor_b__1_0(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition);

  /// @brief Method <.ctor>b__1_1, addr 0xea0c08, size 0x1060, virtual false, abstract: false, final false
  inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* __ctor_b__1_1(::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition);

  /// @brief Method .ctor, addr 0xea0be8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* getStaticF___9__1_0();

  static inline ::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*
  getStaticF___9__1_1();

  static inline void setStaticF___9(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  static inline void
  setStaticF___9__1_1(::System::Func_2<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTrackDefinitionsListModel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionsListModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTrackDefinitionsListModel____c(__EnvironmentTrackDefinitionsListModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionsListModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTrackDefinitionsListModel____c(__EnvironmentTrackDefinitionsListModel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c, 0x10>, "Size mismatch!");

} // namespace BeatSaber::TrackDefinitions::DataModels
// Type: BeatSaber.TrackDefinitions.DataModels::EnvironmentTrackDefinitionsListModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::TrackDefinitions::DataModels {
// Is value type: false
// CS Name: ::BeatSaber.TrackDefinitions.DataModels::EnvironmentTrackDefinitionsListModel*
class CORDL_TYPE EnvironmentTrackDefinitionsListModel : public ::System::Object {
public:
  // Declarations
  using __c = ::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c;

  __declspec(property(get = get_Item))::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* Item[];

  /// @brief Field _environmentTracksTypeMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentTracksTypeMap, put = __cordl_internal_set__environmentTracksTypeMap))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* _environmentTracksTypeMap;

  static inline ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>* environmentTrackDefinitions);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*&
  __cordl_internal_get__environmentTracksTypeMap();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*> const&
  __cordl_internal_get__environmentTracksTypeMap() const;

  constexpr void __cordl_internal_set__environmentTracksTypeMap(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* value);

  /// @brief Method .ctor, addr 0xe9eda0, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::BeatSaber::TrackDefinitions::EnvironmentTracksDefinitionSO>>* environmentTrackDefinitions);

  /// @brief Method get_Item, addr 0xea0b14, size 0x70, virtual false, abstract: false, final false
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

  /// @brief Field _environmentTracksTypeMap, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*
      ____environmentTracksTypeMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel, 0x18>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel, ____environmentTracksTypeMap) == 0x10, "Offset mismatch!");

} // namespace BeatSaber::TrackDefinitions::DataModels
NEED_NO_BOX(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel*, "BeatSaber.TrackDefinitions.DataModels", "EnvironmentTrackDefinitionsListModel");
NEED_NO_BOX(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c*, "BeatSaber.TrackDefinitions.DataModels", "EnvironmentTrackDefinitionsListModel/<>c");
