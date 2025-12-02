#pragma once
// IWYU pragma private; include "System/Xml/ReaderPositionInfo.hpp"
#include "System/Xml/zzzz__PositionInfo_impl.hpp"
#include "System/Xml/zzzz__ReaderPositionInfo_def.hpp"
#include "System/Xml/zzzz__IXmlLineInfo_def.hpp"
//  Writing Method size for method: ::System::Xml::ReaderPositionInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::ReaderPositionInfo::*)(::System::Xml::IXmlLineInfo*)>(
    &::System::Xml::ReaderPositionInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60b16fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReaderPositionInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlLineInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReaderPositionInfo.HasLineInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::ReaderPositionInfo::*)()>(&::System::Xml::ReaderPositionInfo::HasLineInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x60b1708;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReaderPositionInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReaderPositionInfo*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReaderPositionInfo.get_LineNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::ReaderPositionInfo::*)()>(&::System::Xml::ReaderPositionInfo::get_LineNumber)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x60b17ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReaderPositionInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReaderPositionInfo*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReaderPositionInfo.get_LinePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::ReaderPositionInfo::*)()>(&::System::Xml::ReaderPositionInfo::get_LinePosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x60b1854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReaderPositionInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReaderPositionInfo*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::System::Xml::IXmlLineInfo*& System::Xml::ReaderPositionInfo::__cordl_internal_get_lineInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr ::System::Xml::IXmlLineInfo* const& System::Xml::ReaderPositionInfo::__cordl_internal_get_lineInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lineInfo;
}
constexpr void System::Xml::ReaderPositionInfo::__cordl_internal_set_lineInfo(::System::Xml::IXmlLineInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lineInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::ReaderPositionInfo::_ctor(::System::Xml::IXmlLineInfo* lineInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReaderPositionInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlLineInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lineInfo);
}
inline bool System::Xml::ReaderPositionInfo::HasLineInfo() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReaderPositionInfo*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Xml::ReaderPositionInfo::get_LineNumber() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReaderPositionInfo*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Xml::ReaderPositionInfo::get_LinePosition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReaderPositionInfo*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Xml::ReaderPositionInfo* System::Xml::ReaderPositionInfo::New_ctor(::System::Xml::IXmlLineInfo* lineInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::ReaderPositionInfo*>(lineInfo));
}
// Ctor Parameters []
constexpr ::System::Xml::ReaderPositionInfo::ReaderPositionInfo() {}
