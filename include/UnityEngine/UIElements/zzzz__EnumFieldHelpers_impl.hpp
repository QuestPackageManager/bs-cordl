#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\EnumFieldHelpers.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext, ::by_ref<::System::Type*>,
                                                                ::by_ref<::System::Enum*>, ::by_ref<bool>)>(&::UnityEngine::UIElements::EnumFieldHelpers::ExtractValue)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x6d3eb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EnumFieldHelpers*>(),
                                                             { "ExtractValue",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(),
                                                                 ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<::by_ref<::System::Enum*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::EnumFieldHelpers::setStaticF_type(::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>*, "type", ::UnityEngine::UIElements::EnumFieldHelpers*>(
      std::forward<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>*>(value));
}
inline ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>* UnityEngine::UIElements::EnumFieldHelpers::getStaticF_type() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<::System::Enum*>*, "type", ::UnityEngine::UIElements::EnumFieldHelpers*>();
}
inline void UnityEngine::UIElements::EnumFieldHelpers::setStaticF_value(::UnityEngine::UIElements::UxmlStringAttributeDescription* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, "value", ::UnityEngine::UIElements::EnumFieldHelpers*>(
      std::forward<::UnityEngine::UIElements::UxmlStringAttributeDescription*>(value));
}
inline ::UnityEngine::UIElements::UxmlStringAttributeDescription* UnityEngine::UIElements::EnumFieldHelpers::getStaticF_value() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UxmlStringAttributeDescription*, "value", ::UnityEngine::UIElements::EnumFieldHelpers*>();
}
inline void UnityEngine::UIElements::EnumFieldHelpers::setStaticF_includeObsoleteValues(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, "includeObsoleteValues", ::UnityEngine::UIElements::EnumFieldHelpers*>(
      std::forward<::UnityEngine::UIElements::UxmlBoolAttributeDescription*>(value));
}
inline ::UnityEngine::UIElements::UxmlBoolAttributeDescription* UnityEngine::UIElements::EnumFieldHelpers::getStaticF_includeObsoleteValues() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UxmlBoolAttributeDescription*, "includeObsoleteValues", ::UnityEngine::UIElements::EnumFieldHelpers*>();
}
inline bool UnityEngine::UIElements::EnumFieldHelpers::ExtractValue(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc,
                                                                    ::by_ref<::System::Type*> resEnumType, ::by_ref<::System::Enum*> resEnumValue, ::by_ref<bool> resIncludeObsoleteValues) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EnumFieldHelpers*>(),
                                                           { "ExtractValue",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::IUxmlAttributes*>(), ::i2c::type_of<::UnityEngine::UIElements::CreationContext>(),
                                                               ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<::by_ref<::System::Enum*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bag, cc, resEnumType, resEnumValue, resIncludeObsoleteValues);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EnumFieldHelpers::EnumFieldHelpers() {}
