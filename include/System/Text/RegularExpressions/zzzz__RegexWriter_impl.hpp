#pragma once
// IWYU pragma private; include "System\Text\RegularExpressions\RegexWriter.hpp"
#include "System/Collections/Generic/zzzz__ValueListBuilder_1_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexWriter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCode_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexNode_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexTree_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexWriter::*)(::System::Span_1<int32_t>, ::System::Span_1<int32_t>)>(
    &::System::Text::RegularExpressions::RegexWriter::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x63956b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Span_1<int32_t>>(), ::i2c::type_of<::System::Span_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexCode* (*)(::System::Text::RegularExpressions::RegexTree*)>(
    &::System::Text::RegularExpressions::RegexWriter::Write)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x63957d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "Write", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexTree*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexWriter.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexWriter::*)()>(&::System::Text::RegularExpressions::RegexWriter::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6395d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexWriter.RegexCodeFromRegexTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexCode* (
    ::System::Text::RegularExpressions::RegexWriter::*)(::System::Text::RegularExpressions::RegexTree*)>(&::System::Text::RegularExpressions::RegexWriter::RegexCodeFromRegexTree)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x63958c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(),
                                                                                           { "RegexCodeFromRegexTree", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexTree*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexWriter.PatchJump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexWriter::*)(int32_t, int32_t)>(&::System::Text::RegularExpressions::RegexWriter::PatchJump)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6396844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "PatchJump", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexWriter.Emit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexWriter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexWriter::Emit)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x63968b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "Emit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexWriter.Emit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexWriter::*)(int32_t, int32_t)>(&::System::Text::RegularExpressions::RegexWriter::Emit)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6395db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "Emit", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexWriter.Emit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexWriter::*)(int32_t, int32_t, int32_t)>(&::System::Text::RegularExpressions::RegexWriter::Emit)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6396984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(),
                                                                                           { "Emit", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexWriter.StringCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexWriter::*)(::StringW)>(&::System::Text::RegularExpressions::RegexWriter::StringCode)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6396b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "StringCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexWriter.MapCapnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Text::RegularExpressions::RegexWriter::*)(int32_t)>(&::System::Text::RegularExpressions::RegexWriter::MapCapnum)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6396c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "MapCapnum", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexWriter.EmitFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::RegexWriter::*)(int32_t, ::System::Text::RegularExpressions::RegexNode*, int32_t)>(
    &::System::Text::RegularExpressions::RegexWriter::EmitFragment)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x6395ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(),
                                                { "EmitFragment", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexNode*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Text::RegularExpressions::RegexWriter::_ctor(::System::Span_1<int32_t> emittedSpan, ::System::Span_1<int32_t> intStackSpan) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Span_1<int32_t>>(), ::i2c::type_of<::System::Span_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, emittedSpan, intStackSpan);
}
inline ::System::Text::RegularExpressions::RegexCode* System::Text::RegularExpressions::RegexWriter::Write(::System::Text::RegularExpressions::RegexTree* tree) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "Write", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexTree*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexCode*>(nullptr, ___internal_method, tree);
}
inline void System::Text::RegularExpressions::RegexWriter::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::System::Text::RegularExpressions::RegexCode* System::Text::RegularExpressions::RegexWriter::RegexCodeFromRegexTree(::System::Text::RegularExpressions::RegexTree* tree) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(),
                                                                                         { "RegexCodeFromRegexTree", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexTree*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexCode*>(*this, ___internal_method, tree);
}
inline void System::Text::RegularExpressions::RegexWriter::PatchJump(int32_t offset, int32_t jumpDest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "PatchJump", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, offset, jumpDest);
}
inline void System::Text::RegularExpressions::RegexWriter::Emit(int32_t op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "Emit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op);
}
inline void System::Text::RegularExpressions::RegexWriter::Emit(int32_t op, int32_t opd1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "Emit", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op, opd1);
}
inline void System::Text::RegularExpressions::RegexWriter::Emit(int32_t op, int32_t opd1, int32_t opd2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(),
                                                                                         { "Emit", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, op, opd1, opd2);
}
inline int32_t System::Text::RegularExpressions::RegexWriter::StringCode(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "StringCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, str);
}
inline int32_t System::Text::RegularExpressions::RegexWriter::MapCapnum(int32_t capnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(), { "MapCapnum", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, capnum);
}
inline void System::Text::RegularExpressions::RegexWriter::EmitFragment(int32_t nodetype, ::System::Text::RegularExpressions::RegexNode* node, int32_t curIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::RegexWriter>(),
                                              { "EmitFragment", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::RegularExpressions::RegexNode*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nodetype, node, curIndex);
}
// Ctor Parameters [CppParam { name: "_emitted", ty: "::System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_intStack", ty:
// "::System::Collections::Generic::ValueListBuilder_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stringHash", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_stringTable", ty:
// "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_caps", ty: "::System::Collections::Hashtable*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_trackCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Text::RegularExpressions::RegexWriter::RegexWriter(::System::Collections::Generic::ValueListBuilder_1<int32_t> _emitted,
                                                                       ::System::Collections::Generic::ValueListBuilder_1<int32_t> _intStack,
                                                                       ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _stringHash,
                                                                       ::System::Collections::Generic::List_1<::StringW>* _stringTable, ::System::Collections::Hashtable* _caps,
                                                                       int32_t _trackCount) noexcept {
  this->_emitted = _emitted;
  this->_intStack = _intStack;
  this->_stringHash = _stringHash;
  this->_stringTable = _stringTable;
  this->_caps = _caps;
  this->_trackCount = _trackCount;
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::RegexWriter::RegexWriter() {}
