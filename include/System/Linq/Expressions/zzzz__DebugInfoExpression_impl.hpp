#pragma once
// IWYU pragma private; include "System/Linq/Expressions/DebugInfoExpression.hpp"
#include "System/Linq/Expressions/zzzz__Expression_impl.hpp"
#include "System/Linq/Expressions/zzzz__DebugInfoExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__SymbolDocumentInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::DebugInfoExpression.get_StartLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::DebugInfoExpression::*)()>(
    &::System::Linq::Expressions::DebugInfoExpression::get_StartLine)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40af4a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::DebugInfoExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::DebugInfoExpression*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::DebugInfoExpression.get_EndLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::DebugInfoExpression::*)()>(
    &::System::Linq::Expressions::DebugInfoExpression::get_EndLine)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40af4c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::DebugInfoExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::DebugInfoExpression*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::DebugInfoExpression.get_Document
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::SymbolDocumentInfo* (::System::Linq::Expressions::DebugInfoExpression::*)()>(
    &::System::Linq::Expressions::DebugInfoExpression::get_Document)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40af4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::DebugInfoExpression*>::get(),
                                                                               "get_Document", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::DebugInfoExpression.get_IsClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::DebugInfoExpression::*)()>(
    &::System::Linq::Expressions::DebugInfoExpression::get_IsClear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40af4f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::DebugInfoExpression*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::DebugInfoExpression*>::get(), 12));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::SymbolDocumentInfo*& System::Linq::Expressions::DebugInfoExpression::__cordl_internal_get__Document_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Document_k__BackingField;
}
constexpr ::System::Linq::Expressions::SymbolDocumentInfo* const& System::Linq::Expressions::DebugInfoExpression::__cordl_internal_get__Document_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Document_k__BackingField;
}
constexpr void System::Linq::Expressions::DebugInfoExpression::__cordl_internal_set__Document_k__BackingField(::System::Linq::Expressions::SymbolDocumentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Document_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t System::Linq::Expressions::DebugInfoExpression::get_StartLine() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::DebugInfoExpression*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::DebugInfoExpression::get_EndLine() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::DebugInfoExpression*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::SymbolDocumentInfo* System::Linq::Expressions::DebugInfoExpression::get_Document() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::DebugInfoExpression*>::get(),
                                                                             "get_Document", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::SymbolDocumentInfo*, false>(this, ___internal_method);
}
inline bool System::Linq::Expressions::DebugInfoExpression::get_IsClear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::DebugInfoExpression*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::DebugInfoExpression::DebugInfoExpression() {}
