#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\BranchLabel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__BranchLabel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeLabel_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchLabel.get_LabelIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::BranchLabel::*)()>(&::System::Linq::Expressions::Interpreter::BranchLabel::get_LabelIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8db84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { "get_LabelIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchLabel.set_LabelIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::BranchLabel::*)(int32_t)>(
    &::System::Linq::Expressions::Interpreter::BranchLabel::set_LabelIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8db8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { "set_LabelIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchLabel.get_HasRuntimeLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Linq::Expressions::Interpreter::BranchLabel::*)()>(
    &::System::Linq::Expressions::Interpreter::BranchLabel::get_HasRuntimeLabel)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f8db94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { "get_HasRuntimeLabel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchLabel.get_TargetIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::BranchLabel::*)()>(&::System::Linq::Expressions::Interpreter::BranchLabel::get_TargetIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8dba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { "get_TargetIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchLabel.ToRuntimeLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::RuntimeLabel (::System::Linq::Expressions::Interpreter::BranchLabel::*)()>(
    &::System::Linq::Expressions::Interpreter::BranchLabel::ToRuntimeLabel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f8dbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { "ToRuntimeLabel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchLabel.Mark
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::BranchLabel::*)(::System::Linq::Expressions::Interpreter::InstructionList*)>(
    &::System::Linq::Expressions::Interpreter::BranchLabel::Mark)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5f8dbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(),
                                                                                           { "Mark", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InstructionList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchLabel.AddBranch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::BranchLabel::*)(::System::Linq::Expressions::Interpreter::InstructionList*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::BranchLabel::AddBranch)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5f8dd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(),
                                                             { "AddBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchLabel.FixupBranch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::BranchLabel::*)(::System::Linq::Expressions::Interpreter::InstructionList*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::BranchLabel::FixupBranch)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f8dcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(),
                                                             { "FixupBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::BranchLabel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::BranchLabel::*)()>(&::System::Linq::Expressions::Interpreter::BranchLabel::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f8de54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_get__targetIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetIndex;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_get__targetIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetIndex;
}
constexpr void System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_set__targetIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetIndex = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_get__stackDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackDepth;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_get__stackDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackDepth;
}
constexpr void System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_set__stackDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stackDepth = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_get__continuationStackDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuationStackDepth;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_get__continuationStackDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuationStackDepth;
}
constexpr void System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_set__continuationStackDepth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____continuationStackDepth = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_get__forwardBranchFixups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forwardBranchFixups;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_get__forwardBranchFixups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forwardBranchFixups;
}
constexpr void System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_set__forwardBranchFixups(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forwardBranchFixups = value;
}
constexpr int32_t& System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_get__LabelIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LabelIndex_k__BackingField;
}
constexpr int32_t const& System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_get__LabelIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LabelIndex_k__BackingField;
}
constexpr void System::Linq::Expressions::Interpreter::BranchLabel::__cordl_internal_set__LabelIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LabelIndex_k__BackingField = value;
}
inline int32_t System::Linq::Expressions::Interpreter::BranchLabel::get_LabelIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { "get_LabelIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::BranchLabel::set_LabelIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { "set_LabelIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Linq::Expressions::Interpreter::BranchLabel::get_HasRuntimeLabel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { "get_HasRuntimeLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::BranchLabel::get_TargetIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { "get_TargetIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::RuntimeLabel System::Linq::Expressions::Interpreter::BranchLabel::ToRuntimeLabel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { "ToRuntimeLabel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::RuntimeLabel>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::BranchLabel::Mark(::System::Linq::Expressions::Interpreter::InstructionList* instructions) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(),
                                                                                         { "Mark", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InstructionList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instructions);
}
inline void System::Linq::Expressions::Interpreter::BranchLabel::AddBranch(::System::Linq::Expressions::Interpreter::InstructionList* instructions, int32_t branchIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(),
                                                           { "AddBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instructions, branchIndex);
}
inline void System::Linq::Expressions::Interpreter::BranchLabel::FixupBranch(::System::Linq::Expressions::Interpreter::InstructionList* instructions, int32_t branchIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(),
                                                           { "FixupBranch", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::InstructionList*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instructions, branchIndex);
}
inline void System::Linq::Expressions::Interpreter::BranchLabel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::BranchLabel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::BranchLabel* System::Linq::Expressions::Interpreter::BranchLabel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::BranchLabel*>());
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::BranchLabel::BranchLabel() {}
