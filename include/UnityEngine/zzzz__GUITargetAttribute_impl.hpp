#pragma once
// IWYU pragma private; include "UnityEngine/GUITargetAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__GUITargetAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUITargetAttribute.GetGUITargetAttrValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*, ::StringW)>(&::UnityEngine::GUITargetAttribute::GetGUITargetAttrValue)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6b48bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUITargetAttribute*>(), { "GetGUITargetAttrValue", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::GUITargetAttribute::__cordl_internal_get_displayMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayMask;
}
constexpr int32_t const& UnityEngine::GUITargetAttribute::__cordl_internal_get_displayMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayMask;
}
constexpr void UnityEngine::GUITargetAttribute::__cordl_internal_set_displayMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___displayMask = value;
}
inline int32_t UnityEngine::GUITargetAttribute::GetGUITargetAttrValue(::System::Type* klass, ::StringW methodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUITargetAttribute*>(), { "GetGUITargetAttrValue", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, klass, methodName);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUITargetAttribute::GUITargetAttribute() {}
