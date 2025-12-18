#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Foldout.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
#include "UnityEngine/UIElements/zzzz__Toggle_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout_UxmlFactory::*)()>(&::UnityEngine::UIElements::Foldout_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b76c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlFactory*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Foldout_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlFactory*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Foldout_UxmlFactory* UnityEngine::UIElements::Foldout_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Foldout_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Foldout_UxmlFactory::Foldout_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::Foldout_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6b76cf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlTraits*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout_UxmlTraits::*)()>(&::UnityEngine::UIElements::Foldout_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6b76e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlTraits*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UIElements::Foldout_UxmlTraits::__cordl_internal_set_m_Value(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Foldout_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                              ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::Foldout_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout_UxmlTraits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Foldout_UxmlTraits* UnityEngine::UIElements::Foldout_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Foldout_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Foldout_UxmlTraits::Foldout_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.get_toggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Toggle* (::UnityEngine::UIElements::Foldout::*)()>(
    &::UnityEngine::UIElements::Foldout::get_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b75abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "get_toggle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.get_contentContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Foldout::*)()>(
    &::UnityEngine::UIElements::Foldout::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b75ac4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 135));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.get_focusable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::Foldout::*)()>(&::UnityEngine::UIElements::Foldout::get_focusable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b75acc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.set_focusable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(bool)>(&::UnityEngine::UIElements::Foldout::set_focusable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b75ad4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.get_toggleOnLabelClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::Foldout::*)()>(&::UnityEngine::UIElements::Foldout::get_toggleOnLabelClick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b75b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(),
                                                                               "get_toggleOnLabelClick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.set_toggleOnLabelClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(bool)>(&::UnityEngine::UIElements::Foldout::set_toggleOnLabelClick)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b75b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "set_toggleOnLabelClick",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.get_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::Foldout::*)()>(&::UnityEngine::UIElements::Foldout::get_text)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6b75bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "get_text",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(::StringW)>(&::UnityEngine::UIElements::Foldout::set_text)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6b75c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::Foldout::*)()>(&::UnityEngine::UIElements::Foldout::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b75dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "get_value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(bool)>(&::UnityEngine::UIElements::Foldout::set_value)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6b75dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "set_value",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(bool)>(&::UnityEngine::UIElements::Foldout::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6b75fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "SetValueWithoutNotify",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.OnViewDataReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)()>(&::UnityEngine::UIElements::Foldout::OnViewDataReady)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6b76114;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 132));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(
    ::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::Foldout::Apply)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b76148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::Foldout::*)(::UnityEngine::UIElements::KeyboardNavigationOperation)>(
    &::UnityEngine::UIElements::Foldout::Apply)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b761ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)()>(&::UnityEngine::UIElements::Foldout::_ctor)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x6b76270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.OnAttachToPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::Foldout::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6b76694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "OnAttachToPanel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Foldout.__ctor_b__39_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Foldout::*)(::UnityEngine::UIElements::ChangeEvent_1<bool>*)>(
    &::UnityEngine::UIElements::Foldout::__ctor_b__39_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b76c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "<.ctor>b__39_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<bool>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::Toggle*& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Toggle;
}
constexpr ::UnityEngine::UIElements::Toggle* const& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Toggle;
}
constexpr void UnityEngine::UIElements::Foldout::__cordl_internal_set_m_Toggle(::UnityEngine::UIElements::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Toggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Container;
}
constexpr void UnityEngine::UIElements::Foldout::__cordl_internal_set_m_Container(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr bool const& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Value;
}
constexpr void UnityEngine::UIElements::Foldout::__cordl_internal_set_m_Value(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Value = value;
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator*& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_NavigationManipulator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationManipulator;
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator* const& UnityEngine::UIElements::Foldout::__cordl_internal_get_m_NavigationManipulator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationManipulator;
}
constexpr void UnityEngine::UIElements::Foldout::__cordl_internal_set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NavigationManipulator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Foldout::setStaticF_textProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "textProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Foldout::getStaticF_textProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "textProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_toggleOnLabelClickProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "toggleOnLabelClickProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Foldout::getStaticF_toggleOnLabelClickProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "toggleOnLabelClickProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_valueProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "valueProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Foldout::getStaticF_valueProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "valueProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_toggleUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "toggleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_toggleUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "toggleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_contentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "contentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_contentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "contentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_checkmarkUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_checkmarkUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_textUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "textUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_textUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "textUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_toggleInspectorUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "toggleInspectorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_toggleInspectorUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "toggleInspectorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_ussFoldoutDepthClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussFoldoutDepthClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Foldout::getStaticF_ussFoldoutDepthClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussFoldoutDepthClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline void UnityEngine::UIElements::Foldout::setStaticF_ussFoldoutMaxDepth(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "ussFoldoutMaxDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::Foldout::getStaticF_ussFoldoutMaxDepth() {
  return ::cordl_internals::getStaticField<int32_t, "ussFoldoutMaxDepth", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get>();
}
inline ::UnityEngine::UIElements::Toggle* UnityEngine::UIElements::Foldout::get_toggle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "get_toggle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Toggle*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Foldout::get_contentContainer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 135)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::Foldout::get_focusable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Foldout::set_focusable(bool value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Foldout::get_toggleOnLabelClick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(),
                                                                             "get_toggleOnLabelClick", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Foldout::set_toggleOnLabelClick(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "set_toggleOnLabelClick",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::Foldout::get_text() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "get_text",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Foldout::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Foldout::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "get_value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Foldout::set_value(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "set_value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Foldout::SetValueWithoutNotify(bool newValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "SetValueWithoutNotify",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::Foldout::OnViewDataReady() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), 132)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Foldout::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, ::UnityEngine::UIElements::EventBase* sourceEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, sourceEvent);
}
inline bool UnityEngine::UIElements::Foldout::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, op);
}
inline void UnityEngine::UIElements::Foldout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Foldout::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "OnAttachToPanel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Foldout::__ctor_b__39_0(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Foldout*>::get(), "<.ctor>b__39_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::Foldout* UnityEngine::UIElements::Foldout::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Foldout*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<bool>"
constexpr UnityEngine::UIElements::Foldout::operator ::UnityEngine::UIElements::INotifyValueChanged_1<bool>*() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyValueChanged_1<bool>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<bool>"
constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<bool>* UnityEngine::UIElements::Foldout::i___UnityEngine__UIElements__INotifyValueChanged_1_bool_() noexcept {
  return static_cast<::UnityEngine::UIElements::INotifyValueChanged_1<bool>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Foldout::Foldout() {}
