#pragma once
// IWYU pragma private; include "Main/GraphQL/Models/FeatureFlagsEnabledModel.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Main/GraphQL/Models/zzzz__FeatureFlagsEnabledModel_def.hpp"
#include "Main/GraphQL/Models/zzzz__FeatureFlagsEnabledModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel.set_Feature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::*)(::StringW)>(
    &::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::set_Feature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x328a660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>(), { "set_Feature", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel.get_Feature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::*)()>(
    &::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::get_Feature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x328a668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>(), { "get_Feature", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel.set_Enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::*)(::System::Nullable_1<bool>)>(
    &::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::set_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x328a670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>(),
                                                             { "set_Enabled", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel.get_Enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::*)()>(
    &::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::get_Enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x328a678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>(), { "get_Enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::*)()>(
    &::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x328a680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::__cordl_internal_get__Feature_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Feature_k__BackingField;
}
constexpr ::StringW const& Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::__cordl_internal_get__Feature_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Feature_k__BackingField;
}
constexpr void Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::__cordl_internal_set__Feature_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Feature_k__BackingField = value;
}
constexpr ::System::Nullable_1<bool>& Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::__cordl_internal_get__Enabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enabled_k__BackingField;
}
constexpr ::System::Nullable_1<bool> const& Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::__cordl_internal_get__Enabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Enabled_k__BackingField;
}
constexpr void Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::__cordl_internal_set__Enabled_k__BackingField(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Enabled_k__BackingField = value;
}
inline void Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::set_Feature(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>(), { "set_Feature", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::get_Feature() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>(), { "get_Feature", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::set_Enabled(::System::Nullable_1<bool> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>(),
                                                           { "set_Enabled", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<bool> Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::get_Enabled() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>(), { "get_Enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline void Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*
Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>());
}
// Ctor Parameters []
constexpr ::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel() {}
//  Writing Method size for method: ::Main::GraphQL::Models::FeatureFlagsEnabledModel.set_XocBeatGamesFeaturesEnabledForViewer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Main::GraphQL::Models::FeatureFlagsEnabledModel::*)(
    ::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>*)>(
    &::Main::GraphQL::Models::FeatureFlagsEnabledModel::set_XocBeatGamesFeaturesEnabledForViewer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x328a64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>(),
                            { "set_XocBeatGamesFeaturesEnabledForViewer",
                              {},
                              { ::i2c::type_of<::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Main::GraphQL::Models::FeatureFlagsEnabledModel.get_XocBeatGamesFeaturesEnabledForViewer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>* (
    ::Main::GraphQL::Models::FeatureFlagsEnabledModel::*)()>(&::Main::GraphQL::Models::FeatureFlagsEnabledModel::get_XocBeatGamesFeaturesEnabledForViewer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x328a654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>(), { "get_XocBeatGamesFeaturesEnabledForViewer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Main::GraphQL::Models::FeatureFlagsEnabledModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Main::GraphQL::Models::FeatureFlagsEnabledModel::*)()>(&::Main::GraphQL::Models::FeatureFlagsEnabledModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x328a65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>*&
Main::GraphQL::Models::FeatureFlagsEnabledModel::__cordl_internal_get__XocBeatGamesFeaturesEnabledForViewer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XocBeatGamesFeaturesEnabledForViewer_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>* const&
Main::GraphQL::Models::FeatureFlagsEnabledModel::__cordl_internal_get__XocBeatGamesFeaturesEnabledForViewer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XocBeatGamesFeaturesEnabledForViewer_k__BackingField;
}
constexpr void Main::GraphQL::Models::FeatureFlagsEnabledModel::__cordl_internal_set__XocBeatGamesFeaturesEnabledForViewer_k__BackingField(
    ::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____XocBeatGamesFeaturesEnabledForViewer_k__BackingField = value;
}
inline void Main::GraphQL::Models::FeatureFlagsEnabledModel::set_XocBeatGamesFeaturesEnabledForViewer(
    ::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>(),
                          { "set_XocBeatGamesFeaturesEnabledForViewer",
                            {},
                            { ::i2c::type_of<::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>*
Main::GraphQL::Models::FeatureFlagsEnabledModel::get_XocBeatGamesFeaturesEnabledForViewer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>(), { "get_XocBeatGamesFeaturesEnabledForViewer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Main::GraphQL::Models::FeatureFlagsEnabledModel_XocBeatGamesFeaturesEnabledForViewerModel*>*>(this,
                                                                                                                                                                                    ___internal_method);
}
inline void Main::GraphQL::Models::FeatureFlagsEnabledModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Main::GraphQL::Models::FeatureFlagsEnabledModel* Main::GraphQL::Models::FeatureFlagsEnabledModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Main::GraphQL::Models::FeatureFlagsEnabledModel*>());
}
// Ctor Parameters []
constexpr ::Main::GraphQL::Models::FeatureFlagsEnabledModel::FeatureFlagsEnabledModel() {}
