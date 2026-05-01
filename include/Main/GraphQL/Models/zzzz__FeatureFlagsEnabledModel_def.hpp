#pragma once
// IWYU pragma private; include "Main/GraphQL/Models/FeatureFlagsEnabledModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FeatureFlagsEnabledModel)
namespace Main::GraphQL::Models {
class FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace Main::GraphQL::Models {
class FeatureFlagsEnabledModel;
}
namespace Main::GraphQL::Models {
class FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel;
}
// Write type traits
MARK_REF_PTR_T(::Main::GraphQL::Models::FeatureFlagsEnabledModel);
MARK_REF_PTR_T(::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel);
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel, System.Nullable`1<T>
namespace Main::GraphQL::Models {
// Is value type: false
// CS Name: Main.GraphQL.Models.FeatureFlagsEnabledModel/XocBeatGamesFeaturesEnabledForViewerModel
class CORDL_TYPE FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  __declspec(property(get = get_Enabled, put = set_Enabled)) ::System::Nullable_1<bool> Enabled;

  __declspec(property(get = get_Feature, put = set_Feature)) ::StringW Feature;

  /// @brief Field <Enabled>k__BackingField, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get__Enabled_k__BackingField, put = __cordl_internal_set__Enabled_k__BackingField)) ::System::Nullable_1<bool> _Enabled_k__BackingField;

  /// @brief Field <Feature>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Feature_k__BackingField, put = __cordl_internal_set__Feature_k__BackingField)) ::StringW _Feature_k__BackingField;

  static inline ::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel* New_ctor();

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__Enabled_k__BackingField() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__Enabled_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Feature_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Feature_k__BackingField();

  constexpr void __cordl_internal_set__Enabled_k__BackingField(::System::Nullable_1<bool> value);

  constexpr void __cordl_internal_set__Feature_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x31f4e5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Enabled, addr 0x31f4e54, size 0x8, virtual false, abstract: false, final false
  inline ::System::Nullable_1<bool> get_Enabled();

  /// @brief Method get_Feature, addr 0x31f4e44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Feature();

  /// @brief Method set_Enabled, addr 0x31f4e4c, size 0x8, virtual false, abstract: false, final false
  inline void set_Enabled(::System::Nullable_1<bool> value);

  /// @brief Method set_Feature, addr 0x31f4e3c, size 0x8, virtual false, abstract: false, final false
  inline void set_Feature(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel(FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel(FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22631 };

  /// @brief Field <Feature>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Feature_k__BackingField;

  /// @brief Field <Enabled>k__BackingField, offset: 0x18, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____Enabled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel, ____Feature_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel, ____Enabled_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel, 0x20>, "Size mismatch!");

} // namespace Main::GraphQL::Models
// Dependencies OculusStudios.GraphQL.Client.GraphQLModel
namespace Main::GraphQL::Models {
// Is value type: false
// CS Name: Main.GraphQL.Models.FeatureFlagsEnabledModel
class CORDL_TYPE FeatureFlagsEnabledModel : public ::OculusStudios::GraphQL::Client::GraphQLModel {
public:
  // Declarations
  using XocBeatGamesFeaturesEnabledForViewerModel = ::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel;

  __declspec(property(get = get_XocBeatGamesFeaturesEnabledForViewer, put = set_XocBeatGamesFeaturesEnabledForViewer)) ::System::Collections::Generic::List_1<
      ::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>* XocBeatGamesFeaturesEnabledForViewer;

  /// @brief Field <XocBeatGamesFeaturesEnabledForViewer>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__XocBeatGamesFeaturesEnabledForViewer_k__BackingField, put = __cordl_internal_set__XocBeatGamesFeaturesEnabledForViewer_k__BackingField)) ::System::
      Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>* _XocBeatGamesFeaturesEnabledForViewer_k__BackingField;

  static inline ::Main::GraphQL::Models::FeatureFlagsEnabledModel* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>* const&
  __cordl_internal_get__XocBeatGamesFeaturesEnabledForViewer_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>*&
  __cordl_internal_get__XocBeatGamesFeaturesEnabledForViewer_k__BackingField();

  constexpr void __cordl_internal_set__XocBeatGamesFeaturesEnabledForViewer_k__BackingField(
      ::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>* value);

  /// @brief Method .ctor, addr 0x31f4e38, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_XocBeatGamesFeaturesEnabledForViewer, addr 0x31f4e30, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>* get_XocBeatGamesFeaturesEnabledForViewer();

  /// @brief Method set_XocBeatGamesFeaturesEnabledForViewer, addr 0x31f4e28, size 0x8, virtual false, abstract: false, final false
  inline void set_XocBeatGamesFeaturesEnabledForViewer(::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FeatureFlagsEnabledModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FeatureFlagsEnabledModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FeatureFlagsEnabledModel(FeatureFlagsEnabledModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FeatureFlagsEnabledModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FeatureFlagsEnabledModel(FeatureFlagsEnabledModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22632 };

  /// @brief Field <XocBeatGamesFeaturesEnabledForViewer>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>* ____XocBeatGamesFeaturesEnabledForViewer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Main::GraphQL::Models::FeatureFlagsEnabledModel, ____XocBeatGamesFeaturesEnabledForViewer_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Main::GraphQL::Models::FeatureFlagsEnabledModel, 0x18>, "Size mismatch!");

} // namespace Main::GraphQL::Models
NEED_NO_BOX(::Main::GraphQL::Models::FeatureFlagsEnabledModel);
DEFINE_IL2CPP_ARG_TYPE(::Main::GraphQL::Models::FeatureFlagsEnabledModel*, "Main.GraphQL.Models", "FeatureFlagsEnabledModel");
NEED_NO_BOX(::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel);
DEFINE_IL2CPP_ARG_TYPE(::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*, "Main.GraphQL.Models",
                       "FeatureFlagsEnabledModel/XocBeatGamesFeaturesEnabledForViewerModel");
