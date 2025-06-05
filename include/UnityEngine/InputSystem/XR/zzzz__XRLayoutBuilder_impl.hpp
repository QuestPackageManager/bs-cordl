#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/XRLayoutBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRLayoutBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceExecuteCommandDelegate_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__FeatureType_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRDeviceDescriptor_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRFeatureDescriptor_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRLayoutBuilder_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::*)()>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45e6a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0._OnFindLayoutForDevice_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (
    ::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::*)()>(&::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::_OnFindLayoutForDevice_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x45e79e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0*>::get(),
                                                 "<OnFindLayoutForDevice>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___layout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::_OnFindLayoutForDevice_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0*>::get(),
                                               "<OnFindLayoutForDevice>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0* UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRLayoutBuilder___c__DisplayClass5_0::XRLayoutBuilder___c__DisplayClass5_0() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.GetSizeOfFeature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::UnityEngine::InputSystem::XR::XRFeatureDescriptor)>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder::GetSizeOfFeature)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x45e64a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "GetSizeOfFeature", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.SanitizeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&::UnityEngine::InputSystem::XR::XRLayoutBuilder::SanitizeString)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x45e651c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "SanitizeString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.OnFindLayoutForDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (*)(::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>, ::StringW, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*)>(
        &::UnityEngine::InputSystem::XR::XRLayoutBuilder::OnFindLayoutForDevice)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x45e6678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "OnFindLayoutForDevice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.ConvertPotentialAliasToName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*, ::StringW)>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder::ConvertPotentialAliasToName)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x45e6a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "ConvertPotentialAliasToName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.IsSubControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::XR::XRLayoutBuilder::*)(::StringW)>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder::IsSubControl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x45e6bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "IsSubControl",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.GetParentControlName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::XR::XRLayoutBuilder::*)(::StringW)>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder::GetParentControlName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x45e6be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "GetParentControlName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.IsPoseControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::XR::XRLayoutBuilder::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*, int32_t)>(&::UnityEngine::InputSystem::XR::XRLayoutBuilder::IsPoseControl)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x45e6c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "IsPoseControl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (::UnityEngine::InputSystem::XR::XRLayoutBuilder::*)()>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder::Build)> {
  constexpr static std::size_t size = 0xad0;
  constexpr static std::size_t addrs = 0x45e6d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "Build",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XR::XRLayoutBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XR::XRLayoutBuilder::*)()>(
    &::UnityEngine::InputSystem::XR::XRLayoutBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x45e6a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parentLayout)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___interfaceName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___descriptor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::XR::XRLayoutBuilder::setStaticF_poseSubControlNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "poseSubControlNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::InputSystem::XR::XRLayoutBuilder::getStaticF_poseSubControlNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "poseSubControlNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get>();
}
inline void
UnityEngine::InputSystem::XR::XRLayoutBuilder::setStaticF_poseSubControlTypes(::ArrayW<::UnityEngine::InputSystem::XR::FeatureType, ::Array<::UnityEngine::InputSystem::XR::FeatureType>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::InputSystem::XR::FeatureType, ::Array<::UnityEngine::InputSystem::XR::FeatureType>*>, "poseSubControlTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get>(
      std::forward<::ArrayW<::UnityEngine::InputSystem::XR::FeatureType, ::Array<::UnityEngine::InputSystem::XR::FeatureType>*>>(value));
}
inline ::ArrayW<::UnityEngine::InputSystem::XR::FeatureType, ::Array<::UnityEngine::InputSystem::XR::FeatureType>*> UnityEngine::InputSystem::XR::XRLayoutBuilder::getStaticF_poseSubControlTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::InputSystem::XR::FeatureType, ::Array<::UnityEngine::InputSystem::XR::FeatureType>*>, "poseSubControlTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get>();
}
inline uint32_t UnityEngine::InputSystem::XR::XRLayoutBuilder::GetSizeOfFeature(::UnityEngine::InputSystem::XR::XRFeatureDescriptor featureDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "GetSizeOfFeature", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, featureDescriptor);
}
inline ::StringW UnityEngine::InputSystem::XR::XRLayoutBuilder::SanitizeString(::StringW original, bool allowPaths) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "SanitizeString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, original, allowPaths);
}
inline ::StringW UnityEngine::InputSystem::XR::XRLayoutBuilder::OnFindLayoutForDevice(::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                                                                      ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "OnFindLayoutForDevice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, description, matchedLayout, executeCommandDelegate);
}
inline ::StringW UnityEngine::InputSystem::XR::XRLayoutBuilder::ConvertPotentialAliasToName(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::StringW nameOrAlias) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "ConvertPotentialAliasToName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, layout, nameOrAlias);
}
inline bool UnityEngine::InputSystem::XR::XRLayoutBuilder::IsSubControl(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "IsSubControl",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline ::StringW UnityEngine::InputSystem::XR::XRLayoutBuilder::GetParentControlName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "GetParentControlName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline bool UnityEngine::InputSystem::XR::XRLayoutBuilder::IsPoseControl(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* features, int32_t startIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "IsPoseControl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, features, startIndex);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::XR::XRLayoutBuilder::Build() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), "Build",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::XR::XRLayoutBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::XR::XRLayoutBuilder* UnityEngine::InputSystem::XR::XRLayoutBuilder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::XR::XRLayoutBuilder*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::XR::XRLayoutBuilder::XRLayoutBuilder() {}
