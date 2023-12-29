#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::__CodePointIndexer__TableRange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::__CodePointIndexer__TableRange::*)(int32_t, int32_t, int32_t)>(
    &::Mono::Globalization::Unicode::__CodePointIndexer__TableRange::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22bba20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::__CodePointIndexer__TableRange::_ctor(int32_t start, int32_t end, int32_t indexStart) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, end, indexStart);
}
// Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexStart", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexEnd", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Globalization::Unicode::__CodePointIndexer__TableRange::__CodePointIndexer__TableRange(int32_t Start, int32_t End, int32_t Count, int32_t IndexStart, int32_t IndexEnd) noexcept {
  this->Start = Start;
  this->End = End;
  this->Count = Count;
  this->IndexStart = IndexStart;
  this->IndexEnd = IndexEnd;
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::__CodePointIndexer__TableRange::__CodePointIndexer__TableRange() {}
//  Writing Method size for method: ::Mono::Globalization::Unicode::CodePointIndexer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::CodePointIndexer::*)(
    ::ArrayW<int32_t, ::Array<int32_t>*>, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, int32_t)>(&::Mono::Globalization::Unicode::CodePointIndexer::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x22bb8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::CodePointIndexer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::CodePointIndexer.ToIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::CodePointIndexer::*)(int32_t)>(
    &::Mono::Globalization::Unicode::CodePointIndexer::ToIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22bba38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::CodePointIndexer*>::get(), "ToIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, ::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*>&
Mono::Globalization::Unicode::CodePointIndexer::__get_ranges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ranges;
}
constexpr ::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, ::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*> const&
Mono::Globalization::Unicode::CodePointIndexer::__get_ranges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ranges;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__set_ranges(
    ::ArrayW<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange, ::Array<::Mono::Globalization::Unicode::__CodePointIndexer__TableRange>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ranges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Globalization::Unicode::CodePointIndexer::__get_TotalCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalCount;
}
constexpr int32_t const& Mono::Globalization::Unicode::CodePointIndexer::__get_TotalCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalCount;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__set_TotalCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TotalCount = value;
}
constexpr int32_t& Mono::Globalization::Unicode::CodePointIndexer::__get_defaultIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultIndex;
}
constexpr int32_t const& Mono::Globalization::Unicode::CodePointIndexer::__get_defaultIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultIndex;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__set_defaultIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultIndex = value;
}
constexpr int32_t& Mono::Globalization::Unicode::CodePointIndexer::__get_defaultCP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultCP;
}
constexpr int32_t const& Mono::Globalization::Unicode::CodePointIndexer::__get_defaultCP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultCP;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__set_defaultCP(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultCP = value;
}
inline ::Mono::Globalization::Unicode::CodePointIndexer* Mono::Globalization::Unicode::CodePointIndexer::New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> starts,
                                                                                                                  ::ArrayW<int32_t, ::Array<int32_t>*> ends, int32_t defaultIndex, int32_t defaultCP) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Globalization::Unicode::CodePointIndexer*>(starts, ends, defaultIndex, defaultCP));
}
inline void Mono::Globalization::Unicode::CodePointIndexer::_ctor(::ArrayW<int32_t, ::Array<int32_t>*> starts, ::ArrayW<int32_t, ::Array<int32_t>*> ends, int32_t defaultIndex, int32_t defaultCP) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::CodePointIndexer*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, starts, ends, defaultIndex, defaultCP);
}
inline int32_t Mono::Globalization::Unicode::CodePointIndexer::ToIndex(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::CodePointIndexer*>::get(), "ToIndex", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cp);
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::CodePointIndexer::CodePointIndexer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
