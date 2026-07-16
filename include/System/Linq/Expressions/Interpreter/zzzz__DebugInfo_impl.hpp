#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DebugInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DebugInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DebugInfo_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer.System_Collections_Generic_IComparer_System_Linq_Expressions_Interpreter_DebugInfo__Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer::*)(::System::Linq::Expressions::Interpreter::DebugInfo*,
                                                                                                                                          ::System::Linq::Expressions::Interpreter::DebugInfo*)>(
    &::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer::System_Collections_Generic_IComparer_System_Linq_Expressions_Interpreter_DebugInfo__Compare)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f9bd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer*>(),
                                         { "System.Collections.Generic.IComparer<System.Linq.Expressions.Interpreter.DebugInfo>.Compare",
                                           {},
                                           { ::i2c::type_of<::System::Linq::Expressions::Interpreter::DebugInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::DebugInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer::*)()>(
    &::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f9bd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer::System_Collections_Generic_IComparer_System_Linq_Expressions_Interpreter_DebugInfo__Compare(
    ::System::Linq::Expressions::Interpreter::DebugInfo* d1, ::System::Linq::Expressions::Interpreter::DebugInfo* d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer*>(),
                                              { "System.Collections.Generic.IComparer<System.Linq.Expressions.Interpreter.DebugInfo>.Compare",
                                                {},
                                                { ::i2c::type_of<::System::Linq::Expressions::Interpreter::DebugInfo*>(), ::i2c::type_of<::System::Linq::Expressions::Interpreter::DebugInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, d1, d2);
}
inline void System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer* System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>"
constexpr System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer::operator ::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>"
constexpr ::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*
System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer::i___System__Collections__Generic__IComparer_1___System__Linq__Expressions__Interpreter__DebugInfo__() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer::DebugInfo_DebugInfoComparer() {}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DebugInfo.GetMatchingDebugInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::DebugInfo* (*)(::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*>, int32_t)>(
    &::System::Linq::Expressions::Interpreter::DebugInfo::GetMatchingDebugInfo)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f98494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugInfo*>(),
                                                { "GetMatchingDebugInfo", {}, { ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DebugInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::DebugInfo::*)()>(&::System::Linq::Expressions::Interpreter::DebugInfo::ToString)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5f9ba94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugInfo*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DebugInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::DebugInfo::*)()>(&::System::Linq::Expressions::Interpreter::DebugInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f9ba90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_get_StartLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartLine;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_get_StartLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StartLine;
}
constexpr void System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_set_StartLine(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StartLine = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_get_EndLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndLine;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_get_EndLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndLine;
}
constexpr void System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_set_EndLine(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EndLine = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_get_Index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_get_Index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Index;
}
constexpr void System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_set_Index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Index = value;
}
constexpr ::StringW& System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_get_FileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FileName;
}
constexpr ::StringW const& System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_get_FileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FileName;
}
constexpr void System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_set_FileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FileName = value;
}
constexpr bool& System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_get_IsClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsClear;
}
constexpr bool const& System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_get_IsClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsClear;
}
constexpr void System::Linq::Expressions::Interpreter::DebugInfo::__cordl_internal_set_IsClear(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsClear = value;
}
inline void System::Linq::Expressions::Interpreter::DebugInfo::setStaticF_s_debugComparer(::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer* value) {
  ::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer*, "s_debugComparer", ::System::Linq::Expressions::Interpreter::DebugInfo*>(
      std::forward<::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer*>(value));
}
inline ::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer* System::Linq::Expressions::Interpreter::DebugInfo::getStaticF_s_debugComparer() {
  return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::DebugInfo_DebugInfoComparer*, "s_debugComparer", ::System::Linq::Expressions::Interpreter::DebugInfo*>();
}
inline ::System::Linq::Expressions::Interpreter::DebugInfo*
System::Linq::Expressions::Interpreter::DebugInfo::GetMatchingDebugInfo(::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*> debugInfos, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugInfo*>(),
                                              { "GetMatchingDebugInfo", {}, { ::i2c::type_of<::ArrayW<::System::Linq::Expressions::Interpreter::DebugInfo*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::DebugInfo*>(nullptr, ___internal_method, debugInfos, index);
}
inline ::StringW System::Linq::Expressions::Interpreter::DebugInfo::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::DebugInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::DebugInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::DebugInfo* System::Linq::Expressions::Interpreter::DebugInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::DebugInfo*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::DebugInfo::DebugInfo() {}
