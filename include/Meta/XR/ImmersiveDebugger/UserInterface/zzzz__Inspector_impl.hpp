#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Inspector.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__Inspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Background_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Flex_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ImageStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ToggleWithLabel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Toggle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IInspector_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__IMember_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__Member_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugMember_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.set_BackgroundStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::set_BackgroundStyle)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a4ff24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(),
                                                             { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.get_Title
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::get_Title)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a4ffc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "get_Title", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.set_Title
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)(::StringW)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::set_Title)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a4ffd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "set_Title", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.get_InstanceHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::get_InstanceHandle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a4fff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "get_InstanceHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.set_InstanceHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::set_InstanceHandle)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5a50004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(),
                                                                                           { "set_InstanceHandle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.get_Foldout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::get_Foldout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a50224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "get_Foldout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::Setup)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5a5022c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.OnTransparencyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::OnTransparencyChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a50724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.UpdateBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::UpdateBackground)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a5079c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "UpdateBackground", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.RegisterMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IMember* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)(::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::RegisterMember)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5a507dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(),
                                                { "RegisterMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.GetMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IMember* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)(::System::Reflection::MemberInfo*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::GetMember)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a50ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "GetMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.OnStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::OnStateChanged)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5a50d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "OnStateChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::Update)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a50f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.UpdateInstanceState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::UpdateInstanceState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5a5013c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "UpdateInstanceState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector.UpdateInstanceState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)(bool, bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::UpdateInstanceState)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a50f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(),
                                                                                           { "UpdateInstanceState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a51048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__instanceHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceHandle;
}
constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__instanceHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instanceHandle;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_set__instanceHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instanceHandle = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel>& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> const& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_set__title(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____title = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__flex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flex;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__flex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flex;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flex = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__background() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____background;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__background() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____background;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_set__background(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____background = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Member>>*&
Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Member>>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_set__registry(
    ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Member>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registry = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__backgroundImageStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImageStyle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__backgroundImageStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImageStyle;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_set__backgroundImageStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundImageStyle = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__foldout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foldout;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__foldout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foldout;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_set__foldout(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____foldout = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__previousEnabledState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousEnabledState;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_get__previousEnabledState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousEnabledState;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::__cordl_internal_set__previousEnabledState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previousEnabledState = value;
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(),
                                                           { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::XR::ImmersiveDebugger::UserInterface::Inspector::get_Title() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "get_Title", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::set_Title(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "set_Title", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle Meta::XR::ImmersiveDebugger::UserInterface::Inspector::get_InstanceHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "get_InstanceHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::set_InstanceHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(),
                                                                                         { "set_InstanceHandle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> Meta::XR::ImmersiveDebugger::UserInterface::Inspector::get_Foldout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "get_Foldout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::OnTransparencyChanged() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::UpdateBackground(bool transparent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "UpdateBackground", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transparent);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::IMember* Meta::XR::ImmersiveDebugger::UserInterface::Inspector::RegisterMember(::System::Reflection::MemberInfo* memberInfo,
                                                                                                                                    ::Meta::XR::ImmersiveDebugger::DebugMember* attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(),
                                              { "RegisterMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::Meta::XR::ImmersiveDebugger::DebugMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>(this, ___internal_method, memberInfo, attribute);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::IMember* Meta::XR::ImmersiveDebugger::UserInterface::Inspector::GetMember(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "GetMember", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::IMember*>(this, ___internal_method, memberInfo);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::OnStateChanged(bool state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "OnStateChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::UpdateInstanceState(bool force) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { "UpdateInstanceState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::UpdateInstanceState(bool state, bool force) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(),
                                                                                         { "UpdateInstanceState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, force);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Inspector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector* Meta::XR::ImmersiveDebugger::UserInterface::Inspector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*>());
}
/// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::UserInterface::IInspector"
constexpr Meta::XR::ImmersiveDebugger::UserInterface::Inspector::operator ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::ImmersiveDebugger::UserInterface::IInspector"
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector* Meta::XR::ImmersiveDebugger::UserInterface::Inspector::i___Meta__XR__ImmersiveDebugger__UserInterface__IInspector() noexcept {
  return static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector::Inspector() {}
