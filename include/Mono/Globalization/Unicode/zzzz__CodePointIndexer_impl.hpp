#pragma once
// IWYU pragma private; include "Mono/Globalization/Unicode/CodePointIndexer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__CodePointIndexer_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::CodePointIndexer_TableRange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::CodePointIndexer_TableRange::*)(int32_t, int32_t, int32_t)>(
    &::Mono::Globalization::Unicode::CodePointIndexer_TableRange::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5901aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Mono::Globalization::Unicode::CodePointIndexer_TableRange::_ctor(int32_t start, int32_t end, int32_t indexStart) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, end, indexStart);
}
// Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "End", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexStart", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IndexEnd", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::Globalization::Unicode::CodePointIndexer_TableRange::CodePointIndexer_TableRange(int32_t Start, int32_t End, int32_t Count, int32_t IndexStart, int32_t IndexEnd) noexcept {
  this->Start = Start;
  this->End = End;
  this->Count = Count;
  this->IndexStart = IndexStart;
  this->IndexEnd = IndexEnd;
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::CodePointIndexer_TableRange::CodePointIndexer_TableRange() {}
//  Writing Method size for method: ::Mono::Globalization::Unicode::CodePointIndexer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::CodePointIndexer::*)(
    ::ArrayW<int32_t, ::Array<int32_t>*>, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, int32_t)>(&::Mono::Globalization::Unicode::CodePointIndexer::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5901964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::CodePointIndexer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::CodePointIndexer.ToIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::CodePointIndexer::*)(int32_t)>(
    &::Mono::Globalization::Unicode::CodePointIndexer::ToIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5901ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::CodePointIndexer*>::get(), "ToIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Mono::Globalization::Unicode::CodePointIndexer_TableRange, ::Array<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>*>&
Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_ranges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ranges;
}
constexpr ::ArrayW<::Mono::Globalization::Unicode::CodePointIndexer_TableRange, ::Array<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>*> const&
Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_ranges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ranges;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_set_ranges(
    ::ArrayW<::Mono::Globalization::Unicode::CodePointIndexer_TableRange, ::Array<::Mono::Globalization::Unicode::CodePointIndexer_TableRange>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ranges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_TotalCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalCount;
}
constexpr int32_t const& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_TotalCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalCount;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_set_TotalCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TotalCount = value;
}
constexpr int32_t& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_defaultIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultIndex;
}
constexpr int32_t const& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_defaultIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultIndex;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_set_defaultIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultIndex = value;
}
constexpr int32_t& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_defaultCP() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultCP;
}
constexpr int32_t const& Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_get_defaultCP() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultCP;
}
constexpr void Mono::Globalization::Unicode::CodePointIndexer::__cordl_internal_set_defaultCP(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultCP = value;
}
inline void Mono::Globalization::Unicode::CodePointIndexer::_ctor(::ArrayW<int32_t, ::Array<int32_t>*> starts, ::ArrayW<int32_t, ::Array<int32_t>*> ends, int32_t defaultIndex, int32_t defaultCP) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::CodePointIndexer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, starts, ends, defaultIndex, defaultCP);
}
inline int32_t Mono::Globalization::Unicode::CodePointIndexer::ToIndex(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::CodePointIndexer*>::get(), "ToIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cp);
}
inline ::Mono::Globalization::Unicode::CodePointIndexer* Mono::Globalization::Unicode::CodePointIndexer::New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> starts,
                                                                                                                  ::ArrayW<int32_t, ::Array<int32_t>*> ends, int32_t defaultIndex, int32_t defaultCP) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Globalization::Unicode::CodePointIndexer*>(starts, ends, defaultIndex, defaultCP));
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::CodePointIndexer::CodePointIndexer() {}
