#pragma once
#include "Polyglot/zzzz__LocalizedTextComponent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Text_impl.hpp"
#include "Polyglot/zzzz__LocalizedText_def.hpp"
#include "Polyglot/zzzz__LanguageDirection_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
//  Writing Method size for method: ::Polyglot::LocalizedText.SetText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LocalizedText::*)(::UnityEngine::UI::Text*, ::StringW)>(&::Polyglot::LocalizedText::SetText)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x28057fc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LocalizedText.UpdateAlignment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LocalizedText::*)(::UnityEngine::UI::Text*, ::Polyglot::LanguageDirection)>(
    &::Polyglot::LocalizedText::UpdateAlignment)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2805930;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LocalizedText.IsOppositeDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Polyglot::LocalizedText::*)(::UnityEngine::TextAnchor, ::Polyglot::LanguageDirection)>(
    &::Polyglot::LocalizedText::IsOppositeDirection)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2805a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), "IsOppositeDirection", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAnchor>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::LanguageDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LocalizedText.IsAlignmentRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Polyglot::LocalizedText::*)(::UnityEngine::TextAnchor)>(&::Polyglot::LocalizedText::IsAlignmentRight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2805a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), "IsAlignmentRight", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAnchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LocalizedText.IsAlignmentLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Polyglot::LocalizedText::*)(::UnityEngine::TextAnchor)>(&::Polyglot::LocalizedText::IsAlignmentLeft)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2805a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), "IsAlignmentLeft", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAnchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LocalizedText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LocalizedText::*)()>(&::Polyglot::LocalizedText::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2805abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void Polyglot::LocalizedText::SetText(::UnityEngine::UI::Text* text, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, value);
}
inline void Polyglot::LocalizedText::UpdateAlignment(::UnityEngine::UI::Text* text, ::Polyglot::LanguageDirection direction) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text, direction);
}
inline bool Polyglot::LocalizedText::IsOppositeDirection(::UnityEngine::TextAnchor alignment, ::Polyglot::LanguageDirection direction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), "IsOppositeDirection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAnchor>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::LanguageDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, alignment, direction);
}
inline bool Polyglot::LocalizedText::IsAlignmentRight(::UnityEngine::TextAnchor alignment) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), "IsAlignmentRight", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAnchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, alignment);
}
inline bool Polyglot::LocalizedText::IsAlignmentLeft(::UnityEngine::TextAnchor alignment) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), "IsAlignmentLeft", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAnchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, alignment);
}
inline ::Polyglot::LocalizedText* Polyglot::LocalizedText::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Polyglot::LocalizedText*>());
}
inline void Polyglot::LocalizedText::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizedText*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Polyglot::LocalizedText::LocalizedText() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
