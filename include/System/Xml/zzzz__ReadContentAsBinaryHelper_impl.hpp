#pragma once
// IWYU pragma private; include "System/Xml/ReadContentAsBinaryHelper.hpp"
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_def.hpp"
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::__ReadContentAsBinaryHelper__State::__ReadContentAsBinaryHelper__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::__ReadContentAsBinaryHelper__State::__ReadContentAsBinaryHelper__State() {}
constexpr ::System::Xml::__ReadContentAsBinaryHelper__State System::Xml::__ReadContentAsBinaryHelper__State::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::__ReadContentAsBinaryHelper__State System::Xml::__ReadContentAsBinaryHelper__State::InReadContent{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::__ReadContentAsBinaryHelper__State System::Xml::__ReadContentAsBinaryHelper__State::InReadElementContent{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.Finish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::Finish)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x42952ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "Finish",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::ReadContentAsBinaryHelper::*)()>(&::System::Xml::ReadContentAsBinaryHelper::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x42954c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::ReadContentAsBinaryHelper.MoveToNextContentNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::ReadContentAsBinaryHelper::*)(bool)>(
    &::System::Xml::ReadContentAsBinaryHelper::MoveToNextContentNode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x42953e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "MoveToNextContentNode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlReader*& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reader;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_reader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::__ReadContentAsBinaryHelper__State& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::System::Xml::__ReadContentAsBinaryHelper__State const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_state(::System::Xml::__ReadContentAsBinaryHelper__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr int32_t& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueOffset;
}
constexpr int32_t const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_valueOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueOffset;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_valueOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueOffset = value;
}
constexpr bool& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_isEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEnd;
}
constexpr bool const& System::Xml::ReadContentAsBinaryHelper::__cordl_internal_get_isEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isEnd;
}
constexpr void System::Xml::ReadContentAsBinaryHelper::__cordl_internal_set_isEnd(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isEnd = value;
}
inline void System::Xml::ReadContentAsBinaryHelper::Finish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "Finish",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::ReadContentAsBinaryHelper::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::ReadContentAsBinaryHelper::MoveToNextContentNode(bool moveIfOnContentNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::ReadContentAsBinaryHelper*>::get(), "MoveToNextContentNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, moveIfOnContentNode);
}
// Ctor Parameters []
constexpr ::System::Xml::ReadContentAsBinaryHelper::ReadContentAsBinaryHelper() {}
