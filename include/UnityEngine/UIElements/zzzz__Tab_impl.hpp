#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Tab.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Background_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Tab_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__Image_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TabDragger_def.hpp"
#include "UnityEngine/UIElements/zzzz__Tab_def.hpp"
#include "UnityEngine/UIElements/zzzz__TooltipEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlImageAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Tab_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab_UxmlFactory::*)()>(&::UnityEngine::UIElements::Tab_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b3fc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab_UxmlFactory*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Tab_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab_UxmlFactory*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Tab_UxmlFactory* UnityEngine::UIElements::Tab_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Tab_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Tab_UxmlFactory::Tab_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Tab_UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab_UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::Tab_UxmlTraits::Init)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6b3fd04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab_UxmlTraits*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab_UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab_UxmlTraits::*)()>(&::UnityEngine::UIElements::Tab_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6b3fea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab_UxmlTraits*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::Tab_UxmlTraits::__cordl_internal_get_m_Label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Label;
}
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& UnityEngine::UIElements::Tab_UxmlTraits::__cordl_internal_get_m_Label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Label;
}
constexpr void UnityEngine::UIElements::Tab_UxmlTraits::__cordl_internal_set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Label)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlImageAttributeDescription*& UnityEngine::UIElements::Tab_UxmlTraits::__cordl_internal_get_m_IconImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconImage;
}
constexpr ::UnityEngine::UIElements::UxmlImageAttributeDescription* const& UnityEngine::UIElements::Tab_UxmlTraits::__cordl_internal_get_m_IconImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconImage;
}
constexpr void UnityEngine::UIElements::Tab_UxmlTraits::__cordl_internal_set_m_IconImage(::UnityEngine::UIElements::UxmlImageAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_IconImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& UnityEngine::UIElements::Tab_UxmlTraits::__cordl_internal_get_m_Closeable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Closeable;
}
constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& UnityEngine::UIElements::Tab_UxmlTraits::__cordl_internal_get_m_Closeable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Closeable;
}
constexpr void UnityEngine::UIElements::Tab_UxmlTraits::__cordl_internal_set_m_Closeable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Closeable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Tab_UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                          ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab_UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline void UnityEngine::UIElements::Tab_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab_UxmlTraits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Tab_UxmlTraits* UnityEngine::UIElements::Tab_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Tab_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Tab_UxmlTraits::Tab_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Tab___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab___c::*)()>(&::UnityEngine::UIElements::Tab___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b40044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab___c.__ctor_b__63_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab___c::*)(::UnityEngine::UIElements::TooltipEvent*)>(
    &::UnityEngine::UIElements::Tab___c::__ctor_b__63_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b40048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab___c*>::get(), "<.ctor>b__63_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TooltipEvent*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Tab___c::setStaticF___9(::UnityEngine::UIElements::Tab___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Tab___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab___c*>::get>(
      std::forward<::UnityEngine::UIElements::Tab___c*>(value));
}
inline ::UnityEngine::UIElements::Tab___c* UnityEngine::UIElements::Tab___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Tab___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab___c*>::get>();
}
inline void UnityEngine::UIElements::Tab___c::setStaticF___9__63_0(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::TooltipEvent*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::TooltipEvent*>*, "<>9__63_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab___c*>::get>(
      std::forward<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::TooltipEvent*>*>(value));
}
inline ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::TooltipEvent*>* UnityEngine::UIElements::Tab___c::getStaticF___9__63_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::TooltipEvent*>*, "<>9__63_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab___c*>::get>();
}
inline void UnityEngine::UIElements::Tab___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab___c::__ctor_b__63_0(::UnityEngine::UIElements::TooltipEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab___c*>::get(), "<.ctor>b__63_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TooltipEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::Tab___c* UnityEngine::UIElements::Tab___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Tab___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Tab___c::Tab___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.add_selected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(::System::Action_1<::UnityEngine::UIElements::Tab*>*)>(
    &::UnityEngine::UIElements::Tab::add_selected)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b3e0f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "add_selected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::Tab*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.remove_selected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(::System::Action_1<::UnityEngine::UIElements::Tab*>*)>(
    &::UnityEngine::UIElements::Tab::remove_selected)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b3e1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "remove_selected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::Tab*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.add_closed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(::System::Action_1<::UnityEngine::UIElements::Tab*>*)>(
    &::UnityEngine::UIElements::Tab::add_closed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b3e274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "add_closed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::Tab*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.remove_closed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(::System::Action_1<::UnityEngine::UIElements::Tab*>*)>(
    &::UnityEngine::UIElements::Tab::remove_closed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b3e334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "remove_closed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::Tab*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.get_tabHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Tab::*)()>(
    &::UnityEngine::UIElements::Tab::get_tabHeader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3e3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "get_tabHeader",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.get_label
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::Tab::*)()>(&::UnityEngine::UIElements::Tab::get_label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3e3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "get_label",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.set_label
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(::StringW)>(&::UnityEngine::UIElements::Tab::set_label)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6b3e404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "set_label", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.get_iconImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Background (::UnityEngine::UIElements::Tab::*)()>(
    &::UnityEngine::UIElements::Tab::get_iconImage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b3e538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "get_iconImage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.set_iconImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(::UnityEngine::UIElements::Background)>(
    &::UnityEngine::UIElements::Tab::set_iconImage)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6b3e548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "set_iconImage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Background>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.get_closeable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::Tab::*)()>(&::UnityEngine::UIElements::Tab::get_closeable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3e7dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "get_closeable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.set_closeable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(bool)>(&::UnityEngine::UIElements::Tab::set_closeable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b3e7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "set_closeable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.get_contentContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::Tab::*)()>(
    &::UnityEngine::UIElements::Tab::get_contentContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3e8c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), 135));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)()>(&::UnityEngine::UIElements::Tab::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b3e8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(::StringW, ::UnityEngine::UIElements::Background)>(
    &::UnityEngine::UIElements::Tab::_ctor)> {
  constexpr static std::size_t size = 0xabc;
  constexpr static std::size_t addrs = 0x6b3e908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Background>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.UpdateTooltip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(::UnityEngine::UIElements::TooltipEvent*)>(
    &::UnityEngine::UIElements::Tab::UpdateTooltip)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6b3f4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "UpdateTooltip", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TooltipEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.AddDragHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)()>(&::UnityEngine::UIElements::Tab::AddDragHandles)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b3f5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "AddDragHandles",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.RemoveDragHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)()>(&::UnityEngine::UIElements::Tab::RemoveDragHandles)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b3f5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "RemoveDragHandles",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.EnableTabDragHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(bool)>(&::UnityEngine::UIElements::Tab::EnableTabDragHandles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b3f618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "EnableTabDragHandles",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.AddCloseButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)()>(&::UnityEngine::UIElements::Tab::AddCloseButton)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b3f624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "AddCloseButton",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.RemoveCloseButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)()>(&::UnityEngine::UIElements::Tab::RemoveCloseButton)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b3f644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "RemoveCloseButton",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.EnableTabCloseButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(bool)>(&::UnityEngine::UIElements::Tab::EnableTabCloseButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b3e8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "EnableTabCloseButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.SetActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)()>(&::UnityEngine::UIElements::Tab::SetActive)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b3f690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "SetActive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.SetInactive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)()>(&::UnityEngine::UIElements::Tab::SetInactive)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b3f6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "SetInactive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.OnTabClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::Tab::OnTabClicked)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b3f708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "OnTabClicked", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Tab.OnCloseButtonClicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Tab::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::Tab::OnCloseButtonClicked)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b3f728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "OnCloseButtonClicked", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::UIElements::Tab*>*& UnityEngine::UIElements::Tab::__cordl_internal_get_selected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selected;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::Tab*>* const& UnityEngine::UIElements::Tab::__cordl_internal_get_selected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selected;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_selected(::System::Action_1<::UnityEngine::UIElements::Tab*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selected)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<bool>*& UnityEngine::UIElements::Tab::__cordl_internal_get_closing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closing;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::UIElements::Tab::__cordl_internal_get_closing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closing;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_closing(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___closing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::UIElements::Tab*>*& UnityEngine::UIElements::Tab::__cordl_internal_get_closed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closed;
}
constexpr ::System::Action_1<::UnityEngine::UIElements::Tab*>* const& UnityEngine::UIElements::Tab::__cordl_internal_get_closed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closed;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_closed(::System::Action_1<::UnityEngine::UIElements::Tab*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___closed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::Tab::__cordl_internal_get_m_Label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Label;
}
constexpr ::StringW const& UnityEngine::UIElements::Tab::__cordl_internal_get_m_Label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Label;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_m_Label(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Label)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Background& UnityEngine::UIElements::Tab::__cordl_internal_get_m_IconImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconImage;
}
constexpr ::UnityEngine::UIElements::Background const& UnityEngine::UIElements::Tab::__cordl_internal_get_m_IconImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IconImage;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_m_IconImage(::UnityEngine::UIElements::Background value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IconImage = value;
}
constexpr bool& UnityEngine::UIElements::Tab::__cordl_internal_get_m_Closeable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Closeable;
}
constexpr bool const& UnityEngine::UIElements::Tab::__cordl_internal_get_m_Closeable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Closeable;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_m_Closeable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Closeable = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Tab::__cordl_internal_get_m_ContentContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Tab::__cordl_internal_get_m_ContentContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContentContainer;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ContentContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Tab::__cordl_internal_get_m_DragHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragHandle;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Tab::__cordl_internal_get_m_DragHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragHandle;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_m_DragHandle(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DragHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Tab::__cordl_internal_get_m_CloseButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CloseButton;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Tab::__cordl_internal_get_m_CloseButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CloseButton;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_m_CloseButton(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CloseButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::Tab::__cordl_internal_get_m_TabHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabHeader;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::Tab::__cordl_internal_get_m_TabHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabHeader;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_m_TabHeader(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TabHeader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Image*& UnityEngine::UIElements::Tab::__cordl_internal_get_m_TabHeaderImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabHeaderImage;
}
constexpr ::UnityEngine::UIElements::Image* const& UnityEngine::UIElements::Tab::__cordl_internal_get_m_TabHeaderImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabHeaderImage;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_m_TabHeaderImage(::UnityEngine::UIElements::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TabHeaderImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::Tab::__cordl_internal_get_m_TabHeaderLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabHeaderLabel;
}
constexpr ::UnityEngine::UIElements::Label* const& UnityEngine::UIElements::Tab::__cordl_internal_get_m_TabHeaderLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TabHeaderLabel;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set_m_TabHeaderLabel(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TabHeaderLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::TabDragger*& UnityEngine::UIElements::Tab::__cordl_internal_get__dragger_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragger_k__BackingField;
}
constexpr ::UnityEngine::UIElements::TabDragger* const& UnityEngine::UIElements::Tab::__cordl_internal_get__dragger_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragger_k__BackingField;
}
constexpr void UnityEngine::UIElements::Tab::__cordl_internal_set__dragger_k__BackingField(::UnityEngine::UIElements::TabDragger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dragger_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::Tab::setStaticF_labelProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "labelProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Tab::getStaticF_labelProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "labelProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_iconImageProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "iconImageProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Tab::getStaticF_iconImageProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "iconImageProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_closeableProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "closeableProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Tab::getStaticF_closeableProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "closeableProperty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_tabHeaderUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "tabHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_tabHeaderUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "tabHeaderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_tabHeaderImageUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "tabHeaderImageUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_tabHeaderImageUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "tabHeaderImageUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_tabHeaderEmptyImageUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "tabHeaderEmptyImageUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_tabHeaderEmptyImageUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "tabHeaderEmptyImageUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_tabHeaderStandaloneImageUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "tabHeaderStandaloneImageUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_tabHeaderStandaloneImageUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "tabHeaderStandaloneImageUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_tabHeaderLabelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "tabHeaderLabelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_tabHeaderLabelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "tabHeaderLabelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_tabHeaderEmptyLabeUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "tabHeaderEmptyLabeUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_tabHeaderEmptyLabeUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "tabHeaderEmptyLabeUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_tabHeaderUnderlineUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "tabHeaderUnderlineUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_tabHeaderUnderlineUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "tabHeaderUnderlineUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_contentUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "contentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_contentUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "contentUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_draggingUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "draggingUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_draggingUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "draggingUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_reorderableUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_reorderableUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_reorderableItemHandleUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemHandleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_reorderableItemHandleUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemHandleUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_reorderableItemHandleBarUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "reorderableItemHandleBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_reorderableItemHandleBarUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "reorderableItemHandleBarUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_closeableUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "closeableUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_closeableUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "closeableUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::setStaticF_closeButtonUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "closeButtonUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Tab::getStaticF_closeButtonUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "closeButtonUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get>();
}
inline void UnityEngine::UIElements::Tab::add_selected(::System::Action_1<::UnityEngine::UIElements::Tab*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "add_selected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::Tab*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Tab::remove_selected(::System::Action_1<::UnityEngine::UIElements::Tab*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "remove_selected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::Tab*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Tab::add_closed(::System::Action_1<::UnityEngine::UIElements::Tab*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "add_closed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::Tab*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Tab::remove_closed(::System::Action_1<::UnityEngine::UIElements::Tab*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "remove_closed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::Tab*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Tab::get_tabHeader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "get_tabHeader",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::UIElements::Tab::get_label() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "get_label",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab::set_label(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "set_label", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Background UnityEngine::UIElements::Tab::get_iconImage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "get_iconImage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Background, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab::set_iconImage(::UnityEngine::UIElements::Background value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "set_iconImage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Background>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::Tab::get_closeable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "get_closeable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab::set_closeable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "set_closeable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::Tab::get_contentContainer() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), 135)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab::_ctor(::StringW label, ::UnityEngine::UIElements::Background iconImage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Background>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, label, iconImage);
}
inline void UnityEngine::UIElements::Tab::UpdateTooltip(::UnityEngine::UIElements::TooltipEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "UpdateTooltip", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TooltipEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::Tab::AddDragHandles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "AddDragHandles",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab::RemoveDragHandles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "RemoveDragHandles",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab::EnableTabDragHandles(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "EnableTabDragHandles",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enable);
}
inline void UnityEngine::UIElements::Tab::AddCloseButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "AddCloseButton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab::RemoveCloseButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "RemoveCloseButton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab::EnableTabCloseButton(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "EnableTabCloseButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enable);
}
inline void UnityEngine::UIElements::Tab::SetActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "SetActive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab::SetInactive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "SetInactive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Tab::OnTabClicked(::UnityEngine::UIElements::PointerDownEvent* _) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "OnTabClicked", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline void UnityEngine::UIElements::Tab::OnCloseButtonClicked(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Tab*>::get(), "OnCloseButtonClicked", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::Tab* UnityEngine::UIElements::Tab::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Tab*>());
}
inline ::UnityEngine::UIElements::Tab* UnityEngine::UIElements::Tab::New_ctor(::StringW label, ::UnityEngine::UIElements::Background iconImage) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Tab*>(label, iconImage));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Tab::Tab() {}
