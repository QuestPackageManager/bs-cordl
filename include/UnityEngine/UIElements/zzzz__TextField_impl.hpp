#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextField.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextField_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextField_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField_UxmlFactory::*)()>(
    &::UnityEngine::UIElements::TextField_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b80ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_UxmlFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TextField_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_UxmlFactory*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextField_UxmlFactory* UnityEngine::UIElements::TextField_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TextField_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextField_UxmlFactory::TextField_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::TextField_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6b80b38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField_UxmlTraits::*)()>(
    &::UnityEngine::UIElements::TextField_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b80d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_UxmlTraits*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::TextField_UxmlTraits::__cordl_internal_get_m_Multiline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Multiline;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::TextField_UxmlTraits::__cordl_internal_get_m_Multiline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Multiline;
}
constexpr void UnityEngine::UIElements::TextField_UxmlTraits::__cordl_internal_set_m_Multiline(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Multiline)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::TextField_UxmlTraits::setStaticF_k_Value(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, "k_Value",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_UxmlTraits*>::get>(
      std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription*>(value));
}
inline ::UnityEngine::UIElements::UxmlStringAttributeDescription* UnityEngine::UIElements::TextField_UxmlTraits::getStaticF_k_Value() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, "k_Value",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_UxmlTraits*>::get>();
}
inline void UnityEngine::UIElements::TextField_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::TextField_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_UxmlTraits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextField_UxmlTraits* UnityEngine::UIElements::TextField_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TextField_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextField_UxmlTraits::TextField_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_TextInput.get_parentTextField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextField* (::UnityEngine::UIElements::TextField_TextInput::*)()>(
    &::UnityEngine::UIElements::TextField_TextInput::get_parentTextField)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b80eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_TextInput*>::get(),
                                                                               "get_parentTextField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_TextInput.get_multiline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TextField_TextInput::*)()>(
    &::UnityEngine::UIElements::TextField_TextInput::get_multiline)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b7fc94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_TextInput*>::get(),
                                                                               "get_multiline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_TextInput.set_multiline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField_TextInput::*)(bool)>(
    &::UnityEngine::UIElements::TextField_TextInput::set_multiline)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x6b7fe08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_TextInput*>::get(), "set_multiline",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_TextInput.StringToValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::TextField_TextInput::*)(::StringW)>(
    &::UnityEngine::UIElements::TextField_TextInput::StringToValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b80f28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_TextInput*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_TextInput*>::get(), 136));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField_TextInput._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField_TextInput::*)()>(&::UnityEngine::UIElements::TextField_TextInput::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b80370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_TextInput*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::TextField_TextInput::get_parentTextField() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_TextInput*>::get(),
                                                                             "get_parentTextField", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextField*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::TextField_TextInput::get_multiline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_TextInput*>::get(),
                                                                             "get_multiline", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextField_TextInput::set_multiline(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_TextInput*>::get(), "set_multiline",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::TextField_TextInput::StringToValue(::StringW str) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_TextInput*>::get(), 136)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, str);
}
inline void UnityEngine::UIElements::TextField_TextInput::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField_TextInput*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextField_TextInput* UnityEngine::UIElements::TextField_TextInput::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TextField_TextInput*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextField_TextInput::TextField_TextInput() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.get_textInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextField_TextInput* (::UnityEngine::UIElements::TextField::*)()>(
    &::UnityEngine::UIElements::TextField::get_textInput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b7fbec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), "get_textInput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.get_multiline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::TextField::*)()>(&::UnityEngine::UIElements::TextField::get_multiline)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b7fc7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), "get_multiline",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.set_multiline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField::*)(bool)>(&::UnityEngine::UIElements::TextField::set_multiline)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b7fd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), "set_multiline",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField::*)()>(&::UnityEngine::UIElements::TextField::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6b800d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField::*)(::StringW)>(&::UnityEngine::UIElements::TextField::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b800f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField::*)(::StringW, int32_t, bool, bool, char16_t)>(
    &::UnityEngine::UIElements::TextField::_ctor)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6b80104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.get_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::TextField::*)()>(&::UnityEngine::UIElements::TextField::get_value)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b803e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 143));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.set_value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField::*)(::StringW)>(&::UnityEngine::UIElements::TextField::set_value)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6b80428;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 144));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.SetValueWithoutNotify
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField::*)(::StringW)>(
    &::UnityEngine::UIElements::TextField::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6b80544;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 153));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.UpdateTextFromValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField::*)()>(&::UnityEngine::UIElements::TextField::UpdateTextFromValue)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b806b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 158));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.HandleEventBubbleUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::TextField::HandleEventBubbleUp)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6b80708;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.OnViewDataReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::TextField::*)()>(&::UnityEngine::UIElements::TextField::OnViewDataReady)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b80888;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 132));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.ValueToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::TextField::*)(::StringW)>(
    &::UnityEngine::UIElements::TextField::ValueToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b80930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 155));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextField.StringToValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::TextField::*)(::StringW)>(
    &::UnityEngine::UIElements::TextField::StringToValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b80938;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 156));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::TextField::setStaticF_multilineProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "multilineProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::TextField::getStaticF_multilineProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "multilineProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get>();
}
inline void UnityEngine::UIElements::TextField::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TextField::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get>();
}
inline void UnityEngine::UIElements::TextField::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TextField::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get>();
}
inline void UnityEngine::UIElements::TextField::setStaticF_inputUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::TextField::getStaticF_inputUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get>();
}
inline ::UnityEngine::UIElements::TextField_TextInput* UnityEngine::UIElements::TextField::get_textInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), "get_textInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextField_TextInput*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::TextField::get_multiline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), "get_multiline",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextField::set_multiline(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), "set_multiline",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TextField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextField::_ctor(::StringW label) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label);
}
inline void UnityEngine::UIElements::TextField::_ctor(::StringW label, int32_t maxLength, bool multiline, bool isPasswordField, char16_t maskChar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, maxLength, multiline, isPasswordField, maskChar);
}
inline ::StringW UnityEngine::UIElements::TextField::get_value() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 143)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextField::set_value(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 144)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::TextField::SetValueWithoutNotify(::StringW newValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 153)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void UnityEngine::UIElements::TextField::UpdateTextFromValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 158)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextField::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TextField::OnViewDataReady() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 132)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::TextField::ValueToString(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 155)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::TextField::StringToValue(::StringW str) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TextField*>::get(), 156)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, str);
}
inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::TextField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TextField*>());
}
inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::TextField::New_ctor(::StringW label) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TextField*>(label));
}
inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::TextField::New_ctor(::StringW label, int32_t maxLength, bool multiline, bool isPasswordField, char16_t maskChar) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::TextField*>(label, maxLength, multiline, isPasswordField, maskChar));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextField::TextField() {}
