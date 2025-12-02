#pragma once
// IWYU pragma private; include "Unity/Collections/GenerateTestsForBurstCompatibilityAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Collections/zzzz__GenerateTestsForBurstCompatibilityAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__GenerateTestsForBurstCompatibilityAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget() {}
constexpr ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget
    Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget::Player{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget
    Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget::Editor{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget
    Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget::PlayerAndEditor{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute.get_GenericTypeArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*, ::Array<::System::Type*>*> (
    ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::*)()>(&::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::get_GenericTypeArguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a3e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>::get(),
                                                 "get_GenericTypeArguments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute.set_GenericTypeArguments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::*)(
    ::ArrayW<::System::Type*, ::Array<::System::Type*>*>)>(&::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::set_GenericTypeArguments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62a3e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>::get(), "set_GenericTypeArguments",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::*)()>(
    &::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62a3e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_get__GenericTypeArguments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GenericTypeArguments_k__BackingField;
}
constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const&
Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_get__GenericTypeArguments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GenericTypeArguments_k__BackingField;
}
constexpr void Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_set__GenericTypeArguments_k__BackingField(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GenericTypeArguments_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_get_RequiredUnityDefine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequiredUnityDefine;
}
constexpr ::StringW const& Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_get_RequiredUnityDefine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequiredUnityDefine;
}
constexpr void Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_set_RequiredUnityDefine(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RequiredUnityDefine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget&
Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_get_CompileTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CompileTarget;
}
constexpr ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget const&
Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_get_CompileTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CompileTarget;
}
constexpr void Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::__cordl_internal_set_CompileTarget(
    ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute_BurstCompatibleCompileTarget value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CompileTarget = value;
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::get_GenericTypeArguments() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>::get(),
                                               "get_GenericTypeArguments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, false>(this, ___internal_method);
}
inline void Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::set_GenericTypeArguments(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>::get(), "set_GenericTypeArguments",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute* Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Collections::GenerateTestsForBurstCompatibilityAttribute::GenerateTestsForBurstCompatibilityAttribute() {}
