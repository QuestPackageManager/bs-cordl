#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemesSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType::ColorSchemesSettings_ColorOverrideType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType::ColorSchemesSettings_ColorOverrideType() {}
constexpr ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType GlobalNamespace::ColorSchemesSettings_ColorOverrideType::All{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType GlobalNamespace::ColorSchemesSettings_ColorOverrideType::NotesOnly{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemesSettings___c::*)()>(&::GlobalNamespace::ColorSchemesSettings___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f6068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings___c.__ctor_b__19_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::ColorSchemesSettings___c::*)(::GlobalNamespace::ColorSchemeSO*)>(
    &::GlobalNamespace::ColorSchemesSettings___c::__ctor_b__19_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26f6070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings___c*>::get(), "<.ctor>b__19_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemeSO*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ColorSchemesSettings___c::setStaticF___9(::GlobalNamespace::ColorSchemesSettings___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::ColorSchemesSettings___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings___c*>::get>(
      std::forward<::GlobalNamespace::ColorSchemesSettings___c*>(value));
}
inline ::GlobalNamespace::ColorSchemesSettings___c* GlobalNamespace::ColorSchemesSettings___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::ColorSchemesSettings___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings___c*>::get>();
}
inline void GlobalNamespace::ColorSchemesSettings___c::setStaticF___9__19_0(::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>*, "<>9__19_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>* GlobalNamespace::ColorSchemesSettings___c::getStaticF___9__19_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::ColorSchemeSO>, ::GlobalNamespace::ColorScheme*>*, "<>9__19_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings___c*>::get>();
}
inline void GlobalNamespace::ColorSchemesSettings___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemesSettings___c::__ctor_b__19_0(::GlobalNamespace::ColorSchemeSO* csSO) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings___c*>::get(), "<.ctor>b__19_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemeSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(this, ___internal_method, csSO);
}
inline ::GlobalNamespace::ColorSchemesSettings___c* GlobalNamespace::ColorSchemesSettings___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColorSchemesSettings___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemesSettings___c::ColorSchemesSettings___c() {}
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.get_overrideDefaultColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ColorSchemesSettings::*)()>(
    &::GlobalNamespace::ColorSchemesSettings::get_overrideDefaultColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f57c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                               "get_overrideDefaultColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.set_overrideDefaultColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemesSettings::*)(bool)>(
    &::GlobalNamespace::ColorSchemesSettings::set_overrideDefaultColors)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26f57cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "set_overrideDefaultColors",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.set_selectedColorSchemeId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemesSettings::*)(::StringW)>(
    &::GlobalNamespace::ColorSchemesSettings::set_selectedColorSchemeId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26f57f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "set_selectedColorSchemeId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.get_selectedColorSchemeId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ColorSchemesSettings::*)()>(
    &::GlobalNamespace::ColorSchemesSettings::get_selectedColorSchemeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f5810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                               "get_selectedColorSchemeId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.get_colorOverrideType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorSchemesSettings_ColorOverrideType (::GlobalNamespace::ColorSchemesSettings::*)()>(
    &::GlobalNamespace::ColorSchemesSettings::get_colorOverrideType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f5818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                               "get_colorOverrideType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.set_colorOverrideType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemesSettings::*)(::GlobalNamespace::ColorSchemesSettings_ColorOverrideType)>(
    &::GlobalNamespace::ColorSchemesSettings::set_colorOverrideType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f5820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "set_colorOverrideType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemesSettings_ColorOverrideType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.add_didChangeOverrideSettingsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemesSettings::*)(::System::Action*)>(
    &::GlobalNamespace::ColorSchemesSettings::add_didChangeOverrideSettingsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f5828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "add_didChangeOverrideSettingsEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.remove_didChangeOverrideSettingsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemesSettings::*)(::System::Action*)>(
    &::GlobalNamespace::ColorSchemesSettings::remove_didChangeOverrideSettingsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f58c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "remove_didChangeOverrideSettingsEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::ColorSchemesSettings::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>*)>(&::GlobalNamespace::ColorSchemesSettings::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x26f5960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemesSettings::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*)>(&::GlobalNamespace::ColorSchemesSettings::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x26f5bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.GetNumberOfColorSchemes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ColorSchemesSettings::*)()>(
    &::GlobalNamespace::ColorSchemesSettings::GetNumberOfColorSchemes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26f5cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                               "GetNumberOfColorSchemes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.GetColorSchemeForIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::ColorSchemesSettings::*)(int32_t)>(
    &::GlobalNamespace::ColorSchemesSettings::GetColorSchemeForIdx)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26f5d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "GetColorSchemeForIdx",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.GetColorSchemeForId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::ColorSchemesSettings::*)(::StringW)>(
    &::GlobalNamespace::ColorSchemesSettings::GetColorSchemeForId)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26f5d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "GetColorSchemeForId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.SetColorSchemeForId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorSchemesSettings::*)(::GlobalNamespace::ColorScheme*)>(
    &::GlobalNamespace::ColorSchemesSettings::SetColorSchemeForId)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x26f5dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "SetColorSchemeForId", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.GetSelectedColorScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::ColorSchemesSettings::*)()>(
    &::GlobalNamespace::ColorSchemesSettings::GetSelectedColorScheme)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x26f5ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                               "GetSelectedColorScheme", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.GetSelectedColorSchemeIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ColorSchemesSettings::*)()>(
    &::GlobalNamespace::ColorSchemesSettings::GetSelectedColorSchemeIdx)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x26f5f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                               "GetSelectedColorSchemeIdx", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.GetOverrideColorScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::ColorSchemesSettings::*)()>(
    &::GlobalNamespace::ColorSchemesSettings::GetOverrideColorScheme)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26f5fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                               "GetOverrideColorScheme", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemesSettings.ShouldOverrideLightshowColors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ColorSchemesSettings::*)()>(
    &::GlobalNamespace::ColorSchemesSettings::ShouldOverrideLightshowColors)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26f5fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                               "ShouldOverrideLightshowColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get__colorOverrideType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorOverrideType_k__BackingField;
}
constexpr ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType const& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get__colorOverrideType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorOverrideType_k__BackingField;
}
constexpr void GlobalNamespace::ColorSchemesSettings::__cordl_internal_set__colorOverrideType_k__BackingField(::GlobalNamespace::ColorSchemesSettings_ColorOverrideType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorOverrideType_k__BackingField = value;
}
constexpr ::System::Action*& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get_didChangeOverrideSettingsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeOverrideSettingsEvent;
}
constexpr ::System::Action* const& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get_didChangeOverrideSettingsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeOverrideSettingsEvent;
}
constexpr void GlobalNamespace::ColorSchemesSettings::__cordl_internal_set_didChangeOverrideSettingsEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeOverrideSettingsEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>*& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get__colorSchemesList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* const& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get__colorSchemesList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesList;
}
constexpr void GlobalNamespace::ColorSchemesSettings::__cordl_internal_set__colorSchemesList(::System::Collections::Generic::List_1<::GlobalNamespace::ColorScheme*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorSchemesList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>*& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get__colorSchemesDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* const& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get__colorSchemesDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesDict;
}
constexpr void GlobalNamespace::ColorSchemesSettings::__cordl_internal_set__colorSchemesDict(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ColorScheme*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorSchemesDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get__selectedColorSchemeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColorSchemeId;
}
constexpr ::StringW const& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get__selectedColorSchemeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColorSchemeId;
}
constexpr void GlobalNamespace::ColorSchemesSettings::__cordl_internal_set__selectedColorSchemeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedColorSchemeId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get__overrideDefaultColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultColors;
}
constexpr bool const& GlobalNamespace::ColorSchemesSettings::__cordl_internal_get__overrideDefaultColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideDefaultColors;
}
constexpr void GlobalNamespace::ColorSchemesSettings::__cordl_internal_set__overrideDefaultColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideDefaultColors = value;
}
inline bool GlobalNamespace::ColorSchemesSettings::get_overrideDefaultColors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                             "get_overrideDefaultColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSchemesSettings::set_overrideDefaultColors(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "set_overrideDefaultColors",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorSchemesSettings::set_selectedColorSchemeId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "set_selectedColorSchemeId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::ColorSchemesSettings::get_selectedColorSchemeId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                             "get_selectedColorSchemeId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorSchemesSettings_ColorOverrideType GlobalNamespace::ColorSchemesSettings::get_colorOverrideType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                             "get_colorOverrideType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorSchemesSettings_ColorOverrideType, false>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSchemesSettings::set_colorOverrideType(::GlobalNamespace::ColorSchemesSettings_ColorOverrideType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "set_colorOverrideType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemesSettings_ColorOverrideType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorSchemesSettings::add_didChangeOverrideSettingsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "add_didChangeOverrideSettingsEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorSchemesSettings::remove_didChangeOverrideSettingsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "remove_didChangeOverrideSettingsEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorSchemesSettings::_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorSchemes);
}
inline void GlobalNamespace::ColorSchemesSettings::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorSchemeSOs);
}
inline int32_t GlobalNamespace::ColorSchemesSettings::GetNumberOfColorSchemes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                             "GetNumberOfColorSchemes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemesSettings::GetColorSchemeForIdx(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "GetColorSchemeForIdx",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(this, ___internal_method, idx);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemesSettings::GetColorSchemeForId(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "GetColorSchemeForId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(this, ___internal_method, id);
}
inline void GlobalNamespace::ColorSchemesSettings::SetColorSchemeForId(::GlobalNamespace::ColorScheme* colorScheme) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(), "SetColorSchemeForId", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorScheme*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorScheme);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemesSettings::GetSelectedColorScheme() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                             "GetSelectedColorScheme", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ColorSchemesSettings::GetSelectedColorSchemeIdx() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                             "GetSelectedColorSchemeIdx", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::ColorSchemesSettings::GetOverrideColorScheme() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                             "GetOverrideColorScheme", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ColorSchemesSettings::ShouldOverrideLightshowColors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                                                             "ShouldOverrideLightshowColors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorSchemesSettings* GlobalNamespace::ColorSchemesSettings::New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ColorScheme*>* colorSchemes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColorSchemesSettings*>(colorSchemes));
}
inline ::GlobalNamespace::ColorSchemesSettings*
GlobalNamespace::ColorSchemesSettings::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::ColorSchemeSO>>* colorSchemeSOs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ColorSchemesSettings*>(colorSchemeSOs));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemesSettings::ColorSchemesSettings() {}
