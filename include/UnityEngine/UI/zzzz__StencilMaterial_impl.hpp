#pragma once
// IWYU pragma private; include "UnityEngine/UI/StencilMaterial.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_impl.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_impl.hpp"
#include "UnityEngine/UI/zzzz__StencilMaterial_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
#include "UnityEngine/UI/zzzz__StencilMaterial_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial_MatEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::StencilMaterial_MatEntry::*)()>(&::UnityEngine::UI::StencilMaterial_MatEntry::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c422b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial_MatEntry*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_baseMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_baseMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMat;
}
constexpr void UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_set_baseMat(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_customMat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_customMat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customMat;
}
constexpr void UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_set_customMat(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customMat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr int32_t& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_stencilId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilId;
}
constexpr int32_t const& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_stencilId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilId;
}
constexpr void UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_set_stencilId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stencilId = value;
}
constexpr ::UnityEngine::Rendering::StencilOp& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_operation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr ::UnityEngine::Rendering::StencilOp const& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_operation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___operation;
}
constexpr void UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_set_operation(::UnityEngine::Rendering::StencilOp value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___operation = value;
}
constexpr ::UnityEngine::Rendering::CompareFunction& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_compareFunction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compareFunction;
}
constexpr ::UnityEngine::Rendering::CompareFunction const& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_compareFunction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compareFunction;
}
constexpr void UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_set_compareFunction(::UnityEngine::Rendering::CompareFunction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compareFunction = value;
}
constexpr int32_t& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_readMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readMask;
}
constexpr int32_t const& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_readMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readMask;
}
constexpr void UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_set_readMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readMask = value;
}
constexpr int32_t& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_writeMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeMask;
}
constexpr int32_t const& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_writeMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeMask;
}
constexpr void UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_set_writeMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeMask = value;
}
constexpr bool& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_useAlphaClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAlphaClip;
}
constexpr bool const& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_useAlphaClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useAlphaClip;
}
constexpr void UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_set_useAlphaClip(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useAlphaClip = value;
}
constexpr ::UnityEngine::Rendering::ColorWriteMask& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_colorMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMask;
}
constexpr ::UnityEngine::Rendering::ColorWriteMask const& UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_get_colorMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMask;
}
constexpr void UnityEngine::UI::StencilMaterial_MatEntry::__cordl_internal_set_colorMask(::UnityEngine::Rendering::ColorWriteMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMask = value;
}
inline void UnityEngine::UI::StencilMaterial_MatEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial_MatEntry*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::StencilMaterial_MatEntry* UnityEngine::UI::StencilMaterial_MatEntry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::StencilMaterial_MatEntry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::StencilMaterial_MatEntry::StencilMaterial_MatEntry() {}
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Material*, int32_t)>(&::UnityEngine::UI::StencilMaterial::Add)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c41808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(
    ::UnityEngine::Material*, int32_t, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask)>(
    &::UnityEngine::UI::StencilMaterial::Add)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6c41810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.LogWarningWhenNotInBatchmode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::UnityEngine::UI::StencilMaterial::LogWarningWhenNotInBatchmode)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c421e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "LogWarningWhenNotInBatchmode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)(
    ::UnityEngine::Material*, int32_t, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::ColorWriteMask, int32_t, int32_t)>(
    &::UnityEngine::UI::StencilMaterial::Add)> {
  constexpr static std::size_t size = 0x948;
  constexpr static std::size_t addrs = 0x6c418a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 7>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Material*)>(&::UnityEngine::UI::StencilMaterial::Remove)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6c422bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::StencilMaterial.ClearAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::UI::StencilMaterial::ClearAll)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6c42494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "ClearAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::StencilMaterial::setStaticF_m_List(::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>*, "m_List",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>* UnityEngine::UI::StencilMaterial::getStaticF_m_List() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UI::StencilMaterial_MatEntry*>*, "m_List",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get>();
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::StencilMaterial::Add(::UnityEngine::Material* baseMat, int32_t stencilID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, baseMat, stencilID);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::StencilMaterial::Add(::UnityEngine::Material* baseMat, int32_t stencilID, ::UnityEngine::Rendering::StencilOp operation,
                                                                               ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, baseMat, stencilID, operation, compareFunction, colorWriteMask);
}
inline void UnityEngine::UI::StencilMaterial::LogWarningWhenNotInBatchmode(::StringW warning, ::UnityEngine::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "LogWarningWhenNotInBatchmode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, warning, context);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::StencilMaterial::Add(::UnityEngine::Material* baseMat, int32_t stencilID, ::UnityEngine::Rendering::StencilOp operation,
                                                                               ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask,
                                                                               int32_t readMask, int32_t writeMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method, baseMat, stencilID, operation, compareFunction, colorWriteMask, readMask,
                                                                                       writeMask);
}
inline void UnityEngine::UI::StencilMaterial::Remove(::UnityEngine::Material* customMat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, customMat);
}
inline void UnityEngine::UI::StencilMaterial::ClearAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::StencilMaterial*>::get(), "ClearAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::StencilMaterial::StencilMaterial() {}
