#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlNamespaceDefinition.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlNamespaceDefinition_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlNamespaceDefinition.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::UxmlNamespaceDefinition, ::UnityEngine::UIElements::UxmlNamespaceDefinition)>(
    &::UnityEngine::UIElements::UxmlNamespaceDefinition::op_Equality)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6cbcc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(),
                            { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlNamespaceDefinition.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlNamespaceDefinition::*)(::UnityEngine::UIElements::UxmlNamespaceDefinition)>(
    &::UnityEngine::UIElements::UxmlNamespaceDefinition::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cbcce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlNamespaceDefinition.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UxmlNamespaceDefinition::*)(::System::Object*)>(&::UnityEngine::UIElements::UxmlNamespaceDefinition::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6cbcd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlNamespaceDefinition.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UxmlNamespaceDefinition::*)()>(&::UnityEngine::UIElements::UxmlNamespaceDefinition::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6cbcdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(), { ::i2c::class_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UxmlNamespaceDefinition::setStaticF__Empty_k__BackingField(::UnityEngine::UIElements::UxmlNamespaceDefinition value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UxmlNamespaceDefinition, "<Empty>k__BackingField", ::UnityEngine::UIElements::UxmlNamespaceDefinition>(
      std::forward<::UnityEngine::UIElements::UxmlNamespaceDefinition>(value));
}
inline ::UnityEngine::UIElements::UxmlNamespaceDefinition UnityEngine::UIElements::UxmlNamespaceDefinition::getStaticF__Empty_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UxmlNamespaceDefinition, "<Empty>k__BackingField", ::UnityEngine::UIElements::UxmlNamespaceDefinition>();
}
inline bool UnityEngine::UIElements::UxmlNamespaceDefinition::op_Equality(::UnityEngine::UIElements::UxmlNamespaceDefinition lhs, ::UnityEngine::UIElements::UxmlNamespaceDefinition rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(),
                          { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(), ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool UnityEngine::UIElements::UxmlNamespaceDefinition::Equals(::UnityEngine::UIElements::UxmlNamespaceDefinition other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::UIElements::UxmlNamespaceDefinition::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::UIElements::UxmlNamespaceDefinition::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UxmlNamespaceDefinition>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>"
constexpr UnityEngine::UIElements::UxmlNamespaceDefinition::operator ::System::IEquatable_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>*
UnityEngine::UIElements::UxmlNamespaceDefinition::i___System__IEquatable_1___UnityEngine__UIElements__UxmlNamespaceDefinition_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::UxmlNamespaceDefinition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "resolvedNamespace", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UxmlNamespaceDefinition::UxmlNamespaceDefinition(::StringW prefix, ::StringW resolvedNamespace) noexcept {
  this->prefix = prefix;
  this->resolvedNamespace = resolvedNamespace;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlNamespaceDefinition::UxmlNamespaceDefinition() {}
