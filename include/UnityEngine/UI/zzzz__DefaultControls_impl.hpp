#pragma once
// IWYU pragma private; include "UnityEngine/UI/DefaultControls.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UI/zzzz__DefaultControls_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UI/zzzz__DefaultControls_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls_IFactoryControls.CreateGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::UI::DefaultControls_IFactoryControls::*)(
    ::StringW, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::UI::DefaultControls_IFactoryControls::CreateGameObject)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls_IFactoryControls*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls_IFactoryControls*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls_IFactoryControls::CreateGameObject(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls_IFactoryControls*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, name, components);
}
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory.CreateGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::*)(
    ::StringW, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::CreateGameObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x495e52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory*>::get(), "CreateGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::*)()>(
    &::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x495e598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::setStaticF_Default(::UnityEngine::UI::DefaultControls_IFactoryControls* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::DefaultControls_IFactoryControls*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory*>::get>(
      std::forward<::UnityEngine::UI::DefaultControls_IFactoryControls*>(value));
}
inline ::UnityEngine::UI::DefaultControls_IFactoryControls* UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::DefaultControls_IFactoryControls*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory*>::get>();
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::CreateGameObject(::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory*>::get(), "CreateGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, name, components);
}
inline void UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory* UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory*>());
}
/// @brief Convert operator to "::UnityEngine::UI::DefaultControls_IFactoryControls"
constexpr UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::operator ::UnityEngine::UI::DefaultControls_IFactoryControls*() noexcept {
  return static_cast<::UnityEngine::UI::DefaultControls_IFactoryControls*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::DefaultControls_IFactoryControls"
constexpr ::UnityEngine::UI::DefaultControls_IFactoryControls* UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::i___UnityEngine__UI__DefaultControls_IFactoryControls() noexcept {
  return static_cast<::UnityEngine::UI::DefaultControls_IFactoryControls*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::DefaultControls_DefaultRuntimeFactory::DefaultControls_DefaultRuntimeFactory() {}
// Ctor Parameters [CppParam { name: "standard", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "background", ty: "::UnityW<::UnityEngine::Sprite>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "inputField", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "knob", ty:
// "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "checkmark", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "dropdown", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam { name: "mask", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::UI::DefaultControls_Resources::DefaultControls_Resources(::UnityW<::UnityEngine::Sprite> standard, ::UnityW<::UnityEngine::Sprite> background,
                                                                                  ::UnityW<::UnityEngine::Sprite> inputField, ::UnityW<::UnityEngine::Sprite> knob,
                                                                                  ::UnityW<::UnityEngine::Sprite> checkmark, ::UnityW<::UnityEngine::Sprite> dropdown,
                                                                                  ::UnityW<::UnityEngine::Sprite> mask) noexcept {
  this->standard = standard;
  this->background = background;
  this->inputField = inputField;
  this->knob = knob;
  this->checkmark = checkmark;
  this->dropdown = dropdown;
  this->mask = mask;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::DefaultControls_Resources::DefaultControls_Resources() {}
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.get_factory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::DefaultControls_IFactoryControls* (*)()>(&::UnityEngine::UI::DefaultControls::get_factory)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4959c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "get_factory",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateUIElementRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(
    ::StringW, ::UnityEngine::Vector2, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::UI::DefaultControls::CreateUIElementRoot)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x4959ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateUIElementRoot", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateUIObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(
    ::StringW, ::UnityEngine::GameObject*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::UnityEngine::UI::DefaultControls::CreateUIObject)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4959e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateUIObject", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.SetDefaultTextValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::Text*)>(&::UnityEngine::UI::DefaultControls::SetDefaultTextValues)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x495a054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "SetDefaultTextValues", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Text*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.SetDefaultColorTransitionValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::Selectable*)>(&::UnityEngine::UI::DefaultControls::SetDefaultColorTransitionValues)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x495a130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "SetDefaultColorTransitionValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.SetParentAndAlign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*)>(
    &::UnityEngine::UI::DefaultControls::SetParentAndAlign)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4959f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "SetParentAndAlign", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.SetLayerRecursively
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, int32_t)>(&::UnityEngine::UI::DefaultControls::SetLayerRecursively)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x495a190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "SetLayerRecursively", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreatePanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::UI::DefaultControls_Resources)>(
    &::UnityEngine::UI::DefaultControls::CreatePanel)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x495a274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreatePanel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::UI::DefaultControls_Resources)>(
    &::UnityEngine::UI::DefaultControls::CreateButton)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x495a864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateButton", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::UI::DefaultControls_Resources)>(
    &::UnityEngine::UI::DefaultControls::CreateText)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x495ac50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateText", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::UI::DefaultControls_Resources)>(
    &::UnityEngine::UI::DefaultControls::CreateImage)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x495adf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateImage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateRawImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::UI::DefaultControls_Resources)>(
    &::UnityEngine::UI::DefaultControls::CreateRawImage)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x495af2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateRawImage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::UI::DefaultControls_Resources)>(
    &::UnityEngine::UI::DefaultControls::CreateSlider)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x495b068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateSlider", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateScrollbar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::UI::DefaultControls_Resources)>(
    &::UnityEngine::UI::DefaultControls::CreateScrollbar)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x495b724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateScrollbar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateToggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::UI::DefaultControls_Resources)>(
    &::UnityEngine::UI::DefaultControls::CreateToggle)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x495bba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateToggle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateInputField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::UI::DefaultControls_Resources)>(
    &::UnityEngine::UI::DefaultControls::CreateInputField)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0x495c114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateInputField", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateDropdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::UI::DefaultControls_Resources)>(
    &::UnityEngine::UI::DefaultControls::CreateDropdown)> {
  constexpr static std::size_t size = 0x122c;
  constexpr static std::size_t addrs = 0x495c738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateDropdown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::DefaultControls.CreateScrollView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::UI::DefaultControls_Resources)>(
    &::UnityEngine::UI::DefaultControls::CreateScrollView)> {
  constexpr static std::size_t size = 0x8d8;
  constexpr static std::size_t addrs = 0x495db7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateScrollView", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::DefaultControls::setStaticF_m_CurrentFactory(::UnityEngine::UI::DefaultControls_IFactoryControls* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::DefaultControls_IFactoryControls*, "m_CurrentFactory",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>(
      std::forward<::UnityEngine::UI::DefaultControls_IFactoryControls*>(value));
}
inline ::UnityEngine::UI::DefaultControls_IFactoryControls* UnityEngine::UI::DefaultControls::getStaticF_m_CurrentFactory() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::DefaultControls_IFactoryControls*, "m_CurrentFactory",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>();
}
inline void UnityEngine::UI::DefaultControls::setStaticF_s_ThickElementSize(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_ThickElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::UI::DefaultControls::getStaticF_s_ThickElementSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_ThickElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>();
}
inline void UnityEngine::UI::DefaultControls::setStaticF_s_ThinElementSize(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_ThinElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::UI::DefaultControls::getStaticF_s_ThinElementSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_ThinElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>();
}
inline void UnityEngine::UI::DefaultControls::setStaticF_s_ImageElementSize(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_ImageElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::UI::DefaultControls::getStaticF_s_ImageElementSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_ImageElementSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>();
}
inline void UnityEngine::UI::DefaultControls::setStaticF_s_DefaultSelectableColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_DefaultSelectableColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::UI::DefaultControls::getStaticF_s_DefaultSelectableColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_DefaultSelectableColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>();
}
inline void UnityEngine::UI::DefaultControls::setStaticF_s_PanelColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_PanelColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::UI::DefaultControls::getStaticF_s_PanelColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_PanelColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>();
}
inline void UnityEngine::UI::DefaultControls::setStaticF_s_TextColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "s_TextColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::UI::DefaultControls::getStaticF_s_TextColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_TextColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get>();
}
inline ::UnityEngine::UI::DefaultControls_IFactoryControls* UnityEngine::UI::DefaultControls::get_factory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "get_factory",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::DefaultControls_IFactoryControls*, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateUIElementRoot(::StringW name, ::UnityEngine::Vector2 size,
                                                                                                 ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateUIElementRoot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, name, size, components);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateUIObject(::StringW name, ::UnityEngine::GameObject* parent,
                                                                                            ::ArrayW<::System::Type*, ::Array<::System::Type*>*> components) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateUIObject", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, name, parent, components);
}
inline void UnityEngine::UI::DefaultControls::SetDefaultTextValues(::UnityEngine::UI::Text* lbl) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "SetDefaultTextValues", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Text*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, lbl);
}
inline void UnityEngine::UI::DefaultControls::SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* slider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "SetDefaultColorTransitionValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, slider);
}
inline void UnityEngine::UI::DefaultControls::SetParentAndAlign(::UnityEngine::GameObject* child, ::UnityEngine::GameObject* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "SetParentAndAlign", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, child, parent);
}
inline void UnityEngine::UI::DefaultControls::SetLayerRecursively(::UnityEngine::GameObject* go, int32_t layer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "SetLayerRecursively", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, go, layer);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreatePanel(::UnityEngine::UI::DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreatePanel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateButton(::UnityEngine::UI::DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateButton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateText(::UnityEngine::UI::DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateText", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateImage(::UnityEngine::UI::DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateImage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateRawImage(::UnityEngine::UI::DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateRawImage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateSlider(::UnityEngine::UI::DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateSlider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateScrollbar(::UnityEngine::UI::DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateScrollbar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateToggle(::UnityEngine::UI::DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateToggle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateInputField(::UnityEngine::UI::DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateInputField", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateDropdown(::UnityEngine::UI::DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateDropdown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UI::DefaultControls::CreateScrollView(::UnityEngine::UI::DefaultControls_Resources resources) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::DefaultControls*>::get(), "CreateScrollView", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::DefaultControls_Resources>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(nullptr, ___internal_method, resources);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::DefaultControls::DefaultControls() {}
