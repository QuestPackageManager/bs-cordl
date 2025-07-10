#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EnumFieldHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EnumFieldHelpers_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlBoolAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeAttributeDescription_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::EnumFieldHelpers.ExtractValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext, ::ByRef<::System::Type*>, ::ByRef<::System::Enum*>, ::ByRef<bool>)>(
        &::UnityEngine::UIElements::EnumFieldHelpers::ExtractValue)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x4993274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EnumFieldHelpers*>::get(), "ExtractValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Type*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Enum*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::EnumFieldHelpers::setStaticF_type(::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>*, "type",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EnumFieldHelpers*>::get>(
      std::forward<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>*>(value));
}
inline ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* UnityEngine::UIElements::EnumFieldHelpers::getStaticF_type() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>*, "type",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EnumFieldHelpers*>::get>();
}
inline void UnityEngine::UIElements::EnumFieldHelpers::setStaticF_value(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, "value",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EnumFieldHelpers*>::get>(
      std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription*>(value));
}
inline ::UnityEngine::UIElements::UxmlStringAttributeDescription* UnityEngine::UIElements::EnumFieldHelpers::getStaticF_value() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, "value",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EnumFieldHelpers*>::get>();
}
inline void UnityEngine::UIElements::EnumFieldHelpers::setStaticF_includeObsoleteValues(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, "includeObsoleteValues",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EnumFieldHelpers*>::get>(
      std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription*>(value));
}
inline ::UnityEngine::UIElements::UxmlBoolAttributeDescription* UnityEngine::UIElements::EnumFieldHelpers::getStaticF_includeObsoleteValues() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, "includeObsoleteValues",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EnumFieldHelpers*>::get>();
}
inline bool UnityEngine::UIElements::EnumFieldHelpers::ExtractValue(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc,
                                                                    ::ByRef<::System::Type*> resEnumType, ::ByRef<::System::Enum*> resEnumValue, ::ByRef<bool> resIncludeObsoleteValues) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EnumFieldHelpers*>::get(), "ExtractValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Type*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Enum*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bag, cc, resEnumType, resEnumValue, resIncludeObsoleteValues);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EnumFieldHelpers::EnumFieldHelpers() {}
