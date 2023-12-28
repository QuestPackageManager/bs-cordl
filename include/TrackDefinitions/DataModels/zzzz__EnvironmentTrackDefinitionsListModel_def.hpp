#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentTrackDefinitionsListModel)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionsListModel____c;
}
namespace TrackDefinitions::DataModels {
class EnvironmentTrackDefinitionModel;
}
namespace TrackDefinitions {
class EnvironmentTracksDefinitionSO;
}
namespace TrackDefinitions {
class EnvironmentDefinitionsListSO;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace TrackDefinitions::DataModels {
class EnvironmentTrackDefinitionsListModel;
}
namespace TrackDefinitions::DataModels {
class __EnvironmentTrackDefinitionsListModel____c;
}
// Write type traits
MARK_REF_PTR_T(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel);
MARK_REF_PTR_T(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TrackDefinitions::DataModels {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16070))
// CS Name: ::EnvironmentTrackDefinitionsListModel::<>c*
class CORDL_TYPE __EnvironmentTrackDefinitionsListModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0,
                             put = setStaticF___9__2_0))::System::Func_2<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::GlobalNamespace::EnvironmentInfoSO*>* __9__2_0;

  /// @brief Field <>9__2_1, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF___9__2_1,
               put = setStaticF___9__2_1))::System::Func_2<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* __9__2_1;

  static inline void setStaticF___9(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c* value);

  static inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c* getStaticF___9();

  static inline void setStaticF___9__2_0(::System::Func_2<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::GlobalNamespace::EnvironmentInfoSO*>* value);

  static inline ::System::Func_2<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::GlobalNamespace::EnvironmentInfoSO*>* getStaticF___9__2_0();

  static inline void setStaticF___9__2_1(::System::Func_2<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* value);

  static inline ::System::Func_2<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* getStaticF___9__2_1();

  static inline ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c* New_ctor();

  /// @brief Method .ctor addr 0x2a0cb4c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <.ctor>b__2_0 addr 0x2a0cb54 size 0x18 virtual false final false
  inline ::GlobalNamespace::EnvironmentInfoSO* __ctor_b__2_0(::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition);

  /// @brief Method <.ctor>b__2_1 addr 0x2a0cb6c size 0x60 virtual false final false
  inline ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* __ctor_b__2_1(::TrackDefinitions::EnvironmentTracksDefinitionSO* trackDefinition);

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionsListModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentTrackDefinitionsListModel____c(__EnvironmentTrackDefinitionsListModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentTrackDefinitionsListModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentTrackDefinitionsListModel____c(__EnvironmentTrackDefinitionsListModel____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentTrackDefinitionsListModel____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c, 0x10>, "Size mismatch!");

} // namespace TrackDefinitions::DataModels
// Type: TrackDefinitions.DataModels::EnvironmentTrackDefinitionsListModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TrackDefinitions::DataModels {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16071))
// CS Name: ::TrackDefinitions.DataModels::EnvironmentTrackDefinitionsListModel*
class CORDL_TYPE EnvironmentTrackDefinitionsListModel : public ::System::Object {
public:
  // Declarations
  using __c = ::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c;

  /// @brief Field _environmentTracksTypeMap, offset 0x10, size 0x8
  __declspec(property(get = __get__environmentTracksTypeMap,
                      put = __set__environmentTracksTypeMap))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentInfoSO*,
                                                                                                          ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* _environmentTracksTypeMap;

  __declspec(property(get = get_Item))::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* Item[];

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentInfoSO*, ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*& __get__environmentTracksTypeMap();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentInfoSO*, ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>*> const&
  __get__environmentTracksTypeMap() const;

  constexpr void
  __set__environmentTracksTypeMap(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentInfoSO*, ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* value);

  static inline ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel* New_ctor(::TrackDefinitions::EnvironmentDefinitionsListSO* environmentDefinitionsList);

  /// @brief Method .ctor addr 0x2a0c8b8 size 0x18 virtual false final false
  inline void _ctor(::TrackDefinitions::EnvironmentDefinitionsListSO* environmentDefinitionsList);

  static inline ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::TrackDefinitions::EnvironmentTracksDefinitionSO*>* environmentTrackDefinitions);

  /// @brief Method .ctor addr 0x2a0c8d0 size 0x1a8 virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::TrackDefinitions::EnvironmentTracksDefinitionSO*>* environmentTrackDefinitions);

  /// @brief Method get_Item addr 0x2a0ca78 size 0x70 virtual false final false
  inline ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel* get_Item(::GlobalNamespace::EnvironmentInfoSO* type);

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTrackDefinitionsListModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentTrackDefinitionsListModel(EnvironmentTrackDefinitionsListModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentTrackDefinitionsListModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentTrackDefinitionsListModel(EnvironmentTrackDefinitionsListModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentTrackDefinitionsListModel();

public:
  /// @brief Field _environmentTracksTypeMap, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentInfoSO*, ::TrackDefinitions::DataModels::EnvironmentTrackDefinitionModel*>* ____environmentTracksTypeMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel, 0x18>, "Size mismatch!");

} // namespace TrackDefinitions::DataModels
NEED_NO_BOX(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::DataModels::EnvironmentTrackDefinitionsListModel*, "TrackDefinitions.DataModels", "EnvironmentTrackDefinitionsListModel");
NEED_NO_BOX(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c);
DEFINE_IL2CPP_ARG_TYPE(::TrackDefinitions::DataModels::__EnvironmentTrackDefinitionsListModel____c*, "TrackDefinitions.DataModels", "EnvironmentTrackDefinitionsListModel/<>c");
