#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/HelpBox.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBoxMessageType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBoxMessageType_def.hpp"
#include "UnityEngine/UIElements/zzzz__HelpBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlEnumAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox_UxmlFactory::*)()>(&::UnityEngine::UIElements::HelpBox_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4994880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox_UxmlFactory*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::HelpBox_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox_UxmlFactory*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::HelpBox_UxmlFactory* UnityEngine::UIElements::HelpBox_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::HelpBox_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HelpBox_UxmlFactory::HelpBox_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::HelpBox_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x49948c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox_UxmlTraits*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox_UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox_UxmlTraits::*)()>(&::UnityEngine::UIElements::HelpBox_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4994a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox_UxmlTraits*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>*& UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_get_m_MessageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MessageType;
}
constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* const&
UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_get_m_MessageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MessageType;
}
constexpr void
UnityEngine::UIElements::HelpBox_UxmlTraits::__cordl_internal_set_m_MessageType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::HelpBoxMessageType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MessageType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::HelpBox_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                              ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox_UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::HelpBox_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox_UxmlTraits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::HelpBox_UxmlTraits* UnityEngine::UIElements::HelpBox_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::HelpBox_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HelpBox_UxmlTraits::HelpBox_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::StringW)>(&::UnityEngine::UIElements::HelpBox::set_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x49943b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.set_messageType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(
    &::UnityEngine::UIElements::HelpBox::set_messageType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x49943dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), "set_messageType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)()>(&::UnityEngine::UIElements::HelpBox::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x49944a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::StringW, ::UnityEngine::UIElements::HelpBoxMessageType)>(
    &::UnityEngine::UIElements::HelpBox::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x49944fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.GetIconClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(
    &::UnityEngine::UIElements::HelpBox::GetIconClass)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x499464c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), "GetIconClass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::HelpBox.UpdateIcon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::HelpBox::*)(::UnityEngine::UIElements::HelpBoxMessageType)>(
    &::UnityEngine::UIElements::HelpBox::UpdateIcon)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x49943f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), "UpdateIcon", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::HelpBoxMessageType& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_HelpBoxMessageType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HelpBoxMessageType;
}
constexpr ::UnityEngine::UIElements::HelpBoxMessageType const& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_HelpBoxMessageType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HelpBoxMessageType;
}
constexpr void UnityEngine::UIElements::HelpBox::__cordl_internal_set_m_HelpBoxMessageType(::UnityEngine::UIElements::HelpBoxMessageType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HelpBoxMessageType = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_Icon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Icon;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_Icon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Icon;
}
constexpr void UnityEngine::UIElements::HelpBox::__cordl_internal_set_m_Icon(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Icon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_IconClass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconClass;
}
constexpr ::StringW const& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_IconClass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconClass;
}
constexpr void UnityEngine::UIElements::HelpBox::__cordl_internal_set_m_IconClass(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IconClass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_Label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Label;
}
constexpr ::UnityEngine::UIElements::Label* const& UnityEngine::UIElements::HelpBox::__cordl_internal_get_m_Label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Label;
}
constexpr void UnityEngine::UIElements::HelpBox::__cordl_internal_set_m_Label(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Label)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "iconUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "iconUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconInfoUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "iconInfoUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconInfoUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "iconInfoUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconwarningUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "iconwarningUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconwarningUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "iconwarningUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
inline void UnityEngine::UIElements::HelpBox::setStaticF_iconErrorUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "iconErrorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::HelpBox::getStaticF_iconErrorUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "iconErrorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get>();
}
inline void UnityEngine::UIElements::HelpBox::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::HelpBox::set_messageType(::UnityEngine::UIElements::HelpBoxMessageType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), "set_messageType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::HelpBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::HelpBox::_ctor(::StringW text, ::UnityEngine::UIElements::HelpBoxMessageType messageType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, messageType);
}
inline ::StringW UnityEngine::UIElements::HelpBox::GetIconClass(::UnityEngine::UIElements::HelpBoxMessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), "GetIconClass", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, messageType);
}
inline void UnityEngine::UIElements::HelpBox::UpdateIcon(::UnityEngine::UIElements::HelpBoxMessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::HelpBox*>::get(), "UpdateIcon", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::HelpBoxMessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, messageType);
}
inline ::UnityEngine::UIElements::HelpBox* UnityEngine::UIElements::HelpBox::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::HelpBox*>());
}
inline ::UnityEngine::UIElements::HelpBox* UnityEngine::UIElements::HelpBox::New_ctor(::StringW text, ::UnityEngine::UIElements::HelpBoxMessageType messageType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::HelpBox*>(text, messageType));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::HelpBox::HelpBox() {}
