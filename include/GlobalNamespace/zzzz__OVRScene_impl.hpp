#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScene.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRScene_def.hpp"
#include "GlobalNamespace/zzzz__OVRSemanticLabels_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRScene.RequestSpaceSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(::StringW)>(&::GlobalNamespace::OVRScene::RequestSpaceSetup)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5e15e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRScene*>(), { "RequestSpaceSetup", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScene.RequestSpaceSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)()>(&::GlobalNamespace::OVRScene::RequestSpaceSetup)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e15f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRScene*>(), { "RequestSpaceSetup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScene.RequestSpaceSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSemanticLabels_Classification>*)>(
    &::GlobalNamespace::OVRScene::RequestSpaceSetup)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e16078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRScene*>(),
                                         { "RequestSpaceSetup", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSemanticLabels_Classification>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScene.ValidateRequestString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::StringW>*, ::StringW)>(&::GlobalNamespace::OVRScene::ValidateRequestString)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5e160d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRScene*>(),
                                                { "ValidateRequestString", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRScene::RequestSpaceSetup(::StringW labels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRScene*>(), { "RequestSpaceSetup", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, labels);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRScene::RequestSpaceSetup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRScene*>(), { "RequestSpaceSetup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool>
GlobalNamespace::OVRScene::RequestSpaceSetup(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSemanticLabels_Classification>* classifications) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRScene*>(),
                                       { "RequestSpaceSetup", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSemanticLabels_Classification>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, classifications);
}
inline void GlobalNamespace::OVRScene::ValidateRequestString(::System::Collections::Generic::IEnumerable_1<::StringW>* labels, ::StringW paramName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRScene*>(),
                                              { "ValidateRequestString", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, labels, paramName);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRScene::OVRScene() {}
