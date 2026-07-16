#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/XRLayoutBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__FeatureType_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRLayoutBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceExecuteCommandDelegate_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRDeviceDescriptor_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRFeatureDescriptor_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRLayoutBuilder_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::*)()>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6584310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0._OnFindLayoutForDevice_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::*)()>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::_OnFindLayoutForDevice_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6585300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0*>(), { "<OnFindLayoutForDevice>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::XR::XRLayoutBuilder*& UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::__cordl_internal_get_layout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr ::UnityEngine::InputSystem::XR::XRLayoutBuilder* const& UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::__cordl_internal_get_layout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___layout;
}
constexpr void UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::__cordl_internal_set_layout(::UnityEngine::InputSystem::XR::XRLayoutBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___layout = value;
}
inline void UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::_OnFindLayoutForDevice_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0*>(), { "<OnFindLayoutForDevice>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0* UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::XRLayoutBuilder___c__DisplayClass5_0() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.GetSizeOfFeature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::InputSystem::XR::XRFeatureDescriptor)>(&::UnityEngine::InputSystem::XR::XRLayoutBuilder::GetSizeOfFeature)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6583d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(),
                                                                                           { "GetSizeOfFeature", {}, { ::i2c::type_of<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.SanitizeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, bool)>(&::UnityEngine::InputSystem::XR::XRLayoutBuilder::SanitizeString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6583dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(), { "SanitizeString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.OnFindLayoutForDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::StringW (*)(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::StringW, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*)>(
        &::UnityEngine::InputSystem::XR::XRLayoutBuilder::OnFindLayoutForDevice)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x6583f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(),
                                                             { "OnFindLayoutForDevice",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.ConvertPotentialAliasToName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::StringW)>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder::ConvertPotentialAliasToName)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6584318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(),
                                                { "ConvertPotentialAliasToName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.IsSubControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::XR::XRLayoutBuilder::*)(::StringW)>(&::UnityEngine::InputSystem::XR::XRLayoutBuilder::IsSubControl)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x658449c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(), { "IsSubControl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.GetParentControlName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::XR::XRLayoutBuilder::*)(::StringW)>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder::GetParentControlName)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x65844cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(), { "GetParentControlName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.IsPoseControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::XR::XRLayoutBuilder::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*, int32_t)>(&::UnityEngine::InputSystem::XR::XRLayoutBuilder::IsPoseControl)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6584508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(),
                            { "IsPoseControl", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::UnityEngine::InputSystem::XR::XRLayoutBuilder::*)()>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder::Build)> {
  constexpr static std::size_t size = 0xacc;
  constexpr static std::size_t addrs = 0x6584670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(), { "Build", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::XR::XRLayoutBuilder::*)()>(&::UnityEngine::InputSystem::XR::XRLayoutBuilder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6584314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::XR::XRLayoutBuilder::__cordl_internal_get_parentLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentLayout;
}
constexpr ::StringW const& UnityEngine::InputSystem::XR::XRLayoutBuilder::__cordl_internal_get_parentLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parentLayout;
}
constexpr void UnityEngine::InputSystem::XR::XRLayoutBuilder::__cordl_internal_set_parentLayout(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parentLayout = value;
}
constexpr ::StringW& UnityEngine::InputSystem::XR::XRLayoutBuilder::__cordl_internal_get_interfaceName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interfaceName;
}
constexpr ::StringW const& UnityEngine::InputSystem::XR::XRLayoutBuilder::__cordl_internal_get_interfaceName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___interfaceName;
}
constexpr void UnityEngine::InputSystem::XR::XRLayoutBuilder::__cordl_internal_set_interfaceName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___interfaceName = value;
}
constexpr ::UnityEngine::InputSystem::XR::XRDeviceDescriptor*& UnityEngine::InputSystem::XR::XRLayoutBuilder::__cordl_internal_get_descriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descriptor;
}
constexpr ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* const& UnityEngine::InputSystem::XR::XRLayoutBuilder::__cordl_internal_get_descriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descriptor;
}
constexpr void UnityEngine::InputSystem::XR::XRLayoutBuilder::__cordl_internal_set_descriptor(::UnityEngine::InputSystem::XR::XRDeviceDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___descriptor = value;
}
inline void UnityEngine::InputSystem::XR::XRLayoutBuilder::setStaticF_poseSubControlNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "poseSubControlNames", ::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::InputSystem::XR::XRLayoutBuilder::getStaticF_poseSubControlNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "poseSubControlNames", ::UnityEngine::InputSystem::XR::XRLayoutBuilder*>();
}
inline void UnityEngine::InputSystem::XR::XRLayoutBuilder::setStaticF_poseSubControlTypes(::ArrayW<::UnityEngine::InputSystem::XR::FeatureType> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::InputSystem::XR::FeatureType>, "poseSubControlTypes", ::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(
      std::forward<::ArrayW<::UnityEngine::InputSystem::XR::FeatureType>>(value));
}
inline ::ArrayW<::UnityEngine::InputSystem::XR::FeatureType> UnityEngine::InputSystem::XR::XRLayoutBuilder::getStaticF_poseSubControlTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::InputSystem::XR::FeatureType>, "poseSubControlTypes", ::UnityEngine::InputSystem::XR::XRLayoutBuilder*>();
}
inline uint32_t UnityEngine::InputSystem::XR::XRLayoutBuilder::GetSizeOfFeature(::UnityEngine::InputSystem::XR::XRFeatureDescriptor featureDescriptor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(),
                                                                                         { "GetSizeOfFeature", {}, { ::i2c::type_of<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, featureDescriptor);
}
inline ::StringW UnityEngine::InputSystem::XR::XRLayoutBuilder::SanitizeString(::StringW original, bool allowPaths) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(), { "SanitizeString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, original, allowPaths);
}
inline ::StringW UnityEngine::InputSystem::XR::XRLayoutBuilder::OnFindLayoutForDevice(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                                                                      ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(),
                                                           { "OnFindLayoutForDevice",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, description, matchedLayout, executeCommandDelegate);
}
inline ::StringW UnityEngine::InputSystem::XR::XRLayoutBuilder::ConvertPotentialAliasToName(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::StringW nameOrAlias) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(),
                                              { "ConvertPotentialAliasToName", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, layout, nameOrAlias);
}
inline bool UnityEngine::InputSystem::XR::XRLayoutBuilder::IsSubControl(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(), { "IsSubControl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::StringW UnityEngine::InputSystem::XR::XRLayoutBuilder::GetParentControlName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(), { "GetParentControlName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline bool UnityEngine::InputSystem::XR::XRLayoutBuilder::IsPoseControl(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* features, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(),
                          { "IsPoseControl", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, features, startIndex);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::XR::XRLayoutBuilder::Build() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(), { "Build", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::XRLayoutBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRLayoutBuilder* UnityEngine::InputSystem::XR::XRLayoutBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRLayoutBuilder::XRLayoutBuilder() {}
