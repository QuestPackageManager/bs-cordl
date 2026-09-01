#pragma once
// IWYU pragma private; include "Environments\Definitions\ColorSchemesAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Environments/Definitions/zzzz__ColorSchemesAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "Environments/Definitions/zzzz__ColorSchemesAsyncInstaller_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::Environments::Definitions::ColorSchemesAsyncInstaller___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Environments::Definitions::ColorSchemesAsyncInstaller___c::*)()>(&::Environments::Definitions::ColorSchemesAsyncInstaller___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x376cbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::ColorSchemesAsyncInstaller___c._LoadResourcesBeforeInstall_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Environments::Definitions::ColorSchemesAsyncInstaller___c::*)(::GlobalNamespace::ColorSchemeSO*)>(
    &::Environments::Definitions::ColorSchemesAsyncInstaller___c::_LoadResourcesBeforeInstall_b__3_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x376cc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller___c*>(),
                                                                                           { "<LoadResourcesBeforeInstall>b__3_0", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemeSO*>() } })));
    return ___internal_method;
  }
};
inline void Environments::Definitions::ColorSchemesAsyncInstaller___c::setStaticF___9(::Environments::Definitions::ColorSchemesAsyncInstaller___c* value) {
  ::cordl_internals::setStaticField<::Environments::Definitions::ColorSchemesAsyncInstaller___c*, "<>9", ::Environments::Definitions::ColorSchemesAsyncInstaller___c*>(
      std::forward<::Environments::Definitions::ColorSchemesAsyncInstaller___c*>(value));
}
inline ::Environments::Definitions::ColorSchemesAsyncInstaller___c* Environments::Definitions::ColorSchemesAsyncInstaller___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Environments::Definitions::ColorSchemesAsyncInstaller___c*, "<>9", ::Environments::Definitions::ColorSchemesAsyncInstaller___c*>();
}
inline void Environments::Definitions::ColorSchemesAsyncInstaller___c::setStaticF___9__3_0(::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, int32_t>*, "<>9__3_0", ::Environments::Definitions::ColorSchemesAsyncInstaller___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, int32_t>* Environments::Definitions::ColorSchemesAsyncInstaller___c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, int32_t>*, "<>9__3_0", ::Environments::Definitions::ColorSchemesAsyncInstaller___c*>();
}
inline void Environments::Definitions::ColorSchemesAsyncInstaller___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Environments::Definitions::ColorSchemesAsyncInstaller___c::_LoadResourcesBeforeInstall_b__3_0(::GlobalNamespace::ColorSchemeSO* colorScheme) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller___c*>(),
                                                                                         { "<LoadResourcesBeforeInstall>b__3_0", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemeSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, colorScheme);
}
inline ::Environments::Definitions::ColorSchemesAsyncInstaller___c* Environments::Definitions::ColorSchemesAsyncInstaller___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Environments::Definitions::ColorSchemesAsyncInstaller___c*>());
}
// Ctor Parameters []
constexpr ::Environments::Definitions::ColorSchemesAsyncInstaller___c::ColorSchemesAsyncInstaller___c() {}
//  Writing Method size for method: ::Environments::Definitions::ColorSchemesAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Environments::Definitions::ColorSchemesAsyncInstaller::*)()>(
    &::Environments::Definitions::ColorSchemesAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x376c8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::ColorSchemesAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Environments::Definitions::ColorSchemesAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*, ::BGLib::AppFlow::Initialization::IInstallerRegistry*)>(
    &::Environments::Definitions::ColorSchemesAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x376c908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::ColorSchemesAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Environments::Definitions::ColorSchemesAsyncInstaller::*)()>(
    &::Environments::Definitions::ColorSchemesAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x376ca50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller*>(),
                                                                                          { ::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Environments::Definitions::ColorSchemesAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Environments::Definitions::ColorSchemesAsyncInstaller::*)()>(&::Environments::Definitions::ColorSchemesAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x376cb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*& Environments::Definitions::ColorSchemesAsyncInstaller::__cordl_internal_get__colorSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* const& Environments::Definitions::ColorSchemesAsyncInstaller::__cordl_internal_get__colorSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemes;
}
constexpr void Environments::Definitions::ColorSchemesAsyncInstaller::__cordl_internal_set__colorSchemes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemes = value;
}
inline ::StringW Environments::Definitions::ColorSchemesAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Environments::Definitions::ColorSchemesAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemes,
                                                                                              ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorSchemes, registry);
}
inline void Environments::Definitions::ColorSchemesAsyncInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Environments::Definitions::ColorSchemesAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Environments::Definitions::ColorSchemesAsyncInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Environments::Definitions::ColorSchemesAsyncInstaller* Environments::Definitions::ColorSchemesAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Environments::Definitions::ColorSchemesAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::Environments::Definitions::ColorSchemesAsyncInstaller::ColorSchemesAsyncInstaller() {}
