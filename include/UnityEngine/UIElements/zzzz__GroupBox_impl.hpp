#pragma once
#include "UnityEngine/UIElements/zzzz__BindableElement_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__GroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__GroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__Label_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__GroupBox__UxmlTraits.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__GroupBox__UxmlTraits::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext)>(&::UnityEngine::UIElements::__GroupBox__UxmlTraits::Init)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2e53d90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__GroupBox__UxmlTraits*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__GroupBox__UxmlTraits*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__GroupBox__UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__GroupBox__UxmlTraits::*)()>(
    &::UnityEngine::UIElements::__GroupBox__UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2e53e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__GroupBox__UxmlTraits*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& UnityEngine::UIElements::__GroupBox__UxmlTraits::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& UnityEngine::UIElements::__GroupBox__UxmlTraits::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UIElements::__GroupBox__UxmlTraits::__cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::__GroupBox__UxmlTraits::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                  ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__GroupBox__UxmlTraits*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
inline ::UnityEngine::UIElements::__GroupBox__UxmlTraits* UnityEngine::UIElements::__GroupBox__UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__GroupBox__UxmlTraits*>());
}
inline void UnityEngine::UIElements::__GroupBox__UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__GroupBox__UxmlTraits*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__GroupBox__UxmlTraits::__GroupBox__UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::GroupBox.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GroupBox::*)(::StringW)>(&::UnityEngine::UIElements::GroupBox::set_text)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2e53b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBox*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GroupBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GroupBox::*)()>(&::UnityEngine::UIElements::GroupBox::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e53c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBox*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GroupBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GroupBox::*)(::StringW)>(&::UnityEngine::UIElements::GroupBox::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e53c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IGroupBox"
constexpr UnityEngine::UIElements::GroupBox::operator ::UnityEngine::UIElements::IGroupBox*() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupBox*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IGroupBox"
constexpr ::UnityEngine::UIElements::IGroupBox* UnityEngine::UIElements::GroupBox::i___UnityEngine__UIElements__IGroupBox() noexcept {
  return static_cast<::UnityEngine::UIElements::IGroupBox*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UIElements::Label*& UnityEngine::UIElements::GroupBox::__cordl_internal_get_m_TitleLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TitleLabel;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& UnityEngine::UIElements::GroupBox::__cordl_internal_get_m_TitleLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TitleLabel;
}
constexpr void UnityEngine::UIElements::GroupBox::__cordl_internal_set_m_TitleLabel(::UnityEngine::UIElements::Label* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TitleLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::GroupBox::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBox*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GroupBox::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBox*>::get>();
}
inline void UnityEngine::UIElements::GroupBox::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBox*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GroupBox::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBox*>::get>();
}
inline void UnityEngine::UIElements::GroupBox::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBox*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::GroupBox* UnityEngine::UIElements::GroupBox::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::GroupBox*>());
}
inline void UnityEngine::UIElements::GroupBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBox*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::GroupBox* UnityEngine::UIElements::GroupBox::New_ctor(::StringW text) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::GroupBox*>(text));
}
inline void UnityEngine::UIElements::GroupBox::_ctor(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GroupBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GroupBox::GroupBox() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__GroupBox__UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__GroupBox__UxmlFactory::*)()>(
    &::UnityEngine::UIElements::__GroupBox__UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2e53d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__GroupBox__UxmlFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::__GroupBox__UxmlFactory* UnityEngine::UIElements::__GroupBox__UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__GroupBox__UxmlFactory*>());
}
inline void UnityEngine::UIElements::__GroupBox__UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__GroupBox__UxmlFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__GroupBox__UxmlFactory::__GroupBox__UxmlFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
